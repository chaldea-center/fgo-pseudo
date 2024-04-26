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

  if ( (byte_4350E79 & 1) == 0 )
  {
    this = (SubmarineMapManager_o *)sub_B70694(&Method_UnityEngine_GameObject_GetComponentsInChildren_UIWidget___);
    byte_4350E79 = 1;
  }
  if ( !go )
    goto LABEL_21;
  this = (SubmarineMapManager_o *)UnityEngine_GameObject__GetComponentsInChildren_changeVColor__30716516(
                                    go,
                                    (const MethodInfo_1D4B264 *)Method_UnityEngine_GameObject_GetComponentsInChildren_UIWidget___);
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
      this = (SubmarineMapManager_o *)UnityEngine_Mathf__Min_41127788(*(_DWORD *)(v10 + 168), v9, 0LL);
      mapInfo = (int)v7->fields.mapInfo;
      ++v8;
      v9 = (int)this;
      if ( v8 >= mapInfo )
        goto LABEL_12;
    }
LABEL_20:
    v15 = sub_B70798(this);
    sub_B70738(v15, 0LL);
  }
  v9 = 0x7FFFFFFF;
LABEL_12:
  if ( v9 != 0x7FFFFFFF )
  {
    this = (SubmarineMapManager_o *)UnityEngine_GameObject__GetComponentsInChildren_changeVColor__30716516(
                                      go,
                                      (const MethodInfo_1D4B264 *)Method_UnityEngine_GameObject_GetComponentsInChildren_UIWidget___);
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
    sub_B7076C(this, go);
  }
}


void __fastcall SubmarineMapManager__AdjustEachSpotsPositions(SubmarineMapManager_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_array *Children; // x0
  __int64 v4; // x1
  int max_length; // w8
  UnityEngine_GameObject_array *v6; // x20
  unsigned int v7; // w22
  UnityEngine_Object_o *Component_srcLineSprite; // x21
  const MethodInfo *v9; // x2
  __int64 v10; // x0

  if ( (byte_4350E76 & 1) == 0 )
  {
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_SrcSpotBasePrefab___);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_4350E76 = 1;
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
        v10 = sub_B70798(Children);
        sub_B70738(v10, 0LL);
      }
      Children = (UnityEngine_GameObject_array *)v6->m_Items[v7];
      if ( !Children )
        break;
      Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                          (UnityEngine_GameObject_o *)Children,
                                                          (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_SrcSpotBasePrefab___);
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
    sub_B7076C(Children, v4);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SubmarineMapManager__AdjustSilhouetteGimmicks(SubmarineMapManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v3; // x20
  UnityEngine_GameObject_o *Children; // x0
  __int64 v5; // x1
  int klass; // w8
  UnityEngine_GameObject_o *v7; // x21
  unsigned int v8; // w19
  UnityEngine_Object_o *Component_srcLineSprite; // x22
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v10; // x21
  int v11; // w8
  UnityEngine_GameObject_o *v12; // x22
  unsigned int v13; // w19
  UnityEngine_Object_o *v14; // x23
  _DWORD *monitor; // x8
  struct SubmarineMapDataManager_o *submarineData; // x8
  __int64 v17; // x23
  __int64 v18; // x0
  __int64 v19; // x1
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  System_Int32_array **parameters; // x1
  SubmarineSilhouetteData_o **v27; // x22
  __int64 v28; // x1
  SubmarineSilhouetteData_o *v29; // x0
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v30; // x24
  __int64 v31; // x0
  __int64 v32; // x1
  UnityEngine_Object_o *v33; // x23
  _BOOL8 v34; // x0
  __int64 v35; // x1
  __int64 v36; // x1
  const MethodInfo *v37; // x2
  SubmarineMapDataManager_o *v38; // x0
  System_Collections_Generic_IEnumerable_T__o *SilhouetteOccupiedPanels; // x24
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v40; // x22
  __int64 v41; // x0
  __int64 v42; // x1
  UnityEngine_Transform_o *transform; // x0
  __int64 v44; // x1
  float x; // s8
  float y; // s9
  __int64 v47; // x0
  __int64 v48; // x1
  int v49; // s0
  Il2CppObject *current; // x22
  __int64 v54; // x0
  __int64 v55; // x1
  float xMin; // s0
  float v57; // s4
  float xMax; // s0
  float v59; // s4
  float yMin; // s0
  float v61; // s4
  float yMax; // s0
  float v63; // s4
  int v64; // w23
  __int64 v65; // x1
  int v66; // w10
  UnityEngine_Transform_o *v67; // x22
  UnityEngine_Vector2_o v68; // x0
  UnityEngine_Vector2_o v69; // x1
  UnityEngine_Vector2_o center; // kr00_8
  int v71; // s2
  int v72; // w23
  __int64 v73; // x0
  int v74; // [xsp+14h] [xbp-DCh]
  _BYTE v75[32]; // [xsp+18h] [xbp-D8h] BYREF
  int v76; // [xsp+38h] [xbp-B8h]
  System_Collections_Generic_List_Enumerator_T__o v77; // [xsp+40h] [xbp-B0h] BYREF
  MethodInfo methoda; // [xsp+58h] [xbp-98h] BYREF
  UnityEngine_Vector2_o v79; // 0:s4.4,4:s5.4
  UnityEngine_Vector2_o v80; // 0:s6.4,4:s7.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Rect_o v82; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v83; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v84; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v85; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v86; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v87; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v88; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v89; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v90; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4350E78 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_Dictionary_int__MapGimmickComponent__TryGetValue__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_int__MapGimmickComponent___ctor__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_int__MapGimmickComponent__set_Item__);
    sub_B70694(&System_Collections_Generic_Dictionary_int__MapGimmickComponent__TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_SubmarineSilhouetteData__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_SubmarineSilhouetteData__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__get_Current__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_SubmarineSilhouetteData__get_Current__);
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_MapGimmickComponent___);
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_SrcSpotBasePrefab___);
    sub_B70694(&Method_System_Collections_Generic_List_SrcSpotBasePrefab__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_SrcSpotBasePrefab__Find__);
    sub_B70694(&Method_System_Collections_Generic_List_SubmarineMapPanelData__GetEnumerator__);
    sub_B70694(&Method_System_Collections_Generic_List_SubmarineSilhouetteData__GetEnumerator__);
    sub_B70694(&Method_System_Collections_Generic_List_SrcSpotBasePrefab___ctor__);
    sub_B70694(&Method_System_Collections_Generic_List_SubmarineMapPanelData___ctor___69174856);
    sub_B70694(&System_Collections_Generic_List_SubmarineMapPanelData__TypeInfo);
    sub_B70694(&System_Collections_Generic_List_SrcSpotBasePrefab__TypeInfo);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&Method_System_Predicate_SrcSpotBasePrefab___ctor__);
    sub_B70694(&System_Predicate_SrcSpotBasePrefab__TypeInfo);
    sub_B70694(&Method_SubmarineMapManager___c__DisplayClass60_0__AdjustSilhouetteGimmicks_b__0__);
    sub_B70694(&SubmarineMapManager___c__DisplayClass60_0_TypeInfo);
    byte_4350E78 = 1;
  }
  memset(&methoda, 0, 48);
  memset(&v77, 0, sizeof(v77));
  v76 = 0;
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_SrcSpotBasePrefab__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_SrcSpotBasePrefab___ctor__);
  Children = (UnityEngine_GameObject_o *)GameObjectExtensions__GetChildren(this->fields.rootSpotP, 0, 0LL);
  if ( !Children )
    goto LABEL_63;
  klass = (int)Children[1].klass;
  v7 = Children;
  if ( klass >= 1 )
  {
    v8 = 0;
    while ( v8 < klass )
    {
      Children = (UnityEngine_GameObject_o *)*((_QWORD *)&v7[1].monitor + (int)v8);
      if ( !Children )
        goto LABEL_63;
      Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                          Children,
                                                          (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_SrcSpotBasePrefab___);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      Children = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(Component_srcLineSprite, 0LL, 0LL);
      if ( ((unsigned __int8)Children & 1) != 0 )
      {
        if ( !v3 )
          goto LABEL_63;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v3,
          (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite,
          (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_SrcSpotBasePrefab__Add__);
      }
      klass = (int)v7[1].klass;
      if ( (int)++v8 >= klass )
        goto LABEL_15;
    }
LABEL_64:
    v73 = sub_B70798(Children);
    sub_B70738(v73, 0LL);
  }
LABEL_15:
  v10 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B70764(System_Collections_Generic_Dictionary_int__MapGimmickComponent__TypeInfo);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v10,
    (const MethodInfo_2FC59B4 *)Method_System_Collections_Generic_Dictionary_int__MapGimmickComponent___ctor__);
  Children = (UnityEngine_GameObject_o *)GameObjectExtensions__GetChildren(this->fields.rootGimmickP, 0, 0LL);
  if ( !Children )
    goto LABEL_63;
  v11 = (int)Children[1].klass;
  v12 = Children;
  if ( v11 >= 1 )
  {
    v13 = 0;
    while ( v13 < v11 )
    {
      Children = (UnityEngine_GameObject_o *)*((_QWORD *)&v12[1].monitor + (int)v13);
      if ( !Children )
        goto LABEL_63;
      v14 = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                      Children,
                                      (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_MapGimmickComponent___);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      Children = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(v14, 0LL, 0LL);
      if ( ((unsigned __int8)Children & 1) == 0 )
      {
        if ( !v14 )
          goto LABEL_63;
        monitor = v14[4].monitor;
        if ( !monitor || !v10 )
          goto LABEL_63;
        System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___set_Item(
          (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)v10,
          monitor[5],
          (WarBoardAIRoute_RouteData_o *)v14,
          (const MethodInfo_2FC6540 *)Method_System_Collections_Generic_Dictionary_int__MapGimmickComponent__set_Item__);
      }
      v11 = (int)v12[1].klass;
      if ( (int)++v13 >= v11 )
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
    sub_B7076C(Children, v5);
  }
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)v75,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)Children,
    (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_SubmarineSilhouetteData__GetEnumerator__);
  v74 = 0;
  methoda.parameters = *(const void **)&v75[16];
  *(_OWORD *)&methoda.klass = *(_OWORD *)v75;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            (System_Collections_Generic_List_Enumerator_T__o *)&methoda.klass,
            (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_SubmarineSilhouetteData__MoveNext__) )
  {
    v17 = sub_B70764(SubmarineMapManager___c__DisplayClass60_0_TypeInfo);
    SubmarineMapManager___c__DisplayClass60_0___ctor((SubmarineMapManager___c__DisplayClass60_0_o *)v17, 0LL);
    if ( !v17 )
      sub_B7076C(v18, v19);
    parameters = (System_Int32_array **)methoda.parameters;
    *(_QWORD *)(v17 + 16) = methoda.parameters;
    v27 = (SubmarineSilhouetteData_o **)(v17 + 16);
    sub_B70630((BattleServantConfConponent_o *)(v17 + 16), parameters, v20, v21, v22, v23, v24, v25);
    v29 = *(SubmarineSilhouetteData_o **)(v17 + 16);
    if ( !v29 )
      sub_B7076C(0LL, v28);
    if ( SubmarineSilhouetteData__get_IsOnPanel(v29, 0LL) )
    {
      v30 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B70764(System_Predicate_SrcSpotBasePrefab__TypeInfo);
      System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
        v30,
        (Il2CppObject *)v17,
        Method_SubmarineMapManager___c__DisplayClass60_0__AdjustSilhouetteGimmicks_b__0__,
        (const MethodInfo_2BF23B8 *)Method_System_Predicate_SrcSpotBasePrefab___ctor__);
      if ( !v3 )
        sub_B7076C(v31, v32);
      v33 = (UnityEngine_Object_o *)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                                      (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)v3,
                                      (System_Predicate_T__o *)v30,
                                      (const MethodInfo_3025F48 *)Method_System_Collections_Generic_List_SrcSpotBasePrefab__Find__);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v34 = UnityEngine_Object__op_Equality(v33, 0LL, 0LL);
      if ( !v34 )
      {
        if ( !*v27 )
          sub_B7076C(v34, v35);
        if ( !v10 )
          sub_B7076C(v34, v35);
        if ( System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___TryGetValue(
               (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)v10,
               (*v27)->fields._ObjectId_k__BackingField,
               (WarBoardEvalValueSquare_CalcEval_o **)&methoda.name,
               (const MethodInfo_2FC828C *)Method_System_Collections_Generic_Dictionary_int__MapGimmickComponent__TryGetValue__) )
        {
          v38 = this->fields.submarineData;
          if ( !v38 )
            sub_B7076C(0LL, v36);
          SilhouetteOccupiedPanels = (System_Collections_Generic_IEnumerable_T__o *)SubmarineMapDataManager__GetSilhouetteOccupiedPanels(
                                                                                      v38,
                                                                                      *v27,
                                                                                      v37);
          v40 = (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)sub_B70764(System_Collections_Generic_List_SubmarineMapPanelData__TypeInfo);
          System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
            v40,
            SilhouetteOccupiedPanels,
            (const MethodInfo_3024BBC *)Method_System_Collections_Generic_List_SubmarineMapPanelData___ctor___69174856);
          if ( !v33 )
            sub_B7076C(v41, v42);
          transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v33, 0LL);
          if ( !transform )
            sub_B7076C(0LL, v44);
          localPosition = UnityEngine_Transform__get_localPosition(transform, 0LL);
          x = localPosition.fields.x;
          y = localPosition.fields.y;
          *(UnityEngine_Vector3_o *)&v82.fields.m_XMin = UnityEngine_Vector3__get_zero(0LL);
          v82.fields.m_Width = v82.fields.m_XMin;
          v82.fields.m_Height = v82.fields.m_YMin;
          v82.fields.m_XMin = x;
          v82.fields.m_YMin = y;
          UnityEngine_Rect___ctor_36101988(v82, v79, v80, &methoda);
          if ( !v40 )
            sub_B7076C(v47, v48);
          System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
            (System_Collections_Generic_List_Enumerator_T__o *)v75,
            (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v40,
            (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_SubmarineMapPanelData__GetEnumerator__);
          v77 = *(System_Collections_Generic_List_Enumerator_T__o *)v75;
          while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                    &v77,
                    (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__MoveNext__) )
          {
            current = v77.fields.current;
            xMin = UnityEngine_Rect__get_xMin(*(UnityEngine_Rect_o *)&v49, &methoda);
            if ( !current )
              sub_B7076C(v54, v55);
            v83.fields.m_XMin = UnityEngine_Mathf__Min(xMin, *((float *)&current[1].monitor + 1), 0LL);
            UnityEngine_Rect__set_xMin(v83, v57, &methoda);
            xMax = UnityEngine_Rect__get_xMax(v84, &methoda);
            v85.fields.m_XMin = UnityEngine_Mathf__Max(xMax, *((float *)&current[1].monitor + 1), 0LL);
            UnityEngine_Rect__set_xMax(v85, v59, &methoda);
            yMin = UnityEngine_Rect__get_yMin(v86, &methoda);
            v87.fields.m_XMin = UnityEngine_Mathf__Min(yMin, *(float *)&current[2].klass, 0LL);
            UnityEngine_Rect__set_yMin(v87, v61, &methoda);
            yMax = UnityEngine_Rect__get_yMax(v88, &methoda);
            v89.fields.m_XMin = UnityEngine_Mathf__Max(yMax, *(float *)&current[2].klass, 0LL);
            UnityEngine_Rect__set_yMax(v89, v63, &methoda);
          }
          *(_DWORD *)&v75[4 * v74 + 24] = 492;
          v64 = ++v76;
          System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
            &v77,
            (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__Dispose__);
          v66 = v64;
          if ( v64 && *(_DWORD *)&v75[4 * v64 + 20] == 492 )
          {
            v66 = v64 - 1;
            v76 = v64 - 1;
          }
          v74 = v66;
          if ( !methoda.name )
            sub_B7076C(0LL, v65);
          v67 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)methoda.name, 0LL);
          center = UnityEngine_Rect__get_center(v90, &methoda);
          if ( !v67 )
            ((void (__fastcall __noreturn *)(_QWORD, _QWORD))sub_B7076C)(v68, v69);
          v71 = 0;
          UnityEngine_Transform__set_localPosition(v67, *(UnityEngine_Vector3_o *)&center.fields.x, 0LL);
        }
      }
    }
  }
  *(_DWORD *)&v75[4 * v74 + 24] = 544;
  v72 = ++v76;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    (System_Collections_Generic_List_Enumerator_T__o *)&methoda.klass,
    (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_SubmarineSilhouetteData__Dispose__);
  if ( v72 && *(_DWORD *)&v75[4 * v72 + 20] == 544 )
    v76 = v72 - 1;
}


void __fastcall SubmarineMapManager__AdjustSpotCollider(
        SubmarineMapManager_o *this,
        SrcSpotBasePrefab_o *spot,
        const MethodInfo *method)
{
  SubmarineMapManager_o *v4; // x20
  struct SubmarineMapDataManager_o *submarineData; // x8
  struct SubmarineSettingsManager_o *Settings_k__BackingField; // x8
  const MethodInfo_243BBB0 *v7; // x2
  System_Nullable_Vector3__o centerPosition; // [xsp+0h] [xbp-40h] BYREF
  System_Nullable_Vector2__o v9; // [xsp+10h] [xbp-30h] BYREF
  System_Nullable_Vector2__o v10; // 0:x0.12
  System_Nullable_Vector3__o v11; // 0:x0.16
  UnityEngine_Vector2_o PanelUnitSize_k__BackingField; // 0:s0.4,4:s1.4
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4

  v4 = this;
  if ( (byte_4350E75 & 1) == 0 )
  {
    sub_B70694(&Method_System_Nullable_Vector2___ctor__);
    this = (SubmarineMapManager_o *)sub_B70694(&Method_System_Nullable_Vector3___ctor__);
    byte_4350E75 = 1;
  }
  submarineData = v4->fields.submarineData;
  if ( !submarineData )
    goto LABEL_7;
  Settings_k__BackingField = submarineData->fields._Settings_k__BackingField;
  if ( !Settings_k__BackingField )
    goto LABEL_7;
  PanelUnitSize_k__BackingField = Settings_k__BackingField->fields._PanelUnitSize_k__BackingField;
  v10.fields.value = (struct UnityEngine_Vector2_o)&v9;
  *(_DWORD *)&v9.fields.has_value = 0;
  v9.fields.value = 0LL;
  *(_DWORD *)&v10.fields.has_value = Method_System_Nullable_Vector2___ctor__;
  System_Nullable_Vector2____ctor(v10, PanelUnitSize_k__BackingField, (const MethodInfo_243B7C8 *)method);
  zero = UnityEngine_Vector3__get_zero(0LL);
  *(_QWORD *)&v11.fields.value.fields.x = &centerPosition;
  *(_QWORD *)&centerPosition.fields.value.fields.x = 0LL;
  *(_QWORD *)&centerPosition.fields.value.fields.z = 0LL;
  *(_QWORD *)&v11.fields.value.fields.z = Method_System_Nullable_Vector3___ctor__;
  System_Nullable_Vector3____ctor(v11, zero, v7);
  if ( !spot )
LABEL_7:
    sub_B7076C(this, spot);
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
    sub_B7076C(this, spot);
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
  clsQuestCheck_o *v3; // x20
  const MethodInfo *v4; // x1
  QuestReleaseMaster_o *eventId; // x0
  __int64 v6; // x1
  QuestReleaseMaster_o *v7; // x20
  CommonUI_o *v8; // x19
  int32_t list; // w20
  SubmarineMapManager___c_c *v10; // x0
  struct SubmarineMapManager___c_StaticFields *static_fields; // x8
  System_Action_o *_9__50_0; // x22
  System_String_o *v13; // x21
  Il2CppObject *v14; // x23
  struct SubmarineMapManager___c_StaticFields *v15; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  __int64 v22; // x0
  System_Nullable_float__o messagePosY; // [xsp+8h] [xbp-38h] BYREF
  System_Nullable_float__o p_messagePosY; // 0:x0.8
  System_Nullable_float__o v25; // 0:x5.8

  if ( (byte_4350E70 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_DataManager_GetMaster_QuestReleaseMaster___);
    sub_B70694(&DataManager_TypeInfo);
    sub_B70694(&Method_System_Nullable_float___ctor__);
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B70694(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    sub_B70694(&SingletonTemplate_clsQuestCheck__TypeInfo);
    sub_B70694(&Method_SubmarineMapManager___c__CheckNewPlayableEventQuest_b__50_0__);
    sub_B70694(&SubmarineMapManager___c_TypeInfo);
    sub_B70694(&StringLiteral_6955/*"GET_EVENT_POINT_AFTER_DIALOG_MESSAGE_PANEL_MAP"*/);
    byte_4350E70 = 1;
  }
  if ( (BYTE3(SingletonTemplate_clsQuestCheck__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_clsQuestCheck__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_clsQuestCheck__TypeInfo);
  }
  v3 = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2CE9CB0 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  eventId = (QuestReleaseMaster_o *)SubmarineMapManager__get_eventId(this, v4);
  if ( !v3 )
    goto LABEL_27;
  eventId = (QuestReleaseMaster_o *)clsQuestCheck__GetNewPlayableEventQuestId(v3, (int32_t)eventId, 0LL);
  if ( !eventId )
    goto LABEL_27;
  v7 = eventId;
  if ( !eventId->fields._MasterName_k__BackingField )
    return;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  eventId = (QuestReleaseMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_QuestReleaseMaster___);
  if ( !LODWORD(v7->fields._MasterName_k__BackingField) )
    goto LABEL_28;
  if ( !eventId )
    goto LABEL_27;
  if ( !QuestReleaseMaster__IsContainCondType(eventId, (int32_t)v7->fields.list, 143, 0LL) )
    return;
  eventId = (QuestReleaseMaster_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !LODWORD(v7->fields._MasterName_k__BackingField) )
  {
LABEL_28:
    v22 = sub_B70798(eventId);
    sub_B70738(v22, 0LL);
  }
  v8 = (CommonUI_o *)eventId;
  list = (int32_t)v7->fields.list;
  v10 = SubmarineMapManager___c_TypeInfo;
  if ( (BYTE3(SubmarineMapManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SubmarineMapManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SubmarineMapManager___c_TypeInfo);
    v10 = SubmarineMapManager___c_TypeInfo;
  }
  static_fields = v10->static_fields;
  _9__50_0 = static_fields->__9__50_0;
  v13 = (System_String_o *)StringLiteral_6955/*"GET_EVENT_POINT_AFTER_DIALOG_MESSAGE_PANEL_MAP"*/;
  if ( !_9__50_0 )
  {
    if ( (BYTE3(v10->vtable._0_Equals.methodPtr) & 4) != 0 && !v10->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v10);
      static_fields = SubmarineMapManager___c_TypeInfo->static_fields;
    }
    v14 = (Il2CppObject *)static_fields->__9;
    _9__50_0 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
    System_Action___ctor(_9__50_0, v14, Method_SubmarineMapManager___c__CheckNewPlayableEventQuest_b__50_0__, 0LL);
    v15 = SubmarineMapManager___c_TypeInfo->static_fields;
    v15->__9__50_0 = _9__50_0;
    sub_B70630(
      (BattleServantConfConponent_o *)&v15->__9__50_0,
      (System_Int32_array **)_9__50_0,
      v16,
      v17,
      v18,
      v19,
      v20,
      v21);
  }
  p_messagePosY = (System_Nullable_float__o)&messagePosY;
  messagePosY = 0LL;
  System_Nullable_float____ctor(p_messagePosY, 30.0, (const MethodInfo_2439C24 *)Method_System_Nullable_float___ctor__);
  if ( !v8 )
LABEL_27:
    sub_B7076C(eventId, v6);
  v25 = messagePosY;
  CommonUI__OpenQuestNewPlayableDialog(v8, list, v13, _9__50_0, 0, v25, 0LL);
}


void __fastcall SubmarineMapManager__ClickPanel(
        SubmarineMapManager_o *this,
        SubmarineMapPanelData_o *panelData,
        const MethodInfo *method)
{
  __int64 v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
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
  System_Delegate_o *v30; // x23
  SchedulerTaskBase_TaskCallback_o *v31; // x24
  System_Int32_array **v32; // x0
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  TaskScheduler_o *taskScheduler; // x19
  __int64 v40; // x20
  __int64 v41; // x0
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  __int64 v48; // x0
  __int64 v49; // x0
  SubmarineMapPanelData_o *v50; // x0
  const MethodInfo *v51; // x1

  if ( (byte_4350E66 & 1) == 0 )
  {
    sub_B70694(&SchedulerTaskBase___TypeInfo);
    sub_B70694(&SchedulerTaskWaitTime_TypeInfo);
    sub_B70694(&Method_SubmarineMapManager_ClickPanel__);
    sub_B70694(&SchedulerTaskBase_TaskCallback_TypeInfo);
    sub_B70694(&Method_SubmarineMapManager___c__DisplayClass36_0__ClickPanel_b__0__);
    sub_B70694(&SubmarineMapManager___c__DisplayClass36_0_TypeInfo);
    byte_4350E66 = 1;
  }
  v5 = sub_B70764(SubmarineMapManager___c__DisplayClass36_0_TypeInfo);
  SubmarineMapManager___c__DisplayClass36_0___ctor((SubmarineMapManager___c__DisplayClass36_0_o *)v5, 0LL);
  if ( !v5 )
    goto LABEL_25;
  *(_QWORD *)(v5 + 16) = this;
  sub_B70630((BattleServantConfConponent_o *)(v5 + 16), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = panelData;
  sub_B70630((BattleServantConfConponent_o *)(v5 + 24), (System_Int32_array **)panelData, v14, v15, v16, v17, v18, v19);
  v21 = *(SubmarineMapPanelData_o **)(v5 + 24);
  if ( !v21 || !this->fields.isEnableClickPanel )
    return;
  if ( !v21->fields._IsOpened_k__BackingField || !v21->fields._HasEnemyParts_k__BackingField )
  {
    if ( !v21->fields._IsScannable_k__BackingField )
      return;
    SubmarineMapManager__ShowSelectedPanelEffect(this, v21, v20);
    v24 = Method_SubmarineMapManager_ClickPanel__;
    if ( (*((_BYTE *)Method_SubmarineMapManager_ClickPanel__ + 75) & 2) != 0 )
      v24 = (_QWORD *)sub_B7069C(Method_SubmarineMapManager_ClickPanel__);
    v25 = (System_Reflection_MethodBase_o *)sub_B70678(v24, v24[3]);
    OverwriteAssetSoundName__PlaySystemSe(v25, 0, 0LL);
    submarineData = this->fields.submarineData;
    if ( submarineData )
    {
      Settings_k__BackingField = submarineData->fields._Settings_k__BackingField;
      if ( Settings_k__BackingField )
      {
        PanelSelectDelaySecond_k__BackingField = Settings_k__BackingField->fields._PanelSelectDelaySecond_k__BackingField;
        v29 = sub_B70764(SchedulerTaskWaitTime_TypeInfo);
        SchedulerTaskWaitTime___ctor((SchedulerTaskWaitTime_o *)v29, PanelSelectDelaySecond_k__BackingField, 0LL);
        if ( v29 )
        {
          v30 = *(System_Delegate_o **)(v29 + 32);
          v31 = (SchedulerTaskBase_TaskCallback_o *)sub_B70764(SchedulerTaskBase_TaskCallback_TypeInfo);
          SchedulerTaskBase_TaskCallback___ctor(
            v31,
            (Il2CppObject *)v5,
            Method_SubmarineMapManager___c__DisplayClass36_0__ClickPanel_b__0__,
            0LL);
          v32 = (System_Int32_array **)System_Delegate__Combine(v30, (System_Delegate_o *)v31, 0LL);
          if ( v32 && *v32 != (System_Int32_array *)SchedulerTaskBase_TaskCallback_TypeInfo )
          {
            v50 = (SubmarineMapPanelData_o *)sub_B70A60(v32);
            SubmarineMapPanelData__get_IsEnemyVisible(v50, v51);
            return;
          }
          *(_QWORD *)(v29 + 32) = v32;
          sub_B70630((BattleServantConfConponent_o *)(v29 + 32), v32, v33, v34, v35, v36, v37, v38);
          taskScheduler = this->fields.taskScheduler;
          v6 = sub_B706AC(SchedulerTaskBase___TypeInfo, 1LL);
          if ( v6 )
          {
            v40 = v6;
            v41 = sub_B70754(v29, *(_QWORD *)(*(_QWORD *)v6 + 64LL));
            if ( !v41 )
            {
              v48 = sub_B7078C(0LL);
              sub_B70738(v48, 0LL);
            }
            if ( !*(_DWORD *)(v40 + 24) )
            {
              v49 = sub_B70798(v41);
              sub_B70738(v49, 0LL);
            }
            *(_QWORD *)(v40 + 32) = v29;
            sub_B70630(
              (BattleServantConfConponent_o *)(v40 + 32),
              (System_Int32_array **)v29,
              v42,
              v43,
              v44,
              v45,
              v46,
              v47);
            if ( taskScheduler )
            {
              TaskScheduler__AddTask(taskScheduler, 0, (SchedulerTaskBase_array *)v40, 0LL);
              return;
            }
          }
        }
      }
    }
LABEL_25:
    sub_B7076C(v6, v7);
  }
  v22 = Method_SubmarineMapManager_ClickPanel__;
  if ( (*((_BYTE *)Method_SubmarineMapManager_ClickPanel__ + 75) & 2) != 0 )
    v22 = (_QWORD *)sub_B7069C(Method_SubmarineMapManager_ClickPanel__);
  v23 = (System_Reflection_MethodBase_o *)sub_B70678(v22, v22[3]);
  OverwriteAssetSoundName__PlaySystemSe(v23, 2, 0LL);
}


System_Collections_IEnumerator_o *__fastcall SubmarineMapManager__CoInitRequest(
        SubmarineMapManager_o *this,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7

  if ( (byte_4350E5D & 1) == 0 )
  {
    sub_B70694(&SubmarineMapManager__CoInitRequest_d__21_TypeInfo);
    byte_4350E5D = 1;
  }
  v5 = sub_B70764(SubmarineMapManager__CoInitRequest_d__21_TypeInfo);
  SubmarineMapManager__CoInitRequest_d__21___ctor((SubmarineMapManager__CoInitRequest_d__21_o *)v5, 0, 0LL);
  if ( !v5 )
    sub_B7076C(v6, v7);
  *(_QWORD *)(v5 + 32) = this;
  sub_B70630((BattleServantConfConponent_o *)(v5 + 32), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 40) = finishCallback;
  sub_B70630(
    (BattleServantConfConponent_o *)(v5 + 40),
    (System_Int32_array **)finishCallback,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
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
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7

  if ( (byte_4350E5E & 1) == 0 )
  {
    sub_B70694(&SubmarineMapManager__CoOnAfterSpotCreated_d__24_TypeInfo);
    byte_4350E5E = 1;
  }
  v5 = sub_B70764(SubmarineMapManager__CoOnAfterSpotCreated_d__24_TypeInfo);
  SubmarineMapManager__CoOnAfterSpotCreated_d__24___ctor(
    (SubmarineMapManager__CoOnAfterSpotCreated_d__24_o *)v5,
    0,
    0LL);
  if ( !v5 )
    sub_B7076C(v6, v7);
  *(_QWORD *)(v5 + 32) = this;
  sub_B70630((BattleServantConfConponent_o *)(v5 + 32), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 40) = finishCallback;
  sub_B70630(
    (BattleServantConfConponent_o *)(v5 + 40),
    (System_Int32_array **)finishCallback,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  return (System_Collections_IEnumerator_o *)v5;
}


void __fastcall SubmarineMapManager__ConstructOnPartOfDialog(SubmarineMapManager_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *scanConfirmDialog; // x21
  UnityEngine_UI_Dropdown_DropdownItem_o *v4; // x0
  __int64 v5; // x1
  struct SubmarineMapAssetManager_o *assetManager; // x8
  UnityEngine_UI_Dropdown_DropdownItem_o *ScanConfirmDialogPrefab_k__BackingField; // x21
  struct SubmarineScanConfirmDialog_o *Component_srcLineSprite; // x0
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  UnityEngine_Object_o *selectScannerDialog; // x21
  struct SubmarineMapAssetManager_o *v16; // x8
  UnityEngine_UI_Dropdown_DropdownItem_o *SelectScannerDialogPrefab_k__BackingField; // x21
  struct SubmarineSelectScannerDialog_o *v18; // x0
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  UnityEngine_Object_o *newScannerDialog; // x21
  struct SubmarineMapAssetManager_o *v26; // x8
  UnityEngine_UI_Dropdown_DropdownItem_o *NewScannerDialogPrefab_k__BackingField; // x21
  struct SubmarineNewScannerDialog_o *v28; // x0
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7

  if ( (byte_4350E7A & 1) == 0 )
  {
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_SubmarineNewScannerDialog___);
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_SubmarineScanConfirmDialog___);
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_SubmarineSelectScannerDialog___);
    sub_B70694(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_4350E7A = 1;
  }
  scanConfirmDialog = (UnityEngine_Object_o *)this->fields.scanConfirmDialog;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v4 = (UnityEngine_UI_Dropdown_DropdownItem_o *)UnityEngine_Object__op_Equality(scanConfirmDialog, 0LL, 0LL);
  if ( ((unsigned __int8)v4 & 1) != 0 )
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
    v4 = UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
           ScanConfirmDialogPrefab_k__BackingField,
           (const MethodInfo_1D58764 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !v4 )
      goto LABEL_34;
    Component_srcLineSprite = (struct SubmarineScanConfirmDialog_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                       (UnityEngine_GameObject_o *)v4,
                                                                       (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_SubmarineScanConfirmDialog___);
    this->fields.scanConfirmDialog = Component_srcLineSprite;
    sub_B70630(
      (BattleServantConfConponent_o *)&this->fields.scanConfirmDialog,
      (System_Int32_array **)Component_srcLineSprite,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14);
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
  v4 = (UnityEngine_UI_Dropdown_DropdownItem_o *)UnityEngine_Object__op_Equality(selectScannerDialog, 0LL, 0LL);
  if ( ((unsigned __int8)v4 & 1) != 0 )
  {
    v16 = this->fields.assetManager;
    if ( !v16 )
      goto LABEL_34;
    SelectScannerDialogPrefab_k__BackingField = (UnityEngine_UI_Dropdown_DropdownItem_o *)v16->fields._SelectScannerDialogPrefab_k__BackingField;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v4 = UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
           SelectScannerDialogPrefab_k__BackingField,
           (const MethodInfo_1D58764 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !v4 )
      goto LABEL_34;
    v18 = (struct SubmarineSelectScannerDialog_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                     (UnityEngine_GameObject_o *)v4,
                                                     (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_SubmarineSelectScannerDialog___);
    this->fields.selectScannerDialog = v18;
    sub_B70630(
      (BattleServantConfConponent_o *)&this->fields.selectScannerDialog,
      (System_Int32_array **)v18,
      v19,
      v20,
      v21,
      v22,
      v23,
      v24);
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
  v4 = (UnityEngine_UI_Dropdown_DropdownItem_o *)UnityEngine_Object__op_Equality(newScannerDialog, 0LL, 0LL);
  if ( ((unsigned __int8)v4 & 1) != 0 )
  {
    v26 = this->fields.assetManager;
    if ( v26 )
    {
      NewScannerDialogPrefab_k__BackingField = (UnityEngine_UI_Dropdown_DropdownItem_o *)v26->fields._NewScannerDialogPrefab_k__BackingField;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v4 = UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
             NewScannerDialogPrefab_k__BackingField,
             (const MethodInfo_1D58764 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( v4 )
      {
        v28 = (struct SubmarineNewScannerDialog_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      (UnityEngine_GameObject_o *)v4,
                                                      (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_SubmarineNewScannerDialog___);
        this->fields.newScannerDialog = v28;
        sub_B70630(
          (BattleServantConfConponent_o *)&this->fields.newScannerDialog,
          (System_Int32_array **)v28,
          v29,
          v30,
          v31,
          v32,
          v33,
          v34);
        EventMapManagerBase__LocateDialogToUiRoot(
          (EventMapManagerBase_o *)this,
          (BaseDialog_o *)this->fields.newScannerDialog,
          0LL);
        return;
      }
    }
LABEL_34:
    sub_B7076C(v4, v5);
  }
}


void __fastcall SubmarineMapManager__CreateAssetManagerIfNotExists(
        SubmarineMapManager_o *this,
        const MethodInfo *method)
{
  BattleServantConfConponent_o *p_assetManager; // x19
  struct SubmarineMapAssetManager_o *assetManager; // t1
  SubmarineMapAssetManager_o *v5; // x20
  const MethodInfo *v6; // x1
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  const MethodInfo *v13; // x1

  if ( (byte_4350E63 & 1) == 0 )
  {
    sub_B70694(&SubmarineMapAssetManager_TypeInfo);
    byte_4350E63 = 1;
  }
  assetManager = this->fields.assetManager;
  p_assetManager = (BattleServantConfConponent_o *)&this->fields.assetManager;
  if ( !assetManager )
  {
    v5 = (SubmarineMapAssetManager_o *)sub_B70764(SubmarineMapAssetManager_TypeInfo);
    SubmarineMapAssetManager___ctor(v5, v6);
    p_assetManager->klass = (BattleServantConfConponent_c *)v5;
    sub_B70630(p_assetManager, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
    if ( !p_assetManager->klass )
      sub_B7076C(0LL, v13);
    SubmarineMapAssetManager__Initialize((SubmarineMapAssetManager_o *)p_assetManager->klass, v13);
  }
}


void __fastcall SubmarineMapManager__CreateContainers(SubmarineMapManager_o *this, const MethodInfo *method)
{
  SubmarineMapManager_o *v2; // x19
  struct SubmarineMapAssetManager_o *assetManager; // x8
  struct ScrTerminalMap_o *terminalMap; // x9
  UILabel_o *PanelContainerPrefab_k__BackingField; // x20
  UnityEngine_Transform_o *transform; // x21
  System_Int32_array **v7; // x0
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  struct SubmarineMapAssetManager_o *v14; // x8
  struct ScrTerminalMap_o *v15; // x9
  UILabel_o *EffectContainerPrefab_k__BackingField; // x20
  UnityEngine_Transform_o *v17; // x0
  System_Int32_array **v18; // x0
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  struct SubmarineMapAssetManager_o *v25; // x8
  struct ScrTerminalMap_o *v26; // x9
  UILabel_o *GridLinePrefab_k__BackingField; // x20
  UnityEngine_Transform_o *v28; // x0
  System_Int32_array **v29; // x0
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7

  v2 = this;
  if ( (byte_4350E71 & 1) == 0 )
  {
    sub_B70694(&Method_UnityEngine_Object_Instantiate_GameObject____69308712);
    this = (SubmarineMapManager_o *)sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_4350E71 = 1;
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
  v7 = (System_Int32_array **)UnityEngine_Object__Instantiate_UILabel_(
                                PanelContainerPrefab_k__BackingField,
                                transform,
                                (const MethodInfo_1D588A0 *)Method_UnityEngine_Object_Instantiate_GameObject____69308712);
  v2->fields.panelContainer = (struct UnityEngine_GameObject_o *)v7;
  sub_B70630((BattleServantConfConponent_o *)&v2->fields.panelContainer, v7, v8, v9, v10, v11, v12, v13);
  v14 = v2->fields.assetManager;
  if ( !v14 )
    goto LABEL_16;
  v15 = v2->fields.terminalMap;
  if ( !v15 )
    goto LABEL_16;
  this = (SubmarineMapManager_o *)v15->fields.mapButtonGrid;
  if ( !this )
    goto LABEL_16;
  EffectContainerPrefab_k__BackingField = (UILabel_o *)v14->fields._EffectContainerPrefab_k__BackingField;
  v17 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  v18 = (System_Int32_array **)UnityEngine_Object__Instantiate_UILabel_(
                                 EffectContainerPrefab_k__BackingField,
                                 v17,
                                 (const MethodInfo_1D588A0 *)Method_UnityEngine_Object_Instantiate_GameObject____69308712);
  v2->fields.effectContainer = (struct UnityEngine_GameObject_o *)v18;
  sub_B70630((BattleServantConfConponent_o *)&v2->fields.effectContainer, v18, v19, v20, v21, v22, v23, v24);
  v25 = v2->fields.assetManager;
  if ( !v25
    || (v26 = v2->fields.terminalMap) == 0LL
    || (this = (SubmarineMapManager_o *)v26->fields.mapButtonGrid) == 0LL )
  {
LABEL_16:
    sub_B7076C(this, method);
  }
  GridLinePrefab_k__BackingField = (UILabel_o *)v25->fields._GridLinePrefab_k__BackingField;
  v28 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  v29 = (System_Int32_array **)UnityEngine_Object__Instantiate_UILabel_(
                                 GridLinePrefab_k__BackingField,
                                 v28,
                                 (const MethodInfo_1D588A0 *)Method_UnityEngine_Object_Instantiate_GameObject____69308712);
  v2->fields.gridLine = (struct UnityEngine_GameObject_o *)v29;
  sub_B70630((BattleServantConfConponent_o *)&v2->fields.gridLine, v29, v30, v31, v32, v33, v34, v35);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_SchedulerTaskBase__o *__fastcall SubmarineMapManager__CreateHideEnemyOccupiedPanelTasks(
        SubmarineMapManager_o *this,
        int32_t beforeClearQuestId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v5; // x19
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *SilhouetteDataList_k__BackingField; // x0
  __int64 v7; // x1
  struct SubmarineMapDataManager_o *submarineData; // x8
  __int64 v9; // x23
  __int64 v10; // x0
  __int64 v11; // x1
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  System_Int32_array **current; // x1
  SubmarineSilhouetteData_o **v19; // x22
  __int64 v20; // x1
  SubmarineSilhouetteData_o *v21; // x0
  _BOOL8 HasClearCondQuestId; // x0
  __int64 v23; // x1
  const MethodInfo *v24; // x3
  __int64 v25; // x1
  const MethodInfo *v26; // x2
  SubmarineMapDataManager_o *v27; // x0
  System_Collections_Generic_IEnumerable_T__o *SilhouetteOccupiedPanels; // x25
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v29; // x24
  __int64 v30; // x1
  SubmarineMapManager___c_c *v31; // x0
  struct SubmarineMapManager___c_StaticFields *static_fields; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__102_0; // x25
  Il2CppObject *v34; // x26
  struct SubmarineMapManager___c_StaticFields *v35; // x0
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  System_Collections_Generic_List_T__o *All; // x0
  __int64 v43; // x1
  System_Collections_Generic_List_WarBoardUiData_SaveData__o *v44; // x24
  MapControl_MapInfo_o *mapInfo; // x0
  System_Collections_Generic_List_MapControl_SpotInfo__o *SpotList; // x25
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v47; // x26
  __int64 v48; // x0
  __int64 v49; // x1
  __int64 v50; // x1
  UnityEngine_GameObject_o *rootSpotP; // x0
  UnityEngine_Transform_o *transform; // x0
  __int64 v53; // x1
  UnityEngine_Transform_o *v54; // x23
  int32_t SpotId_k__BackingField; // w22
  System_String_o *GobjName; // x0
  UnityEngine_Transform_o *v57; // x0
  __int64 v58; // x1
  __int64 v59; // x0
  const MethodInfo *v60; // x1
  int v61; // s0
  struct SubmarineMapDataManager_o *v64; // x8
  struct SubmarineSettingsManager_o *Settings_k__BackingField; // x8
  EventMissionProgressRequest_Argument_ProgressData_o *MoveCameraToPositionTask; // x0
  SubmarineMapPanelData_array *v67; // x1
  const MethodInfo *v68; // x2
  EventMissionProgressRequest_Argument_ProgressData_o *OpenPanelsAndRevealSpotsTask; // x0
  System_Collections_Generic_List_Enumerator_T__o v71; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v72; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4350E93 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_SubmarineSilhouetteData__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_SubmarineSilhouetteData__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_SubmarineSilhouetteData__get_Current__);
    sub_B70694(&Method_System_Collections_Generic_List_SchedulerTaskBase__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_SubmarineMapPanelData__FindAll__);
    sub_B70694(&Method_System_Collections_Generic_List_MapControl_SpotInfo__Find__);
    sub_B70694(&Method_System_Collections_Generic_List_SubmarineSilhouetteData__GetEnumerator__);
    sub_B70694(&Method_System_Collections_Generic_List_SubmarineMapPanelData__ToArray__);
    sub_B70694(&Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
    sub_B70694(&Method_System_Collections_Generic_List_SubmarineMapPanelData___ctor___69174856);
    sub_B70694(&Method_System_Collections_Generic_List_SubmarineMapPanelData__get_Count__);
    sub_B70694(&System_Collections_Generic_List_SubmarineMapPanelData__TypeInfo);
    sub_B70694(&System_Collections_Generic_List_SchedulerTaskBase__TypeInfo);
    sub_B70694(&Method_System_Predicate_MapControl_SpotInfo___ctor__);
    sub_B70694(&Method_System_Predicate_SubmarineMapPanelData___ctor__);
    sub_B70694(&System_Predicate_SubmarineMapPanelData__TypeInfo);
    sub_B70694(&System_Predicate_MapControl_SpotInfo__TypeInfo);
    sub_B70694(&SrcSpotBasePrefab_TypeInfo);
    sub_B70694(&Method_SubmarineMapManager___c__CreateHideEnemyOccupiedPanelTasks_b__102_0__);
    sub_B70694(&Method_SubmarineMapManager___c__DisplayClass102_0__CreateHideEnemyOccupiedPanelTasks_b__1__);
    sub_B70694(&SubmarineMapManager___c__DisplayClass102_0_TypeInfo);
    sub_B70694(&SubmarineMapManager___c_TypeInfo);
    byte_4350E93 = 1;
  }
  memset(&v72, 0, sizeof(v72));
  v5 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_SchedulerTaskBase__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v5,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
  submarineData = this->fields.submarineData;
  if ( !submarineData
    || (SilhouetteDataList_k__BackingField = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)submarineData->fields._SilhouetteDataList_k__BackingField) == 0LL )
  {
    sub_B7076C(SilhouetteDataList_k__BackingField, v7);
  }
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v71,
    SilhouetteDataList_k__BackingField,
    (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_SubmarineSilhouetteData__GetEnumerator__);
  v72 = v71;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v72,
            (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_SubmarineSilhouetteData__MoveNext__) )
  {
    v9 = sub_B70764(SubmarineMapManager___c__DisplayClass102_0_TypeInfo);
    SubmarineMapManager___c__DisplayClass102_0___ctor((SubmarineMapManager___c__DisplayClass102_0_o *)v9, 0LL);
    if ( !v9 )
      sub_B7076C(v10, v11);
    current = (System_Int32_array **)v72.fields.current;
    *(_QWORD *)(v9 + 16) = v72.fields.current;
    v19 = (SubmarineSilhouetteData_o **)(v9 + 16);
    sub_B70630((BattleServantConfConponent_o *)(v9 + 16), current, v12, v13, v14, v15, v16, v17);
    v21 = *(SubmarineSilhouetteData_o **)(v9 + 16);
    if ( !v21 )
      sub_B7076C(0LL, v20);
    HasClearCondQuestId = SubmarineSilhouetteData__HasClearCondQuestId(v21, beforeClearQuestId, 0LL);
    if ( HasClearCondQuestId )
    {
      if ( !*v19 )
        sub_B7076C(HasClearCondQuestId, v23);
      if ( SubmarineMapDataManager__IsClearEachQuests((*v19)->fields._ObjectQuestIds_k__BackingField, -1, 0, v24) )
      {
        v27 = this->fields.submarineData;
        if ( !v27 )
          sub_B7076C(0LL, v25);
        SilhouetteOccupiedPanels = (System_Collections_Generic_IEnumerable_T__o *)SubmarineMapDataManager__GetSilhouetteOccupiedPanels(
                                                                                    v27,
                                                                                    *v19,
                                                                                    v26);
        v29 = (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)sub_B70764(System_Collections_Generic_List_SubmarineMapPanelData__TypeInfo);
        System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
          v29,
          SilhouetteOccupiedPanels,
          (const MethodInfo_3024BBC *)Method_System_Collections_Generic_List_SubmarineMapPanelData___ctor___69174856);
        v31 = SubmarineMapManager___c_TypeInfo;
        if ( (BYTE3(SubmarineMapManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SubmarineMapManager___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SubmarineMapManager___c_TypeInfo);
          v31 = SubmarineMapManager___c_TypeInfo;
        }
        static_fields = v31->static_fields;
        _9__102_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)static_fields->__9__102_0;
        if ( !_9__102_0 )
        {
          if ( (BYTE3(v31->vtable._0_Equals.methodPtr) & 4) != 0 && !v31->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v31);
            static_fields = SubmarineMapManager___c_TypeInfo->static_fields;
          }
          v34 = (Il2CppObject *)static_fields->__9;
          _9__102_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B70764(System_Predicate_SubmarineMapPanelData__TypeInfo);
          System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
            _9__102_0,
            v34,
            Method_SubmarineMapManager___c__CreateHideEnemyOccupiedPanelTasks_b__102_0__,
            (const MethodInfo_2BF23B8 *)Method_System_Predicate_SubmarineMapPanelData___ctor__);
          v35 = SubmarineMapManager___c_TypeInfo->static_fields;
          v35->__9__102_0 = (struct System_Predicate_SubmarineMapPanelData__o *)_9__102_0;
          sub_B70630(
            (BattleServantConfConponent_o *)&v35->__9__102_0,
            (System_Int32_array **)_9__102_0,
            v36,
            v37,
            v38,
            v39,
            v40,
            v41);
        }
        if ( !v29 )
          sub_B7076C(v31, v30);
        All = System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo___FindAll(
                (System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *)v29,
                (System_Predicate_T__o *)_9__102_0,
                (const MethodInfo_3026010 *)Method_System_Collections_Generic_List_SubmarineMapPanelData__FindAll__);
        v44 = (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)All;
        if ( !All )
          sub_B7076C(0LL, v43);
        if ( All->fields._size >= 1 )
        {
          mapInfo = this->fields.mapInfo;
          if ( !mapInfo )
            sub_B7076C(0LL, v43);
          SpotList = MapControl_MapInfo__GetSpotList(mapInfo, 0LL);
          v47 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B70764(System_Predicate_MapControl_SpotInfo__TypeInfo);
          System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
            v47,
            (Il2CppObject *)v9,
            Method_SubmarineMapManager___c__DisplayClass102_0__CreateHideEnemyOccupiedPanelTasks_b__1__,
            (const MethodInfo_2BF23B8 *)Method_System_Predicate_MapControl_SpotInfo___ctor__);
          if ( !SpotList )
            sub_B7076C(v48, v49);
          if ( System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                 (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)SpotList,
                 (System_Predicate_T__o *)v47,
                 (const MethodInfo_3025F48 *)Method_System_Collections_Generic_List_MapControl_SpotInfo__Find__) )
          {
            rootSpotP = this->fields.rootSpotP;
            if ( !rootSpotP )
              sub_B7076C(0LL, v50);
            transform = UnityEngine_GameObject__get_transform(rootSpotP, 0LL);
            if ( !*v19 )
              sub_B7076C(transform, v53);
            v54 = transform;
            SpotId_k__BackingField = (*v19)->fields._SpotId_k__BackingField;
            if ( (BYTE3(SrcSpotBasePrefab_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !SrcSpotBasePrefab_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(SrcSpotBasePrefab_TypeInfo);
            }
            GobjName = SrcSpotBasePrefab__GetGobjName(SpotId_k__BackingField, 0LL);
            if ( !v54 )
              sub_B7076C(GobjName, GobjName);
            v57 = UnityEngine_Transform__Find(v54, GobjName, 0LL);
            if ( !v57 )
              sub_B7076C(0LL, v58);
            *(UnityEngine_Vector3_o *)&v61 = UnityEngine_Transform__get_localPosition(v57, 0LL);
            v64 = this->fields.submarineData;
            if ( !v64 )
              sub_B7076C(v59, v60);
            Settings_k__BackingField = v64->fields._Settings_k__BackingField;
            if ( !Settings_k__BackingField )
              sub_B7076C(v59, v60);
            MoveCameraToPositionTask = (EventMissionProgressRequest_Argument_ProgressData_o *)SubmarineMapManager__CreateMoveCameraToPositionTask(
                                                                                                this,
                                                                                                *(UnityEngine_Vector3_o *)&v61,
                                                                                                1.0,
                                                                                                Settings_k__BackingField->fields._OpenPanelCameraDuration_k__BackingField,
                                                                                                v60);
            if ( !v5 )
              sub_B7076C(MoveCameraToPositionTask, MoveCameraToPositionTask);
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v5,
              MoveCameraToPositionTask,
              (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_SchedulerTaskBase__Add__);
          }
          v67 = (SubmarineMapPanelData_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                 v44,
                                                 (const MethodInfo_30277D4 *)Method_System_Collections_Generic_List_SubmarineMapPanelData__ToArray__);
          OpenPanelsAndRevealSpotsTask = (EventMissionProgressRequest_Argument_ProgressData_o *)SubmarineMapManager__CreateOpenPanelsAndRevealSpotsTask(
                                                                                                  this,
                                                                                                  v67,
                                                                                                  v68);
          if ( !v5 )
            sub_B7076C(OpenPanelsAndRevealSpotsTask, OpenPanelsAndRevealSpotsTask);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v5,
            OpenPanelsAndRevealSpotsTask,
            (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_SchedulerTaskBase__Add__);
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v72,
    (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_SubmarineSilhouetteData__Dispose__);
  return (System_Collections_Generic_List_SchedulerTaskBase__o *)v5;
}


SchedulerTaskBase_o *__fastcall SubmarineMapManager__CreateHitObstractTask(
        SubmarineMapManager_o *this,
        SubmarineMapPanelData_o *panelData,
        float waitTime,
        const MethodInfo *method)
{
  SchedulerTaskNone_o *v4; // x19

  if ( (byte_4350E90 & 1) == 0 )
  {
    sub_B70694(&SchedulerTaskNone_TypeInfo);
    byte_4350E90 = 1;
  }
  v4 = (SchedulerTaskNone_o *)sub_B70764(SchedulerTaskNone_TypeInfo);
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
  const MethodInfo_243B7C8 *v5; // x2
  float y; // s10
  float x; // s11
  MapCamera_o *mapCamera; // x19
  MapCameraPerformance_o *v12; // x0
  SchedulerTaskBase_o *v13; // x20
  System_Nullable_float__o v15; // [xsp+8h] [xbp-48h] BYREF
  System_Nullable_Vector2__o v16; // [xsp+10h] [xbp-40h] BYREF
  System_Nullable_float__o v17; // 0:x0.8
  System_Nullable_float__o v18; // 0:x4.8
  System_Nullable_Vector2__o v19; // 0:x0.12
  UnityEngine_Vector2_o v20; // 0:s0.4,4:s1.4

  y = destPos.fields.y;
  x = destPos.fields.x;
  if ( (byte_4350E89 & 1) == 0 )
  {
    sub_B70694(&MapCameraPerformance_TypeInfo);
    sub_B70694(&Method_System_Nullable_float___ctor__);
    sub_B70694(&Method_System_Nullable_Vector2___ctor__);
    byte_4350E89 = 1;
  }
  mapCamera = this->fields.mapCamera;
  v19.fields.value = (struct UnityEngine_Vector2_o)&v16;
  v20.fields.x = x;
  v20.fields.y = y;
  *(_DWORD *)&v19.fields.has_value = Method_System_Nullable_Vector2___ctor__;
  *(_DWORD *)&v16.fields.has_value = 0;
  v16.fields.value = 0LL;
  System_Nullable_Vector2____ctor(v19, v20, v5);
  v17 = (System_Nullable_float__o)&v15;
  v15 = 0LL;
  System_Nullable_float____ctor(v17, size, (const MethodInfo_2439C24 *)Method_System_Nullable_float___ctor__);
  v12 = (MapCameraPerformance_o *)sub_B70764(MapCameraPerformance_TypeInfo);
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
  struct MapControl_MapInfo_o *mapInfo; // x24
  SubmarineMapManager_o *v9; // x20
  unsigned int v10; // w25
  struct SubmarineMapAssetManager_o *v11; // x8
  ObjectDomain_o *v12; // x21
  UILabel_o *v13; // x22
  UnityEngine_Transform_o *transform; // x23
  UnityEngine_GameObject_o *v15; // x22
  UnityEngine_Transform_o *v16; // x23
  int v17; // s0
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  SubmarineMapPanelComponent_o *v26; // x22
  const MethodInfo *v27; // x2
  const MethodInfo *v28; // x3
  const MethodInfo *v29; // x2
  __int64 v30; // x0
  struct SubmarineMapDataManager_o *v31; // x8
  struct SubmarinePanelPositionCalculator_o *PositionCalculator_k__BackingField; // x9
  SubmarineMapManager_o *v33; // x20
  int32_t v34; // w21
  int32_t v35; // w22
  int v36; // w28
  struct SubmarineMapDataManager_o *v37; // x8
  unsigned __int64 v38; // d0 OVERLAPPED
  int v39; // s1
  int v40; // s2
  struct SubmarineMapAssetManager_o *v41; // x8
  ObjectDomain_o *v42; // x23
  UILabel_o *v43; // x24
  UnityEngine_Transform_o *v44; // x25
  UnityEngine_GameObject_o *v45; // x24
  UnityEngine_Transform_o *v46; // x25
  int v47; // s0
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  SubmarineMapPanelComponent_o *v56; // x24
  const MethodInfo *v57; // x2
  const MethodInfo *v58; // x3
  const MethodInfo *v59; // x2

  v2 = this;
  if ( (byte_4350E73 & 1) == 0 )
  {
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_SubmarineMapPanelComponent___);
    sub_B70694(&Method_UnityEngine_Object_Instantiate_GameObject____69308712);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    this = (SubmarineMapManager_o *)sub_B70694(&PanelUniqueIDUtil_TypeInfo);
    byte_4350E73 = 1;
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
        v9 = this;
        if ( (int)mapInfo >= 1 )
        {
          v10 = 0;
          while ( 1 )
          {
            v11 = v2->fields.assetManager;
            if ( !v11 )
              break;
            this = (SubmarineMapManager_o *)v2->fields.panelContainer;
            if ( !this )
              break;
            v12 = (ObjectDomain_o *)*((_QWORD *)&v9->fields.warInfo + (int)v10);
            v13 = (UILabel_o *)v11->fields._PanelPrefab_k__BackingField;
            transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            this = (SubmarineMapManager_o *)UnityEngine_Object__Instantiate_UILabel_(
                                              v13,
                                              transform,
                                              (const MethodInfo_1D588A0 *)Method_UnityEngine_Object_Instantiate_GameObject____69308712);
            if ( !this )
              break;
            v15 = (UnityEngine_GameObject_o *)this;
            this = (SubmarineMapManager_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
            if ( !v12 )
              break;
            v16 = (UnityEngine_Transform_o *)this;
            *(UnityEngine_Vector3_o *)&v17 = ObjectDomain__get_center(v12, 0LL);
            if ( !v16 )
              break;
            UnityEngine_Transform__set_localPosition(v16, *(UnityEngine_Vector3_o *)&v17, 0LL);
            this = (SubmarineMapManager_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                              v15,
                                              (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_SubmarineMapPanelComponent___);
            if ( !this )
              break;
            v26 = (SubmarineMapPanelComponent_o *)this;
            this->fields.mapCamera = 0LL;
            sub_B70630((BattleServantConfConponent_o *)&this->fields.mapCamera, 0LL, v20, v21, v22, v23, v24, v25);
            SubmarineMapPanelComponent__SetSize(v26, v12, v27);
            SubmarineMapPanelComponent__SetClosedPanelTexture(v26, v12, v2->fields.closedPanelTexture, v28);
            SubmarineMapPanelComponent__SetClosedPanelVisible(v26, 1, v29);
            if ( (int)++v10 >= (int)mapInfo )
              goto LABEL_32;
            if ( v10 >= LODWORD(v9->fields.mapInfo) )
            {
              v30 = sub_B70798(this);
              sub_B70738(v30, 0LL);
            }
          }
LABEL_59:
          sub_B7076C(this, method);
        }
LABEL_32:
        this = (SubmarineMapManager_o *)v2->fields.submarineData;
        if ( !this )
          goto LABEL_59;
        this = (SubmarineMapManager_o *)SubmarineMapDataManager__GetEmptyPanelUniqueIds(
                                          (SubmarineMapDataManager_o *)this,
                                          method);
        v31 = v2->fields.submarineData;
        if ( !v31 )
          goto LABEL_59;
        PositionCalculator_k__BackingField = v31->fields._PositionCalculator_k__BackingField;
        if ( !PositionCalculator_k__BackingField )
          goto LABEL_59;
        v33 = this;
        v34 = 0;
        while ( v34 < PositionCalculator_k__BackingField->fields._HorizontalPanelNum_k__BackingField )
        {
          v35 = 0;
          v36 = 1;
          while ( v35 < PositionCalculator_k__BackingField->fields._VerticalPanelNum_k__BackingField )
          {
            if ( (BYTE3(PanelUniqueIDUtil_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !PanelUniqueIDUtil_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(PanelUniqueIDUtil_TypeInfo);
            }
            this = (SubmarineMapManager_o *)PanelUniqueIDUtil__HasID(v34, v35, (System_Int32_array *)v33, 0LL);
            if ( ((unsigned __int8)this & 1) != 0 )
            {
              v37 = v2->fields.submarineData;
              if ( !v37 )
                goto LABEL_59;
              this = (SubmarineMapManager_o *)v37->fields._PositionCalculator_k__BackingField;
              if ( !this )
                goto LABEL_59;
              v38 = vadd_f32(
                      (float32x2_t)this->fields.warInfo,
                      vmul_f32(
                        vmul_f32(
                          *(float32x2_t *)&this->fields.m_CachedPtr,
                          vcvt_f32_s32(vsub_s32((int32x2_t)__PAIR64__(v36, (2 * v34) | 1u), (int32x2_t)this->fields.mapInfo))),
                        (float32x2_t)0x3F0000003F000000LL)).n64_u64[0];
              v39 = HIDWORD(v38);
              v40 = 0;
              this = (SubmarineMapManager_o *)ClosePanelTextureUtil__CreateClosedPanelDomain(
                                                *(UnityEngine_Vector3_o *)&v38,
                                                (SubmarinePanelPositionCalculator_o *)this,
                                                0LL);
              v41 = v2->fields.assetManager;
              if ( !v41 )
                goto LABEL_59;
              v42 = (ObjectDomain_o *)this;
              this = (SubmarineMapManager_o *)v2->fields.panelContainer;
              if ( !this )
                goto LABEL_59;
              v43 = (UILabel_o *)v41->fields._PanelPrefab_k__BackingField;
              v44 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
              if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              }
              this = (SubmarineMapManager_o *)UnityEngine_Object__Instantiate_UILabel_(
                                                v43,
                                                v44,
                                                (const MethodInfo_1D588A0 *)Method_UnityEngine_Object_Instantiate_GameObject____69308712);
              if ( !this )
                goto LABEL_59;
              v45 = (UnityEngine_GameObject_o *)this;
              this = (SubmarineMapManager_o *)UnityEngine_GameObject__get_transform(
                                                (UnityEngine_GameObject_o *)this,
                                                0LL);
              if ( !v42 )
                goto LABEL_59;
              v46 = (UnityEngine_Transform_o *)this;
              *(UnityEngine_Vector3_o *)&v47 = ObjectDomain__get_center(v42, 0LL);
              if ( !v46 )
                goto LABEL_59;
              UnityEngine_Transform__set_localPosition(v46, *(UnityEngine_Vector3_o *)&v47, 0LL);
              this = (SubmarineMapManager_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                v45,
                                                (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_SubmarineMapPanelComponent___);
              if ( !this )
                goto LABEL_59;
              v56 = (SubmarineMapPanelComponent_o *)this;
              this->fields.mapCamera = 0LL;
              sub_B70630((BattleServantConfConponent_o *)&this->fields.mapCamera, 0LL, v50, v51, v52, v53, v54, v55);
              SubmarineMapPanelComponent__SetSize(v56, v42, v57);
              SubmarineMapPanelComponent__SetClosedPanelTexture(v56, v42, v2->fields.closedPanelTexture, v58);
              SubmarineMapPanelComponent__SetClosedPanelVisible(v56, 1, v59);
            }
            v31 = v2->fields.submarineData;
            if ( v31 )
            {
              PositionCalculator_k__BackingField = v31->fields._PositionCalculator_k__BackingField;
              ++v35;
              v36 += 2;
              if ( PositionCalculator_k__BackingField )
                continue;
            }
            goto LABEL_59;
          }
          PositionCalculator_k__BackingField = v31->fields._PositionCalculator_k__BackingField;
          ++v34;
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
  UnityEngine_GameObject_o *effectContainer; // x0
  const MethodInfo_243BBB0 *v8; // x2
  ComponentPool_CommonEffectComponent__o *effectScanedPanelObjPool; // x23
  UnityEngine_Transform_o *v10; // x22
  SchedulerTaskCommonEffect_o *v11; // x0
  SchedulerTaskCommonEffect_o *v12; // x21
  System_Delegate_o *StartCallback; // x23
  SchedulerTaskBase_TaskCallback_o *v14; // x24
  System_Int32_array **v15; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  SchedulerTaskBase_array *v22; // x22
  SchedulerTaskWaitTime_o *v23; // x23
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
  SchedulerTaskOrthostichy_o *v36; // x21
  struct SubmarineMapDataManager_o *submarineData; // x8
  struct SubmarineSettingsManager_o *Settings_k__BackingField; // x8
  float v39; // s8
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v40; // x22
  SchedulerTaskWaitTime_o *v41; // x23
  const MethodInfo *v42; // x2
  System_Collections_Generic_IEnumerable_T__o *RevealSpotOnPanelTasks; // x0
  SchedulerTaskOrthostichy_o *v44; // x19
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  UnityEngine_GameObject_o *v51; // x20
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  SchedulerTaskParallel_o *v58; // x19
  __int64 v60; // x0
  __int64 v61; // x0
  SubmarineMapManager_o *v62; // x0
  SubmarineMapPanelData_array *v63; // x1
  const MethodInfo *v64; // x2
  System_Nullable_Vector3__o v65; // [xsp+20h] [xbp-60h] BYREF
  System_Nullable_Vector3__o v66; // 0:x0.16
  System_Nullable_Vector3__o v67; // 0:x5.16
  UnityEngine_Vector3_o LocalPosition_k__BackingField; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4350E8D & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_SchedulerTaskBase__AddRange__);
    sub_B70694(&Method_System_Collections_Generic_List_SchedulerTaskBase__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
    sub_B70694(&System_Collections_Generic_List_SchedulerTaskBase__TypeInfo);
    sub_B70694(&Method_System_Nullable_Vector3___ctor__);
    sub_B70694(&SchedulerTaskBase___TypeInfo);
    sub_B70694(&SchedulerTaskCommonEffect_TypeInfo);
    sub_B70694(&SchedulerTaskOrthostichy_TypeInfo);
    sub_B70694(&SchedulerTaskParallel_TypeInfo);
    sub_B70694(&SchedulerTaskWaitTime_TypeInfo);
    sub_B70694(&Method_SubmarineMapPanelData_OpenPanel__);
    sub_B70694(&SchedulerTaskBase_TaskCallback_TypeInfo);
    byte_4350E8D = 1;
  }
  effectContainer = this->fields.effectContainer;
  if ( !effectContainer )
    goto LABEL_25;
  effectContainer = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(effectContainer, 0LL);
  if ( !panelData )
    goto LABEL_25;
  effectScanedPanelObjPool = this->fields.effectScanedPanelObjPool;
  LocalPosition_k__BackingField = panelData->fields._LocalPosition_k__BackingField;
  v10 = (UnityEngine_Transform_o *)effectContainer;
  *(_QWORD *)&v66.fields.value.fields.x = &v65;
  *(_QWORD *)&v65.fields.value.fields.x = 0LL;
  *(_QWORD *)&v65.fields.value.fields.z = 0LL;
  *(_QWORD *)&v66.fields.value.fields.z = Method_System_Nullable_Vector3___ctor__;
  System_Nullable_Vector3____ctor(v66, LocalPosition_k__BackingField, v8);
  v11 = (SchedulerTaskCommonEffect_o *)sub_B70764(SchedulerTaskCommonEffect_TypeInfo);
  *(_QWORD *)&v67.fields.value.fields.x = 0LL;
  *(_QWORD *)&v67.fields.value.fields.z = 0LL;
  v12 = v11;
  SchedulerTaskCommonEffect___ctor_17530648(
    v11,
    v10,
    effectScanedPanelObjPool,
    v65,
    v67,
    (System_Nullable_Vector3__o)0,
    1,
    0LL);
  if ( !v12 )
    goto LABEL_25;
  StartCallback = (System_Delegate_o *)v12->fields.StartCallback;
  v14 = (SchedulerTaskBase_TaskCallback_o *)sub_B70764(SchedulerTaskBase_TaskCallback_TypeInfo);
  SchedulerTaskBase_TaskCallback___ctor(v14, (Il2CppObject *)panelData, Method_SubmarineMapPanelData_OpenPanel__, 0LL);
  v15 = (System_Int32_array **)System_Delegate__Combine(StartCallback, (System_Delegate_o *)v14, 0LL);
  if ( !v15 || *v15 == (System_Int32_array *)SchedulerTaskBase_TaskCallback_TypeInfo )
  {
    v12->fields.StartCallback = (struct SchedulerTaskBase_TaskCallback_o *)v15;
    sub_B70630((BattleServantConfConponent_o *)&v12->fields.StartCallback, v15, v16, v17, v18, v19, v20, v21);
    v22 = (SchedulerTaskBase_array *)sub_B706AC(SchedulerTaskBase___TypeInfo, 2LL);
    v23 = (SchedulerTaskWaitTime_o *)sub_B70764(SchedulerTaskWaitTime_TypeInfo);
    SchedulerTaskWaitTime___ctor(v23, waitTime, 0LL);
    if ( v22 )
    {
      if ( v23 )
      {
        effectContainer = (UnityEngine_GameObject_o *)sub_B70754(v23, v22->obj.klass->_1.element_class);
        if ( !effectContainer )
          goto LABEL_27;
      }
      if ( !v22->max_length )
        goto LABEL_26;
      v22->m_Items[0] = (SchedulerTaskBase_o *)v23;
      sub_B70630((BattleServantConfConponent_o *)v22->m_Items, (System_Int32_array **)v23, v24, v25, v26, v27, v28, v29);
      effectContainer = (UnityEngine_GameObject_o *)sub_B70754(v12, v22->obj.klass->_1.element_class);
      if ( !effectContainer )
        goto LABEL_27;
      if ( v22->max_length <= 1 )
        goto LABEL_26;
      v22->m_Items[1] = (SchedulerTaskBase_o *)v12;
      sub_B70630(
        (BattleServantConfConponent_o *)&v22->m_Items[1],
        (System_Int32_array **)v12,
        v30,
        v31,
        v32,
        v33,
        v34,
        v35);
      v36 = (SchedulerTaskOrthostichy_o *)sub_B70764(SchedulerTaskOrthostichy_TypeInfo);
      SchedulerTaskOrthostichy___ctor(v36, v22, 0LL);
      submarineData = this->fields.submarineData;
      if ( submarineData )
      {
        Settings_k__BackingField = submarineData->fields._Settings_k__BackingField;
        if ( Settings_k__BackingField )
        {
          v39 = Settings_k__BackingField->fields._SecondOfOpenPanelToRevealSpot_k__BackingField + waitTime;
          v40 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_SchedulerTaskBase__TypeInfo);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
            v40,
            (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
          v41 = (SchedulerTaskWaitTime_o *)sub_B70764(SchedulerTaskWaitTime_TypeInfo);
          SchedulerTaskWaitTime___ctor(v41, v39, 0LL);
          if ( v40 )
          {
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v40,
              (EventMissionProgressRequest_Argument_ProgressData_o *)v41,
              (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_SchedulerTaskBase__Add__);
            RevealSpotOnPanelTasks = (System_Collections_Generic_IEnumerable_T__o *)SubmarineMapManager__CreateRevealSpotOnPanelTasks(
                                                                                      this,
                                                                                      panelData,
                                                                                      v42);
            System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
              (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v40,
              RevealSpotOnPanelTasks,
              (const MethodInfo_30258D8 *)Method_System_Collections_Generic_List_SchedulerTaskBase__AddRange__);
            v44 = (SchedulerTaskOrthostichy_o *)sub_B70764(SchedulerTaskOrthostichy_TypeInfo);
            SchedulerTaskOrthostichy___ctor_17532688(
              v44,
              (System_Collections_Generic_List_SchedulerTaskBase__o *)v40,
              0LL);
            effectContainer = (UnityEngine_GameObject_o *)sub_B706AC(SchedulerTaskBase___TypeInfo, 2LL);
            if ( effectContainer )
            {
              v51 = effectContainer;
              if ( !v36
                || (effectContainer = (UnityEngine_GameObject_o *)sub_B70754(
                                                                    v36,
                                                                    effectContainer->klass->_1.element_class)) != 0LL )
              {
                if ( !LODWORD(v51[1].klass) )
                  goto LABEL_26;
                v51[1].monitor = v36;
                sub_B70630(
                  (BattleServantConfConponent_o *)&v51[1].monitor,
                  (System_Int32_array **)v36,
                  v45,
                  v46,
                  v47,
                  v48,
                  v49,
                  v50);
                if ( !v44
                  || (effectContainer = (UnityEngine_GameObject_o *)sub_B70754(v44, v51->klass->_1.element_class)) != 0LL )
                {
                  if ( LODWORD(v51[1].klass) > 1 )
                  {
                    *(_QWORD *)&v51[1].fields.m_CachedPtr = v44;
                    sub_B70630(
                      (BattleServantConfConponent_o *)&v51[1].fields,
                      (System_Int32_array **)v44,
                      v52,
                      v53,
                      v54,
                      v55,
                      v56,
                      v57);
                    v58 = (SchedulerTaskParallel_o *)sub_B70764(SchedulerTaskParallel_TypeInfo);
                    SchedulerTaskParallel___ctor(v58, (SchedulerTaskBase_array *)v51, 0LL);
                    return (SchedulerTaskBase_o *)v58;
                  }
LABEL_26:
                  v60 = sub_B70798(effectContainer);
                  sub_B70738(v60, 0LL);
                }
              }
LABEL_27:
              v61 = sub_B7078C(effectContainer);
              sub_B70738(v61, 0LL);
            }
          }
        }
      }
    }
LABEL_25:
    sub_B7076C(effectContainer, panelData);
  }
  v62 = (SubmarineMapManager_o *)sub_B70A60(v15);
  return SubmarineMapManager__CreateOpenPanelsAndRevealSpotsTask(v62, v63, v64);
}


SchedulerTaskBase_o *__fastcall SubmarineMapManager__CreateOpenPanelsAndRevealSpotsTask(
        SubmarineMapManager_o *this,
        SubmarineMapPanelData_array *panelDataArray,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v5; // x21
  EventMissionProgressRequest_Argument_ProgressData_o *OpenPanelAndRevealSpotTask; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  __int64 v9; // x8
  unsigned __int64 v10; // x22
  SchedulerTaskParallel_o *v11; // x19
  __int64 v13; // x0

  if ( (byte_4350E8E & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_SchedulerTaskBase__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
    sub_B70694(&System_Collections_Generic_List_SchedulerTaskBase__TypeInfo);
    sub_B70694(&SchedulerTaskParallel_TypeInfo);
    byte_4350E8E = 1;
  }
  v5 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_SchedulerTaskBase__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v5,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
  if ( !panelDataArray )
    goto LABEL_11;
  v9 = *(_QWORD *)&panelDataArray->max_length;
  if ( (int)v9 >= 1 )
  {
    v10 = 0LL;
    while ( 1 )
    {
      if ( v10 >= (unsigned int)v9 )
      {
        v13 = sub_B70798(OpenPanelAndRevealSpotTask);
        sub_B70738(v13, 0LL);
      }
      OpenPanelAndRevealSpotTask = (EventMissionProgressRequest_Argument_ProgressData_o *)SubmarineMapManager__CreateOpenPanelAndRevealSpotTask(
                                                                                            this,
                                                                                            panelDataArray->m_Items[v10],
                                                                                            0.0,
                                                                                            v8);
      if ( !v5 )
        break;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v5,
        OpenPanelAndRevealSpotTask,
        (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_SchedulerTaskBase__Add__);
      LODWORD(v9) = panelDataArray->max_length;
      if ( (__int64)++v10 >= (int)v9 )
        goto LABEL_9;
    }
LABEL_11:
    sub_B7076C(OpenPanelAndRevealSpotTask, v7);
  }
LABEL_9:
  v11 = (SchedulerTaskParallel_o *)sub_B70764(SchedulerTaskParallel_TypeInfo);
  SchedulerTaskParallel___ctor_17533044(v11, (System_Collections_Generic_List_SchedulerTaskBase__o *)v5, 0LL);
  return (SchedulerTaskBase_o *)v11;
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
  UILabel_o *v13; // x21
  UnityEngine_Transform_o *transform; // x22
  UnityEngine_GameObject_o *v15; // x0
  __int64 v16; // x1
  UnityEngine_GameObject_o *v17; // x22
  srcLineSprite_o *Component_srcLineSprite; // x0
  __int64 v19; // x1
  struct SubmarineMapDataManager_o *v20; // x8
  srcLineSprite_o *v21; // x21
  SubmarinePanelPositionCalculator_o *PositionCalculator_k__BackingField; // x0
  float v23; // s8
  float v24; // s9
  ObjectDomain_o *ClosedPanelDomain; // x0
  __int64 v26; // x1
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  ObjectDomain_o *v33; // x23
  const MethodInfo *v34; // x2
  const MethodInfo *v35; // x3
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v42; // x21
  const MethodInfo *v43; // x2
  System_Collections_Generic_List_Enumerator_T__o v44; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v45; // [xsp+20h] [xbp-90h] BYREF
  UnityEngine_Vector3_o v46; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v47; // 0:s0.4,4:s1.4,8:s2.4

  v2 = this;
  if ( (byte_4350E72 & 1) == 0 )
  {
    sub_B70694(&Method_System_Action_SubmarineMapPanelData___ctor__);
    sub_B70694(&System_Action_SubmarineMapPanelData__TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__get_Current__);
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_SubmarineMapPanelComponent___);
    sub_B70694(&Method_System_Collections_Generic_List_SubmarineMapPanelData__GetEnumerator__);
    sub_B70694(&Method_UnityEngine_Object_Instantiate_GameObject____69308712);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    this = (SubmarineMapManager_o *)sub_B70694(&Method_SubmarineMapManager_ClickPanel__);
    byte_4350E72 = 1;
  }
  memset(&v45, 0, sizeof(v45));
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
              &v44,
              (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this,
              (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_SubmarineMapPanelData__GetEnumerator__);
            v45 = v44;
            while ( 1 )
            {
              v8 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                     &v45,
                     (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__MoveNext__);
              if ( !v8 )
                break;
              v10 = v2->fields.assetManager;
              if ( !v10 )
                sub_B7076C(v8, v9);
              v11 = v2->fields.panelContainer;
              if ( !v11 )
                sub_B7076C(0LL, v9);
              current = v45.fields.current;
              v13 = (UILabel_o *)v10->fields._PanelPrefab_k__BackingField;
              transform = UnityEngine_GameObject__get_transform(v11, 0LL);
              if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              }
              v15 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_UILabel_(
                                                  v13,
                                                  transform,
                                                  (const MethodInfo_1D588A0 *)Method_UnityEngine_Object_Instantiate_GameObject____69308712);
              v17 = v15;
              if ( !v15 )
                sub_B7076C(0LL, v16);
              Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                          v15,
                                          (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_SubmarineMapPanelComponent___);
              v20 = v2->fields.submarineData;
              if ( !v20 )
                sub_B7076C(Component_srcLineSprite, v19);
              if ( !current )
                sub_B7076C(Component_srcLineSprite, v19);
              v21 = Component_srcLineSprite;
              PositionCalculator_k__BackingField = v20->fields._PositionCalculator_k__BackingField;
              if ( !PositionCalculator_k__BackingField )
                sub_B7076C(0LL, v19);
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
              v46.fields.z = 0.0;
              v46.fields.x = v23;
              v46.fields.y = v24;
              ClosedPanelDomain = ClosePanelTextureUtil__CreateClosedPanelDomain(
                                    v46,
                                    PositionCalculator_k__BackingField,
                                    0LL);
              if ( !v21 )
                sub_B7076C(ClosedPanelDomain, v26);
              v33 = ClosedPanelDomain;
              v21->fields.mcLineSprite = 0LL;
              sub_B70630((BattleServantConfConponent_o *)&v21->fields.mcLineSprite, 0LL, v27, v28, v29, v30, v31, v32);
              v47.fields.z = 0.0;
              v47.fields.x = v23;
              v47.fields.y = v24;
              GameObjectExtensions__SetLocalPosition(v17, v47, 0LL);
              SubmarineMapPanelComponent__SetSize((SubmarineMapPanelComponent_o *)v21, v33, v34);
              SubmarineMapPanelComponent__SetClosedPanelTexture(
                (SubmarineMapPanelComponent_o *)v21,
                v33,
                v2->fields.closedPanelTexture,
                v35);
              current[3].klass = (Il2CppClass *)v21;
              sub_B70630(
                (BattleServantConfConponent_o *)&current[3],
                (System_Int32_array **)v21,
                v36,
                v37,
                v38,
                v39,
                v40,
                v41);
              v42 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B70764(System_Action_SubmarineMapPanelData__TypeInfo);
              System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
                v42,
                (Il2CppObject *)v2,
                (intptr_t)Method_SubmarineMapManager_ClickPanel__,
                (const MethodInfo_264C148 *)Method_System_Action_SubmarineMapPanelData___ctor__);
              SubmarineMapPanelData__SetPanelClickAction(
                (SubmarineMapPanelData_o *)current,
                (System_Action_SubmarineMapPanelData__o *)v42,
                v43);
            }
            System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
              &v45,
              (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__Dispose__);
            return;
          }
        }
LABEL_40:
        sub_B7076C(this, method);
      }
    }
  }
}


System_Collections_Generic_List_SchedulerTaskBase__o *__fastcall SubmarineMapManager__CreateRevealEachSpotsTasks(
        SubmarineMapManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v3; // x20
  void *Children; // x0
  __int64 v5; // x1
  int v6; // w8
  void *v7; // x21
  unsigned int v8; // w23
  UnityEngine_Object_o *Component_srcLineSprite; // x22
  const MethodInfo *v10; // x2
  __int64 v12; // x0

  if ( (byte_4350E91 & 1) == 0 )
  {
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_SrcSpotBasePrefab___);
    sub_B70694(&Method_System_Collections_Generic_List_SchedulerTaskBase__AddRange__);
    sub_B70694(&Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
    sub_B70694(&System_Collections_Generic_List_SchedulerTaskBase__TypeInfo);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_4350E91 = 1;
  }
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_SchedulerTaskBase__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
  Children = GameObjectExtensions__GetChildren(this->fields.rootSpotP, 0, 0LL);
  if ( !Children )
    goto LABEL_16;
  v6 = *((_DWORD *)Children + 6);
  v7 = Children;
  if ( v6 >= 1 )
  {
    v8 = 0;
    while ( 1 )
    {
      if ( v8 >= v6 )
      {
        v12 = sub_B70798(Children);
        sub_B70738(v12, 0LL);
      }
      Children = (void *)*((_QWORD *)v7 + (int)v8 + 4);
      if ( !Children )
        break;
      Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                          (UnityEngine_GameObject_o *)Children,
                                                          (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_SrcSpotBasePrefab___);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      Children = (void *)UnityEngine_Object__op_Equality(Component_srcLineSprite, 0LL, 0LL);
      if ( ((unsigned __int8)Children & 1) == 0 )
      {
        Children = SubmarineMapManager__CreateRevealSpotTasks(this, (SrcSpotBasePrefab_o *)Component_srcLineSprite, v10);
        if ( !v3 )
          break;
        System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
          (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v3,
          (System_Collections_Generic_IEnumerable_T__o *)Children,
          (const MethodInfo_30258D8 *)Method_System_Collections_Generic_List_SchedulerTaskBase__AddRange__);
      }
      v6 = *((_DWORD *)v7 + 6);
      if ( (int)++v8 >= v6 )
        return (System_Collections_Generic_List_SchedulerTaskBase__o *)v3;
    }
LABEL_16:
    sub_B7076C(Children, v5);
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
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  __int64 v14; // x21
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v15; // x20
  SchedulerTaskNone_o *v16; // x23
  System_Collections_Generic_List_MapControl_SpotInfo__o *SpotList; // x23
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v18; // x24
  __int64 v19; // x8
  UnityEngine_Transform_o *v20; // x21
  int32_t v21; // w22
  UnityEngine_Object_o *v22; // x21
  WebViewObject_o *Component_WebViewObject; // x1
  const MethodInfo *v25; // x2

  if ( (byte_4350E8C & 1) == 0 )
  {
    sub_B70694(&Method_UnityEngine_Component_GetComponent_SrcSpotBasePrefab___);
    sub_B70694(&Method_System_Collections_Generic_List_SchedulerTaskBase__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_MapControl_SpotInfo__Find__);
    sub_B70694(&Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
    sub_B70694(&System_Collections_Generic_List_SchedulerTaskBase__TypeInfo);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&Method_System_Predicate_MapControl_SpotInfo___ctor__);
    sub_B70694(&System_Predicate_MapControl_SpotInfo__TypeInfo);
    sub_B70694(&SchedulerTaskNone_TypeInfo);
    sub_B70694(&SrcSpotBasePrefab_TypeInfo);
    sub_B70694(&Method_SubmarineMapManager___c__DisplayClass95_0__CreateRevealSpotOnPanelTasks_b__0__);
    sub_B70694(&SubmarineMapManager___c__DisplayClass95_0_TypeInfo);
    byte_4350E8C = 1;
  }
  v5 = sub_B70764(SubmarineMapManager___c__DisplayClass95_0_TypeInfo);
  SubmarineMapManager___c__DisplayClass95_0___ctor((SubmarineMapManager___c__DisplayClass95_0_o *)v5, 0LL);
  if ( !v5 )
    goto LABEL_23;
  *(_QWORD *)(v5 + 16) = panelData;
  v14 = v5 + 16;
  sub_B70630((BattleServantConfConponent_o *)(v5 + 16), (System_Int32_array **)panelData, v8, v9, v10, v11, v12, v13);
  v15 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_SchedulerTaskBase__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v15,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
  v16 = (SchedulerTaskNone_o *)sub_B70764(SchedulerTaskNone_TypeInfo);
  SchedulerTaskNone___ctor(v16, 0LL);
  if ( !v15 )
    goto LABEL_23;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v15,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v16,
    (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_SchedulerTaskBase__Add__);
  if ( !*(_QWORD *)v14 || *(int *)(*(_QWORD *)v14 + 40LL) < 1 )
    return (System_Collections_Generic_List_SchedulerTaskBase__o *)v15;
  mapInfo = this->fields.mapInfo;
  if ( !mapInfo )
    goto LABEL_23;
  SpotList = MapControl_MapInfo__GetSpotList(mapInfo, 0LL);
  v18 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B70764(System_Predicate_MapControl_SpotInfo__TypeInfo);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v18,
    (Il2CppObject *)v5,
    Method_SubmarineMapManager___c__DisplayClass95_0__CreateRevealSpotOnPanelTasks_b__0__,
    (const MethodInfo_2BF23B8 *)Method_System_Predicate_MapControl_SpotInfo___ctor__);
  if ( !SpotList )
    goto LABEL_23;
  if ( !System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
          (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)SpotList,
          (System_Predicate_T__o *)v18,
          (const MethodInfo_3025F48 *)Method_System_Collections_Generic_List_MapControl_SpotInfo__Find__) )
    return (System_Collections_Generic_List_SchedulerTaskBase__o *)v15;
  mapInfo = (MapControl_MapInfo_o *)this->fields.rootSpotP;
  if ( !mapInfo )
    goto LABEL_23;
  mapInfo = (MapControl_MapInfo_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)mapInfo, 0LL);
  v19 = *(_QWORD *)v14;
  if ( !*(_QWORD *)v14 )
    goto LABEL_23;
  v20 = (UnityEngine_Transform_o *)mapInfo;
  v21 = *(_DWORD *)(v19 + 40);
  if ( (BYTE3(SrcSpotBasePrefab_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SrcSpotBasePrefab_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SrcSpotBasePrefab_TypeInfo);
  }
  mapInfo = (MapControl_MapInfo_o *)SrcSpotBasePrefab__GetGobjName(v21, 0LL);
  if ( !v20 )
    goto LABEL_23;
  v22 = (UnityEngine_Object_o *)UnityEngine_Transform__Find(v20, (System_String_o *)mapInfo, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  mapInfo = (MapControl_MapInfo_o *)UnityEngine_Object__op_Equality(v22, 0LL, 0LL);
  if ( ((unsigned __int8)mapInfo & 1) != 0 )
    return (System_Collections_Generic_List_SchedulerTaskBase__o *)v15;
  if ( !v22 )
LABEL_23:
    sub_B7076C(mapInfo, v7);
  Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                              (UnityEngine_Component_o *)v22,
                              (const MethodInfo_1BE3FF4 *)Method_UnityEngine_Component_GetComponent_SrcSpotBasePrefab___);
  return SubmarineMapManager__CreateRevealSpotTasks(this, (SrcSpotBasePrefab_o *)Component_WebViewObject, v25);
}


System_Collections_Generic_List_SchedulerTaskBase__o *__fastcall SubmarineMapManager__CreateRevealSpotTasks(
        SubmarineMapManager_o *this,
        SrcSpotBasePrefab_o *spot,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v5; // x20
  MapControl_SpotInfo_o *mMapCtrl_SpotInfo; // x0
  __int64 v7; // x1
  SpotEntity_o *Mine; // x22
  const MethodInfo *v9; // x2
  __int64 v10; // x21
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  __int64 v17; // x21
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7

  if ( (byte_4350E92 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_SchedulerTaskBase__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
    sub_B70694(&System_Collections_Generic_List_SchedulerTaskBase__TypeInfo);
    sub_B70694(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_B70694(&SingletonTemplate_QuestTree__TypeInfo);
    sub_B70694(&SubmarineLightenSpotPerformance_TypeInfo);
    sub_B70694(&SubmarineRevealSpotPerformance_TypeInfo);
    byte_4350E92 = 1;
  }
  v5 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_SchedulerTaskBase__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v5,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
  if ( !spot )
    goto LABEL_19;
  mMapCtrl_SpotInfo = spot->fields.mMapCtrl_SpotInfo;
  if ( !mMapCtrl_SpotInfo )
    goto LABEL_19;
  if ( mMapCtrl_SpotInfo->fields.dispType )
    return (System_Collections_Generic_List_SchedulerTaskBase__o *)v5;
  Mine = MapControl_SpotInfo__GetMine(mMapCtrl_SpotInfo, 0LL);
  if ( (BYTE3(SingletonTemplate_QuestTree__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_QuestTree__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_QuestTree__TypeInfo);
  }
  mMapCtrl_SpotInfo = (MapControl_SpotInfo_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2CE9CB0 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !mMapCtrl_SpotInfo )
    goto LABEL_19;
  if ( !QuestTree__IsSpotSatisfyingDisplayCond((QuestTree_o *)mMapCtrl_SpotInfo, Mine, 0, 0LL) )
    return (System_Collections_Generic_List_SchedulerTaskBase__o *)v5;
  SubmarineMapManager__AdjustSpotPosition(this, spot, v9);
  v10 = sub_B70764(SubmarineRevealSpotPerformance_TypeInfo);
  SchedulerTaskBase___ctor((SchedulerTaskBase_o *)v10, 0LL);
  *(_QWORD *)(v10 + 48) = spot;
  sub_B70630((BattleServantConfConponent_o *)(v10 + 48), (System_Int32_array **)spot, v11, v12, v13, v14, v15, v16);
  if ( !v5 )
    goto LABEL_19;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v5,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v10,
    (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_SchedulerTaskBase__Add__);
  if ( (BYTE3(SingletonTemplate_QuestTree__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_QuestTree__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_QuestTree__TypeInfo);
  }
  mMapCtrl_SpotInfo = (MapControl_SpotInfo_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2CE9CB0 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !mMapCtrl_SpotInfo )
LABEL_19:
    sub_B7076C(mMapCtrl_SpotInfo, v7);
  if ( QuestTree__IsSpotSatisfyingActiveCond((QuestTree_o *)mMapCtrl_SpotInfo, Mine, 0LL) )
  {
    v17 = sub_B70764(SubmarineLightenSpotPerformance_TypeInfo);
    SchedulerTaskBase___ctor((SchedulerTaskBase_o *)v17, 0LL);
    *(_QWORD *)(v17 + 48) = spot;
    sub_B70630((BattleServantConfConponent_o *)(v17 + 48), (System_Int32_array **)spot, v18, v19, v20, v21, v22, v23);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v5,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v17,
      (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_SchedulerTaskBase__Add__);
  }
  return (System_Collections_Generic_List_SchedulerTaskBase__o *)v5;
}


SchedulerTaskBase_o *__fastcall SubmarineMapManager__CreateScanOpenPanelTask(
        SubmarineMapManager_o *this,
        int32_t scanId,
        SubmarineMapPanelData_o *panelData,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v7; // x20
  SubmarineSettingsManager_o *Settings_k__BackingField; // x0
  __int64 v9; // x1
  struct SubmarineMapDataManager_o *submarineData; // x8
  float ScanOpenPanelInterval; // s8
  const MethodInfo *v12; // x3
  System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *v13; // x21
  SubmarineMapManager___c_c *v14; // x8
  struct SubmarineMapManager___c_StaticFields *static_fields; // x9
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__98_0; // x22
  Il2CppObject *v17; // x23
  struct SubmarineMapManager___c_StaticFields *v18; // x0
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  System_Collections_Generic_List_T__o *All; // x0
  SubmarineMapManager___c_c *v26; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v27; // x21
  struct SubmarineMapManager___c_StaticFields *v28; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__98_1; // x22
  Il2CppObject *v30; // x23
  struct SubmarineMapManager___c_StaticFields *v31; // x0
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  int32_t v38; // w23
  SubmarineMapManager___c__DisplayClass98_0_o *v39; // x22
  int v40; // w27
  int v41; // w25
  float v42; // s9
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v43; // x23
  System_Collections_Generic_List_T__o *v44; // x23
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v45; // x0
  _BOOL8 v46; // x0
  __int64 v47; // x1
  const MethodInfo *v48; // x3
  Il2CppObject *current; // x23
  SubmarineMapDataManager_o *v50; // x0
  SubmarineMapPanelData_o *PanelByIndices; // x0
  const MethodInfo *v52; // x2
  float v53; // s0
  SchedulerTaskBase_o *HitObstractTask; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v55; // x1
  SchedulerTaskBase_o *OpenPanelAndRevealSpotTask; // x0
  int v57; // w8
  int v58; // w8
  SchedulerTaskParallel_o *v59; // x19
  _BYTE v61[28]; // [xsp+0h] [xbp-A0h] BYREF
  int v62; // [xsp+1Ch] [xbp-84h]
  System_Collections_Generic_List_Enumerator_T__o v63; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4350E8F & 1) == 0 )
  {
    sub_B70694(&Method_System_Linq_Enumerable_Max_SubmarineScanEvent___);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_SubmarineScanEvent__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_SubmarineScanEvent__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_SubmarineScanEvent__get_Current__);
    sub_B70694(&Method_System_Func_SubmarineScanEvent__int___ctor__);
    sub_B70694(&System_Func_SubmarineScanEvent__int__TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_SchedulerTaskBase__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_SubmarineScanEvent__FindAll__);
    sub_B70694(&Method_System_Collections_Generic_List_SubmarineScanEvent__GetEnumerator__);
    sub_B70694(&Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
    sub_B70694(&System_Collections_Generic_List_SchedulerTaskBase__TypeInfo);
    sub_B70694(&Method_System_Predicate_SubmarineScanEvent___ctor__);
    sub_B70694(&System_Predicate_SubmarineScanEvent__TypeInfo);
    sub_B70694(&SchedulerTaskParallel_TypeInfo);
    sub_B70694(&Method_SubmarineMapManager___c__CreateScanOpenPanelTask_b__98_0__);
    sub_B70694(&Method_SubmarineMapManager___c__CreateScanOpenPanelTask_b__98_1__);
    sub_B70694(&Method_SubmarineMapManager___c__DisplayClass98_0__CreateScanOpenPanelTask_b__2__);
    sub_B70694(&SubmarineMapManager___c__DisplayClass98_0_TypeInfo);
    sub_B70694(&SubmarineMapManager___c_TypeInfo);
    byte_4350E8F = 1;
  }
  memset(&v63, 0, sizeof(v63));
  v62 = 0;
  v7 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_SchedulerTaskBase__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v7,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
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
                                                             v12);
  v13 = (System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *)Settings_k__BackingField;
  v14 = SubmarineMapManager___c_TypeInfo;
  if ( (BYTE3(SubmarineMapManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SubmarineMapManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SubmarineMapManager___c_TypeInfo);
    v14 = SubmarineMapManager___c_TypeInfo;
  }
  static_fields = v14->static_fields;
  _9__98_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)static_fields->__9__98_0;
  if ( !_9__98_0 )
  {
    if ( (BYTE3(v14->vtable._0_Equals.methodPtr) & 4) != 0 && !v14->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v14);
      static_fields = SubmarineMapManager___c_TypeInfo->static_fields;
    }
    v17 = (Il2CppObject *)static_fields->__9;
    _9__98_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B70764(System_Predicate_SubmarineScanEvent__TypeInfo);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__98_0,
      v17,
      Method_SubmarineMapManager___c__CreateScanOpenPanelTask_b__98_0__,
      (const MethodInfo_2BF23B8 *)Method_System_Predicate_SubmarineScanEvent___ctor__);
    v18 = SubmarineMapManager___c_TypeInfo->static_fields;
    v18->__9__98_0 = (struct System_Predicate_SubmarineScanEvent__o *)_9__98_0;
    sub_B70630(
      (BattleServantConfConponent_o *)&v18->__9__98_0,
      (System_Int32_array **)_9__98_0,
      v19,
      v20,
      v21,
      v22,
      v23,
      v24);
  }
  if ( !v13 )
    goto LABEL_47;
  All = System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo___FindAll(
          v13,
          (System_Predicate_T__o *)_9__98_0,
          (const MethodInfo_3026010 *)Method_System_Collections_Generic_List_SubmarineScanEvent__FindAll__);
  v26 = SubmarineMapManager___c_TypeInfo;
  v27 = (System_Collections_Generic_IEnumerable_TSource__o *)All;
  if ( (BYTE3(SubmarineMapManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SubmarineMapManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SubmarineMapManager___c_TypeInfo);
    v26 = SubmarineMapManager___c_TypeInfo;
  }
  v28 = v26->static_fields;
  _9__98_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)v28->__9__98_1;
  if ( !_9__98_1 )
  {
    if ( (BYTE3(v26->vtable._0_Equals.methodPtr) & 4) != 0 && !v26->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v26);
      v28 = SubmarineMapManager___c_TypeInfo->static_fields;
    }
    v30 = (Il2CppObject *)v28->__9;
    _9__98_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B70764(System_Func_SubmarineScanEvent__int__TypeInfo);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__98_1,
      v30,
      Method_SubmarineMapManager___c__CreateScanOpenPanelTask_b__98_1__,
      (const MethodInfo_29AD124 *)Method_System_Func_SubmarineScanEvent__int___ctor__);
    v31 = SubmarineMapManager___c_TypeInfo->static_fields;
    v31->__9__98_1 = (struct System_Func_SubmarineScanEvent__int__o *)_9__98_1;
    sub_B70630(
      (BattleServantConfConponent_o *)&v31->__9__98_1,
      (System_Int32_array **)_9__98_1,
      v32,
      v33,
      v34,
      v35,
      v36,
      v37);
  }
  v38 = System_Linq_Enumerable__Max_BattleBuffData_BuffData_(
          v27,
          (System_Func_TSource__int__o *)_9__98_1,
          (const MethodInfo_1CBF1A4 *)Method_System_Linq_Enumerable_Max_SubmarineScanEvent___);
  v39 = (SubmarineMapManager___c__DisplayClass98_0_o *)sub_B70764(SubmarineMapManager___c__DisplayClass98_0_TypeInfo);
  SubmarineMapManager___c__DisplayClass98_0___ctor(v39, 0LL);
  if ( !v39 )
    goto LABEL_47;
  v40 = v38 + 1;
  v39->fields.i = 0;
  if ( v38 + 1 >= 1 )
  {
    v41 = 0;
    v42 = 0.0;
    while ( 1 )
    {
      v43 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B70764(System_Predicate_SubmarineScanEvent__TypeInfo);
      System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
        v43,
        (Il2CppObject *)v39,
        Method_SubmarineMapManager___c__DisplayClass98_0__CreateScanOpenPanelTask_b__2__,
        (const MethodInfo_2BF23B8 *)Method_System_Predicate_SubmarineScanEvent___ctor__);
      if ( !v27 )
        break;
      v44 = System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo___FindAll(
              (System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *)v27,
              (System_Predicate_T__o *)v43,
              (const MethodInfo_3026010 *)Method_System_Collections_Generic_List_SubmarineScanEvent__FindAll__);
      v45 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_SchedulerTaskBase__TypeInfo);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
        v45,
        (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
      if ( !v44 )
        break;
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)v61,
        (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v44,
        (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_SubmarineScanEvent__GetEnumerator__);
      v63 = *(System_Collections_Generic_List_Enumerator_T__o *)v61;
      while ( 1 )
      {
        v46 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v63,
                (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_SubmarineScanEvent__MoveNext__);
        if ( !v46 )
          break;
        current = v63.fields.current;
        if ( !v63.fields.current )
          sub_B7076C(v46, v47);
        v50 = this->fields.submarineData;
        if ( !v50 )
          sub_B7076C(0LL, v47);
        PanelByIndices = SubmarineMapDataManager__GetPanelByIndices(
                           v50,
                           (int32_t)v63.fields.current[1].klass,
                           HIDWORD(v63.fields.current[1].klass),
                           v48);
        if ( PanelByIndices )
        {
          if ( BYTE5(current[2].klass) )
          {
            HitObstractTask = SubmarineMapManager__CreateHitObstractTask(
                                (SubmarineMapManager_o *)PanelByIndices,
                                PanelByIndices,
                                v53,
                                v52);
            v55 = (EventMissionProgressRequest_Argument_ProgressData_o *)HitObstractTask;
            if ( !v7 )
              sub_B7076C(HitObstractTask, HitObstractTask);
          }
          else
          {
            OpenPanelAndRevealSpotTask = SubmarineMapManager__CreateOpenPanelAndRevealSpotTask(
                                           this,
                                           PanelByIndices,
                                           v42,
                                           v52);
            v55 = (EventMissionProgressRequest_Argument_ProgressData_o *)OpenPanelAndRevealSpotTask;
            if ( !v7 )
              sub_B7076C(OpenPanelAndRevealSpotTask, OpenPanelAndRevealSpotTask);
          }
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v7,
            v55,
            (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_SchedulerTaskBase__Add__);
        }
      }
      *(_DWORD *)&v61[4 * v41 + 24] = 274;
      v41 = ++v62;
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v63,
        (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_SubmarineScanEvent__Dispose__);
      if ( v41 )
      {
        v57 = v41 - 1;
        if ( *(_DWORD *)&v61[4 * v41 + 20] == 274 )
        {
          --v41;
          v62 = v57;
        }
      }
      v42 = ScanOpenPanelInterval + v42;
      v58 = v39->fields.i + 1;
      v39->fields.i = v58;
      if ( v58 >= v40 )
        goto LABEL_46;
    }
LABEL_47:
    sub_B7076C(Settings_k__BackingField, v9);
  }
LABEL_46:
  v59 = (SchedulerTaskParallel_o *)sub_B70764(SchedulerTaskParallel_TypeInfo);
  SchedulerTaskParallel___ctor_17533044(v59, (System_Collections_Generic_List_SchedulerTaskBase__o *)v7, 0LL);
  return (SchedulerTaskBase_o *)v59;
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
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  struct SubmarineMapDataManager_o *submarineData; // x8
  struct SubmarinePanelPositionCalculator_o *PositionCalculator_k__BackingField; // x8
  int32x2_t v18; // d11
  float32x2_t v19; // d9
  int32x2_t v20; // d10
  float32x2_t v21; // d8
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v22; // x19
  struct SubmarineMapDataManager_o *v23; // x8
  struct SubmarineSettingsManager_o *Settings_k__BackingField; // x8
  unsigned __int64 v25; // d0 OVERLAPPED
  float v26; // s8
  int v27; // s2
  int v28; // s1
  const MethodInfo *v29; // x2
  UnityEngine_Object_o *ScanAnimObjectPrefab; // x22
  const MethodInfo *v31; // x1
  UnityEngine_Object_o *HomeSpot; // x23
  float v33; // s2
  float v34; // s0
  float v35; // s1
  float v36; // s9
  UnityEngine_Transform_o *transform; // x23
  System_Int32_array **v38; // x0
  UnityEngine_GameObject_o **v39; // x24
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  UIWidget_o *Component_UIWidget; // x0
  unsigned __int64 v47; // d1 OVERLAPPED
  SubmarineScannerComponent_o *v48; // x22
  void (__fastcall *v49)(); // d0
  float magnitude; // s0
  struct SubmarineMapDataManager_o *v51; // x8
  struct SubmarineSettingsManager_o *v52; // x8
  float v53; // s0
  float v54; // s1
  float v55; // s2
  const MethodInfo *v56; // x1
  float JumpStartTime; // s10
  SchedulerTaskWaitTime_o *v58; // x25
  BattleServantConfConponent_o *p_StartCallback; // x25
  System_Delegate_o *StartCallback; // t1
  SchedulerTaskBase_TaskCallback_o *v61; // x27
  System_Int32_array **v62; // x0
  System_String_array **v63; // x2
  System_String_array **v64; // x3
  System_Boolean_array **v65; // x4
  System_Int32_array **v66; // x5
  System_Int32_array *v67; // x6
  System_Int32_array *v68; // x7
  System_Int32_array **v69; // x8
  struct SubmarineMapManager_PlayingScanVoiceData_o *playingScanVoiceData; // x8
  struct SubmarineMapManager_PlayingScanVoiceData_o *v71; // x8
  struct SubmarineMapManager_PlayingScanVoiceData_o *v72; // x8
  System_String_o *assetName; // x25
  System_String_o *vcName; // x26
  System_Int32_array **v75; // x0
  __int64 v76; // x25
  System_String_array **v77; // x2
  System_String_array **v78; // x3
  System_Boolean_array **v79; // x4
  System_Int32_array **v80; // x5
  System_Int32_array *v81; // x6
  System_Int32_array *v82; // x7
  __int64 v83; // x8
  System_String_o *v84; // x26
  SchedulerTaskWaitLoadAsset_o *v85; // x27
  System_String_array **v86; // x2
  System_String_array **v87; // x3
  System_Boolean_array **v88; // x4
  System_Int32_array **v89; // x5
  System_Int32_array *v90; // x6
  System_Int32_array *v91; // x7
  System_Int32_array **v92; // x1
  System_String_array **v93; // x2
  System_String_array **v94; // x3
  System_Boolean_array **v95; // x4
  System_Int32_array **v96; // x5
  System_Int32_array *v97; // x6
  System_Int32_array *v98; // x7
  System_Int32_array **v99; // x1
  float v100; // s10
  __int64 v101; // x25
  System_Delegate_o *v102; // x27
  SchedulerTaskBase_TaskCallback_o *v103; // x28
  System_Int32_array **v104; // x0
  System_String_array **v105; // x2
  System_String_array **v106; // x3
  System_Boolean_array **v107; // x4
  System_Int32_array **v108; // x5
  System_Int32_array *v109; // x6
  System_Int32_array *v110; // x7
  const MethodInfo *v111; // x1
  float SelectedPanelEffecFinishTime; // s10
  __int64 v113; // x25
  System_Delegate_o *v114; // x27
  SchedulerTaskBase_TaskCallback_o *v115; // x28
  System_Int32_array **v116; // x0
  System_String_array **v117; // x2
  System_String_array **v118; // x3
  System_Boolean_array **v119; // x4
  System_Int32_array **v120; // x5
  System_Int32_array *v121; // x6
  System_Int32_array *v122; // x7
  const MethodInfo *v123; // x1
  float JumpDuration; // s10
  void (__fastcall *v125)(); // d0 OVERLAPPED
  float v126; // s1
  float v127; // s0
  MapCamera_o *mapCamera; // x21
  float v129; // s11
  const MethodInfo_243B7C8 *v130; // x2
  MapCameraPerformance_o *v131; // x0
  System_Int32_array **v132; // x26
  UnityEngine_GameObject_o *v133; // x24
  SchedulerTaskMovePerformance_o *v134; // x0
  System_Int32_array **v135; // x21
  System_String_array **v136; // x2
  System_String_array **v137; // x3
  System_Boolean_array **v138; // x4
  System_Int32_array **v139; // x5
  System_Int32_array *v140; // x6
  System_Int32_array *v141; // x7
  SchedulerTaskBase_array *v142; // x24
  System_String_array **v143; // x2
  System_String_array **v144; // x3
  System_Boolean_array **v145; // x4
  System_Int32_array **v146; // x5
  System_Int32_array *v147; // x6
  System_Int32_array *v148; // x7
  SchedulerTaskParallel_o *v149; // x21
  const MethodInfo *v150; // x1
  SimpleAnimation_o *AnimationComponent; // x26
  struct SimpleAnimation_EditorState_o *state; // x8
  System_String_o **p_name; // x8
  System_String_o *v154; // x27
  __int64 v155; // x24
  System_Delegate_o *v156; // x27
  SchedulerTaskBase_TaskCallback_o *v157; // x28
  System_Int32_array **v158; // x0
  System_String_array **v159; // x2
  System_String_array **v160; // x3
  System_Boolean_array **v161; // x4
  System_Int32_array **v162; // x5
  System_Int32_array *v163; // x6
  System_Int32_array *v164; // x7
  __int64 v165; // x20
  System_String_array **v166; // x2
  System_String_array **v167; // x3
  System_Boolean_array **v168; // x4
  System_Int32_array **v169; // x5
  System_Int32_array *v170; // x6
  System_Int32_array *v171; // x7
  __int64 v172; // x24
  System_String_array **v173; // x2
  System_String_array **v174; // x3
  System_Boolean_array **v175; // x4
  System_Int32_array **v176; // x5
  System_Int32_array *v177; // x6
  System_Int32_array *v178; // x7
  System_String_array **v179; // x2
  System_String_array **v180; // x3
  System_Boolean_array **v181; // x4
  System_Int32_array **v182; // x5
  System_Int32_array *v183; // x6
  System_Int32_array *v184; // x7
  SchedulerTaskOrthostichy_o *v185; // x21
  System_String_array **v186; // x2
  System_String_array **v187; // x3
  System_Boolean_array **v188; // x4
  System_Int32_array **v189; // x5
  System_Int32_array *v190; // x6
  System_Int32_array *v191; // x7
  SchedulerTaskParallel_o *v192; // x21
  float TimeToStartOpenPanel; // s8
  SchedulerTaskWaitTime_o *v194; // x20
  __int64 v196; // x0
  __int64 v197; // x0
  SubmarineMapManager_o *v198; // x0
  int32_t v199; // w1
  SubmarineMapPanelData_o *v200; // x2
  const MethodInfo *v201; // x3
  System_Int32_array **v202; // [xsp+8h] [xbp-E8h]
  float v203; // [xsp+20h] [xbp-D0h]
  float v204; // [xsp+30h] [xbp-C0h]
  UnityEngine_Vector2_o value; // [xsp+40h] [xbp-B0h]
  System_Nullable_float__o v206; // [xsp+50h] [xbp-A0h] BYREF
  System_Nullable_Vector2__o v207; // [xsp+58h] [xbp-98h] BYREF
  MethodInfo methoda; // [xsp+68h] [xbp-88h] BYREF
  System_Nullable_float__o v209; // 0:x0.8
  System_Nullable_float__o v210; // 0:x4.8
  System_Nullable_Vector2__o v211; // 0:x0.12
  UnityEngine_Vector2_o v212; // 0:s0.4,4:s1.4
  UnityEngine_Vector3_o v213; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v214; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v215; // 0:s3.4,4:s4.4,8:s5.4

  if ( (byte_4350E8B & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_EventPanelScanMaster___);
    sub_B70694(&Method_DataMasterBase_EventPanelScanMaster__EventPanelScanEntity__int__GetEntity__);
    sub_B70694(&Method_GameObjectExtensions_SafeGetComponent_SubmarineScanVoiceComponent___);
    sub_B70694(&Method_GameObjectExtensions_SafeGetComponent_SubmarineScannerComponent___);
    sub_B70694(&Method_System_Collections_Generic_List_SchedulerTaskBase__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
    sub_B70694(&System_Collections_Generic_List_SchedulerTaskBase__TypeInfo);
    sub_B70694(&MapCameraPerformance_TypeInfo);
    sub_B70694(&Method_System_Nullable_float___ctor__);
    sub_B70694(&Method_System_Nullable_Vector2___ctor__);
    sub_B70694(&Method_UnityEngine_Object_Instantiate_GameObject____69308712);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&SchedulerTaskBase___TypeInfo);
    sub_B70694(&SchedulerTaskMovePerformance_TypeInfo);
    sub_B70694(&SchedulerTaskOrthostichy_TypeInfo);
    sub_B70694(&SchedulerTaskParallel_TypeInfo);
    sub_B70694(&SchedulerTaskSimpleAnimation_TypeInfo);
    sub_B70694(&SchedulerTaskWaitLoadAsset_TypeInfo);
    sub_B70694(&SchedulerTaskWaitTime_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&SoundManager_TypeInfo);
    sub_B70694(&SchedulerTaskBase_TaskCallback_TypeInfo);
    sub_B70694(&Method_SubmarineMapManager___c__DisplayClass94_0__CreateScanTask_b__0__);
    sub_B70694(&Method_SubmarineMapManager___c__DisplayClass94_0__CreateScanTask_b__1__);
    sub_B70694(&Method_SubmarineMapManager___c__DisplayClass94_0__CreateScanTask_b__2__);
    sub_B70694(&Method_SubmarineMapManager___c__DisplayClass94_0__CreateScanTask_b__3__);
    sub_B70694(&SubmarineMapManager___c__DisplayClass94_0_TypeInfo);
    byte_4350E8B = 1;
  }
  LODWORD(methoda.invoker_method) = 0;
  methoda.methodPointer = 0LL;
  v7 = sub_B70764(SubmarineMapManager___c__DisplayClass94_0_TypeInfo);
  SubmarineMapManager___c__DisplayClass94_0___ctor((SubmarineMapManager___c__DisplayClass94_0_o *)v7, 0LL);
  if ( !v7 )
    goto LABEL_88;
  *(_QWORD *)(v7 + 32) = this;
  sub_B70630((BattleServantConfConponent_o *)(v7 + 32), (System_Int32_array **)this, v10, v11, v12, v13, v14, v15);
  submarineData = this->fields.submarineData;
  if ( !submarineData )
    goto LABEL_88;
  if ( !panelData )
    goto LABEL_88;
  PositionCalculator_k__BackingField = submarineData->fields._PositionCalculator_k__BackingField;
  if ( !PositionCalculator_k__BackingField )
    goto LABEL_88;
  v18.n64_u64[0] = *(unsigned __int64 *)&panelData->fields._HIndex_k__BackingField;
  v19.n64_u64[0] = (unsigned __int64)PositionCalculator_k__BackingField->fields._PanelUnitSize_k__BackingField;
  v20.n64_u64[0] = *(unsigned __int64 *)&PositionCalculator_k__BackingField->fields._HorizontalPanelNum_k__BackingField;
  v21.n64_u64[0] = *(unsigned __int64 *)&PositionCalculator_k__BackingField->fields._OffsetX_k__BackingField;
  v22 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_SchedulerTaskBase__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v22,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
  v23 = this->fields.submarineData;
  if ( !v23 )
    goto LABEL_88;
  Settings_k__BackingField = v23->fields._Settings_k__BackingField;
  if ( !Settings_k__BackingField )
    goto LABEL_88;
  v25 = vadd_f32(
          v21,
          vmul_f32(
            vmul_f32(v19, vcvt_f32_s32(vsub_s32((int32x2_t)(vshl_n_s32(v18, 1uLL).n64_u64[0] | 0x100000001LL), v20))),
            (float32x2_t)0x3F0000003F000000LL)).n64_u64[0];
  v26 = *((float *)&v25 + 1);
  v27 = 0;
  v28 = HIDWORD(v25);
  value = (UnityEngine_Vector2_o)v25;
  MoveCameraToPositionTask = (__int64)SubmarineMapManager__CreateMoveCameraToPositionTask(
                                        this,
                                        *(UnityEngine_Vector3_o *)&v25,
                                        1.0,
                                        Settings_k__BackingField->fields._ScanRangeToHomeSpotCameraDuration_k__BackingField,
                                        v9);
  if ( !v22 )
    goto LABEL_88;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v22,
    (EventMissionProgressRequest_Argument_ProgressData_o *)MoveCameraToPositionTask,
    (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_SchedulerTaskBase__Add__);
  MoveCameraToPositionTask = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !MoveCameraToPositionTask )
    goto LABEL_88;
  MoveCameraToPositionTask = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        (DataManager_o *)MoveCameraToPositionTask,
                                        (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_EventPanelScanMaster___);
  if ( !MoveCameraToPositionTask )
    goto LABEL_88;
  MoveCameraToPositionTask = (__int64)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                        (DataMasterBase_WarMaster__WarEntity__int__o *)MoveCameraToPositionTask,
                                        scanId,
                                        (const MethodInfo_21C0440 *)Method_DataMasterBase_EventPanelScanMaster__EventPanelScanEntity__int__GetEntity__);
  if ( !MoveCameraToPositionTask )
    return (System_Collections_Generic_List_SchedulerTaskBase__o *)v22;
  if ( !this->fields.assetManager )
    goto LABEL_88;
  ScanAnimObjectPrefab = (UnityEngine_Object_o *)SubmarineMapAssetManager__GetScanAnimObjectPrefab(
                                                   this->fields.assetManager,
                                                   *(_DWORD *)(MoveCameraToPositionTask + 56),
                                                   v29);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(ScanAnimObjectPrefab, 0LL, 0LL) )
    return (System_Collections_Generic_List_SchedulerTaskBase__o *)v22;
  HomeSpot = (UnityEngine_Object_o *)SubmarineMapManager__GetHomeSpot(this, v31);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  MoveCameraToPositionTask = UnityEngine_Object__op_Equality(HomeSpot, 0LL, 0LL);
  if ( (MoveCameraToPositionTask & 1) != 0 )
    return (System_Collections_Generic_List_SchedulerTaskBase__o *)v22;
  if ( !HomeSpot )
    goto LABEL_88;
  MoveCameraToPositionTask = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)HomeSpot, 0LL);
  if ( !MoveCameraToPositionTask )
    goto LABEL_88;
  *(UnityEngine_Vector3_o *)(&v33 - 2) = UnityEngine_Transform__get_localPosition(
                                           (UnityEngine_Transform_o *)MoveCameraToPositionTask,
                                           0LL);
  MoveCameraToPositionTask = (__int64)this->fields.effectContainer;
  v204 = v34;
  v203 = v35;
  if ( !MoveCameraToPositionTask )
    goto LABEL_88;
  v36 = v33;
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)MoveCameraToPositionTask, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v38 = (System_Int32_array **)UnityEngine_Object__Instantiate_UILabel_(
                                 (UILabel_o *)ScanAnimObjectPrefab,
                                 transform,
                                 (const MethodInfo_1D588A0 *)Method_UnityEngine_Object_Instantiate_GameObject____69308712);
  *(_QWORD *)(v7 + 16) = v38;
  v39 = (UnityEngine_GameObject_o **)(v7 + 16);
  sub_B70630((BattleServantConfConponent_o *)(v7 + 16), v38, v40, v41, v42, v43, v44, v45);
  v213.fields.y = v203;
  v213.fields.x = v204;
  v213.fields.z = v36;
  GameObjectExtensions__SetLocalPosition(*(UnityEngine_GameObject_o **)(v7 + 16), v213, 0LL);
  MoveCameraToPositionTask = *(_QWORD *)(v7 + 16);
  if ( !MoveCameraToPositionTask )
    goto LABEL_88;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)MoveCameraToPositionTask, 0, 0LL);
  Component_UIWidget = GameObjectExtensions__SafeGetComponent_UIWidget_(
                         *v39,
                         (const MethodInfo_1D4BBAC *)Method_GameObjectExtensions_SafeGetComponent_SubmarineScannerComponent___);
  v47 = __PAIR64__(LODWORD(v203), LODWORD(v204));
  v48 = (SubmarineScannerComponent_o *)Component_UIWidget;
  *(float *)&methoda.invoker_method = v36;
  v49 = (void (__fastcall *)())vsub_f32((float32x2_t)__PAIR64__(LODWORD(v203), LODWORD(v204)), (float32x2_t)value).n64_u64[0];
  methoda.methodPointer = v49;
  magnitude = UnityEngine_Vector3__get_magnitude(*(UnityEngine_Vector3_o *)((char *)&v47 - 4), &methoda);
  if ( !v48 )
    goto LABEL_88;
  SubmarineScannerComponent__PrepareAnimation(v48, magnitude, v9);
  if ( !v48->fields.state )
    return (System_Collections_Generic_List_SchedulerTaskBase__o *)v22;
  v22 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_SchedulerTaskBase__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v22,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
  v51 = this->fields.submarineData;
  if ( !v51 )
    goto LABEL_88;
  v52 = v51->fields._Settings_k__BackingField;
  v54 = v203;
  v53 = v204;
  if ( !v52 )
    goto LABEL_88;
  v55 = v36;
  MoveCameraToPositionTask = (__int64)SubmarineMapManager__CreateMoveCameraToPositionTask(
                                        this,
                                        *(UnityEngine_Vector3_o *)&v53,
                                        1.0,
                                        v52->fields._ScanRangeToHomeSpotCameraDuration_k__BackingField,
                                        v9);
  if ( !v22 )
    goto LABEL_88;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v22,
    (EventMissionProgressRequest_Argument_ProgressData_o *)MoveCameraToPositionTask,
    (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_SchedulerTaskBase__Add__);
  JumpStartTime = SubmarineScannerComponent__GetJumpStartTime(v48, v56);
  v58 = (SchedulerTaskWaitTime_o *)sub_B70764(SchedulerTaskWaitTime_TypeInfo);
  SchedulerTaskWaitTime___ctor(v58, JumpStartTime, 0LL);
  if ( !v58 )
    goto LABEL_88;
  v202 = (System_Int32_array **)v58;
  StartCallback = (System_Delegate_o *)v58->fields.StartCallback;
  p_StartCallback = (BattleServantConfConponent_o *)&v58->fields.StartCallback;
  v61 = (SchedulerTaskBase_TaskCallback_o *)sub_B70764(SchedulerTaskBase_TaskCallback_TypeInfo);
  SchedulerTaskBase_TaskCallback___ctor(
    v61,
    (Il2CppObject *)v7,
    Method_SubmarineMapManager___c__DisplayClass94_0__CreateScanTask_b__0__,
    0LL);
  v62 = (System_Int32_array **)System_Delegate__Combine(StartCallback, (System_Delegate_o *)v61, 0LL);
  v69 = v62;
  if ( !v62 || *v62 == (System_Int32_array *)SchedulerTaskBase_TaskCallback_TypeInfo )
  {
    p_StartCallback->klass = (BattleServantConfConponent_c *)v62;
    sub_B70630(p_StartCallback, v62, v63, v64, v65, v66, v67, v68);
    playingScanVoiceData = this->fields.playingScanVoiceData;
    if ( !playingScanVoiceData )
      goto LABEL_88;
    MoveCameraToPositionTask = System_String__IsNullOrEmpty(playingScanVoiceData->fields.vcName, 0LL);
    if ( (MoveCameraToPositionTask & 1) == 0 )
    {
      v71 = this->fields.playingScanVoiceData;
      if ( !v71 )
        goto LABEL_88;
      MoveCameraToPositionTask = System_String__IsNullOrEmpty(v71->fields.assetName, 0LL);
      if ( (MoveCameraToPositionTask & 1) == 0 )
      {
        v72 = this->fields.playingScanVoiceData;
        if ( !v72 )
          goto LABEL_88;
        assetName = v72->fields.assetName;
        vcName = v72->fields.vcName;
        if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SoundManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        }
        SoundManager__stopVoice(assetName, vcName, 0.0, 0LL);
      }
    }
    v75 = (System_Int32_array **)GameObjectExtensions__SafeGetComponent_UIWidget_(
                                   *(UnityEngine_GameObject_o **)(v7 + 16),
                                   (const MethodInfo_1D4BBAC *)Method_GameObjectExtensions_SafeGetComponent_SubmarineScanVoiceComponent___);
    v76 = v7 + 24;
    *(_QWORD *)(v7 + 24) = v75;
    sub_B70630((BattleServantConfConponent_o *)(v7 + 24), v75, v77, v78, v79, v80, v81, v82);
    v83 = *(_QWORD *)(v7 + 24);
    if ( !v83 )
      goto LABEL_88;
    v84 = *(System_String_o **)(v83 + 48);
    v85 = (SchedulerTaskWaitLoadAsset_o *)sub_B70764(SchedulerTaskWaitLoadAsset_TypeInfo);
    SchedulerTaskWaitLoadAsset___ctor(v85, v84, 0LL);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v22,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v85,
      (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_SchedulerTaskBase__Add__);
    if ( !*(_QWORD *)v76 )
      goto LABEL_88;
    MoveCameraToPositionTask = (__int64)this->fields.playingScanVoiceData;
    if ( !MoveCameraToPositionTask )
      goto LABEL_88;
    v92 = *(System_Int32_array ***)(*(_QWORD *)v76 + 48LL);
    *(_QWORD *)(MoveCameraToPositionTask + 16) = v92;
    sub_B70630((BattleServantConfConponent_o *)(MoveCameraToPositionTask + 16), v92, v86, v87, v88, v89, v90, v91);
    if ( !*(_QWORD *)v76
      || (MoveCameraToPositionTask = (__int64)this->fields.playingScanVoiceData) == 0
      || (v99 = *(System_Int32_array ***)(*(_QWORD *)v76 + 40LL),
          *(_QWORD *)(MoveCameraToPositionTask + 24) = v99,
          sub_B70630((BattleServantConfConponent_o *)(MoveCameraToPositionTask + 24), v99, v93, v94, v95, v96, v97, v98),
          !*(_QWORD *)v76)
      || (v100 = *(float *)(*(_QWORD *)v76 + 24LL),
          v101 = sub_B70764(SchedulerTaskWaitTime_TypeInfo),
          SchedulerTaskWaitTime___ctor((SchedulerTaskWaitTime_o *)v101, v100, 0LL),
          !v101) )
    {
LABEL_88:
      sub_B7076C(MoveCameraToPositionTask, v9);
    }
    v102 = *(System_Delegate_o **)(v101 + 24);
    v103 = (SchedulerTaskBase_TaskCallback_o *)sub_B70764(SchedulerTaskBase_TaskCallback_TypeInfo);
    SchedulerTaskBase_TaskCallback___ctor(
      v103,
      (Il2CppObject *)v7,
      Method_SubmarineMapManager___c__DisplayClass94_0__CreateScanTask_b__1__,
      0LL);
    v104 = (System_Int32_array **)System_Delegate__Combine(v102, (System_Delegate_o *)v103, 0LL);
    v69 = v104;
    if ( !v104 || *v104 == (System_Int32_array *)SchedulerTaskBase_TaskCallback_TypeInfo )
    {
      *(_QWORD *)(v101 + 24) = v104;
      sub_B70630((BattleServantConfConponent_o *)(v101 + 24), v104, v105, v106, v107, v108, v109, v110);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v22,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v101,
        (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_SchedulerTaskBase__Add__);
      SelectedPanelEffecFinishTime = SubmarineScannerComponent__GetSelectedPanelEffecFinishTime(v48, v111);
      v113 = sub_B70764(SchedulerTaskWaitTime_TypeInfo);
      SchedulerTaskWaitTime___ctor((SchedulerTaskWaitTime_o *)v113, SelectedPanelEffecFinishTime, 0LL);
      if ( !v113 )
        goto LABEL_88;
      v114 = *(System_Delegate_o **)(v113 + 32);
      v115 = (SchedulerTaskBase_TaskCallback_o *)sub_B70764(SchedulerTaskBase_TaskCallback_TypeInfo);
      SchedulerTaskBase_TaskCallback___ctor(
        v115,
        (Il2CppObject *)v7,
        Method_SubmarineMapManager___c__DisplayClass94_0__CreateScanTask_b__2__,
        0LL);
      v116 = (System_Int32_array **)System_Delegate__Combine(v114, (System_Delegate_o *)v115, 0LL);
      v69 = v116;
      if ( !v116 || *v116 == (System_Int32_array *)SchedulerTaskBase_TaskCallback_TypeInfo )
      {
        *(_QWORD *)(v113 + 32) = v116;
        sub_B70630((BattleServantConfConponent_o *)(v113 + 32), v116, v117, v118, v119, v120, v121, v122);
        *(_BYTE *)(v113 + 16) = 1;
        JumpDuration = SubmarineScannerComponent__GetJumpDuration(v48, v123);
        v125 = (void (__fastcall *)())vsub_f32(
                                        (float32x2_t)value,
                                        (float32x2_t)__PAIR64__(LODWORD(v203), LODWORD(v204))).n64_u64[0];
        v126 = 0.0 - v36;
        methoda.methodPointer = v125;
        *(float *)&methoda.invoker_method = 0.0 - v36;
        v127 = UnityEngine_Vector3__get_magnitude(*(UnityEngine_Vector3_o *)&v125, &methoda);
        mapCamera = this->fields.mapCamera;
        v129 = v127 / JumpDuration;
        v212.fields.x = value.fields.x;
        v211.fields.value = (struct UnityEngine_Vector2_o)&v207;
        *(_DWORD *)&v211.fields.has_value = Method_System_Nullable_Vector2___ctor__;
        v212.fields.y = v26;
        *(_DWORD *)&v207.fields.has_value = 0;
        v207.fields.value = 0LL;
        System_Nullable_Vector2____ctor(v211, v212, v130);
        v209 = (System_Nullable_float__o)&v206;
        v206 = 0LL;
        System_Nullable_float____ctor(v209, 1.0, (const MethodInfo_2439C24 *)Method_System_Nullable_float___ctor__);
        v131 = (MapCameraPerformance_o *)sub_B70764(MapCameraPerformance_TypeInfo);
        v210 = v206;
        v132 = (System_Int32_array **)v131;
        MapCameraPerformance___ctor(v131, mapCamera, JumpDuration, v207, v210, 0, 0LL);
        v133 = *v39;
        v134 = (SchedulerTaskMovePerformance_o *)sub_B70764(SchedulerTaskMovePerformance_TypeInfo);
        v214.fields.y = v203;
        v214.fields.x = v204;
        v215.fields.x = value.fields.x;
        v215.fields.z = 0.0;
        v214.fields.z = v36;
        v215.fields.y = v26;
        v135 = (System_Int32_array **)v134;
        SchedulerTaskMovePerformance___ctor(v134, v133, v214, v215, v129, 0, 0LL);
        MoveCameraToPositionTask = sub_B706AC(SchedulerTaskBase___TypeInfo, 2LL);
        if ( !MoveCameraToPositionTask )
          goto LABEL_88;
        v142 = (SchedulerTaskBase_array *)MoveCameraToPositionTask;
        if ( v132 )
        {
          MoveCameraToPositionTask = sub_B70754(v132, *(_QWORD *)(*(_QWORD *)MoveCameraToPositionTask + 64LL));
          if ( !MoveCameraToPositionTask )
            goto LABEL_90;
        }
        if ( !v142->max_length )
          goto LABEL_89;
        v142->m_Items[0] = (SchedulerTaskBase_o *)v132;
        sub_B70630((BattleServantConfConponent_o *)v142->m_Items, v132, v136, v137, v138, v139, v140, v141);
        if ( v135 )
        {
          MoveCameraToPositionTask = sub_B70754(v135, v142->obj.klass->_1.element_class);
          if ( !MoveCameraToPositionTask )
            goto LABEL_90;
        }
        if ( v142->max_length <= 1 )
          goto LABEL_89;
        v142->m_Items[1] = (SchedulerTaskBase_o *)v135;
        sub_B70630((BattleServantConfConponent_o *)&v142->m_Items[1], v135, v143, v144, v145, v146, v147, v148);
        v149 = (SchedulerTaskParallel_o *)sub_B70764(SchedulerTaskParallel_TypeInfo);
        SchedulerTaskParallel___ctor(v149, v142, 0LL);
        AnimationComponent = SubmarineScannerComponent__get_AnimationComponent(v48, v150);
        if ( (byte_4350EC7 & 1) == 0 )
        {
          sub_B70694(&StringLiteral_1/*""*/);
          byte_4350EC7 = 1;
        }
        state = v48->fields.state;
        if ( state )
          p_name = &state->fields.name;
        else
          p_name = (System_String_o **)&StringLiteral_1/*""*/;
        v154 = *p_name;
        v155 = sub_B70764(SchedulerTaskSimpleAnimation_TypeInfo);
        SchedulerTaskSimpleAnimation___ctor((SchedulerTaskSimpleAnimation_o *)v155, AnimationComponent, v154, 0LL);
        if ( !v155 )
          goto LABEL_88;
        v156 = *(System_Delegate_o **)(v155 + 32);
        v157 = (SchedulerTaskBase_TaskCallback_o *)sub_B70764(SchedulerTaskBase_TaskCallback_TypeInfo);
        SchedulerTaskBase_TaskCallback___ctor(
          v157,
          (Il2CppObject *)v7,
          Method_SubmarineMapManager___c__DisplayClass94_0__CreateScanTask_b__3__,
          0LL);
        v158 = (System_Int32_array **)System_Delegate__Combine(v156, (System_Delegate_o *)v157, 0LL);
        v69 = v158;
        if ( !v158 || *v158 == (System_Int32_array *)SchedulerTaskBase_TaskCallback_TypeInfo )
        {
          *(_QWORD *)(v155 + 32) = v158;
          sub_B70630((BattleServantConfConponent_o *)(v155 + 32), v158, v159, v160, v161, v162, v163, v164);
          MoveCameraToPositionTask = sub_B706AC(SchedulerTaskBase___TypeInfo, 2LL);
          if ( !MoveCameraToPositionTask )
            goto LABEL_88;
          v165 = MoveCameraToPositionTask;
          MoveCameraToPositionTask = sub_B70754(v155, *(_QWORD *)(*(_QWORD *)MoveCameraToPositionTask + 64LL));
          if ( MoveCameraToPositionTask )
          {
            if ( !*(_DWORD *)(v165 + 24) )
              goto LABEL_89;
            *(_QWORD *)(v165 + 32) = v155;
            sub_B70630(
              (BattleServantConfConponent_o *)(v165 + 32),
              (System_Int32_array **)v155,
              v166,
              v167,
              v168,
              v169,
              v170,
              v171);
            MoveCameraToPositionTask = sub_B706AC(SchedulerTaskBase___TypeInfo, 2LL);
            if ( !MoveCameraToPositionTask )
              goto LABEL_88;
            v172 = MoveCameraToPositionTask;
            MoveCameraToPositionTask = sub_B70754(v202, *(_QWORD *)(*(_QWORD *)MoveCameraToPositionTask + 64LL));
            if ( MoveCameraToPositionTask )
            {
              if ( !*(_DWORD *)(v172 + 24) )
                goto LABEL_89;
              *(_QWORD *)(v172 + 32) = v202;
              sub_B70630((BattleServantConfConponent_o *)(v172 + 32), v202, v173, v174, v175, v176, v177, v178);
              if ( !v149 || (MoveCameraToPositionTask = sub_B70754(v149, *(_QWORD *)(*(_QWORD *)v172 + 64LL))) != 0 )
              {
                if ( *(_DWORD *)(v172 + 24) <= 1u )
                  goto LABEL_89;
                *(_QWORD *)(v172 + 40) = v149;
                sub_B70630(
                  (BattleServantConfConponent_o *)(v172 + 40),
                  (System_Int32_array **)v149,
                  v179,
                  v180,
                  v181,
                  v182,
                  v183,
                  v184);
                v185 = (SchedulerTaskOrthostichy_o *)sub_B70764(SchedulerTaskOrthostichy_TypeInfo);
                SchedulerTaskOrthostichy___ctor(v185, (SchedulerTaskBase_array *)v172, 0LL);
                if ( !v185 || (MoveCameraToPositionTask = sub_B70754(v185, *(_QWORD *)(*(_QWORD *)v165 + 64LL))) != 0 )
                {
                  if ( *(_DWORD *)(v165 + 24) > 1u )
                  {
                    *(_QWORD *)(v165 + 40) = v185;
                    sub_B70630(
                      (BattleServantConfConponent_o *)(v165 + 40),
                      (System_Int32_array **)v185,
                      v186,
                      v187,
                      v188,
                      v189,
                      v190,
                      v191);
                    v192 = (SchedulerTaskParallel_o *)sub_B70764(SchedulerTaskParallel_TypeInfo);
                    SchedulerTaskParallel___ctor(v192, (SchedulerTaskBase_array *)v165, 0LL);
                    if ( v192 )
                    {
                      v192->fields.NonBlocking = 1;
                      TimeToStartOpenPanel = SubmarineScannerComponent__GetTimeToStartOpenPanel(v48, v9);
                      v194 = (SchedulerTaskWaitTime_o *)sub_B70764(SchedulerTaskWaitTime_TypeInfo);
                      SchedulerTaskWaitTime___ctor(v194, TimeToStartOpenPanel, 0LL);
                      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                        v22,
                        (EventMissionProgressRequest_Argument_ProgressData_o *)v113,
                        (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_SchedulerTaskBase__Add__);
                      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                        v22,
                        (EventMissionProgressRequest_Argument_ProgressData_o *)v192,
                        (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_SchedulerTaskBase__Add__);
                      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                        v22,
                        (EventMissionProgressRequest_Argument_ProgressData_o *)v194,
                        (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_SchedulerTaskBase__Add__);
                      return (System_Collections_Generic_List_SchedulerTaskBase__o *)v22;
                    }
                    goto LABEL_88;
                  }
LABEL_89:
                  v196 = sub_B70798(MoveCameraToPositionTask);
                  sub_B70738(v196, 0LL);
                }
              }
            }
          }
LABEL_90:
          v197 = sub_B7078C(MoveCameraToPositionTask);
          sub_B70738(v197, 0LL);
        }
      }
    }
  }
  v198 = (SubmarineMapManager_o *)sub_B70A60(v69);
  return (System_Collections_Generic_List_SchedulerTaskBase__o *)SubmarineMapManager__CreateScanOpenPanelTask(
                                                                   v198,
                                                                   v199,
                                                                   v200,
                                                                   v201);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_SchedulerTaskBase__o *__fastcall SubmarineMapManager__CreateSubsequentialOpenPanelTasks(
        SubmarineMapManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v3; // x20
  float z; // s8
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v5; // x21
  SchedulerTaskBase_o *PanelDataList_k__BackingField; // x0
  const MethodInfo *v7; // x1
  struct SubmarineMapDataManager_o *submarineData; // x8
  __int128 v9; // q1
  _BOOL8 v10; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x2
  Il2CppObject *current; // x22
  _BOOL8 IsPanelSatisfyCommonReleaseCond; // x0
  __int64 v15; // x1
  struct SubmarineMapDataManager_o *v16; // x8
  float32x2_t *PositionCalculator_k__BackingField; // x8
  __int128 v18; // q1
  SubmarineMapPanelData_array *v19; // x0
  const MethodInfo *v20; // x2
  struct SubmarineMapDataManager_o *v21; // x8
  struct SubmarineSettingsManager_o *Settings_k__BackingField; // x8
  signed int size; // w9
  EventMissionProgressRequest_Argument_ProgressData_o *v24; // x22
  unsigned __int64 v25; // d0 OVERLAPPED
  float v26; // s2
  int v27; // s1
  float y; // [xsp+0h] [xbp-B0h]
  __int128 v30; // [xsp+10h] [xbp-A0h]
  float32x2_t v31[3]; // [xsp+10h] [xbp-A0h]
  System_Collections_Generic_List_Enumerator_T__o v32; // [xsp+28h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v33; // [xsp+40h] [xbp-70h] BYREF
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_4350E94 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__get_Current__);
    sub_B70694(&Method_System_Collections_Generic_List_SchedulerTaskBase__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_SubmarineMapPanelData__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_SubmarineMapPanelData__GetEnumerator__);
    sub_B70694(&Method_System_Collections_Generic_List_SubmarineMapPanelData__ToArray__);
    sub_B70694(&Method_System_Collections_Generic_List_SubmarineMapPanelData___ctor__);
    sub_B70694(&Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
    sub_B70694(&Method_System_Collections_Generic_List_SubmarineMapPanelData__get_Count__);
    sub_B70694(&System_Collections_Generic_List_SubmarineMapPanelData__TypeInfo);
    sub_B70694(&System_Collections_Generic_List_SchedulerTaskBase__TypeInfo);
    byte_4350E94 = 1;
  }
  memset(&v33, 0, sizeof(v33));
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_SchedulerTaskBase__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
  zero = UnityEngine_Vector3__get_zero(0LL);
  *(_QWORD *)&v30 = *(_QWORD *)&zero.fields.x;
  y = zero.fields.y;
  z = zero.fields.z;
  v5 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_SubmarineMapPanelData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v5,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_SubmarineMapPanelData___ctor__);
  submarineData = this->fields.submarineData;
  if ( !submarineData )
    goto LABEL_22;
  PanelDataList_k__BackingField = (SchedulerTaskBase_o *)submarineData->fields._PanelDataList_k__BackingField;
  if ( !PanelDataList_k__BackingField )
    goto LABEL_22;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v32,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)PanelDataList_k__BackingField,
    (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_SubmarineMapPanelData__GetEnumerator__);
  v9 = v30;
  *((float *)&v9 + 1) = y;
  *(_OWORD *)v31[0].n64_u64 = v9;
  v33 = v32;
  while ( 1 )
  {
    v10 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v33,
            (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__MoveNext__);
    if ( !v10 )
      break;
    current = v33.fields.current;
    if ( !v33.fields.current )
      sub_B7076C(v10, v11);
    if ( !LOBYTE(v33.fields.current[3].monitor) )
    {
      IsPanelSatisfyCommonReleaseCond = SubmarineMapDataManager__IsPanelSatisfyCommonReleaseCond(
                                          (SubmarineMapPanelData_o *)v33.fields.current,
                                          -1,
                                          v12);
      if ( IsPanelSatisfyCommonReleaseCond )
      {
        v16 = this->fields.submarineData;
        if ( !v16 )
          sub_B7076C(IsPanelSatisfyCommonReleaseCond, v15);
        PositionCalculator_k__BackingField = (float32x2_t *)v16->fields._PositionCalculator_k__BackingField;
        if ( !PositionCalculator_k__BackingField )
          sub_B7076C(IsPanelSatisfyCommonReleaseCond, v15);
        z = z + 0.0;
        *((float32x2_t *)&v18 + 1) = v31[1];
        *(float32x2_t *)&v18 = vadd_f32(
                                 v31[0],
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
        *(_OWORD *)v31[0].n64_u64 = v18;
        if ( !v5 )
          sub_B7076C(IsPanelSatisfyCommonReleaseCond, v15);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v5,
          (EventMissionProgressRequest_Argument_ProgressData_o *)current,
          (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_SubmarineMapPanelData__Add__);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v33,
    (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__Dispose__);
  if ( !v5 )
    goto LABEL_22;
  if ( v5->fields._size >= 1 )
  {
    v19 = (SubmarineMapPanelData_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                           (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v5,
                                           (const MethodInfo_30277D4 *)Method_System_Collections_Generic_List_SubmarineMapPanelData__ToArray__);
    PanelDataList_k__BackingField = SubmarineMapManager__CreateOpenPanelsAndRevealSpotsTask(this, v19, v20);
    v21 = this->fields.submarineData;
    if ( v21 )
    {
      Settings_k__BackingField = v21->fields._Settings_k__BackingField;
      if ( Settings_k__BackingField )
      {
        size = v5->fields._size;
        v24 = (EventMissionProgressRequest_Argument_ProgressData_o *)PanelDataList_k__BackingField;
        v25 = vdiv_f32(v31[0], vcvt_f32_s32(vdup_n_s32(size))).n64_u64[0];
        v26 = z / (float)size;
        v27 = HIDWORD(v25);
        PanelDataList_k__BackingField = SubmarineMapManager__CreateMoveCameraToPositionTask(
                                          this,
                                          *(UnityEngine_Vector3_o *)&v25,
                                          1.0,
                                          Settings_k__BackingField->fields._OpenPanelCameraDuration_k__BackingField,
                                          v7);
        if ( v3 )
        {
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v3,
            (EventMissionProgressRequest_Argument_ProgressData_o *)PanelDataList_k__BackingField,
            (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_SchedulerTaskBase__Add__);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v3,
            v24,
            (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_SchedulerTaskBase__Add__);
          return (System_Collections_Generic_List_SchedulerTaskBase__o *)v3;
        }
      }
    }
LABEL_22:
    sub_B7076C(PanelDataList_k__BackingField, v7);
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
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  struct SubmarineSelectScannerDialog_o **p_selectScannerDialog; // x20
  UnityEngine_Object_o *selectScannerDialog; // x21
  UnityEngine_Object_o *v16; // x21
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  BattleServantConfConponent_o *p_newScannerDialog; // x19
  UnityEngine_Object_o *v24; // x20
  struct SubmarineNewScannerDialog_o *newScannerDialog; // t1
  UnityEngine_Object_o *v26; // x20
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7

  if ( (byte_4350E7E & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_4350E7E = 1;
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
    UnityEngine_Object__Destroy_36067208(gameObject, 0LL);
    *p_scanConfirmDialog = 0LL;
    sub_B70630((BattleServantConfConponent_o *)&this->fields.scanConfirmDialog, 0LL, v8, v9, v10, v11, v12, v13);
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
    v16 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(klass, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_36067208(v16, 0LL);
    *p_selectScannerDialog = 0LL;
    sub_B70630((BattleServantConfConponent_o *)&this->fields.selectScannerDialog, 0LL, v17, v18, v19, v20, v21, v22);
  }
  newScannerDialog = this->fields.newScannerDialog;
  p_newScannerDialog = (BattleServantConfConponent_o *)&this->fields.newScannerDialog;
  v24 = (UnityEngine_Object_o *)newScannerDialog;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v24, 0LL, 0LL) )
  {
    klass = (UnityEngine_Component_o *)p_newScannerDialog->klass;
    if ( p_newScannerDialog->klass )
    {
      v26 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(klass, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_36067208(v26, 0LL);
      p_newScannerDialog->klass = 0LL;
      sub_B70630(p_newScannerDialog, 0LL, v27, v28, v29, v30, v31, v32);
      return;
    }
LABEL_31:
    sub_B7076C(klass, v5);
  }
}


void __fastcall SubmarineMapManager__DestroyMapObjects(SubmarineMapManager_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *panelContainer; // x20
  const MethodInfo *v4; // x1

  if ( (byte_4350E61 & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_4350E61 = 1;
  }
  panelContainer = (UnityEngine_Object_o *)this->fields.panelContainer;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__Destroy_36067208(panelContainer, 0LL);
  UnityEngine_Object__Destroy_36067208((UnityEngine_Object_o *)this->fields.gridLine, 0LL);
  UnityEngine_Object__Destroy_36067208((UnityEngine_Object_o *)this->fields.effectContainer, 0LL);
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
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v20; // x20
  const MethodInfo *v21; // x2
  struct SubmarineMapDataManager_o *submarineData; // x8
  struct SubmarineQuestSaveInfo_o *BeforeQuestInfo_k__BackingField; // x8
  int32_t v24; // w1
  __int64 v25; // x22
  SchedulerTaskBase_TaskCallback_o *v26; // x23
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7

  if ( (byte_4350E65 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_SchedulerTaskBase__AddRange__);
    sub_B70694(&Method_System_Collections_Generic_List_SchedulerTaskBase__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
    sub_B70694(&System_Collections_Generic_List_SchedulerTaskBase__TypeInfo);
    sub_B70694(&SchedulerTaskNone_TypeInfo);
    sub_B70694(&SchedulerTaskBase_TaskCallback_TypeInfo);
    sub_B70694(&Method_SubmarineMapManager___c__DisplayClass35_0__DoPerformancesByVariedCond_b__0__);
    sub_B70694(&SubmarineMapManager___c__DisplayClass35_0_TypeInfo);
    byte_4350E65 = 1;
  }
  v5 = sub_B70764(SubmarineMapManager___c__DisplayClass35_0_TypeInfo);
  SubmarineMapManager___c__DisplayClass35_0___ctor((SubmarineMapManager___c__DisplayClass35_0_o *)v5, 0LL);
  if ( !v5 )
    goto LABEL_14;
  *(_QWORD *)(v5 + 16) = this;
  sub_B70630((BattleServantConfConponent_o *)(v5 + 16), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = finishCallback;
  sub_B70630(
    (BattleServantConfConponent_o *)(v5 + 24),
    (System_Int32_array **)finishCallback,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  v20 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_SchedulerTaskBase__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v20,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
  submarineData = this->fields.submarineData;
  if ( !submarineData )
    goto LABEL_14;
  BeforeQuestInfo_k__BackingField = submarineData->fields._BeforeQuestInfo_k__BackingField;
  if ( !BeforeQuestInfo_k__BackingField )
    goto LABEL_14;
  v24 = BeforeQuestInfo_k__BackingField->fields._IsQuestClear_k__BackingField
     || BeforeQuestInfo_k__BackingField->fields._IsQuestPhaseClear_k__BackingField
      ? BeforeQuestInfo_k__BackingField->fields._QuestId_k__BackingField
      : -1;
  HideEnemyOccupiedPanelTasks = (System_Collections_Generic_IEnumerable_T__o *)SubmarineMapManager__CreateHideEnemyOccupiedPanelTasks(
                                                                                 this,
                                                                                 v24,
                                                                                 v21);
  if ( !v20 )
    goto LABEL_14;
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v20,
    HideEnemyOccupiedPanelTasks,
    (const MethodInfo_30258D8 *)Method_System_Collections_Generic_List_SchedulerTaskBase__AddRange__);
  v25 = sub_B70764(SchedulerTaskNone_TypeInfo);
  SchedulerTaskNone___ctor((SchedulerTaskNone_o *)v25, 0LL);
  v26 = (SchedulerTaskBase_TaskCallback_o *)sub_B70764(SchedulerTaskBase_TaskCallback_TypeInfo);
  SchedulerTaskBase_TaskCallback___ctor(
    v26,
    (Il2CppObject *)v5,
    Method_SubmarineMapManager___c__DisplayClass35_0__DoPerformancesByVariedCond_b__0__,
    0LL);
  if ( !v25
    || (*(_QWORD *)(v25 + 32) = v26,
        sub_B70630((BattleServantConfConponent_o *)(v25 + 32), (System_Int32_array **)v26, v27, v28, v29, v30, v31, v32),
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v20,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v25,
          (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_SchedulerTaskBase__Add__),
        (HideEnemyOccupiedPanelTasks = (System_Collections_Generic_IEnumerable_T__o *)this->fields.taskScheduler) == 0LL) )
  {
LABEL_14:
    sub_B7076C(HideEnemyOccupiedPanelTasks, v7);
  }
  TaskScheduler__AddTask_19759076(
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
  __int64 v6; // x1
  const MethodInfo *v7; // x3
  struct MapControl_MapInfo_o *mapInfo; // x8

  SubmarineMapManager__CreateAssetManagerIfNotExists(this, (const MethodInfo *)assetData);
  mapInfo = this->fields.mapInfo;
  if ( !mapInfo || (assetManager = this->fields.assetManager) == 0LL )
    sub_B7076C(assetManager, v6);
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
  sub_B70630((BattleServantConfConponent_o *)&this->fields.submarineData, 0LL, v2, v3, v4, v5, v6, v7);
  EventMapManagerBase__Finish((EventMapManagerBase_o *)this, 0LL);
}


SrcSpotBasePrefab_o *__fastcall SubmarineMapManager__GetHomeSpot(SubmarineMapManager_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_array *HasChild; // x0
  __int64 v4; // x1
  UnityEngine_Object_o *v5; // x20
  struct SubmarineMapDataManager_o *submarineData; // x8
  struct SubmarineSettingsManager_o *Settings_k__BackingField; // x8
  int32_t HomeSpotId_k__BackingField; // w22
  int max_length; // w8
  UnityEngine_GameObject_array *v10; // x19
  unsigned int v11; // w23
  UnityEngine_Object_o *Component_srcLineSprite; // x21
  __int64 v14; // x0

  if ( (byte_4350E77 & 1) == 0 )
  {
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_SrcSpotBasePrefab___);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_4350E77 = 1;
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
      sub_B7076C(HasChild, v4);
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
          v14 = sub_B70798(HasChild);
          sub_B70738(v14, 0LL);
        }
        HasChild = (UnityEngine_GameObject_array *)v10->m_Items[v11];
        if ( !HasChild )
          goto LABEL_29;
        Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                            (UnityEngine_GameObject_o *)HasChild,
                                                            (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_SrcSpotBasePrefab___);
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
  struct SubmarineMapDataManager_o *submarineData; // x8
  struct SubmarineQuestSaveInfo_o *BeforeQuestInfo_k__BackingField; // x8
  int32_t QuestId_k__BackingField; // w1
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *HideEnemyOccupiedPanelTasks; // x20
  const MethodInfo *v8; // x1

  v3 = this;
  if ( (byte_4350E64 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_SchedulerTaskBase__AddRange__);
    this = (SubmarineMapManager_o *)sub_B70694(&Method_System_Collections_Generic_List_SchedulerTaskBase__get_Count__);
    byte_4350E64 = 1;
  }
  submarineData = v3->fields.submarineData;
  if ( !submarineData
    || (BeforeQuestInfo_k__BackingField = submarineData->fields._BeforeQuestInfo_k__BackingField) == 0LL
    || (!BeforeQuestInfo_k__BackingField->fields._IsQuestClear_k__BackingField
     && !BeforeQuestInfo_k__BackingField->fields._IsQuestPhaseClear_k__BackingField
      ? (QuestId_k__BackingField = -1)
      : (QuestId_k__BackingField = BeforeQuestInfo_k__BackingField->fields._QuestId_k__BackingField),
        HideEnemyOccupiedPanelTasks = (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)SubmarineMapManager__CreateHideEnemyOccupiedPanelTasks(v3, QuestId_k__BackingField, v2),
        this = (SubmarineMapManager_o *)SubmarineMapManager__CreateSubsequentialOpenPanelTasks(v3, v8),
        !HideEnemyOccupiedPanelTasks) )
  {
    sub_B7076C(this, method);
  }
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    HideEnemyOccupiedPanelTasks,
    (System_Collections_Generic_IEnumerable_T__o *)this,
    (const MethodInfo_30258D8 *)Method_System_Collections_Generic_List_SchedulerTaskBase__AddRange__);
  return HideEnemyOccupiedPanelTasks->fields._size > 0;
}


void __fastcall SubmarineMapManager__HideScanObstacleEffect(SubmarineMapManager_o *this, const MethodInfo *method)
{
  if ( (byte_4350E84 & 1) == 0 )
  {
    sub_B70694(&Method_SubmarineMapManager_ReturnEffectsToPool_SubmarineEffectScanObstaclePanelComponent___);
    byte_4350E84 = 1;
  }
  SubmarineMapManager__ReturnEffectsToPool_SubmarineEffectSelectedPanelComponent_(
    this,
    (ComponentPool_T__o *)this->fields.effectScanObstaclePanelObjPool,
    (const MethodInfo_1D606F0 *)Method_SubmarineMapManager_ReturnEffectsToPool_SubmarineEffectScanObstaclePanelComponent___);
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

  if ( (byte_4350E88 & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_4350E88 = 1;
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
    UnityEngine_Object__Destroy_36067208(klass, 0LL);
    p_scanRangeNotificator->klass = 0LL;
    sub_B70630(p_scanRangeNotificator, 0LL, v7, v8, v9, v10, v11, v12);
  }
}


void __fastcall SubmarineMapManager__HideScannableEffect(SubmarineMapManager_o *this, const MethodInfo *method)
{
  if ( (byte_4350E82 & 1) == 0 )
  {
    sub_B70694(&Method_SubmarineMapManager_ReturnEffectsToPool_SubmarineEffectScannablePanelComponent___);
    byte_4350E82 = 1;
  }
  SubmarineMapManager__ReturnEffectsToPool_SubmarineEffectSelectedPanelComponent_(
    this,
    (ComponentPool_T__o *)this->fields.effectScannablePanelObjPool,
    (const MethodInfo_1D606F0 *)Method_SubmarineMapManager_ReturnEffectsToPool_SubmarineEffectScannablePanelComponent___);
  this->fields.isShowScannableEffect = 0;
}


void __fastcall SubmarineMapManager__HideSelectedPanelEffect(SubmarineMapManager_o *this, const MethodInfo *method)
{
  if ( (byte_4350E86 & 1) == 0 )
  {
    sub_B70694(&Method_SubmarineMapManager_ReturnEffectsToPool_SubmarineEffectSelectedPanelComponent___);
    byte_4350E86 = 1;
  }
  SubmarineMapManager__ReturnEffectsToPool_SubmarineEffectSelectedPanelComponent_(
    this,
    (ComponentPool_T__o *)this->fields.effectSelectedPanelObjPool,
    (const MethodInfo_1D606F0 *)Method_SubmarineMapManager_ReturnEffectsToPool_SubmarineEffectSelectedPanelComponent___);
}


void __fastcall SubmarineMapManager__Initialize(SubmarineMapManager_o *this, const MethodInfo *method)
{
  MapControl_MapInfo_o *mapInfo; // x20
  MapControl_WarInfo_o *warInfo; // x21
  SubmarineMapDataManager_o *v5; // x22
  const MethodInfo *v6; // x3
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  TaskScheduler_o *v13; // x20
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  struct TaskScheduler_o *taskScheduler; // x20
  System_Action_bool__o *v21; // x0
  __int64 v22; // x1
  System_Int32_array **v23; // x21
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  SubmarineMapManager_PlayingScanVoiceData_o *v30; // x20
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7

  if ( (byte_4350E5B & 1) == 0 )
  {
    sub_B70694(&Method_System_Action_bool___ctor__);
    sub_B70694(&System_Action_bool__TypeInfo);
    sub_B70694(&SubmarineMapManager_PlayingScanVoiceData_TypeInfo);
    sub_B70694(&SubmarineMapDataManager_TypeInfo);
    sub_B70694(&TaskScheduler_TypeInfo);
    byte_4350E5B = 1;
  }
  EventMapManagerBase__Initialize((EventMapManagerBase_o *)this, 0LL);
  mapInfo = this->fields.mapInfo;
  warInfo = this->fields.warInfo;
  v5 = (SubmarineMapDataManager_o *)sub_B70764(SubmarineMapDataManager_TypeInfo);
  SubmarineMapDataManager___ctor(v5, mapInfo, warInfo, v6);
  this->fields.submarineData = v5;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.submarineData,
    (System_Int32_array **)v5,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  v13 = (TaskScheduler_o *)sub_B70764(TaskScheduler_TypeInfo);
  TaskScheduler___ctor(v13, 0LL);
  this->fields.taskScheduler = v13;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.taskScheduler,
    (System_Int32_array **)v13,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  taskScheduler = this->fields.taskScheduler;
  v21 = (System_Action_bool__o *)sub_B70764(System_Action_bool__TypeInfo);
  if ( !this
    || (v23 = (System_Int32_array **)v21,
        System_Action_bool____ctor(
          v21,
          (Il2CppObject *)this,
          (intptr_t)this->klass->vtable._31_SetCameraWorkBlock.methodPtr,
          (const MethodInfo_2648200 *)Method_System_Action_bool___ctor__),
        !taskScheduler) )
  {
    sub_B7076C(v21, v22);
  }
  taskScheduler->fields._AllTouchBlockMethod_k__BackingField = (struct System_Action_bool__o *)v23;
  sub_B70630(
    (BattleServantConfConponent_o *)&taskScheduler->fields._AllTouchBlockMethod_k__BackingField,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  v30 = (SubmarineMapManager_PlayingScanVoiceData_o *)sub_B70764(SubmarineMapManager_PlayingScanVoiceData_TypeInfo);
  SubmarineMapManager_PlayingScanVoiceData___ctor(v30, 0LL);
  this->fields.playingScanVoiceData = v30;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.playingScanVoiceData,
    (System_Int32_array **)v30,
    v31,
    v32,
    v33,
    v34,
    v35,
    v36);
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
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  System_Action_o *v20; // x19

  if ( (byte_4350E5C & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&AtlasManager_TypeInfo);
    sub_B70694(&Method_SubmarineMapManager___c__DisplayClass20_0__LoadAssets_b__0__);
    sub_B70694(&SubmarineMapManager___c__DisplayClass20_0_TypeInfo);
    byte_4350E5C = 1;
  }
  v5 = sub_B70764(SubmarineMapManager___c__DisplayClass20_0_TypeInfo);
  SubmarineMapManager___c__DisplayClass20_0___ctor((SubmarineMapManager___c__DisplayClass20_0_o *)v5, 0LL);
  if ( !v5 )
    sub_B7076C(v6, v7);
  *(_QWORD *)(v5 + 16) = this;
  sub_B70630((BattleServantConfConponent_o *)(v5 + 16), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = finishCallback;
  sub_B70630(
    (BattleServantConfConponent_o *)(v5 + 24),
    (System_Int32_array **)finishCallback,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  v20 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
  System_Action___ctor(
    v20,
    (Il2CppObject *)v5,
    Method_SubmarineMapManager___c__DisplayClass20_0__LoadAssets_b__0__,
    0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadUISkin(v20, 5, 1, 0LL);
}


void __fastcall SubmarineMapManager__LoadPoolEffects(SubmarineMapManager_o *this, const MethodInfo *method)
{
  SubmarineMapManager_o *v2; // x19
  struct SubmarineMapAssetManager_o *assetManager; // x8
  UnityEngine_GameObject_o *EffectScannedPanelPrefab_k__BackingField; // x20
  ComponentPool_SubmarineEffectSelectedPanelComponent__o *v5; // x21
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  struct SubmarineMapAssetManager_o *v12; // x8
  UnityEngine_GameObject_o *EffectScanObstaclePanelPrafab_k__BackingField; // x20
  ComponentPool_SubmarineEffectSelectedPanelComponent__o *v14; // x21
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  struct SubmarineMapAssetManager_o *v21; // x8
  UnityEngine_GameObject_o *EffectScannablePanelPrafab_k__BackingField; // x20
  ComponentPool_SubmarineEffectSelectedPanelComponent__o *v23; // x21
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  struct SubmarineMapAssetManager_o *v30; // x8
  UnityEngine_GameObject_o *EffectSelectedPanelPrefab_k__BackingField; // x20
  ComponentPool_SubmarineEffectSelectedPanelComponent__o *v32; // x21
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7

  v2 = this;
  if ( (byte_4350E7F & 1) == 0 )
  {
    sub_B70694(&Method_ComponentPool_SubmarineEffectScannablePanelComponent__Preload__);
    sub_B70694(&Method_ComponentPool_CommonEffectComponent__Preload__);
    sub_B70694(&Method_ComponentPool_SubmarineEffectScanObstaclePanelComponent___ctor__);
    sub_B70694(&Method_ComponentPool_SubmarineEffectSelectedPanelComponent___ctor__);
    sub_B70694(&Method_ComponentPool_SubmarineEffectScannablePanelComponent___ctor__);
    sub_B70694(&Method_ComponentPool_CommonEffectComponent___ctor__);
    sub_B70694(&ComponentPool_SubmarineEffectSelectedPanelComponent__TypeInfo);
    sub_B70694(&ComponentPool_SubmarineEffectScanObstaclePanelComponent__TypeInfo);
    sub_B70694(&ComponentPool_CommonEffectComponent__TypeInfo);
    this = (SubmarineMapManager_o *)sub_B70694(&ComponentPool_SubmarineEffectScannablePanelComponent__TypeInfo);
    byte_4350E7F = 1;
  }
  assetManager = v2->fields.assetManager;
  if ( !assetManager )
    goto LABEL_10;
  EffectScannedPanelPrefab_k__BackingField = assetManager->fields._EffectScannedPanelPrefab_k__BackingField;
  v5 = (ComponentPool_SubmarineEffectSelectedPanelComponent__o *)sub_B70764(ComponentPool_CommonEffectComponent__TypeInfo);
  ComponentPool_SubmarineEffectSelectedPanelComponent____ctor(
    v5,
    EffectScannedPanelPrefab_k__BackingField,
    20,
    (const MethodInfo_21A6774 *)Method_ComponentPool_CommonEffectComponent___ctor__);
  v2->fields.effectScanedPanelObjPool = (struct ComponentPool_CommonEffectComponent__o *)v5;
  sub_B70630(
    (BattleServantConfConponent_o *)&v2->fields.effectScanedPanelObjPool,
    (System_Int32_array **)v5,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  this = (SubmarineMapManager_o *)v2->fields.effectScanedPanelObjPool;
  if ( !this )
    goto LABEL_10;
  ComponentPool_SubmarineEffectScannablePanelComponent___Preload(
    (ComponentPool_SubmarineEffectScannablePanelComponent__o *)this,
    9,
    (const MethodInfo_21A685C *)Method_ComponentPool_CommonEffectComponent__Preload__);
  v12 = v2->fields.assetManager;
  if ( !v12 )
    goto LABEL_10;
  EffectScanObstaclePanelPrafab_k__BackingField = v12->fields._EffectScanObstaclePanelPrafab_k__BackingField;
  v14 = (ComponentPool_SubmarineEffectSelectedPanelComponent__o *)sub_B70764(ComponentPool_SubmarineEffectScanObstaclePanelComponent__TypeInfo);
  ComponentPool_SubmarineEffectSelectedPanelComponent____ctor(
    v14,
    EffectScanObstaclePanelPrafab_k__BackingField,
    20,
    (const MethodInfo_21A6774 *)Method_ComponentPool_SubmarineEffectScanObstaclePanelComponent___ctor__);
  v2->fields.effectScanObstaclePanelObjPool = (struct ComponentPool_SubmarineEffectScanObstaclePanelComponent__o *)v14;
  sub_B70630(
    (BattleServantConfConponent_o *)&v2->fields.effectScanObstaclePanelObjPool,
    (System_Int32_array **)v14,
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
  v23 = (ComponentPool_SubmarineEffectSelectedPanelComponent__o *)sub_B70764(ComponentPool_SubmarineEffectScannablePanelComponent__TypeInfo);
  ComponentPool_SubmarineEffectSelectedPanelComponent____ctor(
    v23,
    EffectScannablePanelPrafab_k__BackingField,
    200,
    (const MethodInfo_21A6774 *)Method_ComponentPool_SubmarineEffectScannablePanelComponent___ctor__);
  v2->fields.effectScannablePanelObjPool = (struct ComponentPool_SubmarineEffectScannablePanelComponent__o *)v23;
  sub_B70630(
    (BattleServantConfConponent_o *)&v2->fields.effectScannablePanelObjPool,
    (System_Int32_array **)v23,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  this = (SubmarineMapManager_o *)v2->fields.effectScannablePanelObjPool;
  if ( !this
    || (ComponentPool_SubmarineEffectScannablePanelComponent___Preload(
          (ComponentPool_SubmarineEffectScannablePanelComponent__o *)this,
          50,
          (const MethodInfo_21A685C *)Method_ComponentPool_SubmarineEffectScannablePanelComponent__Preload__),
        (v30 = v2->fields.assetManager) == 0LL) )
  {
LABEL_10:
    sub_B7076C(this, method);
  }
  EffectSelectedPanelPrefab_k__BackingField = v30->fields._EffectSelectedPanelPrefab_k__BackingField;
  v32 = (ComponentPool_SubmarineEffectSelectedPanelComponent__o *)sub_B70764(ComponentPool_SubmarineEffectSelectedPanelComponent__TypeInfo);
  ComponentPool_SubmarineEffectSelectedPanelComponent____ctor(
    v32,
    EffectSelectedPanelPrefab_k__BackingField,
    1,
    (const MethodInfo_21A6774 *)Method_ComponentPool_SubmarineEffectSelectedPanelComponent___ctor__);
  v2->fields.effectSelectedPanelObjPool = v32;
  sub_B70630(
    (BattleServantConfConponent_o *)&v2->fields.effectSelectedPanelObjPool,
    (System_Int32_array **)v32,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38);
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
    sub_B7076C(submarineData, finishCallback);
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
  UnityEngine_MonoBehaviour__StartCoroutine_36062060((UnityEngine_MonoBehaviour_o *)this, v4, 0LL);
}


void __fastcall SubmarineMapManager__OnBeforeQuestAfterAction(
        SubmarineMapManager_o *this,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  System_Action_o *v20; // x20
  const MethodInfo *v21; // x2

  if ( (byte_4350E5F & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_SubmarineMapManager___c__DisplayClass26_0__OnBeforeQuestAfterAction_b__0__);
    sub_B70694(&SubmarineMapManager___c__DisplayClass26_0_TypeInfo);
    byte_4350E5F = 1;
  }
  v5 = sub_B70764(SubmarineMapManager___c__DisplayClass26_0_TypeInfo);
  SubmarineMapManager___c__DisplayClass26_0___ctor((SubmarineMapManager___c__DisplayClass26_0_o *)v5, 0LL);
  if ( !v5 )
    sub_B7076C(v6, v7);
  *(_QWORD *)(v5 + 16) = this;
  sub_B70630((BattleServantConfConponent_o *)(v5 + 16), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = finishCallback;
  sub_B70630(
    (BattleServantConfConponent_o *)(v5 + 24),
    (System_Int32_array **)finishCallback,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  v20 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
  System_Action___ctor(
    v20,
    (Il2CppObject *)v5,
    Method_SubmarineMapManager___c__DisplayClass26_0__OnBeforeQuestAfterAction_b__0__,
    0LL);
  SubmarineMapManager__DoPerformancesByVariedCond(this, v20, v21);
}


void __fastcall SubmarineMapManager__OnEndScan(SubmarineMapManager_o *this, const MethodInfo *method)
{
  clsQuestCheck_o *v3; // x0
  __int64 v4; // x1
  struct MapControl_WarInfo_o *warInfo; // x8
  int32_t warId; // w21
  QuestTree_o *v7; // x20
  System_Action_o *v8; // x22
  System_Collections_IEnumerator_o *v9; // x1

  if ( (byte_4350E6D & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_B70694(&SingletonTemplate_QuestTree__TypeInfo);
    sub_B70694(&Method_SubmarineMapManager__OnEndScan_b__43_0__);
    byte_4350E6D = 1;
  }
  if ( (BYTE3(SingletonTemplate_QuestTree__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_QuestTree__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_QuestTree__TypeInfo);
  }
  v3 = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2CE9CB0 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  warInfo = this->fields.warInfo;
  if ( !warInfo
    || (warId = warInfo->fields.warId,
        v7 = (QuestTree_o *)v3,
        v8 = (System_Action_o *)sub_B70764(System_Action_TypeInfo),
        System_Action___ctor(v8, (Il2CppObject *)this, Method_SubmarineMapManager__OnEndScan_b__43_0__, 0LL),
        !v7) )
  {
    sub_B7076C(v3, v4);
  }
  v9 = QuestTree__mfBaseTreeUpdateWithOpenCheck(v7, warId, v8, 0LL);
  UnityEngine_MonoBehaviour__StartCoroutine_36062060((UnityEngine_MonoBehaviour_o *)this, v9, 0LL);
}


void __fastcall SubmarineMapManager__OnEveryActionEnd(SubmarineMapManager_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  System_Action_o *v4; // x20
  const MethodInfo *v5; // x1

  if ( (byte_4350E60 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_SubmarineMapManager__OnEveryActionEnd_b__28_0__);
    byte_4350E60 = 1;
  }
  if ( SubmarineMapManager__HasSelfQuestAfterAction(this, method) )
  {
    v4 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
    System_Action___ctor(v4, (Il2CppObject *)this, Method_SubmarineMapManager__OnEveryActionEnd_b__28_0__, 0LL);
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
  __int64 eventId; // x0
  __int64 v9; // x1
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  __int64 v16; // x21
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  const MethodInfo *v23; // x1
  clsQuestCheck_o *v24; // x22
  const MethodInfo *v25; // x1
  NetworkManager_ResultCallbackFunc_o *v26; // x22
  EventScanPanelMapRequest_o *Request_WarBoardWallAttackRequest; // x22
  const MethodInfo *v28; // x1
  struct MapControl_MapInfo_o *mapInfo; // x8

  if ( (byte_4350E68 & 1) == 0 )
  {
    sub_B70694(&Method_NetworkManager_getRequest_EventScanPanelMapRequest___);
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_B70694(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    sub_B70694(&SingletonTemplate_clsQuestCheck__TypeInfo);
    sub_B70694(&Method_SubmarineMapManager___c__DisplayClass38_0__OnScanDecided_b__0__);
    sub_B70694(&SubmarineMapManager___c__DisplayClass38_0_TypeInfo);
    byte_4350E68 = 1;
  }
  v7 = sub_B70764(SubmarineMapManager___c__DisplayClass38_0_TypeInfo);
  SubmarineMapManager___c__DisplayClass38_0___ctor((SubmarineMapManager___c__DisplayClass38_0_o *)v7, 0LL);
  if ( !v7 )
    goto LABEL_15;
  *(_QWORD *)(v7 + 16) = this;
  sub_B70630((BattleServantConfConponent_o *)(v7 + 16), (System_Int32_array **)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 32) = panelData;
  v16 = v7 + 32;
  *(_DWORD *)(v7 + 24) = scanId;
  sub_B70630((BattleServantConfConponent_o *)(v7 + 32), (System_Int32_array **)panelData, v17, v18, v19, v20, v21, v22);
  ((void (__fastcall *)(SubmarineMapManager_o *, __int64, Il2CppMethodPointer))this->klass->vtable._30_SetAllTouchBlock.method)(
    this,
    1LL,
    this->klass->vtable._31_SetCameraWorkBlock.methodPtr);
  SubmarineMapManager__HideScannableEffect(this, v23);
  if ( (BYTE3(SingletonTemplate_clsQuestCheck__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_clsQuestCheck__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_clsQuestCheck__TypeInfo);
  }
  v24 = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2CE9CB0 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  eventId = SubmarineMapManager__get_eventId(this, v25);
  if ( !v24 )
    goto LABEL_15;
  clsQuestCheck__SaveEventQuestIdListPlayable(v24, eventId, 0LL);
  v26 = (NetworkManager_ResultCallbackFunc_o *)sub_B70764(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v26,
    (Il2CppObject *)v7,
    Method_SubmarineMapManager___c__DisplayClass38_0__OnScanDecided_b__0__,
    0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Request_WarBoardWallAttackRequest = (EventScanPanelMapRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                      v26,
                                                                      (const MethodInfo_1D57A4C *)Method_NetworkManager_getRequest_EventScanPanelMapRequest___);
  eventId = SubmarineMapManager__get_eventId(this, v28);
  mapInfo = this->fields.mapInfo;
  if ( !mapInfo || !*(_QWORD *)v16 || !Request_WarBoardWallAttackRequest )
LABEL_15:
    sub_B7076C(eventId, v9);
  EventScanPanelMapRequest__beginRequest(
    Request_WarBoardWallAttackRequest,
    eventId,
    mapInfo->fields.mapId,
    *(_DWORD *)(*(_QWORD *)v16 + 24LL),
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
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  struct System_String_o *value; // x8
  EventSaveData_o *v21; // x19
  EventSaveData_c *klass; // x9
  const char *name; // x9
  __int64 v24; // x10
  __int64 v25; // x9
  TerminalPramsManager_c *v26; // x0
  EventSaveData_o *v27; // x20
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  TerminalPramsManager_c *v34; // x0
  BattleServantConfConponent_o *p_BeforeEventSubmarineSaveData_k__BackingField; // x0
  TerminalPramsManager_c *v36; // x0
  System_String_array *ValueByArray; // x0
  int max_length; // w8
  System_String_o **v39; // x9
  System_String_o *v40; // x21
  System_String_o **v41; // x9
  System_String_o *v42; // x20
  __int64 *v43; // x8
  System_String_o *v44; // x22
  TerminalPramsManager_c *v45; // x0
  struct EventSaveData_o *v46; // x23
  System_String_o *v47; // x24
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  EventSaveData_c *v54; // x8
  System_Int32_array **namespaze; // x19
  TerminalPramsManager_c *v56; // x0
  BattleServantConfConponent_o *p_mResultEventPanelRewardInfos; // x0
  System_String_c *v58; // x8
  __int64 v59; // x0
  int v60; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4350E69 & 1) == 0 )
  {
    sub_B70694(&EventSaveData_TypeInfo);
    sub_B70694(&Method_JsonManager_DeserializeArray_EventScanPanelMapRequest_ResultData___);
    sub_B70694(&JsonManager_TypeInfo);
    sub_B70694(&TerminalPramsManager_TypeInfo);
    sub_B70694(&TerminalSceneComponent_TypeInfo);
    sub_B70694(&TitleInfoEventSubmarineStatusComponent_TypeInfo);
    sub_B70694(&StringLiteral_21408/*"ng"*/);
    sub_B70694(&StringLiteral_15855/*"["*/);
    sub_B70694(&StringLiteral_6676/*"False"*/);
    sub_B70694(&StringLiteral_16092/*"]"*/);
    sub_B70694(&StringLiteral_978/*"0"*/);
    byte_4350E69 = 1;
  }
  v60 = 0;
  if ( !System_String__op_Inequality(result, (System_String_o *)StringLiteral_21408/*"ng"*/, 0LL) )
  {
    SubmarineMapManager__OnEndScan(this, v9);
    return;
  }
  SubmarineMapManager__StartScanPerformance(this, scanId, panelData, v10);
  v11 = (Il2CppObject *)System_String__Concat_44760452(
                          (System_String_o *)StringLiteral_15855/*"["*/,
                          result,
                          (System_String_o *)StringLiteral_16092/*"]"*/,
                          0LL);
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  BeforeEventSubmarineSaveData_k__BackingField = (EventSaveData_o *)JsonManager__DeserializeArray_UserPresentBoxWindow_resData_(
                                                                      v11,
                                                                      (const MethodInfo_1D50530 *)Method_JsonManager_DeserializeArray_EventScanPanelMapRequest_ResultData___);
  if ( !BeforeEventSubmarineSaveData_k__BackingField )
    goto LABEL_83;
  value = BeforeEventSubmarineSaveData_k__BackingField->fields.value;
  v21 = BeforeEventSubmarineSaveData_k__BackingField;
  if ( !value )
    return;
  if ( !(_DWORD)value )
  {
LABEL_84:
    v59 = sub_B70798(BeforeEventSubmarineSaveData_k__BackingField);
    sub_B70738(v59, 0LL);
  }
  klass = BeforeEventSubmarineSaveData_k__BackingField[1].klass;
  if ( !klass )
    goto LABEL_83;
  name = klass->_1.name;
  if ( name )
  {
    v24 = *((_QWORD *)name + 3);
    if ( v24 )
    {
      if ( !(_DWORD)v24 )
        goto LABEL_84;
      v25 = *((_QWORD *)name + 4);
      if ( v25 )
      {
        v60 = *(_QWORD *)(v25 + 32);
        if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        }
        if ( !byte_434EFC4 )
        {
          sub_B70694(&TerminalPramsManager_TypeInfo);
          byte_434EFC4 = 1;
        }
        v26 = TerminalPramsManager_TypeInfo;
        if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v26 = TerminalPramsManager_TypeInfo;
        }
        if ( !v26->static_fields->_BeforeEventSubmarineSaveData_k__BackingField )
        {
          v27 = (EventSaveData_o *)sub_B70764(EventSaveData_TypeInfo);
          EventSaveData___ctor(v27, 0LL);
          if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          }
          if ( !byte_434EFA1 )
          {
            sub_B70694(&TerminalPramsManager_TypeInfo);
            byte_434EFA1 = 1;
          }
          v34 = TerminalPramsManager_TypeInfo;
          if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            v34 = TerminalPramsManager_TypeInfo;
          }
          p_BeforeEventSubmarineSaveData_k__BackingField = (BattleServantConfConponent_o *)&v34->static_fields->_BeforeEventSubmarineSaveData_k__BackingField;
          p_BeforeEventSubmarineSaveData_k__BackingField->klass = (BattleServantConfConponent_c *)v27;
          sub_B70630(
            p_BeforeEventSubmarineSaveData_k__BackingField,
            (System_Int32_array **)v27,
            v28,
            v29,
            v30,
            v31,
            v32,
            v33);
          v26 = TerminalPramsManager_TypeInfo;
        }
        if ( (BYTE3(v26->vtable._0_Equals.methodPtr) & 4) != 0 && !v26->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v26);
        if ( !byte_434EFC4 )
        {
          sub_B70694(&TerminalPramsManager_TypeInfo);
          byte_434EFC4 = 1;
        }
        v36 = TerminalPramsManager_TypeInfo;
        if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v36 = TerminalPramsManager_TypeInfo;
        }
        BeforeEventSubmarineSaveData_k__BackingField = v36->static_fields->_BeforeEventSubmarineSaveData_k__BackingField;
        if ( BeforeEventSubmarineSaveData_k__BackingField )
        {
          ValueByArray = EventSaveData__GetValueByArray(BeforeEventSubmarineSaveData_k__BackingField, 0x2Cu, 0LL);
          if ( ValueByArray )
          {
            max_length = ValueByArray->max_length;
            v39 = &ValueByArray->m_Items[1];
            if ( max_length <= 1 )
              v39 = (System_String_o **)&StringLiteral_978/*"0"*/;
            v40 = *v39;
            v41 = max_length <= 2 ? (System_String_o **)&StringLiteral_978/*"0"*/ : &ValueByArray->m_Items[2];
            v42 = *v41;
            v43 = max_length <= 3 ? &StringLiteral_6676/*"False"*/ : (__int64 *)&ValueByArray->m_Items[3];
          }
          else
          {
            v42 = (System_String_o *)StringLiteral_978/*"0"*/;
            v43 = &StringLiteral_6676/*"False"*/;
            v40 = (System_String_o *)StringLiteral_978/*"0"*/;
          }
          v44 = (System_String_o *)*v43;
          if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          }
          if ( !byte_434EFC4 )
          {
            sub_B70694(&TerminalPramsManager_TypeInfo);
            byte_434EFC4 = 1;
          }
          v45 = TerminalPramsManager_TypeInfo;
          if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            v45 = TerminalPramsManager_TypeInfo;
          }
          v46 = v45->static_fields->_BeforeEventSubmarineSaveData_k__BackingField;
          v47 = System_Int32__ToString((int32_t)&v60, 0LL);
          if ( (BYTE3(TitleInfoEventSubmarineStatusComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TitleInfoEventSubmarineStatusComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TitleInfoEventSubmarineStatusComponent_TypeInfo);
          }
          BeforeEventSubmarineSaveData_k__BackingField = (EventSaveData_o *)TitleInfoEventSubmarineStatusComponent__CreateSaveData_22330964(
                                                                              v47,
                                                                              v40,
                                                                              v42,
                                                                              v44,
                                                                              0LL);
          if ( v46 )
          {
            v46->fields.value = (struct System_String_o *)BeforeEventSubmarineSaveData_k__BackingField;
            sub_B70630(
              (BattleServantConfConponent_o *)&v46->fields.value,
              (System_Int32_array **)BeforeEventSubmarineSaveData_k__BackingField,
              v48,
              v49,
              v50,
              v51,
              v52,
              v53);
            value = v21->fields.value;
            goto LABEL_66;
          }
        }
LABEL_83:
        sub_B7076C(BeforeEventSubmarineSaveData_k__BackingField, v13);
      }
    }
  }
LABEL_66:
  if ( !(_DWORD)value )
    goto LABEL_84;
  v54 = v21[1].klass;
  if ( !v54 )
    goto LABEL_83;
  namespaze = (System_Int32_array **)v54->_1.namespaze;
  v56 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v56 = TerminalPramsManager_TypeInfo;
  }
  p_mResultEventPanelRewardInfos = (BattleServantConfConponent_o *)&v56->static_fields->mResultEventPanelRewardInfos;
  p_mResultEventPanelRewardInfos->klass = (BattleServantConfConponent_c *)namespaze;
  sub_B70630(p_mResultEventPanelRewardInfos, namespaze, v14, v15, v16, v17, v18, v19);
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  }
  if ( !byte_434DEA1 )
  {
    sub_B70694(&TerminalSceneComponent_TypeInfo);
    byte_434DEA1 = 1;
  }
  BeforeEventSubmarineSaveData_k__BackingField = (EventSaveData_o *)TerminalSceneComponent_TypeInfo;
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    BeforeEventSubmarineSaveData_k__BackingField = (EventSaveData_o *)TerminalSceneComponent_TypeInfo;
  }
  v58 = BeforeEventSubmarineSaveData_k__BackingField[5].fields.value->klass;
  if ( !v58 )
    goto LABEL_83;
  BeforeEventSubmarineSaveData_k__BackingField = (EventSaveData_o *)v58->_2.genericContainerHandle;
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
  __int64 v7; // x20
  __int64 v8; // x0
  __int64 v9; // x1
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
  SubmarineMapManager_c *klass; // x8
  const MethodInfo *v23; // x4
  SchedulerTaskBase_o *v24; // x21
  SchedulerTaskBase_TaskCallback_o *v25; // x22
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  TaskScheduler_o *taskScheduler; // x19
  __int64 v33; // x20
  __int64 v34; // x0
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  const MethodInfo *v41; // x1
  const MethodInfo *v42; // x1
  const MethodInfo *v43; // x1
  __int64 v44; // x0
  __int64 v45; // x0

  if ( (byte_4350E67 & 1) == 0 )
  {
    sub_B70694(&SchedulerTaskBase___TypeInfo);
    sub_B70694(&SchedulerTaskBase_TaskCallback_TypeInfo);
    sub_B70694(&Method_SubmarineMapManager___c__DisplayClass37_0__OnScannerSelected_b__0__);
    sub_B70694(&SubmarineMapManager___c__DisplayClass37_0_TypeInfo);
    byte_4350E67 = 1;
  }
  v7 = sub_B70764(SubmarineMapManager___c__DisplayClass37_0_TypeInfo);
  SubmarineMapManager___c__DisplayClass37_0___ctor((SubmarineMapManager___c__DisplayClass37_0_o *)v7, 0LL);
  if ( !v7 )
    goto LABEL_12;
  *(_QWORD *)(v7 + 16) = this;
  sub_B70630((BattleServantConfConponent_o *)(v7 + 16), (System_Int32_array **)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 32) = panelData;
  *(_DWORD *)(v7 + 24) = scanId;
  sub_B70630((BattleServantConfConponent_o *)(v7 + 32), (System_Int32_array **)panelData, v16, v17, v18, v19, v20, v21);
  klass = this->klass;
  if ( *(int *)(v7 + 24) > 0 )
  {
    ((void (__fastcall *)(SubmarineMapManager_o *, __int64, Il2CppMethodPointer))klass->vtable._30_SetAllTouchBlock.method)(
      this,
      1LL,
      klass->vtable._31_SetCameraWorkBlock.methodPtr);
    *(_BYTE *)(v7 + 40) = 0;
    v24 = SubmarineMapManager__ShowScanRangeTask(
            this,
            *(_DWORD *)(v7 + 24),
            *(SubmarineMapPanelData_o **)(v7 + 32),
            (bool *)(v7 + 40),
            v23);
    v25 = (SchedulerTaskBase_TaskCallback_o *)sub_B70764(SchedulerTaskBase_TaskCallback_TypeInfo);
    SchedulerTaskBase_TaskCallback___ctor(
      v25,
      (Il2CppObject *)v7,
      Method_SubmarineMapManager___c__DisplayClass37_0__OnScannerSelected_b__0__,
      0LL);
    if ( v24 )
    {
      v24->fields.EndCallback = v25;
      sub_B70630(
        (BattleServantConfConponent_o *)&v24->fields.EndCallback,
        (System_Int32_array **)v25,
        v26,
        v27,
        v28,
        v29,
        v30,
        v31);
      taskScheduler = this->fields.taskScheduler;
      v8 = sub_B706AC(SchedulerTaskBase___TypeInfo, 1LL);
      if ( v8 )
      {
        v33 = v8;
        v34 = sub_B70754(v24, *(_QWORD *)(*(_QWORD *)v8 + 64LL));
        if ( !v34 )
        {
          v44 = sub_B7078C(0LL);
          sub_B70738(v44, 0LL);
        }
        if ( !*(_DWORD *)(v33 + 24) )
        {
          v45 = sub_B70798(v34);
          sub_B70738(v45, 0LL);
        }
        *(_QWORD *)(v33 + 32) = v24;
        sub_B70630((BattleServantConfConponent_o *)(v33 + 32), (System_Int32_array **)v24, v35, v36, v37, v38, v39, v40);
        if ( taskScheduler )
        {
          TaskScheduler__AddTask(taskScheduler, 0, (SchedulerTaskBase_array *)v33, 0LL);
          return;
        }
      }
    }
LABEL_12:
    sub_B7076C(v8, v9);
  }
  ((void (__fastcall *)(SubmarineMapManager_o *, void *))klass->vtable._32_AllTouchBlockForceFalse.method)(
    this,
    klass[1]._1.image);
  SubmarineMapManager__HideScannableEffect(this, v41);
  SubmarineMapManager__ShowScannableEffect(this, v42);
  SubmarineMapManager__HideSelectedPanelEffect(this, v43);
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
  SubmarineScanConfirmDialog_o *scanConfirmDialog; // x21
  System_Action_bool__o *v25; // x22
  const MethodInfo *v26; // x4

  if ( (byte_4350E7D & 1) == 0 )
  {
    sub_B70694(&Method_System_Action_bool___ctor__);
    sub_B70694(&System_Action_bool__TypeInfo);
    sub_B70694(&Method_SubmarineMapManager___c__DisplayClass69_0__OpenScanConfirmDialog_b__0__);
    sub_B70694(&SubmarineMapManager___c__DisplayClass69_0_TypeInfo);
    byte_4350E7D = 1;
  }
  v9 = sub_B70764(SubmarineMapManager___c__DisplayClass69_0_TypeInfo);
  SubmarineMapManager___c__DisplayClass69_0___ctor((SubmarineMapManager___c__DisplayClass69_0_o *)v9, 0LL);
  if ( !v9 )
    goto LABEL_6;
  *(_QWORD *)(v9 + 16) = this;
  sub_B70630((BattleServantConfConponent_o *)(v9 + 16), (System_Int32_array **)this, v12, v13, v14, v15, v16, v17);
  *(_QWORD *)(v9 + 24) = callback;
  sub_B70630((BattleServantConfConponent_o *)(v9 + 24), (System_Int32_array **)callback, v18, v19, v20, v21, v22, v23);
  ((void (__fastcall *)(SubmarineMapManager_o *, __int64, Il2CppMethodPointer))this->klass->vtable._31_SetCameraWorkBlock.method)(
    this,
    1LL,
    this->klass->vtable._32_AllTouchBlockForceFalse.methodPtr);
  scanConfirmDialog = this->fields.scanConfirmDialog;
  v25 = (System_Action_bool__o *)sub_B70764(System_Action_bool__TypeInfo);
  System_Action_bool____ctor(
    v25,
    (Il2CppObject *)v9,
    Method_SubmarineMapManager___c__DisplayClass69_0__OpenScanConfirmDialog_b__0__,
    (const MethodInfo_2648200 *)Method_System_Action_bool___ctor__);
  if ( !scanConfirmDialog )
LABEL_6:
    sub_B7076C(v10, v11);
  SubmarineScanConfirmDialog__Open(scanConfirmDialog, scanId, isShowDialogUpper, v25, v26);
}


void __fastcall SubmarineMapManager__OpenSelectScannerDialog(
        SubmarineMapManager_o *this,
        System_Action_int__o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  SubmarineSelectScannerDialog_o *selectScannerDialog; // x20
  const MethodInfo *v21; // x1
  int32_t eventId; // w22
  System_Action_int__o *v23; // x23
  System_Action_o *v24; // x21
  const MethodInfo *v25; // x4

  if ( (byte_4350E7B & 1) == 0 )
  {
    sub_B70694(&Method_System_Action_int___ctor__);
    sub_B70694(&System_Action_int__TypeInfo);
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_SubmarineMapManager_TryOpenNewScannerDialog__);
    sub_B70694(&Method_SubmarineMapManager___c__DisplayClass67_0__OpenSelectScannerDialog_b__0__);
    sub_B70694(&SubmarineMapManager___c__DisplayClass67_0_TypeInfo);
    byte_4350E7B = 1;
  }
  v5 = sub_B70764(SubmarineMapManager___c__DisplayClass67_0_TypeInfo);
  SubmarineMapManager___c__DisplayClass67_0___ctor((SubmarineMapManager___c__DisplayClass67_0_o *)v5, 0LL);
  if ( !v5 )
    goto LABEL_6;
  *(_QWORD *)(v5 + 16) = this;
  sub_B70630((BattleServantConfConponent_o *)(v5 + 16), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = callback;
  sub_B70630((BattleServantConfConponent_o *)(v5 + 24), (System_Int32_array **)callback, v14, v15, v16, v17, v18, v19);
  ((void (__fastcall *)(SubmarineMapManager_o *, __int64, Il2CppMethodPointer))this->klass->vtable._31_SetCameraWorkBlock.method)(
    this,
    1LL,
    this->klass->vtable._32_AllTouchBlockForceFalse.methodPtr);
  selectScannerDialog = this->fields.selectScannerDialog;
  eventId = SubmarineMapManager__get_eventId(this, v21);
  v23 = (System_Action_int__o *)sub_B70764(System_Action_int__TypeInfo);
  System_Action_int____ctor(
    v23,
    (Il2CppObject *)v5,
    Method_SubmarineMapManager___c__DisplayClass67_0__OpenSelectScannerDialog_b__0__,
    (const MethodInfo_264ABB8 *)Method_System_Action_int___ctor__);
  v24 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
  System_Action___ctor(v24, (Il2CppObject *)this, Method_SubmarineMapManager_TryOpenNewScannerDialog__, 0LL);
  if ( !selectScannerDialog )
LABEL_6:
    sub_B7076C(v6, v7);
  SubmarineSelectScannerDialog__Open(selectScannerDialog, eventId, v23, v24, v25);
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
    sub_B70630(p_assetManager, 0LL, v5, v6, v7, v8, v9, v10);
  }
  SubmarineMapManager__ReleasePoolEffects(this, method);
  EventMapManagerBase__ReleaseAssets((EventMapManagerBase_o *)this, 0LL);
}


void __fastcall SubmarineMapManager__ReleasePoolEffects(SubmarineMapManager_o *this, const MethodInfo *method)
{
  struct ComponentPool_CommonEffectComponent__o *effectScanedPanelObjPool; // x0
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  ComponentPool_SubmarineEffectScannablePanelComponent__o *effectScannablePanelObjPool; // x0
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  ComponentPool_SubmarineEffectScannablePanelComponent__o *v17; // x0
  BattleServantConfConponent_o *p_effectScanObstaclePanelObjPool; // x19
  struct ComponentPool_SubmarineEffectScanObstaclePanelComponent__o *effectScanObstaclePanelObjPool; // t1
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7

  if ( (byte_4350E80 & 1) == 0 )
  {
    sub_B70694(&Method_ComponentPool_CommonEffectComponent__Finish__);
    sub_B70694(&Method_ComponentPool_SubmarineEffectScannablePanelComponent__Finish__);
    sub_B70694(&Method_ComponentPool_SubmarineEffectScanObstaclePanelComponent__Finish__);
    byte_4350E80 = 1;
  }
  effectScanedPanelObjPool = this->fields.effectScanedPanelObjPool;
  if ( effectScanedPanelObjPool )
  {
    ComponentPool_SubmarineEffectScannablePanelComponent___Finish(
      (ComponentPool_SubmarineEffectScannablePanelComponent__o *)effectScanedPanelObjPool,
      (const MethodInfo_21A7234 *)Method_ComponentPool_CommonEffectComponent__Finish__);
    this->fields.effectScanedPanelObjPool = 0LL;
    sub_B70630((BattleServantConfConponent_o *)&this->fields.effectScanedPanelObjPool, 0LL, v4, v5, v6, v7, v8, v9);
  }
  effectScannablePanelObjPool = this->fields.effectScannablePanelObjPool;
  if ( effectScannablePanelObjPool )
  {
    ComponentPool_SubmarineEffectScannablePanelComponent___Finish(
      effectScannablePanelObjPool,
      (const MethodInfo_21A7234 *)Method_ComponentPool_SubmarineEffectScannablePanelComponent__Finish__);
    this->fields.effectScannablePanelObjPool = 0LL;
    sub_B70630(
      (BattleServantConfConponent_o *)&this->fields.effectScannablePanelObjPool,
      0LL,
      v11,
      v12,
      v13,
      v14,
      v15,
      v16);
  }
  effectScanObstaclePanelObjPool = this->fields.effectScanObstaclePanelObjPool;
  p_effectScanObstaclePanelObjPool = (BattleServantConfConponent_o *)&this->fields.effectScanObstaclePanelObjPool;
  v17 = (ComponentPool_SubmarineEffectScannablePanelComponent__o *)effectScanObstaclePanelObjPool;
  if ( effectScanObstaclePanelObjPool )
  {
    ComponentPool_SubmarineEffectScannablePanelComponent___Finish(
      v17,
      (const MethodInfo_21A7234 *)Method_ComponentPool_SubmarineEffectScanObstaclePanelComponent__Finish__);
    p_effectScanObstaclePanelObjPool->klass = 0LL;
    sub_B70630(p_effectScanObstaclePanelObjPool, 0LL, v20, v21, v22, v23, v24, v25);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SubmarineMapManager__RentAndPutEffectAbovePanel_SubmarineEffectSelectedPanelComponent_(
        SubmarineMapManager_o *this,
        ComponentPool_T__o *pool,
        SubmarineMapPanelData_o *panelData,
        System_Nullable_Vector3__o offset,
        System_Nullable_Vector3__o scale,
        const MethodInfo_1D6054C *method)
{
  unsigned __int64 v7; // x19
  __int64 v8; // x20
  UnityEngine_GameObject_o *effectContainer; // x0
  UnityEngine_Transform_o *transform; // x24
  float v14; // s0
  float v15; // s1
  float v16; // s2
  UnityEngine_Component_o *v17; // x21
  UnityEngine_Transform_o *v18; // x22
  const MethodInfo_243BBCC *v19; // x2
  float x; // s8
  float y; // s9
  float z; // s10
  float v23; // s0
  float v24; // s1
  float v25; // s2
  unsigned __int64 v26; // x19
  UnityEngine_Transform_o *v27; // x0
  const MethodInfo_243BBCC *v28; // x2
  bool v29; // zf
  UnityEngine_Transform_o *v30; // x19
  int v31; // s0
  System_Nullable_Vector3__o v34; // [xsp+0h] [xbp-70h] BYREF
  System_Nullable_Vector3__o v35; // [xsp+10h] [xbp-60h] BYREF
  System_Nullable_Vector3__o v36; // 0:x0.16
  System_Nullable_Vector3__o v37; // 0:x0.16
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v39; // 0:s0.4,4:s1.4,8:s2.4

  v7 = *(_QWORD *)&scale.fields.value.fields.z;
  v8 = *(_QWORD *)&offset.fields.value.fields.z;
  v35 = offset;
  v34 = scale;
  if ( (byte_4354C6B & 1) == 0 )
  {
    sub_B70694(&Method_System_Nullable_Vector3__get_HasValue__);
    sub_B70694(&Method_System_Nullable_Vector3__get_Value__);
    byte_4354C6B = 1;
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
  *(UnityEngine_Vector3_o *)&v14 = SubmarinePanelPositionCalculator__GetPositionByIndices(
                                     (SubmarinePanelPositionCalculator_o *)effectContainer,
                                     panelData->fields._HIndex_k__BackingField,
                                     panelData->fields._VIndex_k__BackingField,
                                     0LL);
  if ( !pool )
    goto LABEL_16;
  effectContainer = (UnityEngine_GameObject_o *)((__int64 (__fastcall *)(ComponentPool_T__o *, UnityEngine_Transform_o *, float, float, float))method->rgctx_data->_0_ComponentPool_T__Rent->methodPointer)(
                                                  pool,
                                                  transform,
                                                  v14,
                                                  v15,
                                                  v16);
  if ( !effectContainer )
    goto LABEL_16;
  v17 = (UnityEngine_Component_o *)effectContainer;
  effectContainer = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                  (UnityEngine_Component_o *)effectContainer,
                                                  0LL);
  if ( !effectContainer )
    goto LABEL_16;
  v18 = (UnityEngine_Transform_o *)effectContainer;
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)effectContainer, 0LL);
  x = localPosition.fields.x;
  y = localPosition.fields.y;
  z = localPosition.fields.z;
  if ( (v8 & 0xFF00000000LL) != 0 )
  {
    *(_QWORD *)&v36.fields.value.fields.x = &v35;
    *(_QWORD *)&v36.fields.value.fields.z = Method_System_Nullable_Vector3__get_Value__;
    *(UnityEngine_Vector3_o *)&v23 = System_Nullable_Vector3___get_Value(v36, v19);
    LOBYTE(v26) = v34.fields.has_value;
  }
  else
  {
    v26 = HIDWORD(v7);
    *(UnityEngine_Vector3_o *)&v23 = UnityEngine_Vector3__get_zero(0LL);
  }
  v39.fields.x = x + v23;
  v39.fields.y = y + v24;
  v39.fields.z = z + v25;
  UnityEngine_Transform__set_localPosition(v18, v39, 0LL);
  v27 = UnityEngine_Component__get_transform(v17, 0LL);
  v29 = (unsigned __int8)v26 == 0;
  v30 = v27;
  if ( v29 )
  {
    *(UnityEngine_Vector3_o *)&v31 = UnityEngine_Vector3__get_one(0LL);
    if ( v30 )
      goto LABEL_14;
LABEL_16:
    sub_B7076C(effectContainer, pool);
  }
  *(_QWORD *)&v37.fields.value.fields.x = &v34;
  *(_QWORD *)&v37.fields.value.fields.z = Method_System_Nullable_Vector3__get_Value__;
  *(UnityEngine_Vector3_o *)&v31 = System_Nullable_Vector3___get_Value(v37, v28);
  if ( !v30 )
    goto LABEL_16;
LABEL_14:
  UnityEngine_Transform__set_localScale(v30, *(UnityEngine_Vector3_o *)&v31, 0LL);
}


void __fastcall SubmarineMapManager__ResetTimeAcceleration(SubmarineMapManager_o *this, const MethodInfo *method)
{
  UnityEngine_Time__set_timeScale(1.0, 0LL);
  this->fields.isTimeScaleAccelerate = 0;
}


void __fastcall SubmarineMapManager__ReturnEffectsToPool_SubmarineEffectSelectedPanelComponent_(
        SubmarineMapManager_o *this,
        ComponentPool_T__o *pool,
        const MethodInfo_1D606F0 *method)
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
        v10 = sub_B70798(Children);
        sub_B70738(v10, 0LL);
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
    sub_B7076C(Children, v6);
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
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  TaskScheduler_o *taskScheduler; // x20
  const MethodInfo *v15; // x1
  __int64 v16; // x20
  System_Delegate_o *v17; // x23
  SchedulerTaskBase_TaskCallback_o *v18; // x24
  System_Int32_array **v19; // x0
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  TaskScheduler_o *v26; // x19
  System_Collections_Generic_List_SchedulerTaskBase__o *v27; // x21
  __int64 v28; // x0
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  __int64 v35; // x0
  __int64 v36; // x0
  SubmarineMapManager_o *v37; // x0
  const MethodInfo *v38; // x1

  if ( (byte_4350E6C & 1) == 0 )
  {
    sub_B70694(&SchedulerTaskBase___TypeInfo);
    sub_B70694(&SchedulerTaskNone_TypeInfo);
    sub_B70694(&SchedulerTaskBase_TaskCallback_TypeInfo);
    sub_B70694(&Method_SubmarineMapManager___c__DisplayClass42_0__RevealAvailableSpots_b__0__);
    sub_B70694(&SubmarineMapManager___c__DisplayClass42_0_TypeInfo);
    byte_4350E6C = 1;
  }
  v5 = sub_B70764(SubmarineMapManager___c__DisplayClass42_0_TypeInfo);
  SubmarineMapManager___c__DisplayClass42_0___ctor((SubmarineMapManager___c__DisplayClass42_0_o *)v5, 0LL);
  if ( !v5 )
    goto LABEL_13;
  *(_QWORD *)(v5 + 16) = finishCallback;
  sub_B70630(
    (BattleServantConfConponent_o *)(v5 + 16),
    (System_Int32_array **)finishCallback,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  taskScheduler = this->fields.taskScheduler;
  RevealEachSpotsTasks = SubmarineMapManager__CreateRevealEachSpotsTasks(this, v15);
  if ( !taskScheduler )
    goto LABEL_13;
  TaskScheduler__AddTask_19759076(taskScheduler, 0, RevealEachSpotsTasks, 0LL);
  v16 = sub_B70764(SchedulerTaskNone_TypeInfo);
  SchedulerTaskNone___ctor((SchedulerTaskNone_o *)v16, 0LL);
  if ( !v16 )
    goto LABEL_13;
  v17 = *(System_Delegate_o **)(v16 + 32);
  v18 = (SchedulerTaskBase_TaskCallback_o *)sub_B70764(SchedulerTaskBase_TaskCallback_TypeInfo);
  SchedulerTaskBase_TaskCallback___ctor(
    v18,
    (Il2CppObject *)v5,
    Method_SubmarineMapManager___c__DisplayClass42_0__RevealAvailableSpots_b__0__,
    0LL);
  v19 = (System_Int32_array **)System_Delegate__Combine(v17, (System_Delegate_o *)v18, 0LL);
  if ( !v19 || *v19 == (System_Int32_array *)SchedulerTaskBase_TaskCallback_TypeInfo )
  {
    *(_QWORD *)(v16 + 32) = v19;
    sub_B70630((BattleServantConfConponent_o *)(v16 + 32), v19, v20, v21, v22, v23, v24, v25);
    v26 = this->fields.taskScheduler;
    RevealEachSpotsTasks = (System_Collections_Generic_List_SchedulerTaskBase__o *)sub_B706AC(
                                                                                     SchedulerTaskBase___TypeInfo,
                                                                                     1LL);
    if ( RevealEachSpotsTasks )
    {
      v27 = RevealEachSpotsTasks;
      v28 = sub_B70754(v16, RevealEachSpotsTasks->klass->_1.element_class);
      if ( !v28 )
      {
        v35 = sub_B7078C(0LL);
        sub_B70738(v35, 0LL);
      }
      if ( !v27->fields._size )
      {
        v36 = sub_B70798(v28);
        sub_B70738(v36, 0LL);
      }
      v27->fields._syncRoot = (Il2CppObject *)v16;
      sub_B70630(
        (BattleServantConfConponent_o *)&v27->fields._syncRoot,
        (System_Int32_array **)v16,
        v29,
        v30,
        v31,
        v32,
        v33,
        v34);
      if ( v26 )
      {
        TaskScheduler__AddTask(v26, 0, (SchedulerTaskBase_array *)v27, 0LL);
        return;
      }
    }
LABEL_13:
    sub_B7076C(RevealEachSpotsTasks, v7);
  }
  v37 = (SubmarineMapManager_o *)sub_B70A60(v19);
  SubmarineMapManager__CreateRevealEachSpotsTasks(v37, v38);
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
  const MethodInfo *v5; // x1
  struct SubmarineMapAssetManager_o *assetManager; // x8
  UnityEngine_Object_o *GridTexture_k__BackingField; // x20
  struct SubmarineMapDataManager_o *v8; // x8
  struct SubmarineMapAssetManager_o *v9; // x9
  SubmarineMapDataManager_o *v10; // x20
  UIWidget_o *v11; // x21
  int32_t v12; // w0
  struct SubmarineMapDataManager_o *v13; // x8
  struct SubmarineSettingsManager_o *Settings_k__BackingField; // x8

  if ( (byte_4350E74 & 1) == 0 )
  {
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_UITexture___);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_4350E74 = 1;
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
        submarineData = (SubmarineMapDataManager_o *)SubmarineMapDataManager__GetEmptyPanelUniqueIds(submarineData, v5);
        v8 = this->fields.submarineData;
        if ( v8 )
        {
          v9 = this->fields.assetManager;
          if ( v9 )
          {
            submarineData = (SubmarineMapDataManager_o *)GridLineTextureUtil__CreateWholeGridTexture(
                                                           (System_Int32_array *)submarineData,
                                                           v8->fields._PositionCalculator_k__BackingField,
                                                           v9->fields._GridTexture_k__BackingField,
                                                           0LL);
            if ( this->fields.gridLine )
            {
              v10 = submarineData;
              submarineData = (SubmarineMapDataManager_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                             this->fields.gridLine,
                                                             (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_UITexture___);
              if ( v10 )
              {
                v11 = (UIWidget_o *)submarineData;
                submarineData = (SubmarineMapDataManager_o *)((__int64 (__fastcall *)(SubmarineMapDataManager_o *, const char *))v10->klass[1]._1.gc_desc)(
                                                               v10,
                                                               v10->klass[1]._1.name);
                if ( v11 )
                {
                  UIWidget__set_width(v11, (int32_t)submarineData, 0LL);
                  v12 = (*(__int64 (__fastcall **)(SubmarineMapDataManager_o *, void *))&v10->klass[1]._1.byval_arg.bits)(
                          v10,
                          v10->klass[1]._1.this_arg.data);
                  UIWidget__set_height(v11, v12, 0LL);
                  ((void (__fastcall *)(UIWidget_o *, SubmarineMapDataManager_o *, Il2CppMethodPointer))v11->klass->vtable._27_set_mainTexture.method)(
                    v11,
                    v10,
                    v11->klass->vtable._28_get_shader.methodPtr);
                  submarineData = (SubmarineMapDataManager_o *)this->fields.gridLine;
                  if ( submarineData )
                  {
                    submarineData = (SubmarineMapDataManager_o *)UnityEngine_GameObject__get_transform(
                                                                   (UnityEngine_GameObject_o *)submarineData,
                                                                   0LL);
                    v13 = this->fields.submarineData;
                    if ( v13 )
                    {
                      Settings_k__BackingField = v13->fields._Settings_k__BackingField;
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
    sub_B7076C(submarineData, v5);
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
  struct SubmarineMapDataManager_o *submarineData; // x8
  _BOOL8 v4; // x0
  __int64 v5; // x1
  System_Collections_Generic_List_Enumerator_T__o v6; // [xsp+8h] [xbp-38h] BYREF
  System_Nullable_Vector3__o v7; // 0:x3.16
  System_Nullable_Vector3__o v8; // 0:x5.16

  v2 = this;
  if ( (byte_4350E83 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__get_Current__);
    sub_B70694(&Method_System_Collections_Generic_List_SubmarineMapPanelData__GetEnumerator__);
    this = (SubmarineMapManager_o *)sub_B70694(&Method_SubmarineMapManager_RentAndPutEffectAbovePanel_SubmarineEffectScanObstaclePanelComponent___);
    byte_4350E83 = 1;
  }
  memset(&v6, 0, sizeof(v6));
  if ( !v2->fields.isShowScanObstacleEffect )
  {
    submarineData = v2->fields.submarineData;
    v2->fields.isShowScanObstacleEffect = 1;
    if ( !submarineData || (this = (SubmarineMapManager_o *)submarineData->fields._PanelDataList_k__BackingField) == 0LL )
      sub_B7076C(this, method);
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v6,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this,
      (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_SubmarineMapPanelData__GetEnumerator__);
    while ( 1 )
    {
      v4 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
             &v6,
             (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__MoveNext__);
      if ( !v4 )
        break;
      if ( !v6.fields.current )
        sub_B7076C(v4, v5);
      if ( BYTE1(v6.fields.current[3].monitor) )
      {
        *(_QWORD *)&v7.fields.value.fields.x = 0LL;
        *(_QWORD *)&v7.fields.value.fields.z = 0LL;
        *(_QWORD *)&v8.fields.value.fields.x = 0LL;
        *(_QWORD *)&v8.fields.value.fields.z = 0LL;
        SubmarineMapManager__RentAndPutEffectAbovePanel_SubmarineEffectSelectedPanelComponent_(
          v2,
          (ComponentPool_T__o *)v2->fields.effectScanObstaclePanelObjPool,
          (SubmarineMapPanelData_o *)v6.fields.current,
          v7,
          v8,
          (const MethodInfo_1D6054C *)Method_SubmarineMapManager_RentAndPutEffectAbovePanel_SubmarineEffectScanObstaclePanelComponent___);
      }
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v6,
      (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__Dispose__);
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
  UnityEngine_GameObject_o *ScanRangeNotificatorPrefab; // x21
  const MethodInfo *v11; // x1
  UnityEngine_Transform_o *transform; // x22
  struct UnityEngine_GameObject_o *v13; // x0
  struct UnityEngine_GameObject_o **p_scanRangeNotificator; // x20
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7

  if ( (byte_4350E87 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_EventPanelScanMaster___);
    sub_B70694(&Method_DataMasterBase_EventPanelScanMaster__EventPanelScanEntity__int__GetEntity__);
    sub_B70694(&Method_UnityEngine_Object_Instantiate_GameObject____69308712);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4350E87 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_20;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_EventPanelScanMaster___);
  if ( !Instance )
    goto LABEL_20;
  Instance = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
               (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
               scanId,
               (const MethodInfo_21C0440 *)Method_DataMasterBase_EventPanelScanMaster__EventPanelScanEntity__int__GetEntity__);
  if ( !Instance )
    return;
  if ( !this->fields.assetManager )
LABEL_20:
    sub_B7076C(Instance, v8);
  ScanRangeNotificatorPrefab = SubmarineMapAssetManager__GetScanRangeNotificatorPrefab(
                                 this->fields.assetManager,
                                 *((_DWORD *)Instance + 14),
                                 v9);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)ScanRangeNotificatorPrefab, 0LL, 0LL) )
  {
    SubmarineMapManager__HideScanRange(this, v11);
    Instance = this->fields.effectContainer;
    if ( Instance )
    {
      transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Instance, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v13 = (struct UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_UILabel_(
                                                 (UILabel_o *)ScanRangeNotificatorPrefab,
                                                 transform,
                                                 (const MethodInfo_1D588A0 *)Method_UnityEngine_Object_Instantiate_GameObject____69308712);
      this->fields.scanRangeNotificator = v13;
      p_scanRangeNotificator = &this->fields.scanRangeNotificator;
      sub_B70630(
        (BattleServantConfConponent_o *)p_scanRangeNotificator,
        (System_Int32_array **)v13,
        v15,
        v16,
        v17,
        v18,
        v19,
        v20);
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
  struct SubmarineMapDataManager_o *submarineData; // x8
  struct SubmarineSettingsManager_o *Settings_k__BackingField; // x8
  const MethodInfo *v15; // x3
  int v16; // w23
  int v17; // w24
  SubmarineMapPanelData_o *PanelByIndices; // x0
  int v19; // s0
  SubmarineMapPanelData_o *v23; // x22
  float xMin; // s0
  float v25; // s4
  float xMax; // s0
  float v27; // s4
  float yMin; // s0
  float v29; // s4
  float yMax; // s0
  float v31; // s4
  float v33; // s0
  int v34; // s2
  float v36; // s4
  struct SubmarineMapDataManager_o *v37; // x8
  struct SubmarineSettingsManager_o *v38; // x8
  float x; // s1
  float v40; // s0
  float v41; // s0
  int v42; // s2
  float v44; // s4
  struct SubmarineMapDataManager_o *v45; // x8
  struct SubmarineSettingsManager_o *v46; // x8
  float v47; // s1
  float v48; // s0
  float v49; // s0
  int v50; // s2
  float v52; // s4
  struct SubmarineMapDataManager_o *v53; // x8
  struct SubmarineSettingsManager_o *v54; // x8
  float y; // s1
  float v56; // s0
  float v57; // s0
  int v58; // s2
  float v60; // s4
  struct SubmarineMapDataManager_o *v61; // x8
  struct SubmarineSettingsManager_o *v62; // x8
  float v63; // s1
  float v64; // s0
  UnityEngine_Rect_array *v65; // x21
  System_Collections_Generic_List_Rect__o *v66; // x22
  const MethodInfo *v67; // x3
  const MethodInfo *v68; // x2
  int mapInfo; // w8
  SubmarineMapManager_o *v70; // x21
  unsigned int v71; // w23
  __int64 v72; // x25
  int v73; // s0
  int v75; // s4
  int v77; // s6
  struct SubmarineMapDataManager_o *v79; // x8
  struct SubmarineSettingsManager_o *v80; // x8
  float v81; // s2
  float v82; // s3
  int v83; // s2
  int v85; // s4
  int v87; // s0
  int v88; // s1
  Submarine2DUILocationInfo_o *v89; // x22
  const MethodInfo *v90; // x1
  UnityEngine_Rect_array *Rects; // x0
  MapCamera_o *mapCamera; // x23
  UnityEngine_Rect_array *v93; // x22
  Submarine2DUILocationInfo_o *v94; // x22
  const MethodInfo *v95; // x1
  UnityEngine_Rect_array *v96; // x0
  MapCamera_o *v97; // x23
  UnityEngine_Rect_array *v98; // x22
  unsigned int v99; // s0
  unsigned int v100; // s1
  unsigned int v101; // s2
  unsigned int v102; // s3
  UnityEngine_Vector2_o Size; // kr00_8
  int v104; // s0
  System_Single_array *v108; // x20
  float width; // s0
  int v110; // s1
  float v113; // s0
  float height; // s0
  float m_XMin; // s8
  UnityEngine_Vector2_o center; // kr08_8
  struct SubmarineMapDataManager_o *v117; // x8
  struct SubmarineSettingsManager_o *v118; // x8
  int v119; // s2
  Submarine2DUILocationInfo_o *v121; // x22
  const MethodInfo *v122; // x1
  UnityEngine_Rect_array *v123; // x0
  MapCamera_o *v124; // x23
  UnityEngine_Rect_array *v125; // x22
  __int64 v126; // x0
  UnityEngine_Rect_o v127; // [xsp+0h] [xbp-80h] BYREF
  MethodInfo methoda; // [xsp+10h] [xbp-70h] BYREF
  UnityEngine_Rect_o v129; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v130; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v131; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v132; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v133; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v134; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v135; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v136; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v137; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v138; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v139; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v140; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v12 = this;
  if ( (byte_4350E8A & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_Rect__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_Rect__ToArray__);
    sub_B70694(&Method_System_Collections_Generic_List_Rect___ctor__);
    sub_B70694(&System_Collections_Generic_List_Rect__TypeInfo);
    sub_B70694(&MapCameraViewAdjusterUtil_TypeInfo);
    sub_B70694(&UnityEngine_Rect___TypeInfo);
    sub_B70694(&float___TypeInfo);
    sub_B70694(&SubmarinScanDialogUpSideWeakLocationInfo_TypeInfo);
    sub_B70694(&Submarine2DUILocationInfo_TypeInfo);
    this = (SubmarineMapManager_o *)sub_B70694(&SubmarineScanDialogUpsideLocationInfo_TypeInfo);
    byte_4350E8A = 1;
  }
  HIDWORD(methoda.genericContainerHandle) = 0;
  memset(&methoda, 0, 32);
  *(_QWORD *)&v127.fields.m_XMin = 0LL;
  *(_QWORD *)&v127.fields.m_Width = 0LL;
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
      v129.fields.m_XMin = panelData->fields._LocalPosition_k__BackingField.fields.x;
      v129.fields.m_YMin = panelData->fields._LocalPosition_k__BackingField.fields.y;
      v129.fields.m_Width = 0.0;
      v129.fields.m_Height = 0.0;
      UnityEngine_Rect___ctor_36101988(v129, *(UnityEngine_Vector2_o *)&v5, *(UnityEngine_Vector2_o *)&v7, &methoda);
      v16 = -2;
      do
      {
        v17 = -3;
        do
        {
          this = (SubmarineMapManager_o *)v12->fields.submarineData;
          if ( !this )
            goto LABEL_62;
          PanelByIndices = SubmarineMapDataManager__GetPanelByIndices(
                             (SubmarineMapDataManager_o *)this,
                             panelData->fields._HIndex_k__BackingField + v16,
                             v17 + panelData->fields._VIndex_k__BackingField + 1,
                             v15);
          if ( PanelByIndices )
          {
            v23 = PanelByIndices;
            xMin = UnityEngine_Rect__get_xMin(*(UnityEngine_Rect_o *)&v19, &methoda);
            v130.fields.m_XMin = UnityEngine_Mathf__Min(xMin, v23->fields._LocalPosition_k__BackingField.fields.x, 0LL);
            UnityEngine_Rect__set_xMin(v130, v25, &methoda);
            xMax = UnityEngine_Rect__get_xMax(v131, &methoda);
            v132.fields.m_XMin = UnityEngine_Mathf__Max(xMax, v23->fields._LocalPosition_k__BackingField.fields.x, 0LL);
            UnityEngine_Rect__set_xMax(v132, v27, &methoda);
            yMin = UnityEngine_Rect__get_yMin(v133, &methoda);
            v134.fields.m_XMin = UnityEngine_Mathf__Min(yMin, v23->fields._LocalPosition_k__BackingField.fields.y, 0LL);
            UnityEngine_Rect__set_yMin(v134, v29, &methoda);
            yMax = UnityEngine_Rect__get_yMax(v135, &methoda);
            v136.fields.m_XMin = UnityEngine_Mathf__Max(yMax, v23->fields._LocalPosition_k__BackingField.fields.y, 0LL);
            UnityEngine_Rect__set_yMax(v136, v31, &methoda);
          }
          ++v17;
        }
        while ( v17 < 2 );
      }
      while ( v16++ <= 1 );
      v33 = UnityEngine_Rect__get_xMin(*(UnityEngine_Rect_o *)&v19, &methoda);
      v37 = v12->fields.submarineData;
      if ( v37 )
      {
        v38 = v37->fields._Settings_k__BackingField;
        if ( v38 )
        {
          x = v38->fields._PanelUnitSize_k__BackingField.fields.x;
          v40 = v33 - x;
          UnityEngine_Rect__set_xMin(*(UnityEngine_Rect_o *)(&v34 - 2), v36, &methoda);
          v41 = UnityEngine_Rect__get_xMax(v137, &methoda);
          v45 = v12->fields.submarineData;
          if ( v45 )
          {
            v46 = v45->fields._Settings_k__BackingField;
            if ( v46 )
            {
              v47 = v46->fields._PanelUnitSize_k__BackingField.fields.x;
              v48 = v41 + v47;
              UnityEngine_Rect__set_xMax(*(UnityEngine_Rect_o *)(&v42 - 2), v44, &methoda);
              v49 = UnityEngine_Rect__get_yMin(v138, &methoda);
              v53 = v12->fields.submarineData;
              if ( v53 )
              {
                v54 = v53->fields._Settings_k__BackingField;
                if ( v54 )
                {
                  y = v54->fields._PanelUnitSize_k__BackingField.fields.y;
                  v56 = v49 - y;
                  UnityEngine_Rect__set_yMin(*(UnityEngine_Rect_o *)(&v50 - 2), v52, &methoda);
                  v57 = UnityEngine_Rect__get_yMax(v139, &methoda);
                  v61 = v12->fields.submarineData;
                  if ( v61 )
                  {
                    v62 = v61->fields._Settings_k__BackingField;
                    if ( v62 )
                    {
                      v63 = v62->fields._PanelUnitSize_k__BackingField.fields.y;
                      v64 = v57 + v63;
                      UnityEngine_Rect__set_yMax(*(UnityEngine_Rect_o *)(&v58 - 2), v60, &methoda);
                      this = (SubmarineMapManager_o *)sub_B706AC(UnityEngine_Rect___TypeInfo, 1LL);
                      if ( this )
                      {
                        v65 = (UnityEngine_Rect_array *)this;
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
    sub_B7076C(this, *(_QWORD *)&scanId);
  }
  v66 = (System_Collections_Generic_List_Rect__o *)sub_B70764(System_Collections_Generic_List_Rect__TypeInfo);
  System_Collections_Generic_List_Rect____ctor(
    v66,
    (const MethodInfo_3037F80 *)Method_System_Collections_Generic_List_Rect___ctor__);
  this = (SubmarineMapManager_o *)SubmarineDataHelperScan__CreateScanEvents(
                                    scanId,
                                    panelData,
                                    v12->fields.submarineData,
                                    v67);
  if ( !v12->fields.submarineData )
    goto LABEL_62;
  this = (SubmarineMapManager_o *)SubmarineMapDataManager__GetPanelsByScanEvents(
                                    v12->fields.submarineData,
                                    (System_Collections_Generic_List_SubmarineScanEvent__o *)this,
                                    v68);
  if ( !this )
    goto LABEL_62;
  mapInfo = (int)this->fields.mapInfo;
  v70 = this;
  if ( mapInfo >= 1 )
  {
    v71 = 0;
    while ( v71 < mapInfo )
    {
      v72 = *((_QWORD *)&v70->fields.warInfo + (int)v71);
      *(UnityEngine_Vector3_o *)&v73 = UnityEngine_Vector3__get_zero(0LL);
      v79 = v12->fields.submarineData;
      if ( !v79 )
        goto LABEL_62;
      v80 = v79->fields._Settings_k__BackingField;
      if ( !v80 )
        goto LABEL_62;
      v81 = v80->fields._PanelUnitSize_k__BackingField.fields.x;
      v82 = v80->fields._PanelUnitSize_k__BackingField.fields.y;
      UnityEngine_Rect___ctor_36101988(
        *(UnityEngine_Rect_o *)&v73,
        *(UnityEngine_Vector2_o *)&v75,
        *(UnityEngine_Vector2_o *)&v77,
        (const MethodInfo *)&v127);
      if ( !v72 )
        goto LABEL_62;
      v87 = *(_DWORD *)(v72 + 28);
      v88 = *(_DWORD *)(v72 + 32);
      UnityEngine_Rect__set_center(
        *(UnityEngine_Rect_o *)(&v83 - 2),
        *(UnityEngine_Vector2_o *)&v85,
        (const MethodInfo *)&v127);
      if ( !v66 )
        goto LABEL_62;
      System_Collections_Generic_List_Rect___Add(
        v66,
        v127,
        (const MethodInfo_3038D14 *)Method_System_Collections_Generic_List_Rect__Add__);
      mapInfo = (int)v70->fields.mapInfo;
      if ( (int)++v71 >= mapInfo )
        goto LABEL_35;
    }
    goto LABEL_63;
  }
LABEL_35:
  if ( !v66 )
    goto LABEL_62;
  v65 = System_Collections_Generic_List_Rect___ToArray(
          v66,
          (const MethodInfo_303AF7C *)Method_System_Collections_Generic_List_Rect__ToArray__);
LABEL_37:
  v89 = (Submarine2DUILocationInfo_o *)sub_B70764(Submarine2DUILocationInfo_TypeInfo);
  Submarine2DUILocationInfo___ctor(v89, v90);
  if ( !v89 )
    goto LABEL_62;
  Rects = Base2DUILocationInfo__GetRects((Base2DUILocationInfo_o *)v89, 0LL);
  mapCamera = v12->fields.mapCamera;
  v93 = Rects;
  if ( (BYTE3(MapCameraViewAdjusterUtil_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MapCameraViewAdjusterUtil_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MapCameraViewAdjusterUtil_TypeInfo);
  }
  *(UnityEngine_Rect_o *)&methoda.name = MapCameraViewAdjusterUtil__CalculateEachRectIntersectAvoidedCameraRect(
                                           mapCamera,
                                           v65,
                                           v93,
                                           (int32_t *)&methoda.genericContainerHandle + 1,
                                           0LL);
  *isShowDialogUpper = 0;
  if ( HIDWORD(methoda.genericContainerHandle) == 1 )
  {
    v94 = (Submarine2DUILocationInfo_o *)sub_B70764(SubmarineScanDialogUpsideLocationInfo_TypeInfo);
    Submarine2DUILocationInfo___ctor(v94, v95);
    if ( !v94 )
      goto LABEL_62;
    v96 = Base2DUILocationInfo__GetRects((Base2DUILocationInfo_o *)v94, 0LL);
    v97 = v12->fields.mapCamera;
    v98 = v96;
    if ( (BYTE3(MapCameraViewAdjusterUtil_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MapCameraViewAdjusterUtil_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MapCameraViewAdjusterUtil_TypeInfo);
    }
    *(UnityEngine_Rect_o *)&v99 = MapCameraViewAdjusterUtil__CalculateEachRectIntersectAvoidedCameraRect(
                                    v97,
                                    v65,
                                    v98,
                                    (int32_t *)&methoda.genericContainerHandle + 1,
                                    0LL);
    if ( HIDWORD(methoda.genericContainerHandle) != 1 )
    {
      if ( HIDWORD(methoda.genericContainerHandle) )
        goto LABEL_49;
      goto LABEL_48;
    }
    v121 = (Submarine2DUILocationInfo_o *)sub_B70764(SubmarinScanDialogUpSideWeakLocationInfo_TypeInfo);
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
    *(UnityEngine_Rect_o *)&v99 = MapCameraViewAdjusterUtil__CalculateEachRectIntersectAvoidedCameraRect(
                                    v124,
                                    v65,
                                    v125,
                                    (int32_t *)&methoda.genericContainerHandle + 1,
                                    0LL);
    if ( !HIDWORD(methoda.genericContainerHandle) )
    {
LABEL_48:
      methoda.name = (const char *)__PAIR64__(v100, v99);
      methoda.klass = (Il2CppClass *)__PAIR64__(v102, v101);
      *isShowDialogUpper = 1;
    }
  }
LABEL_49:
  Size = FSWindowUtil__GetSize(0LL);
  this = (SubmarineMapManager_o *)sub_B706AC(float___TypeInfo, 3LL);
  if ( !this )
    goto LABEL_62;
  v108 = (System_Single_array *)this;
  if ( !LODWORD(this->fields.mapInfo)
    || (LODWORD(this->fields.warInfo) = 1065353216,
        width = UnityEngine_Rect__get_width(*(UnityEngine_Rect_o *)&v104, (const MethodInfo *)&methoda.name),
        v108->max_length <= 1)
    || (v113 = width / Size.fields.x,
        v108->m_Items[2] = v113,
        height = UnityEngine_Rect__get_height(*(UnityEngine_Rect_o *)(&v110 - 1), (const MethodInfo *)&methoda.name),
        v108->max_length <= 2) )
  {
LABEL_63:
    v126 = sub_B70798(this);
    sub_B70738(v126, 0LL);
  }
  v108->m_Items[3] = height / Size.fields.y;
  v140.fields.m_XMin = UnityEngine_Mathf__Max_41127800(v108, 0LL);
  m_XMin = v140.fields.m_XMin;
  center = UnityEngine_Rect__get_center(v140, (const MethodInfo *)&methoda.name);
  v117 = v12->fields.submarineData;
  if ( !v117 )
    goto LABEL_62;
  v118 = v117->fields._Settings_k__BackingField;
  if ( !v118 )
    goto LABEL_62;
  v119 = 0;
  return SubmarineMapManager__CreateMoveCameraToPositionTask(
           v12,
           *(UnityEngine_Vector3_o *)&center.fields.x,
           m_XMin,
           v118->fields._ViewScanRangeCameraDuration_k__BackingField,
           *(const MethodInfo **)&scanId);
}


void __fastcall SubmarineMapManager__ShowScannableEffect(SubmarineMapManager_o *this, const MethodInfo *method)
{
  SubmarineMapManager_o *v2; // x19
  struct SubmarineMapDataManager_o *submarineData; // x8
  _BOOL8 v4; // x0
  __int64 v5; // x1
  System_Collections_Generic_List_Enumerator_T__o v6; // [xsp+8h] [xbp-38h] BYREF
  System_Nullable_Vector3__o v7; // 0:x3.16
  System_Nullable_Vector3__o v8; // 0:x5.16

  v2 = this;
  if ( (byte_4350E81 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__get_Current__);
    sub_B70694(&Method_System_Collections_Generic_List_SubmarineMapPanelData__GetEnumerator__);
    this = (SubmarineMapManager_o *)sub_B70694(&Method_SubmarineMapManager_RentAndPutEffectAbovePanel_SubmarineEffectScannablePanelComponent___);
    byte_4350E81 = 1;
  }
  memset(&v6, 0, sizeof(v6));
  if ( !v2->fields.isShowScannableEffect )
  {
    submarineData = v2->fields.submarineData;
    v2->fields.isShowScannableEffect = 1;
    if ( !submarineData || (this = (SubmarineMapManager_o *)submarineData->fields._PanelDataList_k__BackingField) == 0LL )
      sub_B7076C(this, method);
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v6,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this,
      (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_SubmarineMapPanelData__GetEnumerator__);
    while ( 1 )
    {
      v4 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
             &v6,
             (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__MoveNext__);
      if ( !v4 )
        break;
      if ( !v6.fields.current )
        sub_B7076C(v4, v5);
      if ( BYTE2(v6.fields.current[3].monitor) )
      {
        *(_QWORD *)&v7.fields.value.fields.x = 0LL;
        *(_QWORD *)&v7.fields.value.fields.z = 0LL;
        *(_QWORD *)&v8.fields.value.fields.x = 0LL;
        *(_QWORD *)&v8.fields.value.fields.z = 0LL;
        SubmarineMapManager__RentAndPutEffectAbovePanel_SubmarineEffectSelectedPanelComponent_(
          v2,
          (ComponentPool_T__o *)v2->fields.effectScannablePanelObjPool,
          (SubmarineMapPanelData_o *)v6.fields.current,
          v7,
          v8,
          (const MethodInfo_1D6054C *)Method_SubmarineMapManager_RentAndPutEffectAbovePanel_SubmarineEffectScannablePanelComponent___);
      }
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v6,
      (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__Dispose__);
  }
}


void __fastcall SubmarineMapManager__ShowSelectedPanelEffect(
        SubmarineMapManager_o *this,
        SubmarineMapPanelData_o *panelData,
        const MethodInfo *method)
{
  System_Nullable_Vector3__o v5; // 0:x3.16
  System_Nullable_Vector3__o v6; // 0:x5.16

  if ( (byte_4350E85 & 1) == 0 )
  {
    sub_B70694(&Method_SubmarineMapManager_RentAndPutEffectAbovePanel_SubmarineEffectSelectedPanelComponent___);
    byte_4350E85 = 1;
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
    (const MethodInfo_1D6054C *)Method_SubmarineMapManager_RentAndPutEffectAbovePanel_SubmarineEffectSelectedPanelComponent___);
}


void __fastcall SubmarineMapManager__StartScanPerformance(
        SubmarineMapManager_o *this,
        int32_t scanId,
        SubmarineMapPanelData_o *panelData,
        const MethodInfo *method)
{
  MissionNotifyManager_o *ScanTask; // x0
  __int64 v8; // x1
  CommonUI_o *Instance; // x22
  System_Action_o *v10; // x23
  TaskScheduler_o *taskScheduler; // x22
  const MethodInfo *v12; // x3
  TaskScheduler_o *v13; // x22
  SchedulerTaskBase_array *v14; // x23
  const MethodInfo *v15; // x3
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_Int32_array **v22; // x20
  __int64 v23; // x20
  System_Delegate_o *v24; // x22
  SchedulerTaskBase_TaskCallback_o *v25; // x23
  System_Int32_array **v26; // x0
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  TaskScheduler_o *v33; // x19
  MissionNotifyManager_o *v34; // x21
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  __int64 v41; // x0
  __int64 v42; // x0
  SubmarineMapManager_o *v43; // x0
  const MethodInfo *v44; // x1

  if ( (byte_4350E6A & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&SchedulerTaskBase___TypeInfo);
    sub_B70694(&SchedulerTaskNone_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B70694(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_B70694(&SingletonTemplate_MissionNotifyManager__TypeInfo);
    sub_B70694(&Method_SubmarineMapManager__StartScanPerformance_b__40_0__);
    sub_B70694(&Method_SubmarineMapManager__StartScanPerformance_b__40_1__);
    sub_B70694(&SchedulerTaskBase_TaskCallback_TypeInfo);
    byte_4350E6A = 1;
  }
  if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
  }
  ScanTask = (MissionNotifyManager_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2CE9CB0 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !ScanTask )
    goto LABEL_22;
  MissionNotifyManager__StartPause(ScanTask, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v10 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_SubmarineMapManager__StartScanPerformance_b__40_0__, 0LL);
  if ( !Instance )
    goto LABEL_22;
  CommonUI__SetTouchActionFadeMaskCollider(Instance, v10, 0LL);
  taskScheduler = this->fields.taskScheduler;
  ScanTask = (MissionNotifyManager_o *)SubmarineMapManager__CreateScanTask(this, panelData, scanId, v12);
  if ( !taskScheduler )
    goto LABEL_22;
  TaskScheduler__AddTask_19759076(
    taskScheduler,
    0,
    (System_Collections_Generic_List_SchedulerTaskBase__o *)ScanTask,
    0LL);
  v13 = this->fields.taskScheduler;
  v14 = (SchedulerTaskBase_array *)sub_B706AC(SchedulerTaskBase___TypeInfo, 1LL);
  ScanTask = (MissionNotifyManager_o *)SubmarineMapManager__CreateScanOpenPanelTask(this, scanId, panelData, v15);
  if ( !v14 )
    goto LABEL_22;
  v22 = (System_Int32_array **)ScanTask;
  if ( ScanTask )
  {
    ScanTask = (MissionNotifyManager_o *)sub_B70754(ScanTask, v14->obj.klass->_1.element_class);
    if ( !ScanTask )
      goto LABEL_24;
  }
  if ( !v14->max_length )
    goto LABEL_23;
  v14->m_Items[0] = (SchedulerTaskBase_o *)v22;
  sub_B70630((BattleServantConfConponent_o *)v14->m_Items, v22, v16, v17, v18, v19, v20, v21);
  if ( !v13 )
    goto LABEL_22;
  TaskScheduler__AddTask(v13, 0, v14, 0LL);
  v23 = sub_B70764(SchedulerTaskNone_TypeInfo);
  SchedulerTaskNone___ctor((SchedulerTaskNone_o *)v23, 0LL);
  if ( !v23 )
    goto LABEL_22;
  v24 = *(System_Delegate_o **)(v23 + 32);
  v25 = (SchedulerTaskBase_TaskCallback_o *)sub_B70764(SchedulerTaskBase_TaskCallback_TypeInfo);
  SchedulerTaskBase_TaskCallback___ctor(
    v25,
    (Il2CppObject *)this,
    Method_SubmarineMapManager__StartScanPerformance_b__40_1__,
    0LL);
  v26 = (System_Int32_array **)System_Delegate__Combine(v24, (System_Delegate_o *)v25, 0LL);
  if ( !v26 || *v26 == (System_Int32_array *)SchedulerTaskBase_TaskCallback_TypeInfo )
  {
    *(_QWORD *)(v23 + 32) = v26;
    sub_B70630((BattleServantConfConponent_o *)(v23 + 32), v26, v27, v28, v29, v30, v31, v32);
    v33 = this->fields.taskScheduler;
    ScanTask = (MissionNotifyManager_o *)sub_B706AC(SchedulerTaskBase___TypeInfo, 1LL);
    if ( !ScanTask )
      goto LABEL_22;
    v34 = ScanTask;
    ScanTask = (MissionNotifyManager_o *)sub_B70754(v23, ScanTask->klass->_1.element_class);
    if ( ScanTask )
    {
      if ( LODWORD(v34->fields.mNoDispInfos) )
      {
        v34->fields.mMissionNotifyComps = (struct System_Collections_Generic_List_MissionNotifyComponent__o *)v23;
        sub_B70630(
          (BattleServantConfConponent_o *)&v34->fields.mMissionNotifyComps,
          (System_Int32_array **)v23,
          v35,
          v36,
          v37,
          v38,
          v39,
          v40);
        if ( v33 )
        {
          TaskScheduler__AddTask(v33, 0, (SchedulerTaskBase_array *)v34, 0LL);
          return;
        }
LABEL_22:
        sub_B7076C(ScanTask, v8);
      }
LABEL_23:
      v41 = sub_B70798(ScanTask);
      sub_B70738(v41, 0LL);
    }
LABEL_24:
    v42 = sub_B7078C(ScanTask);
    sub_B70738(v42, 0LL);
  }
  v43 = (SubmarineMapManager_o *)sub_B70A60(v26);
  SubmarineMapManager__OnEndScan(v43, v44);
}


void __fastcall SubmarineMapManager__SubsequentialOpenPanelTaskChain(
        SubmarineMapManager_o *this,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  __int64 v5; // x21
  System_Collections_Generic_List_SchedulerTaskBase__o *SubsequentialOpenPanelTasks; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  const MethodInfo *v14; // x1
  int32_t size; // w8
  System_Collections_Generic_List_SchedulerTaskBase__o *v16; // x20
  bool v17; // vf
  int v18; // w8
  SchedulerTaskBase_o *v19; // x22
  BattleServantConfConponent_o *p_EndCallback; // x22
  System_Delegate_o *EndCallback; // t1
  SchedulerTaskBase_TaskCallback_o *v22; // x24
  System_Int32_array **v23; // x0
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  SubmarineMapManager_o *v30; // x0
  System_Action_o *v31; // x1
  const MethodInfo *v32; // x2

  if ( (byte_4350E6B & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_SchedulerTaskBase__get_Count__);
    sub_B70694(&Method_System_Collections_Generic_List_SchedulerTaskBase__get_Item__);
    sub_B70694(&SchedulerTaskBase_TaskCallback_TypeInfo);
    sub_B70694(&Method_SubmarineMapManager___c__DisplayClass41_0__SubsequentialOpenPanelTaskChain_b__0__);
    sub_B70694(&SubmarineMapManager___c__DisplayClass41_0_TypeInfo);
    byte_4350E6B = 1;
  }
  v5 = sub_B70764(SubmarineMapManager___c__DisplayClass41_0_TypeInfo);
  SubmarineMapManager___c__DisplayClass41_0___ctor((SubmarineMapManager___c__DisplayClass41_0_o *)v5, 0LL);
  if ( !v5 )
    goto LABEL_12;
  *(_QWORD *)(v5 + 16) = finishCallback;
  sub_B70630(
    (BattleServantConfConponent_o *)(v5 + 16),
    (System_Int32_array **)finishCallback,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  SubsequentialOpenPanelTasks = SubmarineMapManager__CreateSubsequentialOpenPanelTasks(this, v14);
  if ( !SubsequentialOpenPanelTasks )
    goto LABEL_12;
  size = SubsequentialOpenPanelTasks->fields._size;
  v16 = SubsequentialOpenPanelTasks;
  v17 = __OFSUB__(size, 1);
  v18 = size - 1;
  if ( v18 < 0 != v17 )
  {
    ActionExtensions__Call(*(System_Action_o **)(v5 + 16), 0LL);
  }
  else
  {
    v19 = SubsequentialOpenPanelTasks->fields._items->m_Items[v18];
    if ( !v19 )
      goto LABEL_12;
    EndCallback = (System_Delegate_o *)v19->fields.EndCallback;
    p_EndCallback = (BattleServantConfConponent_o *)&v19->fields.EndCallback;
    v22 = (SchedulerTaskBase_TaskCallback_o *)sub_B70764(SchedulerTaskBase_TaskCallback_TypeInfo);
    SchedulerTaskBase_TaskCallback___ctor(
      v22,
      (Il2CppObject *)v5,
      Method_SubmarineMapManager___c__DisplayClass41_0__SubsequentialOpenPanelTaskChain_b__0__,
      0LL);
    v23 = (System_Int32_array **)System_Delegate__Combine(EndCallback, (System_Delegate_o *)v22, 0LL);
    if ( !v23 || *v23 == (System_Int32_array *)SchedulerTaskBase_TaskCallback_TypeInfo )
    {
      p_EndCallback->klass = (BattleServantConfConponent_c *)v23;
      sub_B70630(p_EndCallback, v23, v24, v25, v26, v27, v28, v29);
      SubsequentialOpenPanelTasks = (System_Collections_Generic_List_SchedulerTaskBase__o *)this->fields.taskScheduler;
      if ( SubsequentialOpenPanelTasks )
      {
        TaskScheduler__AddTask_19759076((TaskScheduler_o *)SubsequentialOpenPanelTasks, 0, v16, 0LL);
        return;
      }
LABEL_12:
      sub_B7076C(SubsequentialOpenPanelTasks, v7);
    }
    v30 = (SubmarineMapManager_o *)sub_B70A60(v23);
    SubmarineMapManager__RevealAvailableSpots(v30, v31, v32);
  }
}


void __fastcall SubmarineMapManager__TryInitRequest(SubmarineMapManager_o *this, const MethodInfo *method)
{
  __int64 eventId; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x2
  struct MapControl_MapInfo_o *mapInfo; // x8
  NetworkManager_ResultCallbackFunc_o *v7; // x20
  EventScanPanelMapRequest_o *Request_WarBoardWallAttackRequest; // x20
  const MethodInfo *v9; // x1
  struct MapControl_MapInfo_o *v10; // x8

  if ( (byte_4350E62 & 1) == 0 )
  {
    sub_B70694(&Method_NetworkManager_getRequest_EventScanPanelMapRequest___);
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_B70694(&Method_SubmarineMapManager__TryInitRequest_b__32_0__);
    byte_4350E62 = 1;
  }
  this->fields.initRequestFinished = 0;
  eventId = SubmarineMapManager__get_eventId(this, method);
  mapInfo = this->fields.mapInfo;
  if ( !mapInfo )
    goto LABEL_12;
  if ( SubmarineMapDataManager__HasUserMapData(eventId, mapInfo->fields.mapId, v5) )
  {
    this->fields.initRequestFinished = 1;
    return;
  }
  v7 = (NetworkManager_ResultCallbackFunc_o *)sub_B70764(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v7,
    (Il2CppObject *)this,
    Method_SubmarineMapManager__TryInitRequest_b__32_0__,
    0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Request_WarBoardWallAttackRequest = (EventScanPanelMapRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                      v7,
                                                                      (const MethodInfo_1D57A4C *)Method_NetworkManager_getRequest_EventScanPanelMapRequest___);
  eventId = SubmarineMapManager__get_eventId(this, v9);
  v10 = this->fields.mapInfo;
  if ( !v10 || !Request_WarBoardWallAttackRequest )
LABEL_12:
    sub_B7076C(eventId, v4);
  EventScanPanelMapRequest__beginRequest(Request_WarBoardWallAttackRequest, eventId, v10->fields.mapId, 0, 0, 0LL);
}


void __fastcall SubmarineMapManager__TryOpenNewScannerDialog(SubmarineMapManager_o *this, const MethodInfo *method)
{
  SubmarineMapDataManager_o *submarineData; // x0
  int32_t NewReleasedScanId; // w0
  SubmarineNewScannerDialog_o *newScannerDialog; // x21
  int32_t v6; // w20
  System_Action_o *v7; // x22
  const MethodInfo *v8; // x3

  if ( (byte_4350E7C & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_SubmarineMapManager_TryOpenNewScannerDialog__);
    byte_4350E7C = 1;
  }
  submarineData = this->fields.submarineData;
  if ( !submarineData )
    goto LABEL_8;
  NewReleasedScanId = SubmarineMapDataManager__GetNewReleasedScanId(submarineData, method);
  if ( NewReleasedScanId >= 1 )
  {
    newScannerDialog = this->fields.newScannerDialog;
    v6 = NewReleasedScanId;
    v7 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
    System_Action___ctor(v7, (Il2CppObject *)this, Method_SubmarineMapManager_TryOpenNewScannerDialog__, 0LL);
    if ( newScannerDialog )
    {
      SubmarineNewScannerDialog__Open(newScannerDialog, v6, v7, v8);
      return;
    }
LABEL_8:
    sub_B7076C(submarineData, method);
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
  System_Collections_Generic_List_Enumerator_T__o v5; // [xsp+8h] [xbp-28h] BYREF

  v2 = this;
  if ( (byte_4350E6E & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__get_Current__);
    this = (SubmarineMapManager_o *)sub_B70694(&Method_System_Collections_Generic_List_SubmarineMapPanelData__GetEnumerator__);
    byte_4350E6E = 1;
  }
  memset(&v5, 0, sizeof(v5));
  submarineData = v2->fields.submarineData;
  if ( !submarineData || (this = (SubmarineMapManager_o *)submarineData->fields._PanelDataList_k__BackingField) == 0LL )
    sub_B7076C(this, method);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v5,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this,
    (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_SubmarineMapPanelData__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v5,
            (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__MoveNext__) )
  {
    if ( !v5.fields.current )
      sub_B7076C(0LL, v4);
    SubmarineMapPanelData__UpdatePanelDisplay((SubmarineMapPanelData_o *)v5.fields.current, v4);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v5,
    (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__Dispose__);
}


void __fastcall SubmarineMapManager__UpdateParams(
        SubmarineMapManager_o *this,
        int32_t beforeClearQuestId,
        const MethodInfo *method)
{
  SubmarineMapDataManager_o *submarineData; // x0

  submarineData = this->fields.submarineData;
  if ( !submarineData )
    sub_B7076C(0LL, beforeClearQuestId);
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
  __int64 v3; // x19
  ScrTerminalMap_o *terminalMap; // x0
  __int64 v5; // x1
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  UnityEngine_GameObject_c *klass; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x21
  const MethodInfo *v14; // x1
  TerminalPramsManager_c *v15; // x0
  TerminalPramsManager_c *v16; // x0
  System_String_array *ValueByArray; // x0
  __int64 v18; // x8
  UnityEngine_GameObject_c *v19; // x8
  TitleInfoControl_o *genericContainerHandle; // x20
  EventDetailEntity_o *v21; // x21
  System_Action_o *v22; // x22
  const MethodInfo *v23; // x1
  const MethodInfo *v24; // x1
  __int64 v25; // x0

  if ( (byte_4350E6F & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_B70694(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&TerminalPramsManager_TypeInfo);
    sub_B70694(&TerminalSceneComponent_TypeInfo);
    sub_B70694(&Method_SubmarineMapManager___c__DisplayClass49_0__UpdateTerminalInfo_b__0__);
    sub_B70694(&SubmarineMapManager___c__DisplayClass49_0_TypeInfo);
    byte_4350E6F = 1;
  }
  v3 = sub_B70764(SubmarineMapManager___c__DisplayClass49_0_TypeInfo);
  SubmarineMapManager___c__DisplayClass49_0___ctor((SubmarineMapManager___c__DisplayClass49_0_o *)v3, 0LL);
  if ( !v3 )
    goto LABEL_54;
  *(_QWORD *)(v3 + 16) = this;
  sub_B70630((BattleServantConfConponent_o *)(v3 + 16), (System_Int32_array **)this, v6, v7, v8, v9, v10, v11);
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
  if ( !byte_434DEA1 )
  {
    sub_B70694(&TerminalSceneComponent_TypeInfo);
    byte_434DEA1 = 1;
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
  terminalMap = (ScrTerminalMap_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !terminalMap )
    goto LABEL_54;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)terminalMap,
                                                                                        (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_EventDetailMaster___);
  terminalMap = (ScrTerminalMap_o *)SubmarineMapManager__get_eventId(this, v14);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_54;
  if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
         MasterData_WarQuestSelectionMaster,
         (WarEntity_o **)(v3 + 24),
         (int32_t)terminalMap,
         (const MethodInfo_21C049C *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
  {
    *(_DWORD *)(v3 + 32) = 0;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_434EFC4 )
    {
      sub_B70694(&TerminalPramsManager_TypeInfo);
      byte_434EFC4 = 1;
    }
    v15 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v15 = TerminalPramsManager_TypeInfo;
    }
    if ( v15->static_fields->_BeforeEventSubmarineSaveData_k__BackingField )
    {
      if ( (BYTE3(v15->vtable._0_Equals.methodPtr) & 4) != 0 && !v15->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v15);
      if ( !byte_434EFC4 )
      {
        sub_B70694(&TerminalPramsManager_TypeInfo);
        byte_434EFC4 = 1;
      }
      v16 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v16 = TerminalPramsManager_TypeInfo;
      }
      terminalMap = (ScrTerminalMap_o *)v16->static_fields->_BeforeEventSubmarineSaveData_k__BackingField;
      if ( !terminalMap )
        goto LABEL_54;
      ValueByArray = EventSaveData__GetValueByArray((EventSaveData_o *)terminalMap, 0x2Cu, 0LL);
      if ( ValueByArray )
      {
        v18 = *(_QWORD *)&ValueByArray->max_length;
        if ( v18 )
        {
          if ( !(_DWORD)v18 )
          {
            v25 = sub_B70798(ValueByArray);
            sub_B70738(v25, 0LL);
          }
          *(_DWORD *)(v3 + 32) = System_Int32__Parse(ValueByArray->m_Items[0], 0LL);
        }
      }
    }
    if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    }
    if ( !byte_434DEA1 )
    {
      sub_B70694(&TerminalSceneComponent_TypeInfo);
      byte_434DEA1 = 1;
    }
    terminalMap = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
    if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      terminalMap = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
    }
    v19 = terminalMap->fields.pfbLineP->klass;
    if ( v19 )
    {
      genericContainerHandle = (TitleInfoControl_o *)v19->_2.genericContainerHandle;
      v21 = *(EventDetailEntity_o **)(v3 + 24);
      v22 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
      System_Action___ctor(
        v22,
        (Il2CppObject *)v3,
        Method_SubmarineMapManager___c__DisplayClass49_0__UpdateTerminalInfo_b__0__,
        0LL);
      if ( genericContainerHandle )
      {
        TitleInfoControl__CheckEventSubmarineStatusAnim(genericContainerHandle, v21, v22, 0LL);
        return;
      }
    }
LABEL_54:
    sub_B7076C(terminalMap, v5);
  }
  ((void (__fastcall *)(SubmarineMapManager_o *, void *))this->klass->vtable._32_AllTouchBlockForceFalse.method)(
    this,
    this->klass[1]._1.image);
  SubmarineMapManager__HideScannableEffect(this, v23);
  SubmarineMapManager__ShowScannableEffect(this, v24);
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
    sub_B7076C(0LL, method);
  SubmarineMapDataManager__UpdateParams(submarineData, -1, v2);
  SubmarineMapManager__UpdateClosedPanelDisplay(this, v5);
  SubmarineMapManager__HideSelectedPanelEffect(this, v6);
  SubmarineMapManager__UpdateTerminalInfo(this, v7);
}


void __fastcall SubmarineMapManager___OnEveryActionEnd_b__28_0(SubmarineMapManager_o *this, const MethodInfo *method)
{
  System_Action_o *v3; // x20

  if ( (byte_4350E95 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_SubmarineMapManager__OnEveryActionEnd_b__28_1__);
    byte_4350E95 = 1;
  }
  v3 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
  System_Action___ctor(v3, (Il2CppObject *)this, Method_SubmarineMapManager__OnEveryActionEnd_b__28_1__, 0LL);
  ((void (__fastcall *)(SubmarineMapManager_o *, System_Action_o *, Il2CppMethodPointer))this->klass->vtable._24_OnAfterQuestAfterAction.method)(
    this,
    v3,
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
  __int64 v4; // x1

  if ( (byte_4350E96 & 1) == 0 )
  {
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4350E96 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B7076C(0LL, v4);
  CommonUI__SetSkipAnimation(Instance, 1, 0LL);
  UnityEngine_Time__set_timeScale(this->fields.ACCELERATION_TIME_SCALE, 0LL);
  this->fields.isTimeScaleAccelerate = 1;
}


void __fastcall SubmarineMapManager___StartScanPerformance_b__40_1(
        SubmarineMapManager_o *this,
        const MethodInfo *method)
{
  System_Action_o *v3; // x20
  const MethodInfo *v4; // x2

  if ( (byte_4350E97 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_SubmarineMapManager__StartScanPerformance_b__40_2__);
    byte_4350E97 = 1;
  }
  v3 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
  System_Action___ctor(v3, (Il2CppObject *)this, Method_SubmarineMapManager__StartScanPerformance_b__40_2__, 0LL);
  SubmarineMapManager__SubsequentialOpenPanelTaskChain(this, v3, v4);
}


void __fastcall SubmarineMapManager___StartScanPerformance_b__40_2(
        SubmarineMapManager_o *this,
        const MethodInfo *method)
{
  System_Action_o *v3; // x20
  const MethodInfo *v4; // x2

  if ( (byte_4350E98 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_SubmarineMapManager__StartScanPerformance_b__40_3__);
    byte_4350E98 = 1;
  }
  v3 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
  System_Action___ctor(v3, (Il2CppObject *)this, Method_SubmarineMapManager__StartScanPerformance_b__40_3__, 0LL);
  SubmarineMapManager__RevealAvailableSpots(this, v3, v4);
}


void __fastcall SubmarineMapManager___StartScanPerformance_b__40_3(
        SubmarineMapManager_o *this,
        const MethodInfo *method)
{
  MissionNotifyManager_o *v3; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x1

  if ( (byte_4350E99 & 1) == 0 )
  {
    sub_B70694(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_B70694(&SingletonTemplate_MissionNotifyManager__TypeInfo);
    byte_4350E99 = 1;
  }
  if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
  }
  v3 = (MissionNotifyManager_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2CE9CB0 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !v3 )
    sub_B7076C(0LL, v4);
  MissionNotifyManager__EndPause(v3, 0LL);
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
    sub_B7076C(this, method);
  return MapControl_WarInfo__GetEventId((MapControl_WarInfo_o *)this, 0LL);
}


SubmarinePanelPositionCalculator_o *__fastcall SubmarineMapManager__get_positionCalculator(
        SubmarineMapManager_o *this,
        const MethodInfo *method)
{
  struct SubmarineMapDataManager_o *submarineData; // x8

  submarineData = this->fields.submarineData;
  if ( !submarineData )
    sub_B7076C(this, method);
  return submarineData->fields._PositionCalculator_k__BackingField;
}


SubmarineSettingsManager_o *__fastcall SubmarineMapManager__get_settings(
        SubmarineMapManager_o *this,
        const MethodInfo *method)
{
  struct SubmarineMapDataManager_o *submarineData; // x8

  submarineData = this->fields.submarineData;
  if ( !submarineData )
    sub_B7076C(this, method);
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
  int32_t _1__state; // w8
  struct SubmarineMapManager_o *_4__this; // x20
  bool v5; // w21
  System_Func_bool__o *v6; // x22
  UnityEngine_WaitUntil_o *v7; // x20
  Il2CppObject **p__2__current; // x19

  v2 = this;
  if ( (byte_434F0CD & 1) == 0 )
  {
    sub_B70694(&Method_System_Func_bool___ctor__);
    sub_B70694(&System_Func_bool__TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B70694(&Method_SubmarineMapManager__CoInitRequest_b__21_0__);
    this = (SubmarineMapManager__CoInitRequest_d__21_o *)sub_B70694(&UnityEngine_WaitUntil_TypeInfo);
    byte_434F0CD = 1;
  }
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
  if ( _1__state == 1 )
  {
    v2->fields.__1__state = -1;
    this = (SubmarineMapManager__CoInitRequest_d__21_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !this
      || (CommonUI__SetConnect((CommonUI_o *)this, 0, 0LL), !_4__this)
      || (this = (SubmarineMapManager__CoInitRequest_d__21_o *)_4__this->fields.submarineData) == 0LL )
    {
LABEL_14:
      sub_B7076C(this, method);
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
  this = (SubmarineMapManager__CoInitRequest_d__21_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !this )
    goto LABEL_14;
  v5 = 1;
  CommonUI__SetConnect((CommonUI_o *)this, 1, 0LL);
  v6 = (System_Func_bool__o *)sub_B70764(System_Func_bool__TypeInfo);
  System_Func_bool____ctor(
    v6,
    (Il2CppObject *)_4__this,
    Method_SubmarineMapManager__CoInitRequest_b__21_0__,
    (const MethodInfo_299432C *)Method_System_Func_bool___ctor__);
  v7 = (UnityEngine_WaitUntil_o *)sub_B70764(UnityEngine_WaitUntil_TypeInfo);
  UnityEngine_WaitUntil___ctor(v7, v6, 0LL);
  v2->fields.__2__current = (Il2CppObject *)v7;
  p__2__current = &v2->fields.__2__current;
  sub_B70630(p__2__current);
  *((_DWORD *)p__2__current - 2) = 1;
  return v5;
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

  v2 = sub_B70698(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B70764(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B70698(&Method_SubmarineMapManager__CoInitRequest_d__21_System_Collections_IEnumerator_Reset__);
  sub_B70738(v3, v4);
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
  struct SubmarineMapManager_o *_4__this; // x20
  struct MapControl_MapInfo_o *mapInfo; // x8
  struct SubmarineMapAssetManager_o *assetManager; // x8
  struct ScrTerminalMap_o *terminalMap; // x8
  struct SubmarineMapAssetManager_o *v7; // x8
  UnityEngine_Object_o *ClosedPanelTexture_k__BackingField; // x22
  struct SubmarineMapDataManager_o *submarineData; // x8
  int32_t v10; // w0

  v2 = this;
  if ( (byte_434F0CE & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    this = (SubmarineMapManager__CoOnAfterSpotCreated_d__24_o *)sub_B70694(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_434F0CE = 1;
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
          _4__this->fields.closedPanelTexture = ClosePanelTextureUtil__CreateResizedTexture2D(
                                                  (UnityEngine_Texture2D_o *)this,
                                                  terminalMap->fields._currentMapImageH_k__BackingField,
                                                  LODWORD(terminalMap->fields.mapImageOffsetX),
                                                  0LL);
          sub_B70630(&_4__this->fields.closedPanelTexture);
          v7 = _4__this->fields.assetManager;
          if ( v7 )
          {
            ClosedPanelTexture_k__BackingField = (UnityEngine_Object_o *)v7->fields._ClosedPanelTexture_k__BackingField;
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
              sub_B70630(&_4__this->fields.closedPanelTexture);
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
                v10 = SubmarineQuestSaveInfo__get_BeforeClearQuestId((SubmarineQuestSaveInfo_o *)this, 0LL);
                SubmarineMapManager__UpdateParams(_4__this, v10, 0LL);
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
      sub_B7076C(this, method);
    }
    this = (SubmarineMapManager__CoOnAfterSpotCreated_d__24_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
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

  v2 = sub_B70698(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B70764(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B70698(&Method_SubmarineMapManager__CoOnAfterSpotCreated_d__24_System_Collections_IEnumerator_Reset__);
  sub_B70738(v3, v4);
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
  Il2CppObject *v1; // x19
  struct SubmarineMapManager___c_StaticFields *static_fields; // x0

  if ( (byte_434F0C3 & 1) == 0 )
  {
    sub_B70694(&SubmarineMapManager___c_TypeInfo);
    byte_434F0C3 = 1;
  }
  v1 = (Il2CppObject *)sub_B70764(SubmarineMapManager___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = SubmarineMapManager___c_TypeInfo->static_fields;
  static_fields->__9 = (struct SubmarineMapManager___c_o *)v1;
  sub_B70630(static_fields);
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
    sub_B7076C(this, 0LL);
  return !x->fields._IsOpened_k__BackingField;
}


bool __fastcall SubmarineMapManager___c___CreateScanOpenPanelTask_b__98_0(
        SubmarineMapManager___c_o *this,
        SubmarineScanEvent_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B7076C(this, 0LL);
  return x->fields._IsHitObstacle_k__BackingField || x->fields._IsOpened_k__BackingField;
}


int32_t __fastcall SubmarineMapManager___c___CreateScanOpenPanelTask_b__98_1(
        SubmarineMapManager___c_o *this,
        SubmarineScanEvent_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B7076C(this, 0LL);
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
    sub_B7076C(this, x);
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
  SubmarineMapManager_o *_4__this; // x0
  UnityEngine_MonoBehaviour_o *v4; // x20
  SubmarineMapAssetManager_o *monitor; // x21
  System_Action_o *_9__1; // x23
  int32_t v7; // w22
  System_Collections_IEnumerator_o *Assets; // x1

  if ( (byte_434F0C4 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_SubmarineMapManager___c__DisplayClass20_0__LoadAssets_b__1__);
    byte_434F0C4 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_9;
  SubmarineMapManager__CreateAssetManagerIfNotExists(_4__this, 0LL);
  v4 = (UnityEngine_MonoBehaviour_o *)this->fields.__4__this;
  if ( !v4 )
    goto LABEL_9;
  monitor = (SubmarineMapAssetManager_o *)v4[6].monitor;
  _4__this = (SubmarineMapManager_o *)SubmarineMapManager__get_eventId(this->fields.__4__this, 0LL);
  _9__1 = this->fields.__9__1;
  v7 = (int)_4__this;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_SubmarineMapManager___c__DisplayClass20_0__LoadAssets_b__1__,
      0LL);
    this->fields.__9__1 = _9__1;
    sub_B70630(&this->fields.__9__1);
  }
  if ( !monitor )
LABEL_9:
    sub_B7076C(_4__this, method);
  Assets = SubmarineMapAssetManager__CoLoadAssets(monitor, v7, _9__1, 0LL);
  UnityEngine_MonoBehaviour__StartCoroutine_36062060(v4, Assets, 0LL);
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
    sub_B7076C(_4__this, method);
  }
  inited = SubmarineMapManager__CoInitRequest(this->fields.__4__this, this->fields.finishCallback, 0LL);
  UnityEngine_MonoBehaviour__StartCoroutine_36062060(v6, inited, 0LL);
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
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *v5; // x20
  System_Collections_Generic_List_string__c *klass; // x8
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_434F0C5 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_B70694(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&TerminalSceneComponent_TypeInfo);
    byte_434F0C5 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !this->fields.__4__this )
    goto LABEL_19;
  v5 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
  Instance = (DataManager_o *)SubmarineMapManager__get_eventId(this->fields.__4__this, 0LL);
  if ( !v5 )
    goto LABEL_19;
  if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
         v5,
         &entity,
         (int32_t)Instance,
         (const MethodInfo_21C049C *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
  {
    if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    }
    if ( !byte_434DEA1 )
    {
      sub_B70694(&TerminalSceneComponent_TypeInfo);
      byte_434DEA1 = 1;
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
    sub_B7076C(Instance, v4);
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
    sub_B7076C(0LL, method);
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
  SubmarineMapManager_o *_4__this; // x0
  System_Action_int__o *_9__1; // x22
  SubmarineMapManager_o *v5; // x20

  if ( (byte_434F0C6 & 1) == 0 )
  {
    sub_B70694(&Method_System_Action_int___ctor__);
    sub_B70694(&System_Action_int__TypeInfo);
    sub_B70694(&Method_SubmarineMapManager___c__DisplayClass36_0__ClickPanel_b__1__);
    byte_434F0C6 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_8;
  SubmarineMapManager__HideScannableEffect(_4__this, 0LL);
  _9__1 = this->fields.__9__1;
  v5 = this->fields.__4__this;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_int__o *)sub_B70764(System_Action_int__TypeInfo);
    System_Action_int____ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_SubmarineMapManager___c__DisplayClass36_0__ClickPanel_b__1__,
      (const MethodInfo_264ABB8 *)Method_System_Action_int___ctor__);
    this->fields.__9__1 = _9__1;
    sub_B70630(&this->fields.__9__1);
  }
  if ( !v5 )
LABEL_8:
    sub_B7076C(_4__this, method);
  SubmarineMapManager__OpenSelectScannerDialog(v5, _9__1, 0LL);
}


void __fastcall SubmarineMapManager___c__DisplayClass36_0___ClickPanel_b__1(
        SubmarineMapManager___c__DisplayClass36_0_o *this,
        int32_t scanId,
        const MethodInfo *method)
{
  SubmarineMapManager_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B7076C(0LL, scanId);
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
  SubmarineMapManager_o *_4__this; // x0
  System_Action_bool__o *_9__1; // x22
  int32_t scanId; // w20
  SubmarineMapManager_o *v6; // x21
  _BOOL4 isShowDialogUpper; // w24

  if ( (byte_434F0C7 & 1) == 0 )
  {
    sub_B70694(&Method_System_Action_bool___ctor__);
    sub_B70694(&System_Action_bool__TypeInfo);
    sub_B70694(&Method_SubmarineMapManager___c__DisplayClass37_0__OnScannerSelected_b__1__);
    byte_434F0C7 = 1;
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
  v6 = this->fields.__4__this;
  isShowDialogUpper = this->fields.isShowDialogUpper;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_bool__o *)sub_B70764(System_Action_bool__TypeInfo);
    System_Action_bool____ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_SubmarineMapManager___c__DisplayClass37_0__OnScannerSelected_b__1__,
      (const MethodInfo_2648200 *)Method_System_Action_bool___ctor__);
    this->fields.__9__1 = _9__1;
    sub_B70630(&this->fields.__9__1);
  }
  if ( !v6 )
LABEL_9:
    sub_B7076C(_4__this, method);
  SubmarineMapManager__OpenScanConfirmDialog(v6, scanId, isShowDialogUpper, _9__1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SubmarineMapManager___c__DisplayClass37_0___OnScannerSelected_b__1(
        SubmarineMapManager___c__DisplayClass37_0_o *this,
        bool yes,
        const MethodInfo *method)
{
  SubmarineMapManager_o *_4__this; // x0
  SubmarineMapManager_o *v6; // x20
  System_Action_int__o *_9__2; // x22

  if ( (byte_434F0C8 & 1) == 0 )
  {
    sub_B70694(&Method_System_Action_int___ctor__);
    sub_B70694(&System_Action_int__TypeInfo);
    sub_B70694(&Method_SubmarineMapManager___c__DisplayClass37_0__OnScannerSelected_b__2__);
    byte_434F0C8 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_11;
  SubmarineMapManager__HideScanRange(_4__this, 0LL);
  v6 = this->fields.__4__this;
  if ( yes )
  {
    if ( v6 )
    {
      SubmarineMapManager__OnScanDecided(this->fields.__4__this, this->fields.scanId, this->fields.panelData, 0LL);
      return;
    }
LABEL_11:
    sub_B7076C(_4__this, yes);
  }
  _9__2 = this->fields.__9__2;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_int__o *)sub_B70764(System_Action_int__TypeInfo);
    System_Action_int____ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_SubmarineMapManager___c__DisplayClass37_0__OnScannerSelected_b__2__,
      (const MethodInfo_264ABB8 *)Method_System_Action_int___ctor__);
    this->fields.__9__2 = _9__2;
    sub_B70630(&this->fields.__9__2);
  }
  if ( !v6 )
    goto LABEL_11;
  SubmarineMapManager__OpenSelectScannerDialog(v6, _9__2, 0LL);
}


void __fastcall SubmarineMapManager___c__DisplayClass37_0___OnScannerSelected_b__2(
        SubmarineMapManager___c__DisplayClass37_0_o *this,
        int32_t lscanId,
        const MethodInfo *method)
{
  SubmarineMapManager_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B7076C(0LL, lscanId);
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
    sub_B7076C(0LL, result);
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
  CommonUI_o *Instance; // x0
  __int64 v4; // x1
  ErrorDialog_c *klass; // x8
  ErrorDialog_c *v6; // x8

  if ( (byte_434F0C9 & 1) == 0 )
  {
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B70694(&TerminalSceneComponent_TypeInfo);
    byte_434F0C9 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
  if ( !byte_434DEA1 )
  {
    sub_B70694(&TerminalSceneComponent_TypeInfo);
    byte_434DEA1 = 1;
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
  if ( !byte_434DEA1 )
  {
    sub_B70694(&TerminalSceneComponent_TypeInfo);
    byte_434DEA1 = 1;
  }
  Instance = (CommonUI_o *)TerminalSceneComponent_TypeInfo;
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    Instance = (CommonUI_o *)TerminalSceneComponent_TypeInfo;
  }
  v6 = Instance->fields.errorDialog->klass;
  if ( !v6
    || (Instance = *(CommonUI_o **)&v6->_2.static_fields_size) == 0LL
    || (ScrTerminalMap__UpdateAllSpotGameObject((ScrTerminalMap_o *)Instance, 0LL),
        (Instance = (CommonUI_o *)this->fields.__4__this) == 0LL)
    || (SubmarineMapManager__CheckNewPlayableEventQuest((SubmarineMapManager_o *)Instance, 0LL),
        (Instance = (CommonUI_o *)this->fields.__4__this) == 0LL) )
  {
LABEL_25:
    sub_B7076C(Instance, v4);
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
    sub_B7076C(this, x);
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

  if ( (byte_434F0CA & 1) == 0 )
  {
    sub_B70694(&Method_ActionExtensions_Call_int___);
    byte_434F0CA = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B7076C(0LL, *(_QWORD *)&scanId);
  ((void (__fastcall *)(struct SubmarineMapManager_o *, _QWORD, Il2CppMethodPointer))_4__this->klass->vtable._31_SetCameraWorkBlock.method)(
    _4__this,
    0LL,
    _4__this->klass->vtable._32_AllTouchBlockForceFalse.methodPtr);
  ActionExtensions__Call_int_(
    (System_Action_T__o *)this->fields.callback,
    scanId,
    (const MethodInfo_2BFC258 *)Method_ActionExtensions_Call_int___);
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

  if ( (byte_434F0CB & 1) == 0 )
  {
    sub_B70694(&Method_ActionExtensions_Call_bool___);
    byte_434F0CB = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B7076C(0LL, yes);
  ((void (__fastcall *)(struct SubmarineMapManager_o *, _QWORD, Il2CppMethodPointer))_4__this->klass->vtable._31_SetCameraWorkBlock.method)(
    _4__this,
    0LL,
    _4__this->klass->vtable._32_AllTouchBlockForceFalse.methodPtr);
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)this->fields.callback,
    yes,
    (const MethodInfo_2BFC23C *)Method_ActionExtensions_Call_bool___);
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
    sub_B7076C(0LL, method);
  UnityEngine_GameObject__SetActive(scanAnimObj, 1, 0LL);
}


void __fastcall SubmarineMapManager___c__DisplayClass94_0___CreateScanTask_b__1(
        SubmarineMapManager___c__DisplayClass94_0_o *this,
        const MethodInfo *method)
{
  SubmarineScanVoiceComponent_o *svtScanVoice; // x0

  svtScanVoice = this->fields.svtScanVoice;
  if ( !svtScanVoice )
    sub_B7076C(0LL, method);
  SubmarineScanVoiceComponent__PlayScanVoice(svtScanVoice, 0LL);
}


void __fastcall SubmarineMapManager___c__DisplayClass94_0___CreateScanTask_b__2(
        SubmarineMapManager___c__DisplayClass94_0_o *this,
        const MethodInfo *method)
{
  SubmarineMapManager_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B7076C(0LL, method);
  SubmarineMapManager__HideSelectedPanelEffect(_4__this, 0LL);
}


void __fastcall SubmarineMapManager___c__DisplayClass94_0___CreateScanTask_b__3(
        SubmarineMapManager___c__DisplayClass94_0_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *scanAnimObj; // x19

  if ( (byte_434F0CC & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_434F0CC = 1;
  }
  scanAnimObj = (UnityEngine_Object_o *)this->fields.scanAnimObj;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__Destroy_36067208(scanAnimObj, 0LL);
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
    sub_B7076C(this, x);
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
    sub_B7076C(this, 0LL);
  return x->fields._Chain_k__BackingField == this->fields.i;
}