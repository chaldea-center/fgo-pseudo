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

  if ( (byte_41857DC & 1) == 0 )
  {
    this = (SubmarineMapManager_o *)sub_B2C35C(&Method_UnityEngine_GameObject_GetComponentsInChildren_UIWidget___, go);
    byte_41857DC = 1;
  }
  if ( !go )
    goto LABEL_21;
  this = (SubmarineMapManager_o *)UnityEngine_GameObject__GetComponentsInChildren_changeVColor__27950360(
                                    go,
                                    (const MethodInfo_1AA7D18 *)Method_UnityEngine_GameObject_GetComponentsInChildren_UIWidget___);
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
      this = (SubmarineMapManager_o *)UnityEngine_Mathf__Min_40694704(*(_DWORD *)(v10 + 168), v9, 0LL);
      mapInfo = (int)v7->fields.mapInfo;
      ++v8;
      v9 = (int)this;
      if ( v8 >= mapInfo )
        goto LABEL_12;
    }
LABEL_20:
    v15 = sub_B2C460(this);
    sub_B2C400(v15, 0LL);
  }
  v9 = 0x7FFFFFFF;
LABEL_12:
  if ( v9 != 0x7FFFFFFF )
  {
    this = (SubmarineMapManager_o *)UnityEngine_GameObject__GetComponentsInChildren_changeVColor__27950360(
                                      go,
                                      (const MethodInfo_1AA7D18 *)Method_UnityEngine_GameObject_GetComponentsInChildren_UIWidget___);
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
    sub_B2C434(this, go);
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
  UnityEngine_Object_o *Component_srcLineSprite; // x21
  const MethodInfo *v10; // x2
  __int64 v11; // x0

  if ( (byte_41857D9 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_SrcSpotBasePrefab___, method);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v3);
    byte_41857D9 = 1;
  }
  Children = GameObjectExtensions__GetChildren(this->fields.rootSpotP, 0, 0LL);
  if ( !Children )
    goto LABEL_16;
  max_length = Children->max_length;
  v7 = Children;
  if ( max_length >= 1 )
  {
    v8 = 0;
    while ( 1 )
    {
      if ( v8 >= max_length )
      {
        v11 = sub_B2C460(Children);
        sub_B2C400(v11, 0LL);
      }
      Children = (UnityEngine_GameObject_array *)v7->m_Items[v8];
      if ( !Children )
        break;
      Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                          (UnityEngine_GameObject_o *)Children,
                                                          (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_SrcSpotBasePrefab___);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      Children = (UnityEngine_GameObject_array *)UnityEngine_Object__op_Equality(Component_srcLineSprite, 0LL, 0LL);
      if ( ((unsigned __int8)Children & 1) == 0 )
        SubmarineMapManager__AdjustSpotPosition(this, (SrcSpotBasePrefab_o *)Component_srcLineSprite, v10);
      max_length = v7->max_length;
      if ( (int)++v8 >= max_length )
        return;
    }
LABEL_16:
    sub_B2C434(Children, v5);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SubmarineMapManager__AdjustSilhouetteGimmicks(SubmarineMapManager_o *this, const MethodInfo *method)
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v27; // x20
  UnityEngine_GameObject_o *Children; // x0
  __int64 v29; // x1
  int klass; // w8
  UnityEngine_GameObject_o *v31; // x21
  unsigned int v32; // w19
  UnityEngine_Object_o *Component_srcLineSprite; // x22
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v34; // x21
  int v35; // w8
  UnityEngine_GameObject_o *v36; // x22
  unsigned int v37; // w19
  UnityEngine_Object_o *v38; // x23
  _DWORD *monitor; // x8
  struct SubmarineMapDataManager_o *submarineData; // x8
  SubmarineMapManager___c__DisplayClass60_0_o *v41; // x23
  __int64 v42; // x0
  __int64 v43; // x1
  const void *parameters; // x1
  SubmarineSilhouetteData_o **p_silhouetteData; // x22
  __int64 v46; // x0
  __int64 v47; // x1
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v48; // x24
  __int64 v49; // x0
  __int64 v50; // x1
  UnityEngine_Object_o *v51; // x23
  _BOOL8 v52; // x0
  __int64 v53; // x1
  __int64 v54; // x1
  const MethodInfo *v55; // x2
  SubmarineMapDataManager_o *v56; // x0
  System_Collections_Generic_IEnumerable_T__o *SilhouetteOccupiedPanels; // x24
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v58; // x22
  __int64 v59; // x0
  __int64 v60; // x1
  UnityEngine_Transform_o *transform; // x0
  __int64 v62; // x1
  float x; // s8
  float y; // s9
  __int64 v65; // x0
  __int64 v66; // x1
  int v67; // s0
  Il2CppObject *current; // x22
  __int64 v72; // x0
  __int64 v73; // x1
  float xMin; // s0
  float v75; // s4
  float xMax; // s0
  float v77; // s4
  float yMin; // s0
  float v79; // s4
  float yMax; // s0
  float v81; // s4
  int v82; // w23
  __int64 v83; // x1
  int v84; // w10
  UnityEngine_Transform_o *v85; // x22
  UnityEngine_Vector2_o v86; // x0
  UnityEngine_Vector2_o v87; // x1
  UnityEngine_Vector2_o center; // kr00_8
  int v89; // s2
  int v90; // w23
  __int64 v91; // x0
  int v92; // [xsp+14h] [xbp-DCh]
  _BYTE v93[32]; // [xsp+18h] [xbp-D8h] BYREF
  int v94; // [xsp+38h] [xbp-B8h]
  System_Collections_Generic_List_Enumerator_T__o v95; // [xsp+40h] [xbp-B0h] BYREF
  MethodInfo methoda; // [xsp+58h] [xbp-98h] BYREF
  UnityEngine_Vector2_o v97; // 0:s4.4,4:s5.4
  UnityEngine_Vector2_o v98; // 0:s6.4,4:s7.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Rect_o v100; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v101; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v102; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v103; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v104; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v105; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v106; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v107; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v108; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_41857DB & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__MapGimmickComponent__TryGetValue__, method);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__MapGimmickComponent___ctor__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__MapGimmickComponent__set_Item__, v4);
    sub_B2C35C(&System_Collections_Generic_Dictionary_int__MapGimmickComponent__TypeInfo, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__Dispose__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_SubmarineSilhouetteData__Dispose__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__MoveNext__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_SubmarineSilhouetteData__MoveNext__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__get_Current__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_SubmarineSilhouetteData__get_Current__, v11);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_MapGimmickComponent___, v12);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_SrcSpotBasePrefab___, v13);
    sub_B2C35C(&Method_System_Collections_Generic_List_SrcSpotBasePrefab__Add__, v14);
    sub_B2C35C(&Method_System_Collections_Generic_List_SrcSpotBasePrefab__Find__, v15);
    sub_B2C35C(&Method_System_Collections_Generic_List_SubmarineMapPanelData__GetEnumerator__, v16);
    sub_B2C35C(&Method_System_Collections_Generic_List_SubmarineSilhouetteData__GetEnumerator__, v17);
    sub_B2C35C(&Method_System_Collections_Generic_List_SrcSpotBasePrefab___ctor__, v18);
    sub_B2C35C(&Method_System_Collections_Generic_List_SubmarineMapPanelData___ctor___67321184, v19);
    sub_B2C35C(&System_Collections_Generic_List_SubmarineMapPanelData__TypeInfo, v20);
    sub_B2C35C(&System_Collections_Generic_List_SrcSpotBasePrefab__TypeInfo, v21);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v22);
    sub_B2C35C(&Method_System_Predicate_SrcSpotBasePrefab___ctor__, v23);
    sub_B2C35C(&System_Predicate_SrcSpotBasePrefab__TypeInfo, v24);
    sub_B2C35C(&Method_SubmarineMapManager___c__DisplayClass60_0__AdjustSilhouetteGimmicks_b__0__, v25);
    sub_B2C35C(&SubmarineMapManager___c__DisplayClass60_0_TypeInfo, v26);
    byte_41857DB = 1;
  }
  memset(&methoda, 0, 48);
  memset(&v95, 0, sizeof(v95));
  v94 = 0;
  v27 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_SrcSpotBasePrefab__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v27,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_SrcSpotBasePrefab___ctor__);
  Children = (UnityEngine_GameObject_o *)GameObjectExtensions__GetChildren(this->fields.rootSpotP, 0, 0LL);
  if ( !Children )
    goto LABEL_63;
  klass = (int)Children[1].klass;
  v31 = Children;
  if ( klass >= 1 )
  {
    v32 = 0;
    while ( v32 < klass )
    {
      Children = (UnityEngine_GameObject_o *)*((_QWORD *)&v31[1].monitor + (int)v32);
      if ( !Children )
        goto LABEL_63;
      Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                          Children,
                                                          (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_SrcSpotBasePrefab___);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      Children = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(Component_srcLineSprite, 0LL, 0LL);
      if ( ((unsigned __int8)Children & 1) != 0 )
      {
        if ( !v27 )
          goto LABEL_63;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v27,
          (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_SrcSpotBasePrefab__Add__);
      }
      klass = (int)v31[1].klass;
      if ( (int)++v32 >= klass )
        goto LABEL_15;
    }
LABEL_64:
    v91 = sub_B2C460(Children);
    sub_B2C400(v91, 0LL);
  }
LABEL_15:
  v34 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B2C42C(System_Collections_Generic_Dictionary_int__MapGimmickComponent__TypeInfo);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v34,
    (const MethodInfo_2E63B98 *)Method_System_Collections_Generic_Dictionary_int__MapGimmickComponent___ctor__);
  Children = (UnityEngine_GameObject_o *)GameObjectExtensions__GetChildren(this->fields.rootGimmickP, 0, 0LL);
  if ( !Children )
    goto LABEL_63;
  v35 = (int)Children[1].klass;
  v36 = Children;
  if ( v35 >= 1 )
  {
    v37 = 0;
    while ( v37 < v35 )
    {
      Children = (UnityEngine_GameObject_o *)*((_QWORD *)&v36[1].monitor + (int)v37);
      if ( !Children )
        goto LABEL_63;
      v38 = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                      Children,
                                      (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_MapGimmickComponent___);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      Children = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(v38, 0LL, 0LL);
      if ( ((unsigned __int8)Children & 1) == 0 )
      {
        if ( !v38 )
          goto LABEL_63;
        monitor = v38[4].monitor;
        if ( !monitor || !v34 )
          goto LABEL_63;
        System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___set_Item(
          (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)v34,
          monitor[5],
          (WarBoardAIRoute_RouteData_o *)v38,
          (const MethodInfo_2E64724 *)Method_System_Collections_Generic_Dictionary_int__MapGimmickComponent__set_Item__);
      }
      v35 = (int)v36[1].klass;
      if ( (int)++v37 >= v35 )
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
    sub_B2C434(Children, v29);
  }
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)v93,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)Children,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_SubmarineSilhouetteData__GetEnumerator__);
  v92 = 0;
  methoda.parameters = *(const void **)&v93[16];
  *(_OWORD *)&methoda.klass = *(_OWORD *)v93;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            (System_Collections_Generic_List_Enumerator_T__o *)&methoda.klass,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_SubmarineSilhouetteData__MoveNext__) )
  {
    v41 = (SubmarineMapManager___c__DisplayClass60_0_o *)sub_B2C42C(SubmarineMapManager___c__DisplayClass60_0_TypeInfo);
    SubmarineMapManager___c__DisplayClass60_0___ctor(v41, 0LL);
    if ( !v41 )
      sub_B2C434(v42, v43);
    parameters = methoda.parameters;
    v41->fields.silhouetteData = (struct SubmarineSilhouetteData_o *)methoda.parameters;
    p_silhouetteData = &v41->fields.silhouetteData;
    sub_B2C2F8(&v41->fields, parameters);
    if ( !v41->fields.silhouetteData )
      sub_B2C434(v46, v47);
    if ( v41->fields.silhouetteData->fields._PanelId_k__BackingField > 0 )
    {
      v48 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B2C42C(System_Predicate_SrcSpotBasePrefab__TypeInfo);
      System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
        v48,
        (Il2CppObject *)v41,
        Method_SubmarineMapManager___c__DisplayClass60_0__AdjustSilhouetteGimmicks_b__0__,
        (const MethodInfo_2952BE4 *)Method_System_Predicate_SrcSpotBasePrefab___ctor__);
      if ( !v27 )
        sub_B2C434(v49, v50);
      v51 = (UnityEngine_Object_o *)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                                      (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)v27,
                                      (System_Predicate_T__o *)v48,
                                      (const MethodInfo_2EF4D20 *)Method_System_Collections_Generic_List_SrcSpotBasePrefab__Find__);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v52 = UnityEngine_Object__op_Equality(v51, 0LL, 0LL);
      if ( !v52 )
      {
        if ( !*p_silhouetteData )
          sub_B2C434(v52, v53);
        if ( !v34 )
          sub_B2C434(v52, v53);
        if ( System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___TryGetValue(
               (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)v34,
               (*p_silhouetteData)->fields._ObjectId_k__BackingField,
               (WarBoardEvalValueSquare_CalcEval_o **)&methoda.name,
               (const MethodInfo_2E66470 *)Method_System_Collections_Generic_Dictionary_int__MapGimmickComponent__TryGetValue__) )
        {
          v56 = this->fields.submarineData;
          if ( !v56 )
            sub_B2C434(0LL, v54);
          SilhouetteOccupiedPanels = (System_Collections_Generic_IEnumerable_T__o *)SubmarineMapDataManager__GetSilhouetteOccupiedPanels(
                                                                                      v56,
                                                                                      *p_silhouetteData,
                                                                                      v55);
          v58 = (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)sub_B2C42C(System_Collections_Generic_List_SubmarineMapPanelData__TypeInfo);
          System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
            v58,
            SilhouetteOccupiedPanels,
            (const MethodInfo_2EF3994 *)Method_System_Collections_Generic_List_SubmarineMapPanelData___ctor___67321184);
          if ( !v51 )
            sub_B2C434(v59, v60);
          transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v51, 0LL);
          if ( !transform )
            sub_B2C434(0LL, v62);
          localPosition = UnityEngine_Transform__get_localPosition(transform, 0LL);
          x = localPosition.fields.x;
          y = localPosition.fields.y;
          *(UnityEngine_Vector3_o *)&v100.fields.m_XMin = UnityEngine_Vector3__get_zero(0LL);
          v100.fields.m_Width = v100.fields.m_XMin;
          v100.fields.m_Height = v100.fields.m_YMin;
          v100.fields.m_XMin = x;
          v100.fields.m_YMin = y;
          UnityEngine_Rect___ctor_35349676(v100, v97, v98, &methoda);
          if ( !v58 )
            sub_B2C434(v65, v66);
          System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
            (System_Collections_Generic_List_Enumerator_T__o *)v93,
            (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v58,
            (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_SubmarineMapPanelData__GetEnumerator__);
          v95 = *(System_Collections_Generic_List_Enumerator_T__o *)v93;
          while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                    &v95,
                    (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__MoveNext__) )
          {
            current = v95.fields.current;
            xMin = UnityEngine_Rect__get_xMin(*(UnityEngine_Rect_o *)&v67, &methoda);
            if ( !current )
              sub_B2C434(v72, v73);
            v101.fields.m_XMin = UnityEngine_Mathf__Min(xMin, *((float *)&current[1].monitor + 1), 0LL);
            UnityEngine_Rect__set_xMin(v101, v75, &methoda);
            xMax = UnityEngine_Rect__get_xMax(v102, &methoda);
            v103.fields.m_XMin = UnityEngine_Mathf__Max(xMax, *((float *)&current[1].monitor + 1), 0LL);
            UnityEngine_Rect__set_xMax(v103, v77, &methoda);
            yMin = UnityEngine_Rect__get_yMin(v104, &methoda);
            v105.fields.m_XMin = UnityEngine_Mathf__Min(yMin, *(float *)&current[2].klass, 0LL);
            UnityEngine_Rect__set_yMin(v105, v79, &methoda);
            yMax = UnityEngine_Rect__get_yMax(v106, &methoda);
            v107.fields.m_XMin = UnityEngine_Mathf__Max(yMax, *(float *)&current[2].klass, 0LL);
            UnityEngine_Rect__set_yMax(v107, v81, &methoda);
          }
          *(_DWORD *)&v93[4 * v92 + 24] = 492;
          v82 = ++v94;
          System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
            &v95,
            (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__Dispose__);
          v84 = v82;
          if ( v82 && *(_DWORD *)&v93[4 * v82 + 20] == 492 )
          {
            v84 = v82 - 1;
            v94 = v82 - 1;
          }
          v92 = v84;
          if ( !methoda.name )
            sub_B2C434(0LL, v83);
          v85 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)methoda.name, 0LL);
          center = UnityEngine_Rect__get_center(v108, &methoda);
          if ( !v85 )
            ((void (__fastcall __noreturn *)(_QWORD, _QWORD))sub_B2C434)(v86, v87);
          v89 = 0;
          UnityEngine_Transform__set_localPosition(v85, *(UnityEngine_Vector3_o *)&center.fields.x, 0LL);
        }
      }
    }
  }
  *(_DWORD *)&v93[4 * v92 + 24] = 544;
  v90 = ++v94;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    (System_Collections_Generic_List_Enumerator_T__o *)&methoda.klass,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_SubmarineSilhouetteData__Dispose__);
  if ( v90 && *(_DWORD *)&v93[4 * v90 + 20] == 544 )
    v94 = v90 - 1;
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
  const MethodInfo_2155668 *v8; // x2
  System_Nullable_Vector3__o centerPosition; // [xsp+0h] [xbp-40h] BYREF
  System_Nullable_Vector2__o v10; // [xsp+10h] [xbp-30h] BYREF
  System_Nullable_Vector2__o v11; // 0:x0.12
  System_Nullable_Vector3__o v12; // 0:x0.16
  UnityEngine_Vector2_o PanelUnitSize_k__BackingField; // 0:s0.4,4:s1.4
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4

  v4 = this;
  if ( (byte_41857D8 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Nullable_Vector2___ctor__, spot);
    this = (SubmarineMapManager_o *)sub_B2C35C(&Method_System_Nullable_Vector3___ctor__, v5);
    byte_41857D8 = 1;
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
  System_Nullable_Vector2____ctor(v11, PanelUnitSize_k__BackingField, (const MethodInfo_2155280 *)method);
  zero = UnityEngine_Vector3__get_zero(0LL);
  *(_QWORD *)&v12.fields.value.fields.x = &centerPosition;
  *(_QWORD *)&centerPosition.fields.value.fields.x = 0LL;
  *(_QWORD *)&centerPosition.fields.value.fields.z = 0LL;
  *(_QWORD *)&v12.fields.value.fields.z = Method_System_Nullable_Vector3___ctor__;
  System_Nullable_Vector3____ctor(v12, zero, v8);
  if ( !spot )
LABEL_7:
    sub_B2C434(this, spot);
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
    sub_B2C434(this, spot);
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
  __int64 v15; // x1
  QuestReleaseMaster_o *v16; // x20
  CommonUI_o *v17; // x19
  int32_t list; // w20
  SubmarineMapManager___c_c *v19; // x0
  struct SubmarineMapManager___c_StaticFields *static_fields; // x8
  System_Action_o *_9__50_0; // x22
  System_String_o *v22; // x21
  Il2CppObject *v23; // x23
  struct SubmarineMapManager___c_StaticFields *v24; // x0
  __int64 v25; // x0
  System_Nullable_float__o messagePosY; // [xsp+8h] [xbp-38h] BYREF
  System_Nullable_float__o p_messagePosY; // 0:x0.8
  System_Nullable_float__o v28; // 0:x5.8

  if ( (byte_41857D3 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_DataManager_GetMaster_QuestReleaseMaster___, v3);
    sub_B2C35C(&DataManager_TypeInfo, v4);
    sub_B2C35C(&Method_System_Nullable_float___ctor__, v5);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_B2C35C(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v7);
    sub_B2C35C(&SingletonTemplate_clsQuestCheck__TypeInfo, v8);
    sub_B2C35C(&Method_SubmarineMapManager___c__CheckNewPlayableEventQuest_b__50_0__, v9);
    sub_B2C35C(&SubmarineMapManager___c_TypeInfo, v10);
    sub_B2C35C(&StringLiteral_6858/*"GET_EVENT_POINT_AFTER_DIALOG_MESSAGE_PANEL_MAP"*/, v11);
    byte_41857D3 = 1;
  }
  if ( (BYTE3(SingletonTemplate_clsQuestCheck__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_clsQuestCheck__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_clsQuestCheck__TypeInfo);
  }
  v12 = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  eventId = (QuestReleaseMaster_o *)SubmarineMapManager__get_eventId(this, v13);
  if ( !v12 )
    goto LABEL_27;
  eventId = (QuestReleaseMaster_o *)clsQuestCheck__GetNewPlayableEventQuestId(v12, (int32_t)eventId, 0LL);
  if ( !eventId )
    goto LABEL_27;
  v16 = eventId;
  if ( !eventId->fields._MasterName_k__BackingField )
    return;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  eventId = (QuestReleaseMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_QuestReleaseMaster___);
  if ( !LODWORD(v16->fields._MasterName_k__BackingField) )
    goto LABEL_28;
  if ( !eventId )
    goto LABEL_27;
  if ( !QuestReleaseMaster__IsContainCondType(eventId, (int32_t)v16->fields.list, 143, 0LL) )
    return;
  eventId = (QuestReleaseMaster_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !LODWORD(v16->fields._MasterName_k__BackingField) )
  {
LABEL_28:
    v25 = sub_B2C460(eventId);
    sub_B2C400(v25, 0LL);
  }
  v17 = (CommonUI_o *)eventId;
  list = (int32_t)v16->fields.list;
  v19 = SubmarineMapManager___c_TypeInfo;
  if ( (BYTE3(SubmarineMapManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SubmarineMapManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SubmarineMapManager___c_TypeInfo);
    v19 = SubmarineMapManager___c_TypeInfo;
  }
  static_fields = v19->static_fields;
  _9__50_0 = static_fields->__9__50_0;
  v22 = (System_String_o *)StringLiteral_6858/*"GET_EVENT_POINT_AFTER_DIALOG_MESSAGE_PANEL_MAP"*/;
  if ( !_9__50_0 )
  {
    if ( (BYTE3(v19->vtable._0_Equals.methodPtr) & 4) != 0 && !v19->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v19);
      static_fields = SubmarineMapManager___c_TypeInfo->static_fields;
    }
    v23 = (Il2CppObject *)static_fields->__9;
    _9__50_0 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(_9__50_0, v23, Method_SubmarineMapManager___c__CheckNewPlayableEventQuest_b__50_0__, 0LL);
    v24 = SubmarineMapManager___c_TypeInfo->static_fields;
    v24->__9__50_0 = _9__50_0;
    sub_B2C2F8(&v24->__9__50_0, _9__50_0);
  }
  p_messagePosY = (System_Nullable_float__o)&messagePosY;
  messagePosY = 0LL;
  System_Nullable_float____ctor(p_messagePosY, 30.0, (const MethodInfo_21536DC *)Method_System_Nullable_float___ctor__);
  if ( !v17 )
LABEL_27:
    sub_B2C434(eventId, v15);
  v28 = messagePosY;
  CommonUI__OpenQuestNewPlayableDialog(v17, list, v22, _9__50_0, 0, v28, 0LL);
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
  SubmarineMapManager___c__DisplayClass36_0_o *v10; // x20
  __int64 v11; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x2
  SubmarineMapPanelData_o *v14; // x1
  _QWORD *v15; // x0
  System_Reflection_MethodBase_o *v16; // x0
  _QWORD *v17; // x0
  System_Reflection_MethodBase_o *v18; // x0
  struct SubmarineMapDataManager_o *submarineData; // x8
  struct SubmarineSettingsManager_o *Settings_k__BackingField; // x8
  float PanelSelectDelaySecond_k__BackingField; // s8
  SchedulerTaskWaitTime_o *v22; // x21
  System_Delegate_o *EndCallback; // x23
  SchedulerTaskBase_TaskCallback_o *v24; // x24
  System_Delegate_o *v25; // x0
  TaskScheduler_o *taskScheduler; // x19
  SchedulerTaskBase_array *v27; // x20
  __int64 v28; // x0
  __int64 v29; // x0
  __int64 v30; // x0
  SubmarineMapPanelData_o *v31; // x0
  const MethodInfo *v32; // x1

  if ( (byte_41857C9 & 1) == 0 )
  {
    sub_B2C35C(&SchedulerTaskBase___TypeInfo, panelData);
    sub_B2C35C(&SchedulerTaskWaitTime_TypeInfo, v5);
    sub_B2C35C(&Method_SubmarineMapManager_ClickPanel__, v6);
    sub_B2C35C(&SchedulerTaskBase_TaskCallback_TypeInfo, v7);
    sub_B2C35C(&Method_SubmarineMapManager___c__DisplayClass36_0__ClickPanel_b__0__, v8);
    sub_B2C35C(&SubmarineMapManager___c__DisplayClass36_0_TypeInfo, v9);
    byte_41857C9 = 1;
  }
  v10 = (SubmarineMapManager___c__DisplayClass36_0_o *)sub_B2C42C(SubmarineMapManager___c__DisplayClass36_0_TypeInfo);
  SubmarineMapManager___c__DisplayClass36_0___ctor(v10, 0LL);
  if ( !v10 )
    goto LABEL_25;
  v10->fields.__4__this = this;
  sub_B2C2F8(&v10->fields, this);
  v10->fields.panelData = panelData;
  sub_B2C2F8(&v10->fields.panelData, panelData);
  v14 = v10->fields.panelData;
  if ( !v14 || !this->fields.isEnableClickPanel )
    return;
  if ( !v14->fields._IsOpened_k__BackingField || !v14->fields._HasEnemyParts_k__BackingField )
  {
    if ( !v14->fields._IsScannable_k__BackingField )
      return;
    SubmarineMapManager__ShowSelectedPanelEffect(this, v14, v13);
    v17 = Method_SubmarineMapManager_ClickPanel__;
    if ( (*((_BYTE *)Method_SubmarineMapManager_ClickPanel__ + 75) & 2) != 0 )
      v17 = (_QWORD *)sub_B2C364(Method_SubmarineMapManager_ClickPanel__);
    v18 = (System_Reflection_MethodBase_o *)sub_B2C340(v17, v17[3]);
    OverwriteAssetSoundName__PlaySystemSe(v18, 0, 0LL);
    submarineData = this->fields.submarineData;
    if ( submarineData )
    {
      Settings_k__BackingField = submarineData->fields._Settings_k__BackingField;
      if ( Settings_k__BackingField )
      {
        PanelSelectDelaySecond_k__BackingField = Settings_k__BackingField->fields._PanelSelectDelaySecond_k__BackingField;
        v22 = (SchedulerTaskWaitTime_o *)sub_B2C42C(SchedulerTaskWaitTime_TypeInfo);
        SchedulerTaskWaitTime___ctor(v22, PanelSelectDelaySecond_k__BackingField, 0LL);
        if ( v22 )
        {
          EndCallback = (System_Delegate_o *)v22->fields.EndCallback;
          v24 = (SchedulerTaskBase_TaskCallback_o *)sub_B2C42C(SchedulerTaskBase_TaskCallback_TypeInfo);
          SchedulerTaskBase_TaskCallback___ctor(
            v24,
            (Il2CppObject *)v10,
            Method_SubmarineMapManager___c__DisplayClass36_0__ClickPanel_b__0__,
            0LL);
          v25 = System_Delegate__Combine(EndCallback, (System_Delegate_o *)v24, 0LL);
          if ( v25 && (SchedulerTaskBase_TaskCallback_c *)v25->klass != SchedulerTaskBase_TaskCallback_TypeInfo )
          {
            v31 = (SubmarineMapPanelData_o *)sub_B2C728(v25);
            SubmarineMapPanelData__get_IsEnemyVisible(v31, v32);
            return;
          }
          v22->fields.EndCallback = (struct SchedulerTaskBase_TaskCallback_o *)v25;
          sub_B2C2F8(&v22->fields.EndCallback, v25);
          taskScheduler = this->fields.taskScheduler;
          v11 = sub_B2C374(SchedulerTaskBase___TypeInfo, 1LL);
          if ( v11 )
          {
            v27 = (SchedulerTaskBase_array *)v11;
            v28 = sub_B2C41C(v22, *(_QWORD *)(*(_QWORD *)v11 + 64LL));
            if ( !v28 )
            {
              v29 = sub_B2C454();
              sub_B2C400(v29, 0LL);
            }
            if ( !v27->max_length )
            {
              v30 = sub_B2C460(v28);
              sub_B2C400(v30, 0LL);
            }
            v27->m_Items[0] = (SchedulerTaskBase_o *)v22;
            sub_B2C2F8(v27->m_Items, v22);
            if ( taskScheduler )
            {
              TaskScheduler__AddTask(taskScheduler, 0, v27, 0LL);
              return;
            }
          }
        }
      }
    }
LABEL_25:
    sub_B2C434(v11, v12);
  }
  v15 = Method_SubmarineMapManager_ClickPanel__;
  if ( (*((_BYTE *)Method_SubmarineMapManager_ClickPanel__ + 75) & 2) != 0 )
    v15 = (_QWORD *)sub_B2C364(Method_SubmarineMapManager_ClickPanel__);
  v16 = (System_Reflection_MethodBase_o *)sub_B2C340(v15, v15[3]);
  OverwriteAssetSoundName__PlaySystemSe(v16, 2, 0LL);
}


System_Collections_IEnumerator_o *__fastcall SubmarineMapManager__CoInitRequest(
        SubmarineMapManager_o *this,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  SubmarineMapManager__CoInitRequest_d__21_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1

  if ( (byte_41857C0 & 1) == 0 )
  {
    sub_B2C35C(&SubmarineMapManager__CoInitRequest_d__21_TypeInfo, finishCallback);
    byte_41857C0 = 1;
  }
  v5 = (SubmarineMapManager__CoInitRequest_d__21_o *)sub_B2C42C(SubmarineMapManager__CoInitRequest_d__21_TypeInfo);
  SubmarineMapManager__CoInitRequest_d__21___ctor(v5, 0, 0LL);
  if ( !v5 )
    sub_B2C434(v6, v7);
  v5->fields.__4__this = this;
  sub_B2C2F8(&v5->fields.__4__this, this);
  v5->fields.finishCallback = finishCallback;
  sub_B2C2F8(&v5->fields.finishCallback, finishCallback);
  return (System_Collections_IEnumerator_o *)v5;
}


System_Collections_IEnumerator_o *__fastcall SubmarineMapManager__CoOnAfterSpotCreated(
        SubmarineMapManager_o *this,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  SubmarineMapManager__CoOnAfterSpotCreated_d__24_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1

  if ( (byte_41857C1 & 1) == 0 )
  {
    sub_B2C35C(&SubmarineMapManager__CoOnAfterSpotCreated_d__24_TypeInfo, finishCallback);
    byte_41857C1 = 1;
  }
  v5 = (SubmarineMapManager__CoOnAfterSpotCreated_d__24_o *)sub_B2C42C(SubmarineMapManager__CoOnAfterSpotCreated_d__24_TypeInfo);
  SubmarineMapManager__CoOnAfterSpotCreated_d__24___ctor(v5, 0, 0LL);
  if ( !v5 )
    sub_B2C434(v6, v7);
  v5->fields.__4__this = this;
  sub_B2C2F8(&v5->fields.__4__this, this);
  v5->fields.finishCallback = finishCallback;
  sub_B2C2F8(&v5->fields.finishCallback, finishCallback);
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
  __int64 v9; // x1
  struct SubmarineMapAssetManager_o *assetManager; // x8
  UnityEngine_UI_Dropdown_DropdownItem_o *ScanConfirmDialogPrefab_k__BackingField; // x21
  struct SubmarineScanConfirmDialog_o *Component_srcLineSprite; // x0
  UnityEngine_Object_o *selectScannerDialog; // x21
  struct SubmarineMapAssetManager_o *v14; // x8
  UnityEngine_UI_Dropdown_DropdownItem_o *SelectScannerDialogPrefab_k__BackingField; // x21
  struct SubmarineSelectScannerDialog_o *v16; // x0
  UnityEngine_Object_o *newScannerDialog; // x21
  struct SubmarineMapAssetManager_o *v18; // x8
  UnityEngine_UI_Dropdown_DropdownItem_o *NewScannerDialogPrefab_k__BackingField; // x21
  struct SubmarineNewScannerDialog_o *v20; // x0

  if ( (byte_41857DD & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_SubmarineNewScannerDialog___, method);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_SubmarineScanConfirmDialog___, v3);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_SubmarineSelectScannerDialog___, v4);
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_GameObject___, v5);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v6);
    byte_41857DD = 1;
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
           (const MethodInfo_2095E38 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !v8 )
      goto LABEL_34;
    Component_srcLineSprite = (struct SubmarineScanConfirmDialog_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                       (UnityEngine_GameObject_o *)v8,
                                                                       (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_SubmarineScanConfirmDialog___);
    this->fields.scanConfirmDialog = Component_srcLineSprite;
    sub_B2C2F8(&this->fields.scanConfirmDialog, Component_srcLineSprite);
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
    v14 = this->fields.assetManager;
    if ( !v14 )
      goto LABEL_34;
    SelectScannerDialogPrefab_k__BackingField = (UnityEngine_UI_Dropdown_DropdownItem_o *)v14->fields._SelectScannerDialogPrefab_k__BackingField;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v8 = UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
           SelectScannerDialogPrefab_k__BackingField,
           (const MethodInfo_2095E38 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !v8 )
      goto LABEL_34;
    v16 = (struct SubmarineSelectScannerDialog_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                     (UnityEngine_GameObject_o *)v8,
                                                     (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_SubmarineSelectScannerDialog___);
    this->fields.selectScannerDialog = v16;
    sub_B2C2F8(&this->fields.selectScannerDialog, v16);
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
    v18 = this->fields.assetManager;
    if ( v18 )
    {
      NewScannerDialogPrefab_k__BackingField = (UnityEngine_UI_Dropdown_DropdownItem_o *)v18->fields._NewScannerDialogPrefab_k__BackingField;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v8 = UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
             NewScannerDialogPrefab_k__BackingField,
             (const MethodInfo_2095E38 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( v8 )
      {
        v20 = (struct SubmarineNewScannerDialog_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      (UnityEngine_GameObject_o *)v8,
                                                      (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_SubmarineNewScannerDialog___);
        this->fields.newScannerDialog = v20;
        sub_B2C2F8(&this->fields.newScannerDialog, v20);
        EventMapManagerBase__LocateDialogToUiRoot(
          (EventMapManagerBase_o *)this,
          (BaseDialog_o *)this->fields.newScannerDialog,
          0LL);
        return;
      }
    }
LABEL_34:
    sub_B2C434(v8, v9);
  }
}


void __fastcall SubmarineMapManager__CreateAssetManagerIfNotExists(
        SubmarineMapManager_o *this,
        const MethodInfo *method)
{
  SubmarineMapAssetManager_o **p_assetManager; // x19
  struct SubmarineMapAssetManager_o *assetManager; // t1
  SubmarineMapAssetManager_o *v5; // x20
  const MethodInfo *v6; // x1
  const MethodInfo *v7; // x1

  if ( (byte_41857C6 & 1) == 0 )
  {
    sub_B2C35C(&SubmarineMapAssetManager_TypeInfo, method);
    byte_41857C6 = 1;
  }
  assetManager = this->fields.assetManager;
  p_assetManager = &this->fields.assetManager;
  if ( !assetManager )
  {
    v5 = (SubmarineMapAssetManager_o *)sub_B2C42C(SubmarineMapAssetManager_TypeInfo);
    SubmarineMapAssetManager___ctor(v5, v6);
    *p_assetManager = v5;
    sub_B2C2F8(p_assetManager, v5);
    if ( !*p_assetManager )
      sub_B2C434(0LL, v7);
    SubmarineMapAssetManager__Initialize(*p_assetManager, v7);
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
  UILabel_o *v8; // x0
  struct SubmarineMapAssetManager_o *v9; // x8
  struct ScrTerminalMap_o *v10; // x9
  UILabel_o *EffectContainerPrefab_k__BackingField; // x20
  UnityEngine_Transform_o *v12; // x0
  UILabel_o *v13; // x0
  struct SubmarineMapAssetManager_o *v14; // x8
  struct ScrTerminalMap_o *v15; // x9
  UILabel_o *GridLinePrefab_k__BackingField; // x20
  UnityEngine_Transform_o *v17; // x0
  UILabel_o *v18; // x0

  v2 = this;
  if ( (byte_41857D4 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_GameObject____67450600, method);
    this = (SubmarineMapManager_o *)sub_B2C35C(&UnityEngine_Object_TypeInfo, v3);
    byte_41857D4 = 1;
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
  v8 = UnityEngine_Object__Instantiate_UILabel_(
         PanelContainerPrefab_k__BackingField,
         transform,
         (const MethodInfo_2095F74 *)Method_UnityEngine_Object_Instantiate_GameObject____67450600);
  v2->fields.panelContainer = (struct UnityEngine_GameObject_o *)v8;
  sub_B2C2F8(&v2->fields.panelContainer, v8);
  v9 = v2->fields.assetManager;
  if ( !v9 )
    goto LABEL_16;
  v10 = v2->fields.terminalMap;
  if ( !v10 )
    goto LABEL_16;
  this = (SubmarineMapManager_o *)v10->fields.mapButtonGrid;
  if ( !this )
    goto LABEL_16;
  EffectContainerPrefab_k__BackingField = (UILabel_o *)v9->fields._EffectContainerPrefab_k__BackingField;
  v12 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  v13 = UnityEngine_Object__Instantiate_UILabel_(
          EffectContainerPrefab_k__BackingField,
          v12,
          (const MethodInfo_2095F74 *)Method_UnityEngine_Object_Instantiate_GameObject____67450600);
  v2->fields.effectContainer = (struct UnityEngine_GameObject_o *)v13;
  sub_B2C2F8(&v2->fields.effectContainer, v13);
  v14 = v2->fields.assetManager;
  if ( !v14
    || (v15 = v2->fields.terminalMap) == 0LL
    || (this = (SubmarineMapManager_o *)v15->fields.mapButtonGrid) == 0LL )
  {
LABEL_16:
    sub_B2C434(this, method);
  }
  GridLinePrefab_k__BackingField = (UILabel_o *)v14->fields._GridLinePrefab_k__BackingField;
  v17 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  v18 = UnityEngine_Object__Instantiate_UILabel_(
          GridLinePrefab_k__BackingField,
          v17,
          (const MethodInfo_2095F74 *)Method_UnityEngine_Object_Instantiate_GameObject____67450600);
  v2->fields.gridLine = (struct UnityEngine_GameObject_o *)v18;
  sub_B2C2F8(&v2->fields.gridLine, v18);
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
  __int64 v28; // x1
  struct SubmarineMapDataManager_o *submarineData; // x8
  SubmarineMapManager___c__DisplayClass102_0_o *v30; // x23
  __int64 v31; // x0
  __int64 v32; // x1
  Il2CppObject *current; // x1
  SubmarineSilhouetteData_o **p_silhouetteData; // x22
  __int64 v35; // x1
  const MethodInfo *v36; // x2
  SubmarineSilhouetteData_o *silhouetteData; // x0
  _BOOL8 HasClearCondQuestId; // x0
  __int64 v39; // x1
  const MethodInfo *v40; // x3
  __int64 v41; // x1
  const MethodInfo *v42; // x2
  SubmarineMapDataManager_o *v43; // x0
  System_Collections_Generic_IEnumerable_T__o *SilhouetteOccupiedPanels; // x25
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v45; // x24
  __int64 v46; // x1
  SubmarineMapManager___c_c *v47; // x0
  struct SubmarineMapManager___c_StaticFields *static_fields; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__102_0; // x25
  Il2CppObject *v50; // x26
  struct SubmarineMapManager___c_StaticFields *v51; // x0
  System_Collections_Generic_List_T__o *All; // x0
  __int64 v53; // x1
  System_Collections_Generic_List_WarBoardUiData_SaveData__o *v54; // x24
  MapControl_MapInfo_o *mapInfo; // x0
  System_Collections_Generic_List_MapControl_SpotInfo__o *SpotList; // x25
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v57; // x26
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
  EventMissionProgressRequest_Argument_ProgressData_o *MoveCameraToPositionTask; // x0
  SubmarineMapPanelData_array *v77; // x1
  const MethodInfo *v78; // x2
  EventMissionProgressRequest_Argument_ProgressData_o *OpenPanelsAndRevealSpotsTask; // x0
  System_Collections_Generic_List_Enumerator_T__o v81; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v82; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_41857F6 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_System_Collections_Generic_List_Enumerator_SubmarineSilhouetteData__Dispose__,
      *(_QWORD *)&beforeClearQuestId);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_SubmarineSilhouetteData__MoveNext__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_SubmarineSilhouetteData__get_Current__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_SchedulerTaskBase__Add__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_SubmarineMapPanelData__FindAll__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_MapControl_SpotInfo__Find__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_SubmarineSilhouetteData__GetEnumerator__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_SubmarineMapPanelData__ToArray__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_SubmarineMapPanelData___ctor___67321184, v13);
    sub_B2C35C(&Method_System_Collections_Generic_List_SubmarineMapPanelData__get_Count__, v14);
    sub_B2C35C(&System_Collections_Generic_List_SubmarineMapPanelData__TypeInfo, v15);
    sub_B2C35C(&System_Collections_Generic_List_SchedulerTaskBase__TypeInfo, v16);
    sub_B2C35C(&Method_System_Predicate_MapControl_SpotInfo___ctor__, v17);
    sub_B2C35C(&Method_System_Predicate_SubmarineMapPanelData___ctor__, v18);
    sub_B2C35C(&System_Predicate_SubmarineMapPanelData__TypeInfo, v19);
    sub_B2C35C(&System_Predicate_MapControl_SpotInfo__TypeInfo, v20);
    sub_B2C35C(&SrcSpotBasePrefab_TypeInfo, v21);
    sub_B2C35C(&Method_SubmarineMapManager___c__CreateHideEnemyOccupiedPanelTasks_b__102_0__, v22);
    sub_B2C35C(&Method_SubmarineMapManager___c__DisplayClass102_0__CreateHideEnemyOccupiedPanelTasks_b__1__, v23);
    sub_B2C35C(&SubmarineMapManager___c__DisplayClass102_0_TypeInfo, v24);
    sub_B2C35C(&SubmarineMapManager___c_TypeInfo, v25);
    byte_41857F6 = 1;
  }
  memset(&v82, 0, sizeof(v82));
  v26 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_SchedulerTaskBase__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v26,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
  submarineData = this->fields.submarineData;
  if ( !submarineData
    || (SilhouetteDataList_k__BackingField = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)submarineData->fields._SilhouetteDataList_k__BackingField) == 0LL )
  {
    sub_B2C434(SilhouetteDataList_k__BackingField, v28);
  }
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v81,
    SilhouetteDataList_k__BackingField,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_SubmarineSilhouetteData__GetEnumerator__);
  v82 = v81;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v82,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_SubmarineSilhouetteData__MoveNext__) )
  {
    v30 = (SubmarineMapManager___c__DisplayClass102_0_o *)sub_B2C42C(SubmarineMapManager___c__DisplayClass102_0_TypeInfo);
    SubmarineMapManager___c__DisplayClass102_0___ctor(v30, 0LL);
    if ( !v30 )
      sub_B2C434(v31, v32);
    current = v82.fields.current;
    v30->fields.silhouetteData = (struct SubmarineSilhouetteData_o *)v82.fields.current;
    p_silhouetteData = &v30->fields.silhouetteData;
    sub_B2C2F8(&v30->fields, current);
    silhouetteData = v30->fields.silhouetteData;
    if ( !silhouetteData )
      sub_B2C434(0LL, v35);
    HasClearCondQuestId = SubmarineSilhouetteData__HasClearCondQuestId(silhouetteData, beforeClearQuestId, v36);
    if ( HasClearCondQuestId )
    {
      if ( !*p_silhouetteData )
        sub_B2C434(HasClearCondQuestId, v39);
      if ( SubmarineMapDataManager__IsClearEachQuests(
             (*p_silhouetteData)->fields._ObjectQuestIds_k__BackingField,
             -1,
             0,
             v40) )
      {
        v43 = this->fields.submarineData;
        if ( !v43 )
          sub_B2C434(0LL, v41);
        SilhouetteOccupiedPanels = (System_Collections_Generic_IEnumerable_T__o *)SubmarineMapDataManager__GetSilhouetteOccupiedPanels(
                                                                                    v43,
                                                                                    *p_silhouetteData,
                                                                                    v42);
        v45 = (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)sub_B2C42C(System_Collections_Generic_List_SubmarineMapPanelData__TypeInfo);
        System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
          v45,
          SilhouetteOccupiedPanels,
          (const MethodInfo_2EF3994 *)Method_System_Collections_Generic_List_SubmarineMapPanelData___ctor___67321184);
        v47 = SubmarineMapManager___c_TypeInfo;
        if ( (BYTE3(SubmarineMapManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SubmarineMapManager___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SubmarineMapManager___c_TypeInfo);
          v47 = SubmarineMapManager___c_TypeInfo;
        }
        static_fields = v47->static_fields;
        _9__102_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)static_fields->__9__102_0;
        if ( !_9__102_0 )
        {
          if ( (BYTE3(v47->vtable._0_Equals.methodPtr) & 4) != 0 && !v47->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v47);
            static_fields = SubmarineMapManager___c_TypeInfo->static_fields;
          }
          v50 = (Il2CppObject *)static_fields->__9;
          _9__102_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B2C42C(System_Predicate_SubmarineMapPanelData__TypeInfo);
          System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
            _9__102_0,
            v50,
            Method_SubmarineMapManager___c__CreateHideEnemyOccupiedPanelTasks_b__102_0__,
            (const MethodInfo_2952BE4 *)Method_System_Predicate_SubmarineMapPanelData___ctor__);
          v51 = SubmarineMapManager___c_TypeInfo->static_fields;
          v51->__9__102_0 = (struct System_Predicate_SubmarineMapPanelData__o *)_9__102_0;
          sub_B2C2F8(&v51->__9__102_0, _9__102_0);
        }
        if ( !v45 )
          sub_B2C434(v47, v46);
        All = System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo___FindAll(
                (System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *)v45,
                (System_Predicate_T__o *)_9__102_0,
                (const MethodInfo_2EF4DE8 *)Method_System_Collections_Generic_List_SubmarineMapPanelData__FindAll__);
        v54 = (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)All;
        if ( !All )
          sub_B2C434(0LL, v53);
        if ( All->fields._size >= 1 )
        {
          mapInfo = this->fields.mapInfo;
          if ( !mapInfo )
            sub_B2C434(0LL, v53);
          SpotList = MapControl_MapInfo__GetSpotList(mapInfo, 0LL);
          v57 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B2C42C(System_Predicate_MapControl_SpotInfo__TypeInfo);
          System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
            v57,
            (Il2CppObject *)v30,
            Method_SubmarineMapManager___c__DisplayClass102_0__CreateHideEnemyOccupiedPanelTasks_b__1__,
            (const MethodInfo_2952BE4 *)Method_System_Predicate_MapControl_SpotInfo___ctor__);
          if ( !SpotList )
            sub_B2C434(v58, v59);
          if ( System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                 (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)SpotList,
                 (System_Predicate_T__o *)v57,
                 (const MethodInfo_2EF4D20 *)Method_System_Collections_Generic_List_MapControl_SpotInfo__Find__) )
          {
            rootSpotP = this->fields.rootSpotP;
            if ( !rootSpotP )
              sub_B2C434(0LL, v60);
            transform = UnityEngine_GameObject__get_transform(rootSpotP, 0LL);
            if ( !*p_silhouetteData )
              sub_B2C434(transform, v63);
            v64 = transform;
            SpotId_k__BackingField = (*p_silhouetteData)->fields._SpotId_k__BackingField;
            if ( (BYTE3(SrcSpotBasePrefab_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !SrcSpotBasePrefab_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(SrcSpotBasePrefab_TypeInfo);
            }
            GobjName = SrcSpotBasePrefab__GetGobjName(SpotId_k__BackingField, 0LL);
            if ( !v64 )
              sub_B2C434(GobjName, GobjName);
            v67 = UnityEngine_Transform__Find(v64, GobjName, 0LL);
            if ( !v67 )
              sub_B2C434(0LL, v68);
            *(UnityEngine_Vector3_o *)&v71 = UnityEngine_Transform__get_localPosition(v67, 0LL);
            v74 = this->fields.submarineData;
            if ( !v74 )
              sub_B2C434(v69, v70);
            Settings_k__BackingField = v74->fields._Settings_k__BackingField;
            if ( !Settings_k__BackingField )
              sub_B2C434(v69, v70);
            MoveCameraToPositionTask = (EventMissionProgressRequest_Argument_ProgressData_o *)SubmarineMapManager__CreateMoveCameraToPositionTask(
                                                                                                this,
                                                                                                *(UnityEngine_Vector3_o *)&v71,
                                                                                                1.0,
                                                                                                Settings_k__BackingField->fields._OpenPanelCameraDuration_k__BackingField,
                                                                                                v70);
            if ( !v26 )
              sub_B2C434(MoveCameraToPositionTask, MoveCameraToPositionTask);
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v26,
              MoveCameraToPositionTask,
              (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_SchedulerTaskBase__Add__);
          }
          v77 = (SubmarineMapPanelData_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                 v54,
                                                 (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_SubmarineMapPanelData__ToArray__);
          OpenPanelsAndRevealSpotsTask = (EventMissionProgressRequest_Argument_ProgressData_o *)SubmarineMapManager__CreateOpenPanelsAndRevealSpotsTask(
                                                                                                  this,
                                                                                                  v77,
                                                                                                  v78);
          if ( !v26 )
            sub_B2C434(OpenPanelsAndRevealSpotsTask, OpenPanelsAndRevealSpotsTask);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v26,
            OpenPanelsAndRevealSpotsTask,
            (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_SchedulerTaskBase__Add__);
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v82,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_SubmarineSilhouetteData__Dispose__);
  return (System_Collections_Generic_List_SchedulerTaskBase__o *)v26;
}


SchedulerTaskBase_o *__fastcall SubmarineMapManager__CreateHitObstractTask(
        SubmarineMapManager_o *this,
        SubmarineMapPanelData_o *panelData,
        float waitTime,
        const MethodInfo *method)
{
  SchedulerTaskNone_o *v4; // x19

  if ( (byte_41857F3 & 1) == 0 )
  {
    sub_B2C35C(&SchedulerTaskNone_TypeInfo, panelData);
    byte_41857F3 = 1;
  }
  v4 = (SchedulerTaskNone_o *)sub_B2C42C(SchedulerTaskNone_TypeInfo);
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
  const MethodInfo_2155280 *v5; // x2
  float y; // s10
  float x; // s11
  __int64 v11; // x1
  __int64 v12; // x1
  MapCamera_o *mapCamera; // x19
  MapCameraPerformance_o *v14; // x0
  SchedulerTaskBase_o *v15; // x20
  System_Nullable_float__o v17; // [xsp+8h] [xbp-48h] BYREF
  System_Nullable_Vector2__o v18; // [xsp+10h] [xbp-40h] BYREF
  System_Nullable_float__o v19; // 0:x0.8
  System_Nullable_float__o v20; // 0:x4.8
  System_Nullable_Vector2__o v21; // 0:x0.12
  UnityEngine_Vector2_o v22; // 0:s0.4,4:s1.4

  y = destPos.fields.y;
  x = destPos.fields.x;
  if ( (byte_41857EC & 1) == 0 )
  {
    sub_B2C35C(&MapCameraPerformance_TypeInfo, method);
    sub_B2C35C(&Method_System_Nullable_float___ctor__, v11);
    sub_B2C35C(&Method_System_Nullable_Vector2___ctor__, v12);
    byte_41857EC = 1;
  }
  mapCamera = this->fields.mapCamera;
  v21.fields.value = (struct UnityEngine_Vector2_o)&v18;
  v22.fields.x = x;
  v22.fields.y = y;
  *(_DWORD *)&v21.fields.has_value = Method_System_Nullable_Vector2___ctor__;
  *(_DWORD *)&v18.fields.has_value = 0;
  v18.fields.value = 0LL;
  System_Nullable_Vector2____ctor(v21, v22, v5);
  v19 = (System_Nullable_float__o)&v17;
  v17 = 0LL;
  System_Nullable_float____ctor(v19, size, (const MethodInfo_21536DC *)Method_System_Nullable_float___ctor__);
  v14 = (MapCameraPerformance_o *)sub_B2C42C(MapCameraPerformance_TypeInfo);
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
  struct MapControl_MapInfo_o *mapInfo; // x24
  SubmarineMapManager_o *v12; // x20
  unsigned int v13; // w25
  struct SubmarineMapAssetManager_o *v14; // x8
  ObjectDomain_o *v15; // x21
  UILabel_o *v16; // x22
  UnityEngine_Transform_o *transform; // x23
  UnityEngine_GameObject_o *v18; // x22
  UnityEngine_Transform_o *v19; // x23
  int v20; // s0
  SubmarineMapPanelComponent_o *v23; // x22
  const MethodInfo *v24; // x2
  const MethodInfo *v25; // x3
  const MethodInfo *v26; // x2
  __int64 v27; // x0
  struct SubmarineMapDataManager_o *v28; // x8
  struct SubmarinePanelPositionCalculator_o *PositionCalculator_k__BackingField; // x9
  SubmarineMapManager_o *v30; // x20
  int32_t v31; // w21
  int32_t v32; // w22
  int v33; // w28
  struct SubmarineMapDataManager_o *v34; // x8
  unsigned __int64 v35; // d0 OVERLAPPED
  int v36; // s1
  int v37; // s2
  struct SubmarineMapAssetManager_o *v38; // x8
  ObjectDomain_o *v39; // x23
  UILabel_o *v40; // x24
  UnityEngine_Transform_o *v41; // x25
  UnityEngine_GameObject_o *v42; // x24
  UnityEngine_Transform_o *v43; // x25
  int v44; // s0
  SubmarineMapPanelComponent_o *v47; // x24
  const MethodInfo *v48; // x2
  const MethodInfo *v49; // x3
  const MethodInfo *v50; // x2

  v2 = this;
  if ( (byte_41857D6 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_SubmarineMapPanelComponent___, method);
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_GameObject____67450600, v3);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v4);
    this = (SubmarineMapManager_o *)sub_B2C35C(&PanelUniqueIDUtil_TypeInfo, v5);
    byte_41857D6 = 1;
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
        v12 = this;
        if ( (int)mapInfo >= 1 )
        {
          v13 = 0;
          while ( 1 )
          {
            v14 = v2->fields.assetManager;
            if ( !v14 )
              break;
            this = (SubmarineMapManager_o *)v2->fields.panelContainer;
            if ( !this )
              break;
            v15 = (ObjectDomain_o *)*((_QWORD *)&v12->fields.warInfo + (int)v13);
            v16 = (UILabel_o *)v14->fields._PanelPrefab_k__BackingField;
            transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            this = (SubmarineMapManager_o *)UnityEngine_Object__Instantiate_UILabel_(
                                              v16,
                                              transform,
                                              (const MethodInfo_2095F74 *)Method_UnityEngine_Object_Instantiate_GameObject____67450600);
            if ( !this )
              break;
            v18 = (UnityEngine_GameObject_o *)this;
            this = (SubmarineMapManager_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
            if ( !v15 )
              break;
            v19 = (UnityEngine_Transform_o *)this;
            *(UnityEngine_Vector3_o *)&v20 = ObjectDomain__get_center(v15, 0LL);
            if ( !v19 )
              break;
            UnityEngine_Transform__set_localPosition(v19, *(UnityEngine_Vector3_o *)&v20, 0LL);
            this = (SubmarineMapManager_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                              v18,
                                              (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_SubmarineMapPanelComponent___);
            if ( !this )
              break;
            v23 = (SubmarineMapPanelComponent_o *)this;
            this->fields.mapCamera = 0LL;
            sub_B2C2F8(&this->fields.mapCamera, 0LL);
            SubmarineMapPanelComponent__SetSize(v23, v15, v24);
            SubmarineMapPanelComponent__SetClosedPanelTexture(v23, v15, v2->fields.closedPanelTexture, v25);
            SubmarineMapPanelComponent__SetClosedPanelVisible(v23, 1, v26);
            if ( (int)++v13 >= (int)mapInfo )
              goto LABEL_32;
            if ( v13 >= LODWORD(v12->fields.mapInfo) )
            {
              v27 = sub_B2C460(this);
              sub_B2C400(v27, 0LL);
            }
          }
LABEL_59:
          sub_B2C434(this, method);
        }
LABEL_32:
        this = (SubmarineMapManager_o *)v2->fields.submarineData;
        if ( !this )
          goto LABEL_59;
        this = (SubmarineMapManager_o *)SubmarineMapDataManager__GetEmptyPanelUniqueIds(
                                          (SubmarineMapDataManager_o *)this,
                                          method);
        v28 = v2->fields.submarineData;
        if ( !v28 )
          goto LABEL_59;
        PositionCalculator_k__BackingField = v28->fields._PositionCalculator_k__BackingField;
        if ( !PositionCalculator_k__BackingField )
          goto LABEL_59;
        v30 = this;
        v31 = 0;
        while ( v31 < PositionCalculator_k__BackingField->fields._HorizontalPanelNum_k__BackingField )
        {
          v32 = 0;
          v33 = 1;
          while ( v32 < PositionCalculator_k__BackingField->fields._VerticalPanelNum_k__BackingField )
          {
            if ( (BYTE3(PanelUniqueIDUtil_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !PanelUniqueIDUtil_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(PanelUniqueIDUtil_TypeInfo);
            }
            this = (SubmarineMapManager_o *)PanelUniqueIDUtil__HasID(v31, v32, (System_Int32_array *)v30, 0LL);
            if ( ((unsigned __int8)this & 1) != 0 )
            {
              v34 = v2->fields.submarineData;
              if ( !v34 )
                goto LABEL_59;
              this = (SubmarineMapManager_o *)v34->fields._PositionCalculator_k__BackingField;
              if ( !this )
                goto LABEL_59;
              v35 = vadd_f32(
                      (float32x2_t)this->fields.warInfo,
                      vmul_f32(
                        vmul_f32(
                          *(float32x2_t *)&this->fields.m_CachedPtr,
                          vcvt_f32_s32(vsub_s32((int32x2_t)__PAIR64__(v33, (2 * v31) | 1u), (int32x2_t)this->fields.mapInfo))),
                        (float32x2_t)0x3F0000003F000000LL)).n64_u64[0];
              v36 = HIDWORD(v35);
              v37 = 0;
              this = (SubmarineMapManager_o *)ClosePanelTextureUtil__CreateClosedPanelDomain(
                                                *(UnityEngine_Vector3_o *)&v35,
                                                (SubmarinePanelPositionCalculator_o *)this,
                                                0LL);
              v38 = v2->fields.assetManager;
              if ( !v38 )
                goto LABEL_59;
              v39 = (ObjectDomain_o *)this;
              this = (SubmarineMapManager_o *)v2->fields.panelContainer;
              if ( !this )
                goto LABEL_59;
              v40 = (UILabel_o *)v38->fields._PanelPrefab_k__BackingField;
              v41 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
              if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              }
              this = (SubmarineMapManager_o *)UnityEngine_Object__Instantiate_UILabel_(
                                                v40,
                                                v41,
                                                (const MethodInfo_2095F74 *)Method_UnityEngine_Object_Instantiate_GameObject____67450600);
              if ( !this )
                goto LABEL_59;
              v42 = (UnityEngine_GameObject_o *)this;
              this = (SubmarineMapManager_o *)UnityEngine_GameObject__get_transform(
                                                (UnityEngine_GameObject_o *)this,
                                                0LL);
              if ( !v39 )
                goto LABEL_59;
              v43 = (UnityEngine_Transform_o *)this;
              *(UnityEngine_Vector3_o *)&v44 = ObjectDomain__get_center(v39, 0LL);
              if ( !v43 )
                goto LABEL_59;
              UnityEngine_Transform__set_localPosition(v43, *(UnityEngine_Vector3_o *)&v44, 0LL);
              this = (SubmarineMapManager_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                v42,
                                                (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_SubmarineMapPanelComponent___);
              if ( !this )
                goto LABEL_59;
              v47 = (SubmarineMapPanelComponent_o *)this;
              this->fields.mapCamera = 0LL;
              sub_B2C2F8(&this->fields.mapCamera, 0LL);
              SubmarineMapPanelComponent__SetSize(v47, v39, v48);
              SubmarineMapPanelComponent__SetClosedPanelTexture(v47, v39, v2->fields.closedPanelTexture, v49);
              SubmarineMapPanelComponent__SetClosedPanelVisible(v47, 1, v50);
            }
            v28 = v2->fields.submarineData;
            if ( v28 )
            {
              PositionCalculator_k__BackingField = v28->fields._PositionCalculator_k__BackingField;
              ++v32;
              v33 += 2;
              if ( PositionCalculator_k__BackingField )
                continue;
            }
            goto LABEL_59;
          }
          PositionCalculator_k__BackingField = v28->fields._PositionCalculator_k__BackingField;
          ++v31;
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
  const MethodInfo_2155668 *v19; // x2
  ComponentPool_CommonEffectComponent__o *effectScanedPanelObjPool; // x23
  UnityEngine_Transform_o *v21; // x22
  SchedulerTaskCommonEffect_o *v22; // x0
  SchedulerTaskCommonEffect_o *v23; // x21
  System_Delegate_o *StartCallback; // x23
  SchedulerTaskBase_TaskCallback_o *v25; // x24
  System_Delegate_o *v26; // x0
  SchedulerTaskBase_array *v27; // x22
  SchedulerTaskWaitTime_o *v28; // x23
  SchedulerTaskOrthostichy_o *v29; // x21
  struct SubmarineMapDataManager_o *submarineData; // x8
  struct SubmarineSettingsManager_o *Settings_k__BackingField; // x8
  float v32; // s8
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v33; // x22
  SchedulerTaskWaitTime_o *v34; // x23
  const MethodInfo *v35; // x2
  System_Collections_Generic_IEnumerable_T__o *RevealSpotOnPanelTasks; // x0
  SchedulerTaskOrthostichy_o *v37; // x19
  SchedulerTaskBase_array *v38; // x20
  SchedulerTaskParallel_o *v39; // x19
  __int64 v41; // x0
  __int64 v42; // x0
  SubmarineMapManager_o *v43; // x0
  SubmarineMapPanelData_array *v44; // x1
  const MethodInfo *v45; // x2
  System_Nullable_Vector3__o v46; // [xsp+20h] [xbp-60h] BYREF
  System_Nullable_Vector3__o v47; // 0:x0.16
  System_Nullable_Vector3__o v48; // 0:x5.16
  UnityEngine_Vector3_o LocalPosition_k__BackingField; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_41857F0 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_SchedulerTaskBase__AddRange__, panelData);
    sub_B2C35C(&Method_System_Collections_Generic_List_SchedulerTaskBase__Add__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__, v8);
    sub_B2C35C(&System_Collections_Generic_List_SchedulerTaskBase__TypeInfo, v9);
    sub_B2C35C(&Method_System_Nullable_Vector3___ctor__, v10);
    sub_B2C35C(&SchedulerTaskBase___TypeInfo, v11);
    sub_B2C35C(&SchedulerTaskCommonEffect_TypeInfo, v12);
    sub_B2C35C(&SchedulerTaskOrthostichy_TypeInfo, v13);
    sub_B2C35C(&SchedulerTaskParallel_TypeInfo, v14);
    sub_B2C35C(&SchedulerTaskWaitTime_TypeInfo, v15);
    sub_B2C35C(&Method_SubmarineMapPanelData_OpenPanel__, v16);
    sub_B2C35C(&SchedulerTaskBase_TaskCallback_TypeInfo, v17);
    byte_41857F0 = 1;
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
  *(_QWORD *)&v47.fields.value.fields.x = &v46;
  *(_QWORD *)&v46.fields.value.fields.x = 0LL;
  *(_QWORD *)&v46.fields.value.fields.z = 0LL;
  *(_QWORD *)&v47.fields.value.fields.z = Method_System_Nullable_Vector3___ctor__;
  System_Nullable_Vector3____ctor(v47, LocalPosition_k__BackingField, v19);
  v22 = (SchedulerTaskCommonEffect_o *)sub_B2C42C(SchedulerTaskCommonEffect_TypeInfo);
  *(_QWORD *)&v48.fields.value.fields.x = 0LL;
  *(_QWORD *)&v48.fields.value.fields.z = 0LL;
  v23 = v22;
  SchedulerTaskCommonEffect___ctor_17299856(
    v22,
    v21,
    effectScanedPanelObjPool,
    v46,
    v48,
    (System_Nullable_Vector3__o)0,
    1,
    0LL);
  if ( !v23 )
    goto LABEL_25;
  StartCallback = (System_Delegate_o *)v23->fields.StartCallback;
  v25 = (SchedulerTaskBase_TaskCallback_o *)sub_B2C42C(SchedulerTaskBase_TaskCallback_TypeInfo);
  SchedulerTaskBase_TaskCallback___ctor(v25, (Il2CppObject *)panelData, Method_SubmarineMapPanelData_OpenPanel__, 0LL);
  v26 = System_Delegate__Combine(StartCallback, (System_Delegate_o *)v25, 0LL);
  if ( !v26 || (SchedulerTaskBase_TaskCallback_c *)v26->klass == SchedulerTaskBase_TaskCallback_TypeInfo )
  {
    v23->fields.StartCallback = (struct SchedulerTaskBase_TaskCallback_o *)v26;
    sub_B2C2F8(&v23->fields.StartCallback, v26);
    v27 = (SchedulerTaskBase_array *)sub_B2C374(SchedulerTaskBase___TypeInfo, 2LL);
    v28 = (SchedulerTaskWaitTime_o *)sub_B2C42C(SchedulerTaskWaitTime_TypeInfo);
    SchedulerTaskWaitTime___ctor(v28, waitTime, 0LL);
    if ( v27 )
    {
      if ( v28 )
      {
        effectContainer = (UnityEngine_GameObject_o *)sub_B2C41C(v28, v27->obj.klass->_1.element_class);
        if ( !effectContainer )
          goto LABEL_27;
      }
      if ( !v27->max_length )
        goto LABEL_26;
      v27->m_Items[0] = (SchedulerTaskBase_o *)v28;
      sub_B2C2F8(v27->m_Items, v28);
      effectContainer = (UnityEngine_GameObject_o *)sub_B2C41C(v23, v27->obj.klass->_1.element_class);
      if ( !effectContainer )
        goto LABEL_27;
      if ( v27->max_length <= 1 )
        goto LABEL_26;
      v27->m_Items[1] = (SchedulerTaskBase_o *)v23;
      sub_B2C2F8(&v27->m_Items[1], v23);
      v29 = (SchedulerTaskOrthostichy_o *)sub_B2C42C(SchedulerTaskOrthostichy_TypeInfo);
      SchedulerTaskOrthostichy___ctor(v29, v27, 0LL);
      submarineData = this->fields.submarineData;
      if ( submarineData )
      {
        Settings_k__BackingField = submarineData->fields._Settings_k__BackingField;
        if ( Settings_k__BackingField )
        {
          v32 = Settings_k__BackingField->fields._SecondOfOpenPanelToRevealSpot_k__BackingField + waitTime;
          v33 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_SchedulerTaskBase__TypeInfo);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
            v33,
            (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
          v34 = (SchedulerTaskWaitTime_o *)sub_B2C42C(SchedulerTaskWaitTime_TypeInfo);
          SchedulerTaskWaitTime___ctor(v34, v32, 0LL);
          if ( v33 )
          {
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v33,
              (EventMissionProgressRequest_Argument_ProgressData_o *)v34,
              (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_SchedulerTaskBase__Add__);
            RevealSpotOnPanelTasks = (System_Collections_Generic_IEnumerable_T__o *)SubmarineMapManager__CreateRevealSpotOnPanelTasks(
                                                                                      this,
                                                                                      panelData,
                                                                                      v35);
            System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
              (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v33,
              RevealSpotOnPanelTasks,
              (const MethodInfo_2EF46B0 *)Method_System_Collections_Generic_List_SchedulerTaskBase__AddRange__);
            v37 = (SchedulerTaskOrthostichy_o *)sub_B2C42C(SchedulerTaskOrthostichy_TypeInfo);
            SchedulerTaskOrthostichy___ctor_17301896(
              v37,
              (System_Collections_Generic_List_SchedulerTaskBase__o *)v33,
              0LL);
            effectContainer = (UnityEngine_GameObject_o *)sub_B2C374(SchedulerTaskBase___TypeInfo, 2LL);
            if ( effectContainer )
            {
              v38 = (SchedulerTaskBase_array *)effectContainer;
              if ( !v29
                || (effectContainer = (UnityEngine_GameObject_o *)sub_B2C41C(
                                                                    v29,
                                                                    effectContainer->klass->_1.element_class)) != 0LL )
              {
                if ( !v38->max_length )
                  goto LABEL_26;
                v38->m_Items[0] = (SchedulerTaskBase_o *)v29;
                sub_B2C2F8(v38->m_Items, v29);
                if ( !v37
                  || (effectContainer = (UnityEngine_GameObject_o *)sub_B2C41C(v37, v38->obj.klass->_1.element_class)) != 0LL )
                {
                  if ( v38->max_length > 1 )
                  {
                    v38->m_Items[1] = (SchedulerTaskBase_o *)v37;
                    sub_B2C2F8(&v38->m_Items[1], v37);
                    v39 = (SchedulerTaskParallel_o *)sub_B2C42C(SchedulerTaskParallel_TypeInfo);
                    SchedulerTaskParallel___ctor(v39, v38, 0LL);
                    return (SchedulerTaskBase_o *)v39;
                  }
LABEL_26:
                  v41 = sub_B2C460(effectContainer);
                  sub_B2C400(v41, 0LL);
                }
              }
LABEL_27:
              v42 = sub_B2C454();
              sub_B2C400(v42, 0LL);
            }
          }
        }
      }
    }
LABEL_25:
    sub_B2C434(effectContainer, panelData);
  }
  v43 = (SubmarineMapManager_o *)sub_B2C728(v26);
  return SubmarineMapManager__CreateOpenPanelsAndRevealSpotsTask(v43, v44, v45);
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

  if ( (byte_41857F1 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_SchedulerTaskBase__Add__, panelDataArray);
    sub_B2C35C(&Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__, v5);
    sub_B2C35C(&System_Collections_Generic_List_SchedulerTaskBase__TypeInfo, v6);
    sub_B2C35C(&SchedulerTaskParallel_TypeInfo, v7);
    byte_41857F1 = 1;
  }
  v8 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_SchedulerTaskBase__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v8,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
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
        v16 = sub_B2C460(OpenPanelAndRevealSpotTask);
        sub_B2C400(v16, 0LL);
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
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_SchedulerTaskBase__Add__);
      LODWORD(v12) = panelDataArray->max_length;
      if ( (__int64)++v13 >= (int)v12 )
        goto LABEL_9;
    }
LABEL_11:
    sub_B2C434(OpenPanelAndRevealSpotTask, v10);
  }
LABEL_9:
  v14 = (SchedulerTaskParallel_o *)sub_B2C42C(SchedulerTaskParallel_TypeInfo);
  SchedulerTaskParallel___ctor_17302252(v14, (System_Collections_Generic_List_SchedulerTaskBase__o *)v8, 0LL);
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
  __int64 v18; // x1
  struct SubmarineMapAssetManager_o *v19; // x8
  UnityEngine_GameObject_o *v20; // x0
  SubmarineMapPanelData_o *current; // x20
  UILabel_o *v22; // x21
  UnityEngine_Transform_o *transform; // x22
  UnityEngine_GameObject_o *v24; // x0
  __int64 v25; // x1
  UnityEngine_GameObject_o *v26; // x22
  srcLineSprite_o *Component_srcLineSprite; // x0
  __int64 v28; // x1
  struct SubmarineMapDataManager_o *v29; // x8
  SubmarineMapPanelComponent_o *v30; // x21
  SubmarinePanelPositionCalculator_o *PositionCalculator_k__BackingField; // x0
  float v32; // s8
  float v33; // s9
  ObjectDomain_o *ClosedPanelDomain; // x0
  __int64 v35; // x1
  ObjectDomain_o *v36; // x23
  const MethodInfo *v37; // x2
  const MethodInfo *v38; // x3
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v39; // x21
  const MethodInfo *v40; // x2
  System_Collections_Generic_List_Enumerator_T__o v41; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v42; // [xsp+20h] [xbp-90h] BYREF
  UnityEngine_Vector3_o v43; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v44; // 0:s0.4,4:s1.4,8:s2.4

  v2 = this;
  if ( (byte_41857D5 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Action_SubmarineMapPanelData___ctor__, method);
    sub_B2C35C(&System_Action_SubmarineMapPanelData__TypeInfo, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__Dispose__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__MoveNext__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__get_Current__, v6);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_SubmarineMapPanelComponent___, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_SubmarineMapPanelData__GetEnumerator__, v8);
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_GameObject____67450600, v9);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v10);
    this = (SubmarineMapManager_o *)sub_B2C35C(&Method_SubmarineMapManager_ClickPanel__, v11);
    byte_41857D5 = 1;
  }
  memset(&v42, 0, sizeof(v42));
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
              &v41,
              (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this,
              (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_SubmarineMapPanelData__GetEnumerator__);
            v42 = v41;
            while ( 1 )
            {
              v17 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                      &v42,
                      (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__MoveNext__);
              if ( !v17 )
                break;
              v19 = v2->fields.assetManager;
              if ( !v19 )
                sub_B2C434(v17, v18);
              v20 = v2->fields.panelContainer;
              if ( !v20 )
                sub_B2C434(0LL, v18);
              current = (SubmarineMapPanelData_o *)v42.fields.current;
              v22 = (UILabel_o *)v19->fields._PanelPrefab_k__BackingField;
              transform = UnityEngine_GameObject__get_transform(v20, 0LL);
              if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              }
              v24 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_UILabel_(
                                                  v22,
                                                  transform,
                                                  (const MethodInfo_2095F74 *)Method_UnityEngine_Object_Instantiate_GameObject____67450600);
              v26 = v24;
              if ( !v24 )
                sub_B2C434(0LL, v25);
              Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                          v24,
                                          (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_SubmarineMapPanelComponent___);
              v29 = v2->fields.submarineData;
              if ( !v29 )
                sub_B2C434(Component_srcLineSprite, v28);
              if ( !current )
                sub_B2C434(Component_srcLineSprite, v28);
              v30 = (SubmarineMapPanelComponent_o *)Component_srcLineSprite;
              PositionCalculator_k__BackingField = v29->fields._PositionCalculator_k__BackingField;
              if ( !PositionCalculator_k__BackingField )
                sub_B2C434(0LL, v28);
              v32 = PositionCalculator_k__BackingField->fields._OffsetX_k__BackingField
                  + (float)((float)(PositionCalculator_k__BackingField->fields._PanelUnitSize_k__BackingField.fields.x
                                  * (float)(((2 * current->fields._HIndex_k__BackingField) | 1)
                                          - PositionCalculator_k__BackingField->fields._HorizontalPanelNum_k__BackingField))
                          * 0.5);
              v33 = PositionCalculator_k__BackingField->fields._OffsetY_k__BackingField
                  + (float)((float)(PositionCalculator_k__BackingField->fields._PanelUnitSize_k__BackingField.fields.y
                                  * (float)(((2 * current->fields._VIndex_k__BackingField) | 1)
                                          - PositionCalculator_k__BackingField->fields._VerticalPanelNum_k__BackingField))
                          * 0.5);
              v43.fields.z = 0.0;
              v43.fields.x = v32;
              v43.fields.y = v33;
              ClosedPanelDomain = ClosePanelTextureUtil__CreateClosedPanelDomain(
                                    v43,
                                    PositionCalculator_k__BackingField,
                                    0LL);
              if ( !v30 )
                sub_B2C434(ClosedPanelDomain, v35);
              v36 = ClosedPanelDomain;
              v30->fields._OnClickPanel_k__BackingField = 0LL;
              sub_B2C2F8(&v30->fields._OnClickPanel_k__BackingField, 0LL);
              v44.fields.z = 0.0;
              v44.fields.x = v32;
              v44.fields.y = v33;
              GameObjectExtensions__SetLocalPosition(v26, v44, 0LL);
              SubmarineMapPanelComponent__SetSize(v30, v36, v37);
              SubmarineMapPanelComponent__SetClosedPanelTexture(v30, v36, v2->fields.closedPanelTexture, v38);
              current->fields._Component_k__BackingField = v30;
              sub_B2C2F8(&current->fields._Component_k__BackingField, v30);
              v39 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B2C42C(System_Action_SubmarineMapPanelData__TypeInfo);
              System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
                v39,
                (Il2CppObject *)v2,
                (intptr_t)Method_SubmarineMapManager_ClickPanel__,
                (const MethodInfo_24BBAD8 *)Method_System_Action_SubmarineMapPanelData___ctor__);
              SubmarineMapPanelData__SetPanelClickAction(current, (System_Action_SubmarineMapPanelData__o *)v39, v40);
            }
            System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
              &v42,
              (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__Dispose__);
            return;
          }
        }
LABEL_40:
        sub_B2C434(this, method);
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v7; // x20
  void *Children; // x0
  __int64 v9; // x1
  int v10; // w8
  void *v11; // x21
  unsigned int v12; // w23
  UnityEngine_Object_o *Component_srcLineSprite; // x22
  const MethodInfo *v14; // x2
  __int64 v16; // x0

  if ( (byte_41857F4 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_SrcSpotBasePrefab___, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_SchedulerTaskBase__AddRange__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__, v4);
    sub_B2C35C(&System_Collections_Generic_List_SchedulerTaskBase__TypeInfo, v5);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v6);
    byte_41857F4 = 1;
  }
  v7 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_SchedulerTaskBase__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v7,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
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
        v16 = sub_B2C460(Children);
        sub_B2C400(v16, 0LL);
      }
      Children = (void *)*((_QWORD *)v11 + (int)v12 + 4);
      if ( !Children )
        break;
      Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                          (UnityEngine_GameObject_o *)Children,
                                                          (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_SrcSpotBasePrefab___);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      Children = (void *)UnityEngine_Object__op_Equality(Component_srcLineSprite, 0LL, 0LL);
      if ( ((unsigned __int8)Children & 1) == 0 )
      {
        Children = SubmarineMapManager__CreateRevealSpotTasks(this, (SrcSpotBasePrefab_o *)Component_srcLineSprite, v14);
        if ( !v7 )
          break;
        System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
          (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v7,
          (System_Collections_Generic_IEnumerable_T__o *)Children,
          (const MethodInfo_2EF46B0 *)Method_System_Collections_Generic_List_SchedulerTaskBase__AddRange__);
      }
      v10 = *((_DWORD *)v11 + 6);
      if ( (int)++v12 >= v10 )
        return (System_Collections_Generic_List_SchedulerTaskBase__o *)v7;
    }
LABEL_16:
    sub_B2C434(Children, v9);
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
  __int64 v15; // x1
  SubmarineMapManager___c__DisplayClass95_0_o *v16; // x22
  MapControl_MapInfo_o *mapInfo; // x0
  __int64 v18; // x1
  SubmarineMapManager___c__DisplayClass95_0_Fields *p_fields; // x21
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v20; // x20
  SchedulerTaskNone_o *v21; // x23
  System_Collections_Generic_List_MapControl_SpotInfo__o *SpotList; // x23
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v23; // x24
  struct SubmarineMapPanelData_o *v24; // x8
  UnityEngine_Transform_o *v25; // x21
  int32_t SpotId_k__BackingField; // w22
  UnityEngine_Object_o *v27; // x21
  WebViewObject_o *Component_WebViewObject; // x1
  const MethodInfo *v30; // x2

  if ( (byte_41857EF & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_SrcSpotBasePrefab___, panelData);
    sub_B2C35C(&Method_System_Collections_Generic_List_SchedulerTaskBase__Add__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_MapControl_SpotInfo__Find__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__, v7);
    sub_B2C35C(&System_Collections_Generic_List_SchedulerTaskBase__TypeInfo, v8);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v9);
    sub_B2C35C(&Method_System_Predicate_MapControl_SpotInfo___ctor__, v10);
    sub_B2C35C(&System_Predicate_MapControl_SpotInfo__TypeInfo, v11);
    sub_B2C35C(&SchedulerTaskNone_TypeInfo, v12);
    sub_B2C35C(&SrcSpotBasePrefab_TypeInfo, v13);
    sub_B2C35C(&Method_SubmarineMapManager___c__DisplayClass95_0__CreateRevealSpotOnPanelTasks_b__0__, v14);
    sub_B2C35C(&SubmarineMapManager___c__DisplayClass95_0_TypeInfo, v15);
    byte_41857EF = 1;
  }
  v16 = (SubmarineMapManager___c__DisplayClass95_0_o *)sub_B2C42C(SubmarineMapManager___c__DisplayClass95_0_TypeInfo);
  SubmarineMapManager___c__DisplayClass95_0___ctor(v16, 0LL);
  if ( !v16 )
    goto LABEL_23;
  v16->fields.panelData = panelData;
  p_fields = &v16->fields;
  sub_B2C2F8(&v16->fields, panelData);
  v20 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_SchedulerTaskBase__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v20,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
  v21 = (SchedulerTaskNone_o *)sub_B2C42C(SchedulerTaskNone_TypeInfo);
  SchedulerTaskNone___ctor(v21, 0LL);
  if ( !v20 )
    goto LABEL_23;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v20,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v21,
    (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_SchedulerTaskBase__Add__);
  if ( !p_fields->panelData || p_fields->panelData->fields._SpotId_k__BackingField < 1 )
    return (System_Collections_Generic_List_SchedulerTaskBase__o *)v20;
  mapInfo = this->fields.mapInfo;
  if ( !mapInfo )
    goto LABEL_23;
  SpotList = MapControl_MapInfo__GetSpotList(mapInfo, 0LL);
  v23 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B2C42C(System_Predicate_MapControl_SpotInfo__TypeInfo);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v23,
    (Il2CppObject *)v16,
    Method_SubmarineMapManager___c__DisplayClass95_0__CreateRevealSpotOnPanelTasks_b__0__,
    (const MethodInfo_2952BE4 *)Method_System_Predicate_MapControl_SpotInfo___ctor__);
  if ( !SpotList )
    goto LABEL_23;
  if ( !System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
          (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)SpotList,
          (System_Predicate_T__o *)v23,
          (const MethodInfo_2EF4D20 *)Method_System_Collections_Generic_List_MapControl_SpotInfo__Find__) )
    return (System_Collections_Generic_List_SchedulerTaskBase__o *)v20;
  mapInfo = (MapControl_MapInfo_o *)this->fields.rootSpotP;
  if ( !mapInfo )
    goto LABEL_23;
  mapInfo = (MapControl_MapInfo_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)mapInfo, 0LL);
  v24 = p_fields->panelData;
  if ( !p_fields->panelData )
    goto LABEL_23;
  v25 = (UnityEngine_Transform_o *)mapInfo;
  SpotId_k__BackingField = v24->fields._SpotId_k__BackingField;
  if ( (BYTE3(SrcSpotBasePrefab_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SrcSpotBasePrefab_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SrcSpotBasePrefab_TypeInfo);
  }
  mapInfo = (MapControl_MapInfo_o *)SrcSpotBasePrefab__GetGobjName(SpotId_k__BackingField, 0LL);
  if ( !v25 )
    goto LABEL_23;
  v27 = (UnityEngine_Object_o *)UnityEngine_Transform__Find(v25, (System_String_o *)mapInfo, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  mapInfo = (MapControl_MapInfo_o *)UnityEngine_Object__op_Equality(v27, 0LL, 0LL);
  if ( ((unsigned __int8)mapInfo & 1) != 0 )
    return (System_Collections_Generic_List_SchedulerTaskBase__o *)v20;
  if ( !v27 )
LABEL_23:
    sub_B2C434(mapInfo, v18);
  Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                              (UnityEngine_Component_o *)v27,
                              (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_SrcSpotBasePrefab___);
  return SubmarineMapManager__CreateRevealSpotTasks(this, (SrcSpotBasePrefab_o *)Component_WebViewObject, v30);
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
  __int64 v13; // x1
  SpotEntity_o *Mine; // x22
  const MethodInfo *v15; // x2
  SchedulerTaskBase_o *v16; // x21
  SchedulerTaskBase_o *v17; // x21

  if ( (byte_41857F5 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_SchedulerTaskBase__Add__, spot);
    sub_B2C35C(&Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__, v5);
    sub_B2C35C(&System_Collections_Generic_List_SchedulerTaskBase__TypeInfo, v6);
    sub_B2C35C(&Method_SingletonTemplate_QuestTree__get_Instance__, v7);
    sub_B2C35C(&SingletonTemplate_QuestTree__TypeInfo, v8);
    sub_B2C35C(&SubmarineLightenSpotPerformance_TypeInfo, v9);
    sub_B2C35C(&SubmarineRevealSpotPerformance_TypeInfo, v10);
    byte_41857F5 = 1;
  }
  v11 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_SchedulerTaskBase__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v11,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
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
  mMapCtrl_SpotInfo = (MapControl_SpotInfo_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !mMapCtrl_SpotInfo )
    goto LABEL_19;
  if ( !QuestTree__IsSpotSatisfyingDisplayCond((QuestTree_o *)mMapCtrl_SpotInfo, Mine, 0, 0LL) )
    return (System_Collections_Generic_List_SchedulerTaskBase__o *)v11;
  SubmarineMapManager__AdjustSpotPosition(this, spot, v15);
  v16 = (SchedulerTaskBase_o *)sub_B2C42C(SubmarineRevealSpotPerformance_TypeInfo);
  SchedulerTaskBase___ctor(v16, 0LL);
  v16[1].klass = (SchedulerTaskBase_c *)spot;
  sub_B2C2F8(&v16[1], spot);
  if ( !v11 )
    goto LABEL_19;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v11,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v16,
    (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_SchedulerTaskBase__Add__);
  if ( (BYTE3(SingletonTemplate_QuestTree__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_QuestTree__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_QuestTree__TypeInfo);
  }
  mMapCtrl_SpotInfo = (MapControl_SpotInfo_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !mMapCtrl_SpotInfo )
LABEL_19:
    sub_B2C434(mMapCtrl_SpotInfo, v13);
  if ( QuestTree__IsSpotSatisfyingActiveCond((QuestTree_o *)mMapCtrl_SpotInfo, Mine, 0LL) )
  {
    v17 = (SchedulerTaskBase_o *)sub_B2C42C(SubmarineLightenSpotPerformance_TypeInfo);
    SchedulerTaskBase___ctor(v17, 0LL);
    v17[1].klass = (SchedulerTaskBase_c *)spot;
    sub_B2C2F8(&v17[1], spot);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v11,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v17,
      (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_SchedulerTaskBase__Add__);
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
  __int64 v27; // x1
  const MethodInfo *v28; // x2
  struct SubmarineMapDataManager_o *submarineData; // x8
  float ScanOpenPanelInterval; // s8
  const MethodInfo *v31; // x3
  System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *v32; // x21
  SubmarineMapManager___c_c *v33; // x8
  struct SubmarineMapManager___c_StaticFields *static_fields; // x9
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__98_0; // x22
  Il2CppObject *v36; // x23
  struct SubmarineMapManager___c_StaticFields *v37; // x0
  System_Collections_Generic_List_T__o *All; // x0
  SubmarineMapManager___c_c *v39; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v40; // x21
  struct SubmarineMapManager___c_StaticFields *v41; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__98_1; // x22
  Il2CppObject *v43; // x23
  struct SubmarineMapManager___c_StaticFields *v44; // x0
  int32_t v45; // w23
  SubmarineMapManager___c__DisplayClass98_0_o *v46; // x22
  int v47; // w27
  int v48; // w25
  float v49; // s9
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v50; // x23
  System_Collections_Generic_List_T__o *v51; // x23
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v52; // x0
  _BOOL8 v53; // x0
  __int64 v54; // x1
  const MethodInfo *v55; // x3
  Il2CppObject *current; // x23
  SubmarineMapDataManager_o *v57; // x0
  SubmarineMapPanelData_o *PanelByIndices; // x0
  const MethodInfo *v59; // x2
  float v60; // s0
  SchedulerTaskBase_o *HitObstractTask; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v62; // x1
  SchedulerTaskBase_o *OpenPanelAndRevealSpotTask; // x0
  int v64; // w8
  int v65; // w8
  SchedulerTaskParallel_o *v66; // x19
  _BYTE v68[28]; // [xsp+0h] [xbp-A0h] BYREF
  int v69; // [xsp+1Ch] [xbp-84h]
  System_Collections_Generic_List_Enumerator_T__o v70; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_41857F2 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Linq_Enumerable_Max_SubmarineScanEvent___, *(_QWORD *)&scanId);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_SubmarineScanEvent__Dispose__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_SubmarineScanEvent__MoveNext__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_SubmarineScanEvent__get_Current__, v9);
    sub_B2C35C(&Method_System_Func_SubmarineScanEvent__int___ctor__, v10);
    sub_B2C35C(&System_Func_SubmarineScanEvent__int__TypeInfo, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_SchedulerTaskBase__Add__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_SubmarineScanEvent__FindAll__, v13);
    sub_B2C35C(&Method_System_Collections_Generic_List_SubmarineScanEvent__GetEnumerator__, v14);
    sub_B2C35C(&Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__, v15);
    sub_B2C35C(&System_Collections_Generic_List_SchedulerTaskBase__TypeInfo, v16);
    sub_B2C35C(&Method_System_Predicate_SubmarineScanEvent___ctor__, v17);
    sub_B2C35C(&System_Predicate_SubmarineScanEvent__TypeInfo, v18);
    sub_B2C35C(&SchedulerTaskParallel_TypeInfo, v19);
    sub_B2C35C(&Method_SubmarineMapManager___c__CreateScanOpenPanelTask_b__98_0__, v20);
    sub_B2C35C(&Method_SubmarineMapManager___c__CreateScanOpenPanelTask_b__98_1__, v21);
    sub_B2C35C(&Method_SubmarineMapManager___c__DisplayClass98_0__CreateScanOpenPanelTask_b__2__, v22);
    sub_B2C35C(&SubmarineMapManager___c__DisplayClass98_0_TypeInfo, v23);
    sub_B2C35C(&SubmarineMapManager___c_TypeInfo, v24);
    byte_41857F2 = 1;
  }
  memset(&v70, 0, sizeof(v70));
  v69 = 0;
  v25 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_SchedulerTaskBase__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v25,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
  submarineData = this->fields.submarineData;
  if ( !submarineData )
    goto LABEL_47;
  Settings_k__BackingField = submarineData->fields._Settings_k__BackingField;
  if ( !Settings_k__BackingField )
    goto LABEL_47;
  ScanOpenPanelInterval = SubmarineSettingsManager__GetScanOpenPanelInterval(Settings_k__BackingField, scanId, v28);
  Settings_k__BackingField = (SubmarineSettingsManager_o *)SubmarineDataHelperScan__CreateScanEvents(
                                                             scanId,
                                                             panelData,
                                                             this->fields.submarineData,
                                                             v31);
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
    _9__98_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B2C42C(System_Predicate_SubmarineScanEvent__TypeInfo);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__98_0,
      v36,
      Method_SubmarineMapManager___c__CreateScanOpenPanelTask_b__98_0__,
      (const MethodInfo_2952BE4 *)Method_System_Predicate_SubmarineScanEvent___ctor__);
    v37 = SubmarineMapManager___c_TypeInfo->static_fields;
    v37->__9__98_0 = (struct System_Predicate_SubmarineScanEvent__o *)_9__98_0;
    sub_B2C2F8(&v37->__9__98_0, _9__98_0);
  }
  if ( !v32 )
    goto LABEL_47;
  All = System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo___FindAll(
          v32,
          (System_Predicate_T__o *)_9__98_0,
          (const MethodInfo_2EF4DE8 *)Method_System_Collections_Generic_List_SubmarineScanEvent__FindAll__);
  v39 = SubmarineMapManager___c_TypeInfo;
  v40 = (System_Collections_Generic_IEnumerable_TSource__o *)All;
  if ( (BYTE3(SubmarineMapManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SubmarineMapManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SubmarineMapManager___c_TypeInfo);
    v39 = SubmarineMapManager___c_TypeInfo;
  }
  v41 = v39->static_fields;
  _9__98_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)v41->__9__98_1;
  if ( !_9__98_1 )
  {
    if ( (BYTE3(v39->vtable._0_Equals.methodPtr) & 4) != 0 && !v39->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v39);
      v41 = SubmarineMapManager___c_TypeInfo->static_fields;
    }
    v43 = (Il2CppObject *)v41->__9;
    _9__98_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B2C42C(System_Func_SubmarineScanEvent__int__TypeInfo);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__98_1,
      v43,
      Method_SubmarineMapManager___c__CreateScanOpenPanelTask_b__98_1__,
      (const MethodInfo_27127B0 *)Method_System_Func_SubmarineScanEvent__int___ctor__);
    v44 = SubmarineMapManager___c_TypeInfo->static_fields;
    v44->__9__98_1 = (struct System_Func_SubmarineScanEvent__int__o *)_9__98_1;
    sub_B2C2F8(&v44->__9__98_1, _9__98_1);
  }
  v45 = System_Linq_Enumerable__Max_BattleBuffData_BuffData_(
          v40,
          (System_Func_TSource__int__o *)_9__98_1,
          (const MethodInfo_1A92CB0 *)Method_System_Linq_Enumerable_Max_SubmarineScanEvent___);
  v46 = (SubmarineMapManager___c__DisplayClass98_0_o *)sub_B2C42C(SubmarineMapManager___c__DisplayClass98_0_TypeInfo);
  SubmarineMapManager___c__DisplayClass98_0___ctor(v46, 0LL);
  if ( !v46 )
    goto LABEL_47;
  v47 = v45 + 1;
  v46->fields.i = 0;
  if ( v45 + 1 >= 1 )
  {
    v48 = 0;
    v49 = 0.0;
    while ( 1 )
    {
      v50 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B2C42C(System_Predicate_SubmarineScanEvent__TypeInfo);
      System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
        v50,
        (Il2CppObject *)v46,
        Method_SubmarineMapManager___c__DisplayClass98_0__CreateScanOpenPanelTask_b__2__,
        (const MethodInfo_2952BE4 *)Method_System_Predicate_SubmarineScanEvent___ctor__);
      if ( !v40 )
        break;
      v51 = System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo___FindAll(
              (System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *)v40,
              (System_Predicate_T__o *)v50,
              (const MethodInfo_2EF4DE8 *)Method_System_Collections_Generic_List_SubmarineScanEvent__FindAll__);
      v52 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_SchedulerTaskBase__TypeInfo);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
        v52,
        (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
      if ( !v51 )
        break;
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)v68,
        (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v51,
        (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_SubmarineScanEvent__GetEnumerator__);
      v70 = *(System_Collections_Generic_List_Enumerator_T__o *)v68;
      while ( 1 )
      {
        v53 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v70,
                (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_SubmarineScanEvent__MoveNext__);
        if ( !v53 )
          break;
        current = v70.fields.current;
        if ( !v70.fields.current )
          sub_B2C434(v53, v54);
        v57 = this->fields.submarineData;
        if ( !v57 )
          sub_B2C434(0LL, v54);
        PanelByIndices = SubmarineMapDataManager__GetPanelByIndices(
                           v57,
                           (int32_t)v70.fields.current[1].klass,
                           HIDWORD(v70.fields.current[1].klass),
                           v55);
        if ( PanelByIndices )
        {
          if ( BYTE5(current[2].klass) )
          {
            HitObstractTask = SubmarineMapManager__CreateHitObstractTask(
                                (SubmarineMapManager_o *)PanelByIndices,
                                PanelByIndices,
                                v60,
                                v59);
            v62 = (EventMissionProgressRequest_Argument_ProgressData_o *)HitObstractTask;
            if ( !v25 )
              sub_B2C434(HitObstractTask, HitObstractTask);
          }
          else
          {
            OpenPanelAndRevealSpotTask = SubmarineMapManager__CreateOpenPanelAndRevealSpotTask(
                                           this,
                                           PanelByIndices,
                                           v49,
                                           v59);
            v62 = (EventMissionProgressRequest_Argument_ProgressData_o *)OpenPanelAndRevealSpotTask;
            if ( !v25 )
              sub_B2C434(OpenPanelAndRevealSpotTask, OpenPanelAndRevealSpotTask);
          }
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v25,
            v62,
            (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_SchedulerTaskBase__Add__);
        }
      }
      *(_DWORD *)&v68[4 * v48 + 24] = 274;
      v48 = ++v69;
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v70,
        (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_SubmarineScanEvent__Dispose__);
      if ( v48 )
      {
        v64 = v48 - 1;
        if ( *(_DWORD *)&v68[4 * v48 + 20] == 274 )
        {
          --v48;
          v69 = v64;
        }
      }
      v49 = ScanOpenPanelInterval + v49;
      v65 = v46->fields.i + 1;
      v46->fields.i = v65;
      if ( v65 >= v47 )
        goto LABEL_46;
    }
LABEL_47:
    sub_B2C434(Settings_k__BackingField, v27);
  }
LABEL_46:
  v66 = (SchedulerTaskParallel_o *)sub_B2C42C(SchedulerTaskParallel_TypeInfo);
  SchedulerTaskParallel___ctor_17302252(v66, (System_Collections_Generic_List_SchedulerTaskBase__o *)v25, 0LL);
  return (SchedulerTaskBase_o *)v66;
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
  SubmarineMapManager___c__DisplayClass94_0_o *v33; // x20
  __int64 MoveCameraToPositionTask; // x0
  const MethodInfo *v35; // x1
  struct SubmarineMapDataManager_o *submarineData; // x8
  struct SubmarinePanelPositionCalculator_o *PositionCalculator_k__BackingField; // x8
  int32x2_t v38; // d11
  float32x2_t v39; // d9
  int32x2_t v40; // d10
  float32x2_t v41; // d8
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v42; // x19
  struct SubmarineMapDataManager_o *v43; // x8
  struct SubmarineSettingsManager_o *Settings_k__BackingField; // x8
  unsigned __int64 v45; // d0 OVERLAPPED
  float v46; // s8
  int v47; // s2
  int v48; // s1
  const MethodInfo *v49; // x2
  UnityEngine_Object_o *ScanAnimObjectPrefab; // x22
  const MethodInfo *v51; // x1
  UnityEngine_Object_o *HomeSpot; // x23
  float v53; // s2
  float v54; // s0
  float v55; // s1
  float v56; // s9
  UnityEngine_Transform_o *transform; // x23
  UILabel_o *v58; // x0
  UnityEngine_GameObject_o **p_scanAnimObj; // x24
  UIWidget_o *Component_UIWidget; // x0
  unsigned __int64 v61; // d1 OVERLAPPED
  SubmarineScannerComponent_o *v62; // x22
  void (__fastcall *v63)(); // d0
  float magnitude; // s0
  struct SubmarineMapDataManager_o *v65; // x8
  struct SubmarineSettingsManager_o *v66; // x8
  float v67; // s0
  float v68; // s1
  float v69; // s2
  const MethodInfo *v70; // x1
  float JumpStartTime; // s10
  SchedulerTaskWaitTime_o *v72; // x25
  _QWORD *p_StartCallback; // x25
  System_Delegate_o *StartCallback; // t1
  SchedulerTaskBase_TaskCallback_o *v75; // x27
  System_Delegate_o *v76; // x0
  System_Delegate_o *v77; // x8
  struct SubmarineMapManager_PlayingScanVoiceData_o *playingScanVoiceData; // x8
  struct SubmarineMapManager_PlayingScanVoiceData_o *v79; // x8
  struct SubmarineMapManager_PlayingScanVoiceData_o *v80; // x8
  System_String_o *assetName; // x25
  System_String_o *vcName; // x26
  UIWidget_o *v83; // x0
  struct SubmarineScanVoiceComponent_o **p_svtScanVoice; // x25
  struct SubmarineScanVoiceComponent_o *svtScanVoice; // x8
  System_String_o *v86; // x26
  SchedulerTaskWaitLoadAsset_o *v87; // x27
  struct System_String_o *v88; // x1
  struct System_String_o *v89; // x1
  float v90; // s10
  SchedulerTaskWaitTime_o *v91; // x25
  System_Delegate_o *v92; // x27
  SchedulerTaskBase_TaskCallback_o *v93; // x28
  System_Delegate_o *v94; // x0
  const MethodInfo *v95; // x1
  float SelectedPanelEffecFinishTime; // s10
  SchedulerTaskWaitTime_o *v97; // x25
  System_Delegate_o *EndCallback; // x27
  SchedulerTaskBase_TaskCallback_o *v99; // x28
  System_Delegate_o *v100; // x0
  const MethodInfo *v101; // x1
  float JumpDuration; // s10
  void (__fastcall *v103)(); // d0 OVERLAPPED
  float v104; // s1
  float v105; // s0
  MapCamera_o *mapCamera; // x21
  float v107; // s11
  const MethodInfo_2155280 *v108; // x2
  MapCameraPerformance_o *v109; // x0
  SchedulerTaskBase_o *v110; // x26
  UnityEngine_GameObject_o *v111; // x24
  SchedulerTaskMovePerformance_o *v112; // x0
  SchedulerTaskBase_o *v113; // x21
  SchedulerTaskBase_array *v114; // x24
  SchedulerTaskParallel_o *v115; // x21
  const MethodInfo *v116; // x1
  __int64 v117; // x1
  SimpleAnimation_o *AnimationComponent; // x26
  struct SimpleAnimation_EditorState_o *state; // x8
  System_String_o **p_name; // x8
  System_String_o *v121; // x27
  SchedulerTaskSimpleAnimation_o *v122; // x24
  System_Delegate_o *v123; // x27
  SchedulerTaskBase_TaskCallback_o *v124; // x28
  System_Delegate_o *v125; // x0
  SchedulerTaskBase_array *v126; // x20
  SchedulerTaskBase_array *v127; // x24
  SchedulerTaskOrthostichy_o *v128; // x21
  SchedulerTaskParallel_o *v129; // x21
  float TimeToStartOpenPanel; // s8
  SchedulerTaskWaitTime_o *v131; // x20
  __int64 v133; // x0
  __int64 v134; // x0
  SubmarineMapManager_o *v135; // x0
  int32_t v136; // w1
  SubmarineMapPanelData_o *v137; // x2
  const MethodInfo *v138; // x3
  SchedulerTaskBase_o *v139; // [xsp+8h] [xbp-E8h]
  float v140; // [xsp+20h] [xbp-D0h]
  float v141; // [xsp+30h] [xbp-C0h]
  UnityEngine_Vector2_o value; // [xsp+40h] [xbp-B0h]
  System_Nullable_float__o v143; // [xsp+50h] [xbp-A0h] BYREF
  System_Nullable_Vector2__o v144; // [xsp+58h] [xbp-98h] BYREF
  MethodInfo methoda; // [xsp+68h] [xbp-88h] BYREF
  System_Nullable_float__o v146; // 0:x0.8
  System_Nullable_float__o v147; // 0:x4.8
  System_Nullable_Vector2__o v148; // 0:x0.12
  UnityEngine_Vector2_o v149; // 0:s0.4,4:s1.4
  UnityEngine_Vector3_o v150; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v151; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v152; // 0:s3.4,4:s4.4,8:s5.4

  if ( (byte_41857EE & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_EventPanelScanMaster___, panelData);
    sub_B2C35C(&Method_DataMasterBase_EventPanelScanMaster__EventPanelScanEntity__int__GetEntity__, v7);
    sub_B2C35C(&Method_GameObjectExtensions_SafeGetComponent_SubmarineScanVoiceComponent___, v8);
    sub_B2C35C(&Method_GameObjectExtensions_SafeGetComponent_SubmarineScannerComponent___, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_SchedulerTaskBase__Add__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__, v11);
    sub_B2C35C(&System_Collections_Generic_List_SchedulerTaskBase__TypeInfo, v12);
    sub_B2C35C(&MapCameraPerformance_TypeInfo, v13);
    sub_B2C35C(&Method_System_Nullable_float___ctor__, v14);
    sub_B2C35C(&Method_System_Nullable_Vector2___ctor__, v15);
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_GameObject____67450600, v16);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v17);
    sub_B2C35C(&SchedulerTaskBase___TypeInfo, v18);
    sub_B2C35C(&SchedulerTaskMovePerformance_TypeInfo, v19);
    sub_B2C35C(&SchedulerTaskOrthostichy_TypeInfo, v20);
    sub_B2C35C(&SchedulerTaskParallel_TypeInfo, v21);
    sub_B2C35C(&SchedulerTaskSimpleAnimation_TypeInfo, v22);
    sub_B2C35C(&SchedulerTaskWaitLoadAsset_TypeInfo, v23);
    sub_B2C35C(&SchedulerTaskWaitTime_TypeInfo, v24);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v25);
    sub_B2C35C(&SoundManager_TypeInfo, v26);
    sub_B2C35C(&SchedulerTaskBase_TaskCallback_TypeInfo, v27);
    sub_B2C35C(&Method_SubmarineMapManager___c__DisplayClass94_0__CreateScanTask_b__0__, v28);
    sub_B2C35C(&Method_SubmarineMapManager___c__DisplayClass94_0__CreateScanTask_b__1__, v29);
    sub_B2C35C(&Method_SubmarineMapManager___c__DisplayClass94_0__CreateScanTask_b__2__, v30);
    sub_B2C35C(&Method_SubmarineMapManager___c__DisplayClass94_0__CreateScanTask_b__3__, v31);
    sub_B2C35C(&SubmarineMapManager___c__DisplayClass94_0_TypeInfo, v32);
    byte_41857EE = 1;
  }
  LODWORD(methoda.invoker_method) = 0;
  methoda.methodPointer = 0LL;
  v33 = (SubmarineMapManager___c__DisplayClass94_0_o *)sub_B2C42C(SubmarineMapManager___c__DisplayClass94_0_TypeInfo);
  SubmarineMapManager___c__DisplayClass94_0___ctor(v33, 0LL);
  if ( !v33 )
    goto LABEL_88;
  v33->fields.__4__this = this;
  sub_B2C2F8(&v33->fields.__4__this, this);
  submarineData = this->fields.submarineData;
  if ( !submarineData )
    goto LABEL_88;
  if ( !panelData )
    goto LABEL_88;
  PositionCalculator_k__BackingField = submarineData->fields._PositionCalculator_k__BackingField;
  if ( !PositionCalculator_k__BackingField )
    goto LABEL_88;
  v38.n64_u64[0] = *(unsigned __int64 *)&panelData->fields._HIndex_k__BackingField;
  v39.n64_u64[0] = (unsigned __int64)PositionCalculator_k__BackingField->fields._PanelUnitSize_k__BackingField;
  v40.n64_u64[0] = *(unsigned __int64 *)&PositionCalculator_k__BackingField->fields._HorizontalPanelNum_k__BackingField;
  v41.n64_u64[0] = *(unsigned __int64 *)&PositionCalculator_k__BackingField->fields._OffsetX_k__BackingField;
  v42 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_SchedulerTaskBase__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v42,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
  v43 = this->fields.submarineData;
  if ( !v43 )
    goto LABEL_88;
  Settings_k__BackingField = v43->fields._Settings_k__BackingField;
  if ( !Settings_k__BackingField )
    goto LABEL_88;
  v45 = vadd_f32(
          v41,
          vmul_f32(
            vmul_f32(v39, vcvt_f32_s32(vsub_s32((int32x2_t)(vshl_n_s32(v38, 1uLL).n64_u64[0] | 0x100000001LL), v40))),
            (float32x2_t)0x3F0000003F000000LL)).n64_u64[0];
  v46 = *((float *)&v45 + 1);
  v47 = 0;
  v48 = HIDWORD(v45);
  value = (UnityEngine_Vector2_o)v45;
  MoveCameraToPositionTask = (__int64)SubmarineMapManager__CreateMoveCameraToPositionTask(
                                        this,
                                        *(UnityEngine_Vector3_o *)&v45,
                                        1.0,
                                        Settings_k__BackingField->fields._ScanRangeToHomeSpotCameraDuration_k__BackingField,
                                        v35);
  if ( !v42 )
    goto LABEL_88;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v42,
    (EventMissionProgressRequest_Argument_ProgressData_o *)MoveCameraToPositionTask,
    (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_SchedulerTaskBase__Add__);
  MoveCameraToPositionTask = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !MoveCameraToPositionTask )
    goto LABEL_88;
  MoveCameraToPositionTask = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        (DataManager_o *)MoveCameraToPositionTask,
                                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventPanelScanMaster___);
  if ( !MoveCameraToPositionTask )
    goto LABEL_88;
  MoveCameraToPositionTask = (__int64)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                        (DataMasterBase_WarMaster__WarEntity__int__o *)MoveCameraToPositionTask,
                                        scanId,
                                        (const MethodInfo_24E40D0 *)Method_DataMasterBase_EventPanelScanMaster__EventPanelScanEntity__int__GetEntity__);
  if ( !MoveCameraToPositionTask )
    return (System_Collections_Generic_List_SchedulerTaskBase__o *)v42;
  if ( !this->fields.assetManager )
    goto LABEL_88;
  ScanAnimObjectPrefab = (UnityEngine_Object_o *)SubmarineMapAssetManager__GetScanAnimObjectPrefab(
                                                   this->fields.assetManager,
                                                   *(_DWORD *)(MoveCameraToPositionTask + 56),
                                                   v49);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(ScanAnimObjectPrefab, 0LL, 0LL) )
    return (System_Collections_Generic_List_SchedulerTaskBase__o *)v42;
  HomeSpot = (UnityEngine_Object_o *)SubmarineMapManager__GetHomeSpot(this, v51);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  MoveCameraToPositionTask = UnityEngine_Object__op_Equality(HomeSpot, 0LL, 0LL);
  if ( (MoveCameraToPositionTask & 1) != 0 )
    return (System_Collections_Generic_List_SchedulerTaskBase__o *)v42;
  if ( !HomeSpot )
    goto LABEL_88;
  MoveCameraToPositionTask = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)HomeSpot, 0LL);
  if ( !MoveCameraToPositionTask )
    goto LABEL_88;
  *(UnityEngine_Vector3_o *)(&v53 - 2) = UnityEngine_Transform__get_localPosition(
                                           (UnityEngine_Transform_o *)MoveCameraToPositionTask,
                                           0LL);
  MoveCameraToPositionTask = (__int64)this->fields.effectContainer;
  v141 = v54;
  v140 = v55;
  if ( !MoveCameraToPositionTask )
    goto LABEL_88;
  v56 = v53;
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)MoveCameraToPositionTask, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v58 = UnityEngine_Object__Instantiate_UILabel_(
          (UILabel_o *)ScanAnimObjectPrefab,
          transform,
          (const MethodInfo_2095F74 *)Method_UnityEngine_Object_Instantiate_GameObject____67450600);
  v33->fields.scanAnimObj = (struct UnityEngine_GameObject_o *)v58;
  p_scanAnimObj = &v33->fields.scanAnimObj;
  sub_B2C2F8(&v33->fields, v58);
  v150.fields.y = v140;
  v150.fields.x = v141;
  v150.fields.z = v56;
  GameObjectExtensions__SetLocalPosition(v33->fields.scanAnimObj, v150, 0LL);
  MoveCameraToPositionTask = (__int64)v33->fields.scanAnimObj;
  if ( !MoveCameraToPositionTask )
    goto LABEL_88;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)MoveCameraToPositionTask, 0, 0LL);
  Component_UIWidget = GameObjectExtensions__SafeGetComponent_UIWidget_(
                         *p_scanAnimObj,
                         (const MethodInfo_1AA8660 *)Method_GameObjectExtensions_SafeGetComponent_SubmarineScannerComponent___);
  v61 = __PAIR64__(LODWORD(v140), LODWORD(v141));
  v62 = (SubmarineScannerComponent_o *)Component_UIWidget;
  *(float *)&methoda.invoker_method = v56;
  v63 = (void (__fastcall *)())vsub_f32((float32x2_t)__PAIR64__(LODWORD(v140), LODWORD(v141)), (float32x2_t)value).n64_u64[0];
  methoda.methodPointer = v63;
  magnitude = UnityEngine_Vector3__get_magnitude(*(UnityEngine_Vector3_o *)((char *)&v61 - 4), &methoda);
  if ( !v62 )
    goto LABEL_88;
  SubmarineScannerComponent__PrepareAnimation(v62, magnitude, v35);
  if ( !v62->fields.state )
    return (System_Collections_Generic_List_SchedulerTaskBase__o *)v42;
  v42 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_SchedulerTaskBase__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v42,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
  v65 = this->fields.submarineData;
  if ( !v65 )
    goto LABEL_88;
  v66 = v65->fields._Settings_k__BackingField;
  v68 = v140;
  v67 = v141;
  if ( !v66 )
    goto LABEL_88;
  v69 = v56;
  MoveCameraToPositionTask = (__int64)SubmarineMapManager__CreateMoveCameraToPositionTask(
                                        this,
                                        *(UnityEngine_Vector3_o *)&v67,
                                        1.0,
                                        v66->fields._ScanRangeToHomeSpotCameraDuration_k__BackingField,
                                        v35);
  if ( !v42 )
    goto LABEL_88;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v42,
    (EventMissionProgressRequest_Argument_ProgressData_o *)MoveCameraToPositionTask,
    (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_SchedulerTaskBase__Add__);
  JumpStartTime = SubmarineScannerComponent__GetJumpStartTime(v62, v70);
  v72 = (SchedulerTaskWaitTime_o *)sub_B2C42C(SchedulerTaskWaitTime_TypeInfo);
  SchedulerTaskWaitTime___ctor(v72, JumpStartTime, 0LL);
  if ( !v72 )
    goto LABEL_88;
  v139 = (SchedulerTaskBase_o *)v72;
  StartCallback = (System_Delegate_o *)v72->fields.StartCallback;
  p_StartCallback = &v72->fields.StartCallback;
  v75 = (SchedulerTaskBase_TaskCallback_o *)sub_B2C42C(SchedulerTaskBase_TaskCallback_TypeInfo);
  SchedulerTaskBase_TaskCallback___ctor(
    v75,
    (Il2CppObject *)v33,
    Method_SubmarineMapManager___c__DisplayClass94_0__CreateScanTask_b__0__,
    0LL);
  v76 = System_Delegate__Combine(StartCallback, (System_Delegate_o *)v75, 0LL);
  v77 = v76;
  if ( !v76 || (SchedulerTaskBase_TaskCallback_c *)v76->klass == SchedulerTaskBase_TaskCallback_TypeInfo )
  {
    *p_StartCallback = v76;
    sub_B2C2F8(p_StartCallback, v76);
    playingScanVoiceData = this->fields.playingScanVoiceData;
    if ( !playingScanVoiceData )
      goto LABEL_88;
    MoveCameraToPositionTask = System_String__IsNullOrEmpty(playingScanVoiceData->fields.vcName, 0LL);
    if ( (MoveCameraToPositionTask & 1) == 0 )
    {
      v79 = this->fields.playingScanVoiceData;
      if ( !v79 )
        goto LABEL_88;
      MoveCameraToPositionTask = System_String__IsNullOrEmpty(v79->fields.assetName, 0LL);
      if ( (MoveCameraToPositionTask & 1) == 0 )
      {
        v80 = this->fields.playingScanVoiceData;
        if ( !v80 )
          goto LABEL_88;
        assetName = v80->fields.assetName;
        vcName = v80->fields.vcName;
        if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SoundManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        }
        SoundManager__stopVoice(assetName, vcName, 0.0, 0LL);
      }
    }
    v83 = GameObjectExtensions__SafeGetComponent_UIWidget_(
            v33->fields.scanAnimObj,
            (const MethodInfo_1AA8660 *)Method_GameObjectExtensions_SafeGetComponent_SubmarineScanVoiceComponent___);
    p_svtScanVoice = &v33->fields.svtScanVoice;
    v33->fields.svtScanVoice = (struct SubmarineScanVoiceComponent_o *)v83;
    sub_B2C2F8(&v33->fields.svtScanVoice, v83);
    svtScanVoice = v33->fields.svtScanVoice;
    if ( !svtScanVoice )
      goto LABEL_88;
    v86 = svtScanVoice->fields.assetName;
    v87 = (SchedulerTaskWaitLoadAsset_o *)sub_B2C42C(SchedulerTaskWaitLoadAsset_TypeInfo);
    SchedulerTaskWaitLoadAsset___ctor(v87, v86, 0LL);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v42,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v87,
      (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_SchedulerTaskBase__Add__);
    if ( !*p_svtScanVoice )
      goto LABEL_88;
    MoveCameraToPositionTask = (__int64)this->fields.playingScanVoiceData;
    if ( !MoveCameraToPositionTask )
      goto LABEL_88;
    v88 = (*p_svtScanVoice)->fields.assetName;
    *(_QWORD *)(MoveCameraToPositionTask + 16) = v88;
    sub_B2C2F8(MoveCameraToPositionTask + 16, v88);
    if ( !*p_svtScanVoice
      || (MoveCameraToPositionTask = (__int64)this->fields.playingScanVoiceData) == 0
      || (v89 = (*p_svtScanVoice)->fields.vcName,
          *(_QWORD *)(MoveCameraToPositionTask + 24) = v89,
          sub_B2C2F8(MoveCameraToPositionTask + 24, v89),
          !*p_svtScanVoice)
      || (v90 = *(float *)&(*p_svtScanVoice)->fields.svtId,
          v91 = (SchedulerTaskWaitTime_o *)sub_B2C42C(SchedulerTaskWaitTime_TypeInfo),
          SchedulerTaskWaitTime___ctor(v91, v90, 0LL),
          !v91) )
    {
LABEL_88:
      sub_B2C434(MoveCameraToPositionTask, v35);
    }
    v92 = (System_Delegate_o *)v91->fields.StartCallback;
    v93 = (SchedulerTaskBase_TaskCallback_o *)sub_B2C42C(SchedulerTaskBase_TaskCallback_TypeInfo);
    SchedulerTaskBase_TaskCallback___ctor(
      v93,
      (Il2CppObject *)v33,
      Method_SubmarineMapManager___c__DisplayClass94_0__CreateScanTask_b__1__,
      0LL);
    v94 = System_Delegate__Combine(v92, (System_Delegate_o *)v93, 0LL);
    v77 = v94;
    if ( !v94 || (SchedulerTaskBase_TaskCallback_c *)v94->klass == SchedulerTaskBase_TaskCallback_TypeInfo )
    {
      v91->fields.StartCallback = (struct SchedulerTaskBase_TaskCallback_o *)v94;
      sub_B2C2F8(&v91->fields.StartCallback, v94);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v42,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v91,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_SchedulerTaskBase__Add__);
      SelectedPanelEffecFinishTime = SubmarineScannerComponent__GetSelectedPanelEffecFinishTime(v62, v95);
      v97 = (SchedulerTaskWaitTime_o *)sub_B2C42C(SchedulerTaskWaitTime_TypeInfo);
      SchedulerTaskWaitTime___ctor(v97, SelectedPanelEffecFinishTime, 0LL);
      if ( !v97 )
        goto LABEL_88;
      EndCallback = (System_Delegate_o *)v97->fields.EndCallback;
      v99 = (SchedulerTaskBase_TaskCallback_o *)sub_B2C42C(SchedulerTaskBase_TaskCallback_TypeInfo);
      SchedulerTaskBase_TaskCallback___ctor(
        v99,
        (Il2CppObject *)v33,
        Method_SubmarineMapManager___c__DisplayClass94_0__CreateScanTask_b__2__,
        0LL);
      v100 = System_Delegate__Combine(EndCallback, (System_Delegate_o *)v99, 0LL);
      v77 = v100;
      if ( !v100 || (SchedulerTaskBase_TaskCallback_c *)v100->klass == SchedulerTaskBase_TaskCallback_TypeInfo )
      {
        v97->fields.EndCallback = (struct SchedulerTaskBase_TaskCallback_o *)v100;
        sub_B2C2F8(&v97->fields.EndCallback, v100);
        v97->fields.NonBlocking = 1;
        JumpDuration = SubmarineScannerComponent__GetJumpDuration(v62, v101);
        v103 = (void (__fastcall *)())vsub_f32(
                                        (float32x2_t)value,
                                        (float32x2_t)__PAIR64__(LODWORD(v140), LODWORD(v141))).n64_u64[0];
        v104 = 0.0 - v56;
        methoda.methodPointer = v103;
        *(float *)&methoda.invoker_method = 0.0 - v56;
        v105 = UnityEngine_Vector3__get_magnitude(*(UnityEngine_Vector3_o *)&v103, &methoda);
        mapCamera = this->fields.mapCamera;
        v107 = v105 / JumpDuration;
        v149.fields.x = value.fields.x;
        v148.fields.value = (struct UnityEngine_Vector2_o)&v144;
        *(_DWORD *)&v148.fields.has_value = Method_System_Nullable_Vector2___ctor__;
        v149.fields.y = v46;
        *(_DWORD *)&v144.fields.has_value = 0;
        v144.fields.value = 0LL;
        System_Nullable_Vector2____ctor(v148, v149, v108);
        v146 = (System_Nullable_float__o)&v143;
        v143 = 0LL;
        System_Nullable_float____ctor(v146, 1.0, (const MethodInfo_21536DC *)Method_System_Nullable_float___ctor__);
        v109 = (MapCameraPerformance_o *)sub_B2C42C(MapCameraPerformance_TypeInfo);
        v147 = v143;
        v110 = (SchedulerTaskBase_o *)v109;
        MapCameraPerformance___ctor(v109, mapCamera, JumpDuration, v144, v147, 0, 0LL);
        v111 = *p_scanAnimObj;
        v112 = (SchedulerTaskMovePerformance_o *)sub_B2C42C(SchedulerTaskMovePerformance_TypeInfo);
        v151.fields.y = v140;
        v151.fields.x = v141;
        v152.fields.x = value.fields.x;
        v152.fields.z = 0.0;
        v151.fields.z = v56;
        v152.fields.y = v46;
        v113 = (SchedulerTaskBase_o *)v112;
        SchedulerTaskMovePerformance___ctor(v112, v111, v151, v152, v107, 0, 0LL);
        MoveCameraToPositionTask = sub_B2C374(SchedulerTaskBase___TypeInfo, 2LL);
        if ( !MoveCameraToPositionTask )
          goto LABEL_88;
        v114 = (SchedulerTaskBase_array *)MoveCameraToPositionTask;
        if ( v110 )
        {
          MoveCameraToPositionTask = sub_B2C41C(v110, *(_QWORD *)(*(_QWORD *)MoveCameraToPositionTask + 64LL));
          if ( !MoveCameraToPositionTask )
            goto LABEL_90;
        }
        if ( !v114->max_length )
          goto LABEL_89;
        v114->m_Items[0] = v110;
        sub_B2C2F8(v114->m_Items, v110);
        if ( v113 )
        {
          MoveCameraToPositionTask = sub_B2C41C(v113, v114->obj.klass->_1.element_class);
          if ( !MoveCameraToPositionTask )
            goto LABEL_90;
        }
        if ( v114->max_length <= 1 )
          goto LABEL_89;
        v114->m_Items[1] = v113;
        sub_B2C2F8(&v114->m_Items[1], v113);
        v115 = (SchedulerTaskParallel_o *)sub_B2C42C(SchedulerTaskParallel_TypeInfo);
        SchedulerTaskParallel___ctor(v115, v114, 0LL);
        AnimationComponent = SubmarineScannerComponent__get_AnimationComponent(v62, v116);
        if ( (byte_418582A & 1) == 0 )
        {
          sub_B2C35C(&StringLiteral_1/*""*/, v117);
          byte_418582A = 1;
        }
        state = v62->fields.state;
        if ( state )
          p_name = &state->fields.name;
        else
          p_name = (System_String_o **)&StringLiteral_1/*""*/;
        v121 = *p_name;
        v122 = (SchedulerTaskSimpleAnimation_o *)sub_B2C42C(SchedulerTaskSimpleAnimation_TypeInfo);
        SchedulerTaskSimpleAnimation___ctor(v122, AnimationComponent, v121, 0LL);
        if ( !v122 )
          goto LABEL_88;
        v123 = (System_Delegate_o *)v122->fields.EndCallback;
        v124 = (SchedulerTaskBase_TaskCallback_o *)sub_B2C42C(SchedulerTaskBase_TaskCallback_TypeInfo);
        SchedulerTaskBase_TaskCallback___ctor(
          v124,
          (Il2CppObject *)v33,
          Method_SubmarineMapManager___c__DisplayClass94_0__CreateScanTask_b__3__,
          0LL);
        v125 = System_Delegate__Combine(v123, (System_Delegate_o *)v124, 0LL);
        v77 = v125;
        if ( !v125 || (SchedulerTaskBase_TaskCallback_c *)v125->klass == SchedulerTaskBase_TaskCallback_TypeInfo )
        {
          v122->fields.EndCallback = (struct SchedulerTaskBase_TaskCallback_o *)v125;
          sub_B2C2F8(&v122->fields.EndCallback, v125);
          MoveCameraToPositionTask = sub_B2C374(SchedulerTaskBase___TypeInfo, 2LL);
          if ( !MoveCameraToPositionTask )
            goto LABEL_88;
          v126 = (SchedulerTaskBase_array *)MoveCameraToPositionTask;
          MoveCameraToPositionTask = sub_B2C41C(v122, *(_QWORD *)(*(_QWORD *)MoveCameraToPositionTask + 64LL));
          if ( MoveCameraToPositionTask )
          {
            if ( !v126->max_length )
              goto LABEL_89;
            v126->m_Items[0] = (SchedulerTaskBase_o *)v122;
            sub_B2C2F8(v126->m_Items, v122);
            MoveCameraToPositionTask = sub_B2C374(SchedulerTaskBase___TypeInfo, 2LL);
            if ( !MoveCameraToPositionTask )
              goto LABEL_88;
            v127 = (SchedulerTaskBase_array *)MoveCameraToPositionTask;
            MoveCameraToPositionTask = sub_B2C41C(v139, *(_QWORD *)(*(_QWORD *)MoveCameraToPositionTask + 64LL));
            if ( MoveCameraToPositionTask )
            {
              if ( !v127->max_length )
                goto LABEL_89;
              v127->m_Items[0] = v139;
              sub_B2C2F8(v127->m_Items, v139);
              if ( !v115 || (MoveCameraToPositionTask = sub_B2C41C(v115, v127->obj.klass->_1.element_class)) != 0 )
              {
                if ( v127->max_length <= 1 )
                  goto LABEL_89;
                v127->m_Items[1] = (SchedulerTaskBase_o *)v115;
                sub_B2C2F8(&v127->m_Items[1], v115);
                v128 = (SchedulerTaskOrthostichy_o *)sub_B2C42C(SchedulerTaskOrthostichy_TypeInfo);
                SchedulerTaskOrthostichy___ctor(v128, v127, 0LL);
                if ( !v128 || (MoveCameraToPositionTask = sub_B2C41C(v128, v126->obj.klass->_1.element_class)) != 0 )
                {
                  if ( v126->max_length > 1 )
                  {
                    v126->m_Items[1] = (SchedulerTaskBase_o *)v128;
                    sub_B2C2F8(&v126->m_Items[1], v128);
                    v129 = (SchedulerTaskParallel_o *)sub_B2C42C(SchedulerTaskParallel_TypeInfo);
                    SchedulerTaskParallel___ctor(v129, v126, 0LL);
                    if ( v129 )
                    {
                      v129->fields.NonBlocking = 1;
                      TimeToStartOpenPanel = SubmarineScannerComponent__GetTimeToStartOpenPanel(v62, v35);
                      v131 = (SchedulerTaskWaitTime_o *)sub_B2C42C(SchedulerTaskWaitTime_TypeInfo);
                      SchedulerTaskWaitTime___ctor(v131, TimeToStartOpenPanel, 0LL);
                      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                        v42,
                        (EventMissionProgressRequest_Argument_ProgressData_o *)v97,
                        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_SchedulerTaskBase__Add__);
                      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                        v42,
                        (EventMissionProgressRequest_Argument_ProgressData_o *)v129,
                        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_SchedulerTaskBase__Add__);
                      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                        v42,
                        (EventMissionProgressRequest_Argument_ProgressData_o *)v131,
                        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_SchedulerTaskBase__Add__);
                      return (System_Collections_Generic_List_SchedulerTaskBase__o *)v42;
                    }
                    goto LABEL_88;
                  }
LABEL_89:
                  v133 = sub_B2C460(MoveCameraToPositionTask);
                  sub_B2C400(v133, 0LL);
                }
              }
            }
          }
LABEL_90:
          v134 = sub_B2C454();
          sub_B2C400(v134, 0LL);
        }
      }
    }
  }
  v135 = (SubmarineMapManager_o *)sub_B2C728(v77);
  return (System_Collections_Generic_List_SchedulerTaskBase__o *)SubmarineMapManager__CreateScanOpenPanelTask(
                                                                   v135,
                                                                   v136,
                                                                   v137,
                                                                   v138);
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v14; // x20
  float z; // s8
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v16; // x21
  SchedulerTaskBase_o *PanelDataList_k__BackingField; // x0
  const MethodInfo *v18; // x1
  struct SubmarineMapDataManager_o *submarineData; // x8
  __int128 v20; // q1
  _BOOL8 v21; // x0
  __int64 v22; // x1
  const MethodInfo *v23; // x2
  Il2CppObject *current; // x22
  _BOOL8 IsPanelSatisfyCommonReleaseCond; // x0
  __int64 v26; // x1
  struct SubmarineMapDataManager_o *v27; // x8
  float32x2_t *PositionCalculator_k__BackingField; // x8
  __int128 v29; // q1
  SubmarineMapPanelData_array *v30; // x0
  const MethodInfo *v31; // x2
  struct SubmarineMapDataManager_o *v32; // x8
  struct SubmarineSettingsManager_o *Settings_k__BackingField; // x8
  signed int size; // w9
  EventMissionProgressRequest_Argument_ProgressData_o *v35; // x22
  unsigned __int64 v36; // d0 OVERLAPPED
  float v37; // s2
  int v38; // s1
  float y; // [xsp+0h] [xbp-B0h]
  __int128 v41; // [xsp+10h] [xbp-A0h]
  float32x2_t v42[3]; // [xsp+10h] [xbp-A0h]
  System_Collections_Generic_List_Enumerator_T__o v43; // [xsp+28h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v44; // [xsp+40h] [xbp-70h] BYREF
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_41857F7 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__Dispose__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__MoveNext__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__get_Current__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_SchedulerTaskBase__Add__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_SubmarineMapPanelData__Add__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_SubmarineMapPanelData__GetEnumerator__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_SubmarineMapPanelData__ToArray__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_SubmarineMapPanelData___ctor__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_SubmarineMapPanelData__get_Count__, v11);
    sub_B2C35C(&System_Collections_Generic_List_SubmarineMapPanelData__TypeInfo, v12);
    sub_B2C35C(&System_Collections_Generic_List_SchedulerTaskBase__TypeInfo, v13);
    byte_41857F7 = 1;
  }
  memset(&v44, 0, sizeof(v44));
  v14 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_SchedulerTaskBase__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v14,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
  zero = UnityEngine_Vector3__get_zero(0LL);
  *(_QWORD *)&v41 = *(_QWORD *)&zero.fields.x;
  y = zero.fields.y;
  z = zero.fields.z;
  v16 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_SubmarineMapPanelData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v16,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_SubmarineMapPanelData___ctor__);
  submarineData = this->fields.submarineData;
  if ( !submarineData )
    goto LABEL_22;
  PanelDataList_k__BackingField = (SchedulerTaskBase_o *)submarineData->fields._PanelDataList_k__BackingField;
  if ( !PanelDataList_k__BackingField )
    goto LABEL_22;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v43,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)PanelDataList_k__BackingField,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_SubmarineMapPanelData__GetEnumerator__);
  v20 = v41;
  *((float *)&v20 + 1) = y;
  *(_OWORD *)v42[0].n64_u64 = v20;
  v44 = v43;
  while ( 1 )
  {
    v21 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v44,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__MoveNext__);
    if ( !v21 )
      break;
    current = v44.fields.current;
    if ( !v44.fields.current )
      sub_B2C434(v21, v22);
    if ( !LOBYTE(v44.fields.current[3].monitor) )
    {
      IsPanelSatisfyCommonReleaseCond = SubmarineMapDataManager__IsPanelSatisfyCommonReleaseCond(
                                          (SubmarineMapPanelData_o *)v44.fields.current,
                                          -1,
                                          v23);
      if ( IsPanelSatisfyCommonReleaseCond )
      {
        v27 = this->fields.submarineData;
        if ( !v27 )
          sub_B2C434(IsPanelSatisfyCommonReleaseCond, v26);
        PositionCalculator_k__BackingField = (float32x2_t *)v27->fields._PositionCalculator_k__BackingField;
        if ( !PositionCalculator_k__BackingField )
          sub_B2C434(IsPanelSatisfyCommonReleaseCond, v26);
        z = z + 0.0;
        *((float32x2_t *)&v29 + 1) = v42[1];
        *(float32x2_t *)&v29 = vadd_f32(
                                 v42[0],
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
        *(_OWORD *)v42[0].n64_u64 = v29;
        if ( !v16 )
          sub_B2C434(IsPanelSatisfyCommonReleaseCond, v26);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v16,
          (EventMissionProgressRequest_Argument_ProgressData_o *)current,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_SubmarineMapPanelData__Add__);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v44,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__Dispose__);
  if ( !v16 )
    goto LABEL_22;
  if ( v16->fields._size >= 1 )
  {
    v30 = (SubmarineMapPanelData_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                           (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v16,
                                           (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_SubmarineMapPanelData__ToArray__);
    PanelDataList_k__BackingField = SubmarineMapManager__CreateOpenPanelsAndRevealSpotsTask(this, v30, v31);
    v32 = this->fields.submarineData;
    if ( v32 )
    {
      Settings_k__BackingField = v32->fields._Settings_k__BackingField;
      if ( Settings_k__BackingField )
      {
        size = v16->fields._size;
        v35 = (EventMissionProgressRequest_Argument_ProgressData_o *)PanelDataList_k__BackingField;
        v36 = vdiv_f32(v42[0], vcvt_f32_s32(vdup_n_s32(size))).n64_u64[0];
        v37 = z / (float)size;
        v38 = HIDWORD(v36);
        PanelDataList_k__BackingField = SubmarineMapManager__CreateMoveCameraToPositionTask(
                                          this,
                                          *(UnityEngine_Vector3_o *)&v36,
                                          1.0,
                                          Settings_k__BackingField->fields._OpenPanelCameraDuration_k__BackingField,
                                          v18);
        if ( v14 )
        {
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v14,
            (EventMissionProgressRequest_Argument_ProgressData_o *)PanelDataList_k__BackingField,
            (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_SchedulerTaskBase__Add__);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v14,
            v35,
            (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_SchedulerTaskBase__Add__);
          return (System_Collections_Generic_List_SchedulerTaskBase__o *)v14;
        }
      }
    }
LABEL_22:
    sub_B2C434(PanelDataList_k__BackingField, v18);
  }
  return (System_Collections_Generic_List_SchedulerTaskBase__o *)v14;
}


void __fastcall SubmarineMapManager__DestroyDialog(SubmarineMapManager_o *this, const MethodInfo *method)
{
  struct SubmarineScanConfirmDialog_o **p_scanConfirmDialog; // x20
  UnityEngine_Object_o *scanConfirmDialog; // x21
  __int64 v5; // x1
  UnityEngine_Component_o *v6; // x0
  UnityEngine_Object_o *gameObject; // x21
  struct SubmarineSelectScannerDialog_o **p_selectScannerDialog; // x20
  UnityEngine_Object_o *selectScannerDialog; // x21
  UnityEngine_Object_o *v10; // x21
  struct SubmarineNewScannerDialog_o **p_newScannerDialog; // x19
  UnityEngine_Object_o *v12; // x20
  struct SubmarineNewScannerDialog_o *newScannerDialog; // t1
  UnityEngine_Object_o *v14; // x20

  if ( (byte_41857E1 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_41857E1 = 1;
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
    v6 = (UnityEngine_Component_o *)*p_scanConfirmDialog;
    if ( !*p_scanConfirmDialog )
      goto LABEL_31;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v6, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35314896(gameObject, 0LL);
    *p_scanConfirmDialog = 0LL;
    sub_B2C2F8(&this->fields.scanConfirmDialog, 0LL);
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
    v6 = (UnityEngine_Component_o *)*p_selectScannerDialog;
    if ( !*p_selectScannerDialog )
      goto LABEL_31;
    v10 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v6, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35314896(v10, 0LL);
    *p_selectScannerDialog = 0LL;
    sub_B2C2F8(&this->fields.selectScannerDialog, 0LL);
  }
  newScannerDialog = this->fields.newScannerDialog;
  p_newScannerDialog = &this->fields.newScannerDialog;
  v12 = (UnityEngine_Object_o *)newScannerDialog;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v12, 0LL, 0LL) )
  {
    v6 = (UnityEngine_Component_o *)*p_newScannerDialog;
    if ( *p_newScannerDialog )
    {
      v14 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v6, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_35314896(v14, 0LL);
      *p_newScannerDialog = 0LL;
      sub_B2C2F8(p_newScannerDialog, 0LL);
      return;
    }
LABEL_31:
    sub_B2C434(v6, v5);
  }
}


void __fastcall SubmarineMapManager__DestroyMapObjects(SubmarineMapManager_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *panelContainer; // x20
  const MethodInfo *v4; // x1

  if ( (byte_41857C4 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_41857C4 = 1;
  }
  panelContainer = (UnityEngine_Object_o *)this->fields.panelContainer;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__Destroy_35314896(panelContainer, 0LL);
  UnityEngine_Object__Destroy_35314896((UnityEngine_Object_o *)this->fields.gridLine, 0LL);
  UnityEngine_Object__Destroy_35314896((UnityEngine_Object_o *)this->fields.effectContainer, 0LL);
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
  SubmarineMapManager___c__DisplayClass35_0_o *v12; // x21
  System_Collections_Generic_IEnumerable_T__o *HideEnemyOccupiedPanelTasks; // x0
  __int64 v14; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v15; // x20
  const MethodInfo *v16; // x2
  struct SubmarineMapDataManager_o *submarineData; // x8
  struct SubmarineQuestSaveInfo_o *BeforeQuestInfo_k__BackingField; // x8
  int32_t v19; // w1
  SchedulerTaskNone_o *v20; // x22
  SchedulerTaskBase_TaskCallback_o *v21; // x23

  if ( (byte_41857C8 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_SchedulerTaskBase__AddRange__, finishCallback);
    sub_B2C35C(&Method_System_Collections_Generic_List_SchedulerTaskBase__Add__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__, v6);
    sub_B2C35C(&System_Collections_Generic_List_SchedulerTaskBase__TypeInfo, v7);
    sub_B2C35C(&SchedulerTaskNone_TypeInfo, v8);
    sub_B2C35C(&SchedulerTaskBase_TaskCallback_TypeInfo, v9);
    sub_B2C35C(&Method_SubmarineMapManager___c__DisplayClass35_0__DoPerformancesByVariedCond_b__0__, v10);
    sub_B2C35C(&SubmarineMapManager___c__DisplayClass35_0_TypeInfo, v11);
    byte_41857C8 = 1;
  }
  v12 = (SubmarineMapManager___c__DisplayClass35_0_o *)sub_B2C42C(SubmarineMapManager___c__DisplayClass35_0_TypeInfo);
  SubmarineMapManager___c__DisplayClass35_0___ctor(v12, 0LL);
  if ( !v12 )
    goto LABEL_14;
  v12->fields.__4__this = this;
  sub_B2C2F8(&v12->fields, this);
  v12->fields.finishCallback = finishCallback;
  sub_B2C2F8(&v12->fields.finishCallback, finishCallback);
  v15 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_SchedulerTaskBase__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v15,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
  submarineData = this->fields.submarineData;
  if ( !submarineData )
    goto LABEL_14;
  BeforeQuestInfo_k__BackingField = submarineData->fields._BeforeQuestInfo_k__BackingField;
  if ( !BeforeQuestInfo_k__BackingField )
    goto LABEL_14;
  v19 = BeforeQuestInfo_k__BackingField->fields._IsQuestClear_k__BackingField
     || BeforeQuestInfo_k__BackingField->fields._IsQuestPhaseClear_k__BackingField
      ? BeforeQuestInfo_k__BackingField->fields._QuestId_k__BackingField
      : -1;
  HideEnemyOccupiedPanelTasks = (System_Collections_Generic_IEnumerable_T__o *)SubmarineMapManager__CreateHideEnemyOccupiedPanelTasks(
                                                                                 this,
                                                                                 v19,
                                                                                 v16);
  if ( !v15 )
    goto LABEL_14;
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v15,
    HideEnemyOccupiedPanelTasks,
    (const MethodInfo_2EF46B0 *)Method_System_Collections_Generic_List_SchedulerTaskBase__AddRange__);
  v20 = (SchedulerTaskNone_o *)sub_B2C42C(SchedulerTaskNone_TypeInfo);
  SchedulerTaskNone___ctor(v20, 0LL);
  v21 = (SchedulerTaskBase_TaskCallback_o *)sub_B2C42C(SchedulerTaskBase_TaskCallback_TypeInfo);
  SchedulerTaskBase_TaskCallback___ctor(
    v21,
    (Il2CppObject *)v12,
    Method_SubmarineMapManager___c__DisplayClass35_0__DoPerformancesByVariedCond_b__0__,
    0LL);
  if ( !v20
    || (v20->fields.EndCallback = v21,
        sub_B2C2F8(&v20->fields.EndCallback, v21),
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v15,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v20,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_SchedulerTaskBase__Add__),
        (HideEnemyOccupiedPanelTasks = (System_Collections_Generic_IEnumerable_T__o *)this->fields.taskScheduler) == 0LL) )
  {
LABEL_14:
    sub_B2C434(HideEnemyOccupiedPanelTasks, v14);
  }
  TaskScheduler__AddTask_18707352(
    (TaskScheduler_o *)HideEnemyOccupiedPanelTasks,
    0,
    (System_Collections_Generic_List_SchedulerTaskBase__o *)v15,
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
    sub_B2C434(assetManager, v6);
  SubmarineMapAssetManager__LoadMapObject(assetManager, assetData, mapInfo->fields.mapId, v7);
}


void __fastcall SubmarineMapManager__Finish(SubmarineMapManager_o *this, const MethodInfo *method)
{
  this->fields.submarineData = 0LL;
  sub_B2C2F8(&this->fields.submarineData, 0LL);
  EventMapManagerBase__Finish((EventMapManagerBase_o *)this, 0LL);
}


SrcSpotBasePrefab_o *__fastcall SubmarineMapManager__GetHomeSpot(SubmarineMapManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_array *HasChild; // x0
  __int64 v5; // x1
  UnityEngine_Object_o *v6; // x20
  struct SubmarineMapDataManager_o *submarineData; // x8
  struct SubmarineSettingsManager_o *Settings_k__BackingField; // x8
  int32_t HomeSpotId_k__BackingField; // w22
  int max_length; // w8
  UnityEngine_GameObject_array *v11; // x19
  unsigned int v12; // w23
  UnityEngine_Object_o *Component_srcLineSprite; // x21
  __int64 v15; // x0

  if ( (byte_41857DA & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_SrcSpotBasePrefab___, method);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v3);
    byte_41857DA = 1;
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
LABEL_29:
      sub_B2C434(HasChild, v5);
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
        {
          v15 = sub_B2C460(HasChild);
          sub_B2C400(v15, 0LL);
        }
        HasChild = (UnityEngine_GameObject_array *)v11->m_Items[v12];
        if ( !HasChild )
          goto LABEL_29;
        Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                            (UnityEngine_GameObject_o *)HasChild,
                                                            (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_SrcSpotBasePrefab___);
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
          HasChild = (UnityEngine_GameObject_array *)UnityEngine_Object__op_Equality(v6, 0LL, 0LL);
          if ( ((unsigned __int8)HasChild & 1) != 0 )
            goto LABEL_23;
          if ( !v6 )
            goto LABEL_29;
          if ( Component_srcLineSprite[5].fields.m_CachedPtr < v6[5].fields.m_CachedPtr )
LABEL_23:
            v6 = Component_srcLineSprite;
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
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *HideEnemyOccupiedPanelTasks; // x20
  const MethodInfo *v9; // x1

  v3 = this;
  if ( (byte_41857C7 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_SchedulerTaskBase__AddRange__, method);
    this = (SubmarineMapManager_o *)sub_B2C35C(
                                      &Method_System_Collections_Generic_List_SchedulerTaskBase__get_Count__,
                                      v4);
    byte_41857C7 = 1;
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
    sub_B2C434(this, method);
  }
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    HideEnemyOccupiedPanelTasks,
    (System_Collections_Generic_IEnumerable_T__o *)this,
    (const MethodInfo_2EF46B0 *)Method_System_Collections_Generic_List_SchedulerTaskBase__AddRange__);
  return HideEnemyOccupiedPanelTasks->fields._size > 0;
}


void __fastcall SubmarineMapManager__HideScanObstacleEffect(SubmarineMapManager_o *this, const MethodInfo *method)
{
  if ( (byte_41857E7 & 1) == 0 )
  {
    sub_B2C35C(&Method_SubmarineMapManager_ReturnEffectsToPool_SubmarineEffectScanObstaclePanelComponent___, method);
    byte_41857E7 = 1;
  }
  SubmarineMapManager__ReturnEffectsToPool_SubmarineEffectSelectedPanelComponent_(
    this,
    (ComponentPool_T__o *)this->fields.effectScanObstaclePanelObjPool,
    (const MethodInfo_209DCE0 *)Method_SubmarineMapManager_ReturnEffectsToPool_SubmarineEffectScanObstaclePanelComponent___);
  this->fields.isShowScanObstacleEffect = 0;
}


void __fastcall SubmarineMapManager__HideScanRange(SubmarineMapManager_o *this, const MethodInfo *method)
{
  struct UnityEngine_GameObject_o **p_scanRangeNotificator; // x19
  UnityEngine_Object_o *v4; // x20
  struct UnityEngine_GameObject_o *scanRangeNotificator; // t1
  UnityEngine_Object_o *v6; // x20

  if ( (byte_41857EB & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_41857EB = 1;
  }
  scanRangeNotificator = this->fields.scanRangeNotificator;
  p_scanRangeNotificator = &this->fields.scanRangeNotificator;
  v4 = (UnityEngine_Object_o *)scanRangeNotificator;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v4, 0LL, 0LL) )
  {
    v6 = (UnityEngine_Object_o *)*p_scanRangeNotificator;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35314896(v6, 0LL);
    *p_scanRangeNotificator = 0LL;
    sub_B2C2F8(p_scanRangeNotificator, 0LL);
  }
}


void __fastcall SubmarineMapManager__HideScannableEffect(SubmarineMapManager_o *this, const MethodInfo *method)
{
  if ( (byte_41857E5 & 1) == 0 )
  {
    sub_B2C35C(&Method_SubmarineMapManager_ReturnEffectsToPool_SubmarineEffectScannablePanelComponent___, method);
    byte_41857E5 = 1;
  }
  SubmarineMapManager__ReturnEffectsToPool_SubmarineEffectSelectedPanelComponent_(
    this,
    (ComponentPool_T__o *)this->fields.effectScannablePanelObjPool,
    (const MethodInfo_209DCE0 *)Method_SubmarineMapManager_ReturnEffectsToPool_SubmarineEffectScannablePanelComponent___);
  this->fields.isShowScannableEffect = 0;
}


void __fastcall SubmarineMapManager__HideSelectedPanelEffect(SubmarineMapManager_o *this, const MethodInfo *method)
{
  if ( (byte_41857E9 & 1) == 0 )
  {
    sub_B2C35C(&Method_SubmarineMapManager_ReturnEffectsToPool_SubmarineEffectSelectedPanelComponent___, method);
    byte_41857E9 = 1;
  }
  SubmarineMapManager__ReturnEffectsToPool_SubmarineEffectSelectedPanelComponent_(
    this,
    (ComponentPool_T__o *)this->fields.effectSelectedPanelObjPool,
    (const MethodInfo_209DCE0 *)Method_SubmarineMapManager_ReturnEffectsToPool_SubmarineEffectSelectedPanelComponent___);
}


void __fastcall SubmarineMapManager__Initialize(SubmarineMapManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  MapControl_MapInfo_o *mapInfo; // x20
  MapControl_WarInfo_o *warInfo; // x21
  SubmarineMapDataManager_o *v9; // x22
  const MethodInfo *v10; // x3
  TaskScheduler_o *v11; // x20
  struct TaskScheduler_o *taskScheduler; // x20
  System_Action_bool__o *v13; // x0
  __int64 v14; // x1
  struct System_Action_bool__o *v15; // x21
  SubmarineMapManager_PlayingScanVoiceData_o *v16; // x20

  if ( (byte_41857BE & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Action_bool___ctor__, method);
    sub_B2C35C(&System_Action_bool__TypeInfo, v3);
    sub_B2C35C(&SubmarineMapManager_PlayingScanVoiceData_TypeInfo, v4);
    sub_B2C35C(&SubmarineMapDataManager_TypeInfo, v5);
    sub_B2C35C(&TaskScheduler_TypeInfo, v6);
    byte_41857BE = 1;
  }
  EventMapManagerBase__Initialize((EventMapManagerBase_o *)this, 0LL);
  mapInfo = this->fields.mapInfo;
  warInfo = this->fields.warInfo;
  v9 = (SubmarineMapDataManager_o *)sub_B2C42C(SubmarineMapDataManager_TypeInfo);
  SubmarineMapDataManager___ctor(v9, mapInfo, warInfo, v10);
  this->fields.submarineData = v9;
  sub_B2C2F8(&this->fields.submarineData, v9);
  v11 = (TaskScheduler_o *)sub_B2C42C(TaskScheduler_TypeInfo);
  TaskScheduler___ctor(v11, 0LL);
  this->fields.taskScheduler = v11;
  sub_B2C2F8(&this->fields.taskScheduler, v11);
  taskScheduler = this->fields.taskScheduler;
  v13 = (System_Action_bool__o *)sub_B2C42C(System_Action_bool__TypeInfo);
  if ( !this
    || (v15 = v13,
        System_Action_bool____ctor(
          v13,
          (Il2CppObject *)this,
          (intptr_t)this->klass->vtable._31_SetCameraWorkBlock.methodPtr,
          (const MethodInfo_24B7B90 *)Method_System_Action_bool___ctor__),
        !taskScheduler) )
  {
    sub_B2C434(v13, v14);
  }
  taskScheduler->fields._AllTouchBlockMethod_k__BackingField = v15;
  sub_B2C2F8(&taskScheduler->fields._AllTouchBlockMethod_k__BackingField, v15);
  v16 = (SubmarineMapManager_PlayingScanVoiceData_o *)sub_B2C42C(SubmarineMapManager_PlayingScanVoiceData_TypeInfo);
  SubmarineMapManager_PlayingScanVoiceData___ctor(v16, 0LL);
  this->fields.playingScanVoiceData = v16;
  sub_B2C2F8(&this->fields.playingScanVoiceData, v16);
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
  SubmarineMapManager___c__DisplayClass20_0_o *v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1
  System_Action_o *v11; // x19

  if ( (byte_41857BF & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, finishCallback);
    sub_B2C35C(&AtlasManager_TypeInfo, v5);
    sub_B2C35C(&Method_SubmarineMapManager___c__DisplayClass20_0__LoadAssets_b__0__, v6);
    sub_B2C35C(&SubmarineMapManager___c__DisplayClass20_0_TypeInfo, v7);
    byte_41857BF = 1;
  }
  v8 = (SubmarineMapManager___c__DisplayClass20_0_o *)sub_B2C42C(SubmarineMapManager___c__DisplayClass20_0_TypeInfo);
  SubmarineMapManager___c__DisplayClass20_0___ctor(v8, 0LL);
  if ( !v8 )
    sub_B2C434(v9, v10);
  v8->fields.__4__this = this;
  sub_B2C2F8(&v8->fields, this);
  v8->fields.finishCallback = finishCallback;
  sub_B2C2F8(&v8->fields.finishCallback, finishCallback);
  v11 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(
    v11,
    (Il2CppObject *)v8,
    Method_SubmarineMapManager___c__DisplayClass20_0__LoadAssets_b__0__,
    0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadUISkin(v11, 5, 1, 0LL);
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
  ComponentPool_SubmarineEffectSelectedPanelComponent__o *v14; // x21
  struct SubmarineMapAssetManager_o *v15; // x8
  UnityEngine_GameObject_o *EffectScanObstaclePanelPrafab_k__BackingField; // x20
  ComponentPool_SubmarineEffectSelectedPanelComponent__o *v17; // x21
  struct SubmarineMapAssetManager_o *v18; // x8
  UnityEngine_GameObject_o *EffectScannablePanelPrafab_k__BackingField; // x20
  ComponentPool_SubmarineEffectSelectedPanelComponent__o *v20; // x21
  struct SubmarineMapAssetManager_o *v21; // x8
  UnityEngine_GameObject_o *EffectSelectedPanelPrefab_k__BackingField; // x20
  ComponentPool_SubmarineEffectSelectedPanelComponent__o *v23; // x21

  v2 = this;
  if ( (byte_41857E2 & 1) == 0 )
  {
    sub_B2C35C(&Method_ComponentPool_SubmarineEffectScannablePanelComponent__Preload__, method);
    sub_B2C35C(&Method_ComponentPool_CommonEffectComponent__Preload__, v3);
    sub_B2C35C(&Method_ComponentPool_SubmarineEffectScanObstaclePanelComponent___ctor__, v4);
    sub_B2C35C(&Method_ComponentPool_SubmarineEffectSelectedPanelComponent___ctor__, v5);
    sub_B2C35C(&Method_ComponentPool_SubmarineEffectScannablePanelComponent___ctor__, v6);
    sub_B2C35C(&Method_ComponentPool_CommonEffectComponent___ctor__, v7);
    sub_B2C35C(&ComponentPool_SubmarineEffectSelectedPanelComponent__TypeInfo, v8);
    sub_B2C35C(&ComponentPool_SubmarineEffectScanObstaclePanelComponent__TypeInfo, v9);
    sub_B2C35C(&ComponentPool_CommonEffectComponent__TypeInfo, v10);
    this = (SubmarineMapManager_o *)sub_B2C35C(&ComponentPool_SubmarineEffectScannablePanelComponent__TypeInfo, v11);
    byte_41857E2 = 1;
  }
  assetManager = v2->fields.assetManager;
  if ( !assetManager )
    goto LABEL_10;
  EffectScannedPanelPrefab_k__BackingField = assetManager->fields._EffectScannedPanelPrefab_k__BackingField;
  v14 = (ComponentPool_SubmarineEffectSelectedPanelComponent__o *)sub_B2C42C(ComponentPool_CommonEffectComponent__TypeInfo);
  ComponentPool_SubmarineEffectSelectedPanelComponent____ctor(
    v14,
    EffectScannedPanelPrefab_k__BackingField,
    20,
    (const MethodInfo_25E3BA8 *)Method_ComponentPool_CommonEffectComponent___ctor__);
  v2->fields.effectScanedPanelObjPool = (struct ComponentPool_CommonEffectComponent__o *)v14;
  sub_B2C2F8(&v2->fields.effectScanedPanelObjPool, v14);
  this = (SubmarineMapManager_o *)v2->fields.effectScanedPanelObjPool;
  if ( !this )
    goto LABEL_10;
  ComponentPool_SubmarineEffectScannablePanelComponent___Preload(
    (ComponentPool_SubmarineEffectScannablePanelComponent__o *)this,
    9,
    (const MethodInfo_25E3C90 *)Method_ComponentPool_CommonEffectComponent__Preload__);
  v15 = v2->fields.assetManager;
  if ( !v15 )
    goto LABEL_10;
  EffectScanObstaclePanelPrafab_k__BackingField = v15->fields._EffectScanObstaclePanelPrafab_k__BackingField;
  v17 = (ComponentPool_SubmarineEffectSelectedPanelComponent__o *)sub_B2C42C(ComponentPool_SubmarineEffectScanObstaclePanelComponent__TypeInfo);
  ComponentPool_SubmarineEffectSelectedPanelComponent____ctor(
    v17,
    EffectScanObstaclePanelPrafab_k__BackingField,
    20,
    (const MethodInfo_25E3BA8 *)Method_ComponentPool_SubmarineEffectScanObstaclePanelComponent___ctor__);
  v2->fields.effectScanObstaclePanelObjPool = (struct ComponentPool_SubmarineEffectScanObstaclePanelComponent__o *)v17;
  sub_B2C2F8(&v2->fields.effectScanObstaclePanelObjPool, v17);
  v18 = v2->fields.assetManager;
  if ( !v18 )
    goto LABEL_10;
  EffectScannablePanelPrafab_k__BackingField = v18->fields._EffectScannablePanelPrafab_k__BackingField;
  v20 = (ComponentPool_SubmarineEffectSelectedPanelComponent__o *)sub_B2C42C(ComponentPool_SubmarineEffectScannablePanelComponent__TypeInfo);
  ComponentPool_SubmarineEffectSelectedPanelComponent____ctor(
    v20,
    EffectScannablePanelPrafab_k__BackingField,
    200,
    (const MethodInfo_25E3BA8 *)Method_ComponentPool_SubmarineEffectScannablePanelComponent___ctor__);
  v2->fields.effectScannablePanelObjPool = (struct ComponentPool_SubmarineEffectScannablePanelComponent__o *)v20;
  sub_B2C2F8(&v2->fields.effectScannablePanelObjPool, v20);
  this = (SubmarineMapManager_o *)v2->fields.effectScannablePanelObjPool;
  if ( !this
    || (ComponentPool_SubmarineEffectScannablePanelComponent___Preload(
          (ComponentPool_SubmarineEffectScannablePanelComponent__o *)this,
          50,
          (const MethodInfo_25E3C90 *)Method_ComponentPool_SubmarineEffectScannablePanelComponent__Preload__),
        (v21 = v2->fields.assetManager) == 0LL) )
  {
LABEL_10:
    sub_B2C434(this, method);
  }
  EffectSelectedPanelPrefab_k__BackingField = v21->fields._EffectSelectedPanelPrefab_k__BackingField;
  v23 = (ComponentPool_SubmarineEffectSelectedPanelComponent__o *)sub_B2C42C(ComponentPool_SubmarineEffectSelectedPanelComponent__TypeInfo);
  ComponentPool_SubmarineEffectSelectedPanelComponent____ctor(
    v23,
    EffectSelectedPanelPrefab_k__BackingField,
    1,
    (const MethodInfo_25E3BA8 *)Method_ComponentPool_SubmarineEffectSelectedPanelComponent___ctor__);
  v2->fields.effectSelectedPanelObjPool = v23;
  sub_B2C2F8(&v2->fields.effectSelectedPanelObjPool, v23);
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
    sub_B2C434(submarineData, finishCallback);
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
  UnityEngine_MonoBehaviour__StartCoroutine_35309748((UnityEngine_MonoBehaviour_o *)this, v4, 0LL);
}


void __fastcall SubmarineMapManager__OnBeforeQuestAfterAction(
        SubmarineMapManager_o *this,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  SubmarineMapManager___c__DisplayClass26_0_o *v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1
  System_Action_o *v10; // x20
  const MethodInfo *v11; // x2

  if ( (byte_41857C2 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, finishCallback);
    sub_B2C35C(&Method_SubmarineMapManager___c__DisplayClass26_0__OnBeforeQuestAfterAction_b__0__, v5);
    sub_B2C35C(&SubmarineMapManager___c__DisplayClass26_0_TypeInfo, v6);
    byte_41857C2 = 1;
  }
  v7 = (SubmarineMapManager___c__DisplayClass26_0_o *)sub_B2C42C(SubmarineMapManager___c__DisplayClass26_0_TypeInfo);
  SubmarineMapManager___c__DisplayClass26_0___ctor(v7, 0LL);
  if ( !v7 )
    sub_B2C434(v8, v9);
  v7->fields.__4__this = this;
  sub_B2C2F8(&v7->fields, this);
  v7->fields.finishCallback = finishCallback;
  sub_B2C2F8(&v7->fields.finishCallback, finishCallback);
  v10 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(
    v10,
    (Il2CppObject *)v7,
    Method_SubmarineMapManager___c__DisplayClass26_0__OnBeforeQuestAfterAction_b__0__,
    0LL);
  SubmarineMapManager__DoPerformancesByVariedCond(this, v10, v11);
}


void __fastcall SubmarineMapManager__OnEndScan(SubmarineMapManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  clsQuestCheck_o *v6; // x0
  __int64 v7; // x1
  struct MapControl_WarInfo_o *warInfo; // x8
  int32_t warId; // w21
  QuestTree_o *v10; // x20
  System_Action_o *v11; // x22
  System_Collections_IEnumerator_o *v12; // x1

  if ( (byte_41857D0 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_SingletonTemplate_QuestTree__get_Instance__, v3);
    sub_B2C35C(&SingletonTemplate_QuestTree__TypeInfo, v4);
    sub_B2C35C(&Method_SubmarineMapManager__OnEndScan_b__43_0__, v5);
    byte_41857D0 = 1;
  }
  if ( (BYTE3(SingletonTemplate_QuestTree__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_QuestTree__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_QuestTree__TypeInfo);
  }
  v6 = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_QuestTree__get_Instance__);
  warInfo = this->fields.warInfo;
  if ( !warInfo
    || (warId = warInfo->fields.warId,
        v10 = (QuestTree_o *)v6,
        v11 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo),
        System_Action___ctor(v11, (Il2CppObject *)this, Method_SubmarineMapManager__OnEndScan_b__43_0__, 0LL),
        !v10) )
  {
    sub_B2C434(v6, v7);
  }
  v12 = QuestTree__mfBaseTreeUpdateWithOpenCheck(v10, warId, v11, 0LL);
  UnityEngine_MonoBehaviour__StartCoroutine_35309748((UnityEngine_MonoBehaviour_o *)this, v12, 0LL);
}


void __fastcall SubmarineMapManager__OnEveryActionEnd(SubmarineMapManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  const MethodInfo *v4; // x1
  System_Action_o *v5; // x20
  const MethodInfo *v6; // x1

  if ( (byte_41857C3 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_SubmarineMapManager__OnEveryActionEnd_b__28_0__, v3);
    byte_41857C3 = 1;
  }
  if ( SubmarineMapManager__HasSelfQuestAfterAction(this, method) )
  {
    v5 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(v5, (Il2CppObject *)this, Method_SubmarineMapManager__OnEveryActionEnd_b__28_0__, 0LL);
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
  __int64 v12; // x1
  SubmarineMapManager___c__DisplayClass38_0_o *v13; // x20
  __int64 eventId; // x0
  __int64 v15; // x1
  struct SubmarineMapPanelData_o **p_panelData; // x21
  long double v17; // q0
  const MethodInfo *v18; // x1
  clsQuestCheck_o *v19; // x22
  const MethodInfo *v20; // x1
  NetworkManager_ResultCallbackFunc_o *v21; // x22
  EventScanPanelMapRequest_o *Request_WarBoardWallAttackRequest; // x22
  const MethodInfo *v23; // x1
  struct MapControl_MapInfo_o *mapInfo; // x8

  if ( (byte_41857CB & 1) == 0 )
  {
    sub_B2C35C(&Method_NetworkManager_getRequest_EventScanPanelMapRequest___, *(_QWORD *)&scanId);
    sub_B2C35C(&NetworkManager_TypeInfo, v7);
    sub_B2C35C(&NetworkManager_ResultCallbackFunc_TypeInfo, v8);
    sub_B2C35C(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v9);
    sub_B2C35C(&SingletonTemplate_clsQuestCheck__TypeInfo, v10);
    sub_B2C35C(&Method_SubmarineMapManager___c__DisplayClass38_0__OnScanDecided_b__0__, v11);
    sub_B2C35C(&SubmarineMapManager___c__DisplayClass38_0_TypeInfo, v12);
    byte_41857CB = 1;
  }
  v13 = (SubmarineMapManager___c__DisplayClass38_0_o *)sub_B2C42C(SubmarineMapManager___c__DisplayClass38_0_TypeInfo);
  SubmarineMapManager___c__DisplayClass38_0___ctor(v13, 0LL);
  if ( !v13 )
    goto LABEL_15;
  v13->fields.__4__this = this;
  sub_B2C2F8(&v13->fields, this);
  v13->fields.panelData = panelData;
  p_panelData = &v13->fields.panelData;
  v13->fields.scanId = scanId;
  *(__n128 *)&v17 = sub_B2C2F8(&v13->fields.panelData, panelData);
  ((void (__fastcall *)(SubmarineMapManager_o *, __int64, Il2CppMethodPointer, long double))this->klass->vtable._30_SetAllTouchBlock.method)(
    this,
    1LL,
    this->klass->vtable._31_SetCameraWorkBlock.methodPtr,
    v17);
  SubmarineMapManager__HideScannableEffect(this, v18);
  if ( (BYTE3(SingletonTemplate_clsQuestCheck__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_clsQuestCheck__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_clsQuestCheck__TypeInfo);
  }
  v19 = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  eventId = SubmarineMapManager__get_eventId(this, v20);
  if ( !v19 )
    goto LABEL_15;
  clsQuestCheck__SaveEventQuestIdListPlayable(v19, eventId, 0LL);
  v21 = (NetworkManager_ResultCallbackFunc_o *)sub_B2C42C(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v21,
    (Il2CppObject *)v13,
    Method_SubmarineMapManager___c__DisplayClass38_0__OnScanDecided_b__0__,
    0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Request_WarBoardWallAttackRequest = (EventScanPanelMapRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                      v21,
                                                                      (const MethodInfo_1AB4500 *)Method_NetworkManager_getRequest_EventScanPanelMapRequest___);
  eventId = SubmarineMapManager__get_eventId(this, v23);
  mapInfo = this->fields.mapInfo;
  if ( !mapInfo || !*p_panelData || !Request_WarBoardWallAttackRequest )
LABEL_15:
    sub_B2C434(eventId, v15);
  EventScanPanelMapRequest__beginRequest(
    Request_WarBoardWallAttackRequest,
    eventId,
    mapInfo->fields.mapId,
    (*p_panelData)->fields._PanelId_k__BackingField,
    v13->fields.scanId,
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
  struct System_String_o *value; // x8
  EventSaveData_o *v25; // x19
  EventSaveData_c *klass; // x9
  const char *name; // x9
  __int64 v28; // x10
  __int64 v29; // x9
  TerminalPramsManager_c *v30; // x0
  EventSaveData_o *v31; // x20
  __int64 v32; // x1
  TerminalPramsManager_c *v33; // x0
  struct EventSaveData_o **p_BeforeEventSubmarineSaveData_k__BackingField; // x0
  TerminalPramsManager_c *v35; // x0
  System_String_array *ValueByArray; // x0
  __int64 v37; // x1
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
  EventSaveData_c *v48; // x8
  struct BattleDropItem_array *namespaze; // x19
  TerminalPramsManager_c *v50; // x0
  struct BattleDropItem_array **p_mResultEventPanelRewardInfos; // x0
  System_String_c *v52; // x8
  __int64 v53; // x0
  int v54; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_41857CC & 1) == 0 )
  {
    sub_B2C35C(&EventSaveData_TypeInfo, result);
    sub_B2C35C(&Method_JsonManager_DeserializeArray_EventScanPanelMapRequest_ResultData___, v9);
    sub_B2C35C(&JsonManager_TypeInfo, v10);
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v11);
    sub_B2C35C(&TerminalSceneComponent_TypeInfo, v12);
    sub_B2C35C(&TitleInfoEventSubmarineStatusComponent_TypeInfo, v13);
    sub_B2C35C(&StringLiteral_21068/*"ng"*/, v14);
    sub_B2C35C(&StringLiteral_15634/*"["*/, v15);
    sub_B2C35C(&StringLiteral_6584/*"False"*/, v16);
    sub_B2C35C(&StringLiteral_15870/*"]"*/, v17);
    sub_B2C35C(&StringLiteral_953/*"0"*/, v18);
    byte_41857CC = 1;
  }
  v54 = 0;
  if ( !System_String__op_Inequality(result, (System_String_o *)StringLiteral_21068/*"ng"*/, 0LL) )
  {
    SubmarineMapManager__OnEndScan(this, v19);
    return;
  }
  SubmarineMapManager__StartScanPerformance(this, scanId, panelData, v20);
  v21 = (Il2CppObject *)System_String__Concat_44307816(
                          (System_String_o *)StringLiteral_15634/*"["*/,
                          result,
                          (System_String_o *)StringLiteral_15870/*"]"*/,
                          0LL);
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  BeforeEventSubmarineSaveData_k__BackingField = (EventSaveData_o *)JsonManager__DeserializeArray_UserPresentBoxWindow_resData_(
                                                                      v21,
                                                                      (const MethodInfo_1AACFE4 *)Method_JsonManager_DeserializeArray_EventScanPanelMapRequest_ResultData___);
  if ( !BeforeEventSubmarineSaveData_k__BackingField )
    goto LABEL_83;
  value = BeforeEventSubmarineSaveData_k__BackingField->fields.value;
  v25 = BeforeEventSubmarineSaveData_k__BackingField;
  if ( !value )
    return;
  if ( !(_DWORD)value )
  {
LABEL_84:
    v53 = sub_B2C460(BeforeEventSubmarineSaveData_k__BackingField);
    sub_B2C400(v53, 0LL);
  }
  klass = BeforeEventSubmarineSaveData_k__BackingField[1].klass;
  if ( !klass )
    goto LABEL_83;
  name = klass->_1.name;
  if ( name )
  {
    v28 = *((_QWORD *)name + 3);
    if ( v28 )
    {
      if ( !(_DWORD)v28 )
        goto LABEL_84;
      v29 = *((_QWORD *)name + 4);
      if ( v29 )
      {
        v54 = *(_QWORD *)(v29 + 32);
        if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        }
        if ( !byte_418472F )
        {
          sub_B2C35C(&TerminalPramsManager_TypeInfo, v23);
          byte_418472F = 1;
        }
        v30 = TerminalPramsManager_TypeInfo;
        if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v30 = TerminalPramsManager_TypeInfo;
        }
        if ( !v30->static_fields->_BeforeEventSubmarineSaveData_k__BackingField )
        {
          v31 = (EventSaveData_o *)sub_B2C42C(EventSaveData_TypeInfo);
          EventSaveData___ctor(v31, 0LL);
          if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          }
          if ( !byte_4184707 )
          {
            sub_B2C35C(&TerminalPramsManager_TypeInfo, v32);
            byte_4184707 = 1;
          }
          v33 = TerminalPramsManager_TypeInfo;
          if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            v33 = TerminalPramsManager_TypeInfo;
          }
          p_BeforeEventSubmarineSaveData_k__BackingField = &v33->static_fields->_BeforeEventSubmarineSaveData_k__BackingField;
          *p_BeforeEventSubmarineSaveData_k__BackingField = v31;
          sub_B2C2F8(p_BeforeEventSubmarineSaveData_k__BackingField, v31);
          v30 = TerminalPramsManager_TypeInfo;
        }
        if ( (BYTE3(v30->vtable._0_Equals.methodPtr) & 4) != 0 && !v30->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v30);
        if ( !byte_418472F )
        {
          sub_B2C35C(&TerminalPramsManager_TypeInfo, v23);
          byte_418472F = 1;
        }
        v35 = TerminalPramsManager_TypeInfo;
        if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v35 = TerminalPramsManager_TypeInfo;
        }
        BeforeEventSubmarineSaveData_k__BackingField = v35->static_fields->_BeforeEventSubmarineSaveData_k__BackingField;
        if ( BeforeEventSubmarineSaveData_k__BackingField )
        {
          ValueByArray = EventSaveData__GetValueByArray(BeforeEventSubmarineSaveData_k__BackingField, 0x2Cu, 0LL);
          if ( ValueByArray )
          {
            max_length = ValueByArray->max_length;
            v39 = &ValueByArray->m_Items[1];
            if ( max_length <= 1 )
              v39 = (System_String_o **)&StringLiteral_953/*"0"*/;
            v40 = *v39;
            v41 = max_length <= 2 ? (System_String_o **)&StringLiteral_953/*"0"*/ : &ValueByArray->m_Items[2];
            v42 = *v41;
            v43 = max_length <= 3 ? &StringLiteral_6584/*"False"*/ : (__int64 *)&ValueByArray->m_Items[3];
          }
          else
          {
            v42 = (System_String_o *)StringLiteral_953/*"0"*/;
            v43 = &StringLiteral_6584/*"False"*/;
            v40 = (System_String_o *)StringLiteral_953/*"0"*/;
          }
          v44 = (System_String_o *)*v43;
          if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          }
          if ( !byte_418472F )
          {
            sub_B2C35C(&TerminalPramsManager_TypeInfo, v37);
            byte_418472F = 1;
          }
          v45 = TerminalPramsManager_TypeInfo;
          if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            v45 = TerminalPramsManager_TypeInfo;
          }
          v46 = v45->static_fields->_BeforeEventSubmarineSaveData_k__BackingField;
          v47 = System_Int32__ToString((int32_t)&v54, 0LL);
          if ( (BYTE3(TitleInfoEventSubmarineStatusComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TitleInfoEventSubmarineStatusComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TitleInfoEventSubmarineStatusComponent_TypeInfo);
          }
          BeforeEventSubmarineSaveData_k__BackingField = (EventSaveData_o *)TitleInfoEventSubmarineStatusComponent__CreateSaveData_22175660(
                                                                              v47,
                                                                              v40,
                                                                              v42,
                                                                              v44,
                                                                              0LL);
          if ( v46 )
          {
            v46->fields.value = (struct System_String_o *)BeforeEventSubmarineSaveData_k__BackingField;
            sub_B2C2F8(&v46->fields.value, BeforeEventSubmarineSaveData_k__BackingField);
            value = v25->fields.value;
            goto LABEL_66;
          }
        }
LABEL_83:
        sub_B2C434(BeforeEventSubmarineSaveData_k__BackingField, v23);
      }
    }
  }
LABEL_66:
  if ( !(_DWORD)value )
    goto LABEL_84;
  v48 = v25[1].klass;
  if ( !v48 )
    goto LABEL_83;
  namespaze = (struct BattleDropItem_array *)v48->_1.namespaze;
  v50 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v50 = TerminalPramsManager_TypeInfo;
  }
  p_mResultEventPanelRewardInfos = &v50->static_fields->mResultEventPanelRewardInfos;
  *p_mResultEventPanelRewardInfos = namespaze;
  sub_B2C2F8(p_mResultEventPanelRewardInfos, namespaze);
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  }
  if ( !byte_4183C65 )
  {
    sub_B2C35C(&TerminalSceneComponent_TypeInfo, v23);
    byte_4183C65 = 1;
  }
  BeforeEventSubmarineSaveData_k__BackingField = (EventSaveData_o *)TerminalSceneComponent_TypeInfo;
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    BeforeEventSubmarineSaveData_k__BackingField = (EventSaveData_o *)TerminalSceneComponent_TypeInfo;
  }
  v52 = BeforeEventSubmarineSaveData_k__BackingField[5].fields.value->klass;
  if ( !v52 )
    goto LABEL_83;
  BeforeEventSubmarineSaveData_k__BackingField = (EventSaveData_o *)v52->_2.genericContainerHandle;
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
  SubmarineMapManager___c__DisplayClass37_0_o *v10; // x20
  __int64 v11; // x0
  __int64 v12; // x1
  long double v13; // q0
  SubmarineMapManager_c *klass; // x8
  const MethodInfo *v15; // x4
  SchedulerTaskBase_o *v16; // x21
  SchedulerTaskBase_TaskCallback_o *v17; // x22
  TaskScheduler_o *taskScheduler; // x19
  SchedulerTaskBase_array *v19; // x20
  __int64 v20; // x0
  const MethodInfo *v21; // x1
  const MethodInfo *v22; // x1
  const MethodInfo *v23; // x1
  __int64 v24; // x0
  __int64 v25; // x0

  if ( (byte_41857CA & 1) == 0 )
  {
    sub_B2C35C(&SchedulerTaskBase___TypeInfo, *(_QWORD *)&scanId);
    sub_B2C35C(&SchedulerTaskBase_TaskCallback_TypeInfo, v7);
    sub_B2C35C(&Method_SubmarineMapManager___c__DisplayClass37_0__OnScannerSelected_b__0__, v8);
    sub_B2C35C(&SubmarineMapManager___c__DisplayClass37_0_TypeInfo, v9);
    byte_41857CA = 1;
  }
  v10 = (SubmarineMapManager___c__DisplayClass37_0_o *)sub_B2C42C(SubmarineMapManager___c__DisplayClass37_0_TypeInfo);
  SubmarineMapManager___c__DisplayClass37_0___ctor(v10, 0LL);
  if ( !v10 )
    goto LABEL_12;
  v10->fields.__4__this = this;
  sub_B2C2F8(&v10->fields, this);
  v10->fields.panelData = panelData;
  v10->fields.scanId = scanId;
  *(__n128 *)&v13 = sub_B2C2F8(&v10->fields.panelData, panelData);
  klass = this->klass;
  if ( v10->fields.scanId > 0 )
  {
    ((void (__fastcall *)(SubmarineMapManager_o *, __int64, Il2CppMethodPointer, long double))klass->vtable._30_SetAllTouchBlock.method)(
      this,
      1LL,
      klass->vtable._31_SetCameraWorkBlock.methodPtr,
      v13);
    v10->fields.isShowDialogUpper = 0;
    v16 = SubmarineMapManager__ShowScanRangeTask(
            this,
            v10->fields.scanId,
            v10->fields.panelData,
            &v10->fields.isShowDialogUpper,
            v15);
    v17 = (SchedulerTaskBase_TaskCallback_o *)sub_B2C42C(SchedulerTaskBase_TaskCallback_TypeInfo);
    SchedulerTaskBase_TaskCallback___ctor(
      v17,
      (Il2CppObject *)v10,
      Method_SubmarineMapManager___c__DisplayClass37_0__OnScannerSelected_b__0__,
      0LL);
    if ( v16 )
    {
      v16->fields.EndCallback = v17;
      sub_B2C2F8(&v16->fields.EndCallback, v17);
      taskScheduler = this->fields.taskScheduler;
      v11 = sub_B2C374(SchedulerTaskBase___TypeInfo, 1LL);
      if ( v11 )
      {
        v19 = (SchedulerTaskBase_array *)v11;
        v20 = sub_B2C41C(v16, *(_QWORD *)(*(_QWORD *)v11 + 64LL));
        if ( !v20 )
        {
          v24 = sub_B2C454();
          sub_B2C400(v24, 0LL);
        }
        if ( !v19->max_length )
        {
          v25 = sub_B2C460(v20);
          sub_B2C400(v25, 0LL);
        }
        v19->m_Items[0] = v16;
        sub_B2C2F8(v19->m_Items, v16);
        if ( taskScheduler )
        {
          TaskScheduler__AddTask(taskScheduler, 0, v19, 0LL);
          return;
        }
      }
    }
LABEL_12:
    sub_B2C434(v11, v12);
  }
  ((void (__fastcall *)(SubmarineMapManager_o *, void *, long double))klass->vtable._32_AllTouchBlockForceFalse.method)(
    this,
    klass[1]._1.image,
    v13);
  SubmarineMapManager__HideScannableEffect(this, v21);
  SubmarineMapManager__ShowScannableEffect(this, v22);
  SubmarineMapManager__HideSelectedPanelEffect(this, v23);
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
  SubmarineMapManager___c__DisplayClass69_0_o *v12; // x23
  __int64 v13; // x0
  __int64 v14; // x1
  long double v15; // q0
  SubmarineScanConfirmDialog_o *scanConfirmDialog; // x21
  System_Action_bool__o *v17; // x22
  const MethodInfo *v18; // x4

  if ( (byte_41857E0 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Action_bool___ctor__, *(_QWORD *)&scanId);
    sub_B2C35C(&System_Action_bool__TypeInfo, v9);
    sub_B2C35C(&Method_SubmarineMapManager___c__DisplayClass69_0__OpenScanConfirmDialog_b__0__, v10);
    sub_B2C35C(&SubmarineMapManager___c__DisplayClass69_0_TypeInfo, v11);
    byte_41857E0 = 1;
  }
  v12 = (SubmarineMapManager___c__DisplayClass69_0_o *)sub_B2C42C(SubmarineMapManager___c__DisplayClass69_0_TypeInfo);
  SubmarineMapManager___c__DisplayClass69_0___ctor(v12, 0LL);
  if ( !v12 )
    goto LABEL_6;
  v12->fields.__4__this = this;
  sub_B2C2F8(&v12->fields, this);
  v12->fields.callback = callback;
  *(__n128 *)&v15 = sub_B2C2F8(&v12->fields.callback, callback);
  ((void (__fastcall *)(SubmarineMapManager_o *, __int64, Il2CppMethodPointer, long double))this->klass->vtable._31_SetCameraWorkBlock.method)(
    this,
    1LL,
    this->klass->vtable._32_AllTouchBlockForceFalse.methodPtr,
    v15);
  scanConfirmDialog = this->fields.scanConfirmDialog;
  v17 = (System_Action_bool__o *)sub_B2C42C(System_Action_bool__TypeInfo);
  System_Action_bool____ctor(
    v17,
    (Il2CppObject *)v12,
    Method_SubmarineMapManager___c__DisplayClass69_0__OpenScanConfirmDialog_b__0__,
    (const MethodInfo_24B7B90 *)Method_System_Action_bool___ctor__);
  if ( !scanConfirmDialog )
LABEL_6:
    sub_B2C434(v13, v14);
  SubmarineScanConfirmDialog__Open(scanConfirmDialog, scanId, isShowDialogUpper, v17, v18);
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
  SubmarineMapManager___c__DisplayClass67_0_o *v10; // x21
  __int64 v11; // x0
  __int64 v12; // x1
  long double v13; // q0
  SubmarineSelectScannerDialog_o *selectScannerDialog; // x20
  const MethodInfo *v15; // x1
  int32_t eventId; // w22
  System_Action_int__o *v17; // x23
  System_Action_o *v18; // x21
  const MethodInfo *v19; // x4

  if ( (byte_41857DE & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Action_int___ctor__, callback);
    sub_B2C35C(&System_Action_int__TypeInfo, v5);
    sub_B2C35C(&System_Action_TypeInfo, v6);
    sub_B2C35C(&Method_SubmarineMapManager_TryOpenNewScannerDialog__, v7);
    sub_B2C35C(&Method_SubmarineMapManager___c__DisplayClass67_0__OpenSelectScannerDialog_b__0__, v8);
    sub_B2C35C(&SubmarineMapManager___c__DisplayClass67_0_TypeInfo, v9);
    byte_41857DE = 1;
  }
  v10 = (SubmarineMapManager___c__DisplayClass67_0_o *)sub_B2C42C(SubmarineMapManager___c__DisplayClass67_0_TypeInfo);
  SubmarineMapManager___c__DisplayClass67_0___ctor(v10, 0LL);
  if ( !v10 )
    goto LABEL_6;
  v10->fields.__4__this = this;
  sub_B2C2F8(&v10->fields, this);
  v10->fields.callback = callback;
  *(__n128 *)&v13 = sub_B2C2F8(&v10->fields.callback, callback);
  ((void (__fastcall *)(SubmarineMapManager_o *, __int64, Il2CppMethodPointer, long double))this->klass->vtable._31_SetCameraWorkBlock.method)(
    this,
    1LL,
    this->klass->vtable._32_AllTouchBlockForceFalse.methodPtr,
    v13);
  selectScannerDialog = this->fields.selectScannerDialog;
  eventId = SubmarineMapManager__get_eventId(this, v15);
  v17 = (System_Action_int__o *)sub_B2C42C(System_Action_int__TypeInfo);
  System_Action_int____ctor(
    v17,
    (Il2CppObject *)v10,
    Method_SubmarineMapManager___c__DisplayClass67_0__OpenSelectScannerDialog_b__0__,
    (const MethodInfo_24BA548 *)Method_System_Action_int___ctor__);
  v18 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v18, (Il2CppObject *)this, Method_SubmarineMapManager_TryOpenNewScannerDialog__, 0LL);
  if ( !selectScannerDialog )
LABEL_6:
    sub_B2C434(v11, v12);
  SubmarineSelectScannerDialog__Open(selectScannerDialog, eventId, v17, v18, v19);
}


void __fastcall SubmarineMapManager__ReleaseAssets(SubmarineMapManager_o *this, const MethodInfo *method)
{
  SubmarineMapAssetManager_o *assetManager; // x0
  struct SubmarineMapAssetManager_o **p_assetManager; // x20

  p_assetManager = &this->fields.assetManager;
  assetManager = this->fields.assetManager;
  if ( assetManager )
  {
    SubmarineMapAssetManager__Finish(assetManager, method);
    *p_assetManager = 0LL;
    sub_B2C2F8(p_assetManager, 0LL);
  }
  SubmarineMapManager__ReleasePoolEffects(this, method);
  EventMapManagerBase__ReleaseAssets((EventMapManagerBase_o *)this, 0LL);
}


void __fastcall SubmarineMapManager__ReleasePoolEffects(SubmarineMapManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  struct ComponentPool_CommonEffectComponent__o *effectScanedPanelObjPool; // x0
  ComponentPool_SubmarineEffectScannablePanelComponent__o *effectScannablePanelObjPool; // x0
  ComponentPool_SubmarineEffectScannablePanelComponent__o *v7; // x0
  struct ComponentPool_SubmarineEffectScanObstaclePanelComponent__o **p_effectScanObstaclePanelObjPool; // x19
  struct ComponentPool_SubmarineEffectScanObstaclePanelComponent__o *effectScanObstaclePanelObjPool; // t1

  if ( (byte_41857E3 & 1) == 0 )
  {
    sub_B2C35C(&Method_ComponentPool_CommonEffectComponent__Finish__, method);
    sub_B2C35C(&Method_ComponentPool_SubmarineEffectScannablePanelComponent__Finish__, v3);
    sub_B2C35C(&Method_ComponentPool_SubmarineEffectScanObstaclePanelComponent__Finish__, v4);
    byte_41857E3 = 1;
  }
  effectScanedPanelObjPool = this->fields.effectScanedPanelObjPool;
  if ( effectScanedPanelObjPool )
  {
    ComponentPool_SubmarineEffectScannablePanelComponent___Finish(
      (ComponentPool_SubmarineEffectScannablePanelComponent__o *)effectScanedPanelObjPool,
      (const MethodInfo_25E4668 *)Method_ComponentPool_CommonEffectComponent__Finish__);
    this->fields.effectScanedPanelObjPool = 0LL;
    sub_B2C2F8(&this->fields.effectScanedPanelObjPool, 0LL);
  }
  effectScannablePanelObjPool = this->fields.effectScannablePanelObjPool;
  if ( effectScannablePanelObjPool )
  {
    ComponentPool_SubmarineEffectScannablePanelComponent___Finish(
      effectScannablePanelObjPool,
      (const MethodInfo_25E4668 *)Method_ComponentPool_SubmarineEffectScannablePanelComponent__Finish__);
    this->fields.effectScannablePanelObjPool = 0LL;
    sub_B2C2F8(&this->fields.effectScannablePanelObjPool, 0LL);
  }
  effectScanObstaclePanelObjPool = this->fields.effectScanObstaclePanelObjPool;
  p_effectScanObstaclePanelObjPool = &this->fields.effectScanObstaclePanelObjPool;
  v7 = (ComponentPool_SubmarineEffectScannablePanelComponent__o *)effectScanObstaclePanelObjPool;
  if ( effectScanObstaclePanelObjPool )
  {
    ComponentPool_SubmarineEffectScannablePanelComponent___Finish(
      v7,
      (const MethodInfo_25E4668 *)Method_ComponentPool_SubmarineEffectScanObstaclePanelComponent__Finish__);
    *p_effectScanObstaclePanelObjPool = 0LL;
    sub_B2C2F8(p_effectScanObstaclePanelObjPool, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SubmarineMapManager__RentAndPutEffectAbovePanel_SubmarineEffectSelectedPanelComponent_(
        SubmarineMapManager_o *this,
        ComponentPool_T__o *pool,
        SubmarineMapPanelData_o *panelData,
        System_Nullable_Vector3__o offset,
        System_Nullable_Vector3__o scale,
        const MethodInfo_209DB3C *method)
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
  const MethodInfo_2155684 *v20; // x2
  float x; // s8
  float y; // s9
  float z; // s10
  float v24; // s0
  float v25; // s1
  float v26; // s2
  unsigned __int64 v27; // x19
  UnityEngine_Transform_o *v28; // x0
  const MethodInfo_2155684 *v29; // x2
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
  if ( (byte_418D1E1 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Nullable_Vector3__get_HasValue__, pool);
    sub_B2C35C(&Method_System_Nullable_Vector3__get_Value__, v12);
    byte_418D1E1 = 1;
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
    sub_B2C434(effectContainer, pool);
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
        const MethodInfo_209DCE0 *method)
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
        v10 = sub_B2C460(Children);
        sub_B2C400(v10, 0LL);
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
    sub_B2C434(Children, v6);
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
  SubmarineMapManager___c__DisplayClass42_0_o *v9; // x21
  System_Collections_Generic_List_SchedulerTaskBase__o *RevealEachSpotsTasks; // x0
  __int64 v11; // x1
  TaskScheduler_o *taskScheduler; // x20
  const MethodInfo *v13; // x1
  SchedulerTaskNone_o *v14; // x20
  System_Delegate_o *EndCallback; // x23
  SchedulerTaskBase_TaskCallback_o *v16; // x24
  System_Delegate_o *v17; // x0
  TaskScheduler_o *v18; // x19
  SchedulerTaskBase_array *v19; // x21
  __int64 v20; // x0
  __int64 v21; // x0
  __int64 v22; // x0
  SubmarineMapManager_o *v23; // x0
  const MethodInfo *v24; // x1

  if ( (byte_41857CF & 1) == 0 )
  {
    sub_B2C35C(&SchedulerTaskBase___TypeInfo, finishCallback);
    sub_B2C35C(&SchedulerTaskNone_TypeInfo, v5);
    sub_B2C35C(&SchedulerTaskBase_TaskCallback_TypeInfo, v6);
    sub_B2C35C(&Method_SubmarineMapManager___c__DisplayClass42_0__RevealAvailableSpots_b__0__, v7);
    sub_B2C35C(&SubmarineMapManager___c__DisplayClass42_0_TypeInfo, v8);
    byte_41857CF = 1;
  }
  v9 = (SubmarineMapManager___c__DisplayClass42_0_o *)sub_B2C42C(SubmarineMapManager___c__DisplayClass42_0_TypeInfo);
  SubmarineMapManager___c__DisplayClass42_0___ctor(v9, 0LL);
  if ( !v9 )
    goto LABEL_13;
  v9->fields.finishCallback = finishCallback;
  sub_B2C2F8(&v9->fields, finishCallback);
  taskScheduler = this->fields.taskScheduler;
  RevealEachSpotsTasks = SubmarineMapManager__CreateRevealEachSpotsTasks(this, v13);
  if ( !taskScheduler )
    goto LABEL_13;
  TaskScheduler__AddTask_18707352(taskScheduler, 0, RevealEachSpotsTasks, 0LL);
  v14 = (SchedulerTaskNone_o *)sub_B2C42C(SchedulerTaskNone_TypeInfo);
  SchedulerTaskNone___ctor(v14, 0LL);
  if ( !v14 )
    goto LABEL_13;
  EndCallback = (System_Delegate_o *)v14->fields.EndCallback;
  v16 = (SchedulerTaskBase_TaskCallback_o *)sub_B2C42C(SchedulerTaskBase_TaskCallback_TypeInfo);
  SchedulerTaskBase_TaskCallback___ctor(
    v16,
    (Il2CppObject *)v9,
    Method_SubmarineMapManager___c__DisplayClass42_0__RevealAvailableSpots_b__0__,
    0LL);
  v17 = System_Delegate__Combine(EndCallback, (System_Delegate_o *)v16, 0LL);
  if ( !v17 || (SchedulerTaskBase_TaskCallback_c *)v17->klass == SchedulerTaskBase_TaskCallback_TypeInfo )
  {
    v14->fields.EndCallback = (struct SchedulerTaskBase_TaskCallback_o *)v17;
    sub_B2C2F8(&v14->fields.EndCallback, v17);
    v18 = this->fields.taskScheduler;
    RevealEachSpotsTasks = (System_Collections_Generic_List_SchedulerTaskBase__o *)sub_B2C374(
                                                                                     SchedulerTaskBase___TypeInfo,
                                                                                     1LL);
    if ( RevealEachSpotsTasks )
    {
      v19 = (SchedulerTaskBase_array *)RevealEachSpotsTasks;
      v20 = sub_B2C41C(v14, RevealEachSpotsTasks->klass->_1.element_class);
      if ( !v20 )
      {
        v21 = sub_B2C454();
        sub_B2C400(v21, 0LL);
      }
      if ( !v19->max_length )
      {
        v22 = sub_B2C460(v20);
        sub_B2C400(v22, 0LL);
      }
      v19->m_Items[0] = (SchedulerTaskBase_o *)v14;
      sub_B2C2F8(v19->m_Items, v14);
      if ( v18 )
      {
        TaskScheduler__AddTask(v18, 0, v19, 0LL);
        return;
      }
    }
LABEL_13:
    sub_B2C434(RevealEachSpotsTasks, v11);
  }
  v23 = (SubmarineMapManager_o *)sub_B2C728(v17);
  SubmarineMapManager__CreateRevealEachSpotsTasks(v23, v24);
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
  struct SubmarineMapDataManager_o *v9; // x8
  struct SubmarineMapAssetManager_o *v10; // x9
  SubmarineMapDataManager_o *v11; // x20
  UIWidget_o *v12; // x21
  int32_t v13; // w0
  struct SubmarineMapDataManager_o *v14; // x8
  struct SubmarineSettingsManager_o *Settings_k__BackingField; // x8

  if ( (byte_41857D7 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_UITexture___, method);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v3);
    byte_41857D7 = 1;
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
        submarineData = (SubmarineMapDataManager_o *)SubmarineMapDataManager__GetEmptyPanelUniqueIds(submarineData, v6);
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
                                                             (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_UITexture___);
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
    sub_B2C434(submarineData, v6);
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
  __int64 v9; // x1
  System_Collections_Generic_List_Enumerator_T__o v10; // [xsp+8h] [xbp-38h] BYREF
  System_Nullable_Vector3__o v11; // 0:x3.16
  System_Nullable_Vector3__o v12; // 0:x5.16

  v2 = this;
  if ( (byte_41857E6 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__Dispose__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__MoveNext__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__get_Current__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_SubmarineMapPanelData__GetEnumerator__, v5);
    this = (SubmarineMapManager_o *)sub_B2C35C(
                                      &Method_SubmarineMapManager_RentAndPutEffectAbovePanel_SubmarineEffectScanObstaclePanelComponent___,
                                      v6);
    byte_41857E6 = 1;
  }
  memset(&v10, 0, sizeof(v10));
  if ( !v2->fields.isShowScanObstacleEffect )
  {
    submarineData = v2->fields.submarineData;
    v2->fields.isShowScanObstacleEffect = 1;
    if ( !submarineData || (this = (SubmarineMapManager_o *)submarineData->fields._PanelDataList_k__BackingField) == 0LL )
      sub_B2C434(this, method);
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v10,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this,
      (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_SubmarineMapPanelData__GetEnumerator__);
    while ( 1 )
    {
      v8 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
             &v10,
             (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__MoveNext__);
      if ( !v8 )
        break;
      if ( !v10.fields.current )
        sub_B2C434(v8, v9);
      if ( BYTE1(v10.fields.current[3].monitor) )
      {
        *(_QWORD *)&v11.fields.value.fields.x = 0LL;
        *(_QWORD *)&v11.fields.value.fields.z = 0LL;
        *(_QWORD *)&v12.fields.value.fields.x = 0LL;
        *(_QWORD *)&v12.fields.value.fields.z = 0LL;
        SubmarineMapManager__RentAndPutEffectAbovePanel_SubmarineEffectSelectedPanelComponent_(
          v2,
          (ComponentPool_T__o *)v2->fields.effectScanObstaclePanelObjPool,
          (SubmarineMapPanelData_o *)v10.fields.current,
          v11,
          v12,
          (const MethodInfo_209DB3C *)Method_SubmarineMapManager_RentAndPutEffectAbovePanel_SubmarineEffectScanObstaclePanelComponent___);
      }
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v10,
      (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__Dispose__);
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
  UnityEngine_GameObject_o *ScanRangeNotificatorPrefab; // x21
  const MethodInfo *v15; // x1
  UnityEngine_Transform_o *transform; // x22
  struct UnityEngine_GameObject_o *v17; // x0
  struct UnityEngine_GameObject_o **p_scanRangeNotificator; // x20

  if ( (byte_41857EA & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_EventPanelScanMaster___, *(_QWORD *)&scanId);
    sub_B2C35C(&Method_DataMasterBase_EventPanelScanMaster__EventPanelScanEntity__int__GetEntity__, v7);
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_GameObject____67450600, v8);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v9);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    byte_41857EA = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_20;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventPanelScanMaster___);
  if ( !Instance )
    goto LABEL_20;
  Instance = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
               (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
               scanId,
               (const MethodInfo_24E40D0 *)Method_DataMasterBase_EventPanelScanMaster__EventPanelScanEntity__int__GetEntity__);
  if ( !Instance )
    return;
  if ( !this->fields.assetManager )
LABEL_20:
    sub_B2C434(Instance, v12);
  ScanRangeNotificatorPrefab = SubmarineMapAssetManager__GetScanRangeNotificatorPrefab(
                                 this->fields.assetManager,
                                 *((_DWORD *)Instance + 14),
                                 v13);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)ScanRangeNotificatorPrefab, 0LL, 0LL) )
  {
    SubmarineMapManager__HideScanRange(this, v15);
    Instance = this->fields.effectContainer;
    if ( Instance )
    {
      transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Instance, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v17 = (struct UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_UILabel_(
                                                 (UILabel_o *)ScanRangeNotificatorPrefab,
                                                 transform,
                                                 (const MethodInfo_2095F74 *)Method_UnityEngine_Object_Instantiate_GameObject____67450600);
      this->fields.scanRangeNotificator = v17;
      p_scanRangeNotificator = &this->fields.scanRangeNotificator;
      sub_B2C2F8(p_scanRangeNotificator, v17);
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
  UnityEngine_Rect_array *v74; // x21
  System_Collections_Generic_List_Rect__o *v75; // x22
  const MethodInfo *v76; // x3
  const MethodInfo *v77; // x2
  int mapInfo; // w8
  SubmarineMapManager_o *v79; // x21
  unsigned int v80; // w23
  __int64 v81; // x25
  int v82; // s0
  int v84; // s4
  int v86; // s6
  struct SubmarineMapDataManager_o *v88; // x8
  struct SubmarineSettingsManager_o *v89; // x8
  float v90; // s2
  float v91; // s3
  int v92; // s2
  int v94; // s4
  int v96; // s0
  int v97; // s1
  Submarine2DUILocationInfo_o *v98; // x22
  const MethodInfo *v99; // x1
  UnityEngine_Rect_array *Rects; // x0
  MapCamera_o *mapCamera; // x23
  UnityEngine_Rect_array *v102; // x22
  Submarine2DUILocationInfo_o *v103; // x22
  const MethodInfo *v104; // x1
  UnityEngine_Rect_array *v105; // x0
  MapCamera_o *v106; // x23
  UnityEngine_Rect_array *v107; // x22
  unsigned int v108; // s0
  unsigned int v109; // s1
  unsigned int v110; // s2
  unsigned int v111; // s3
  UnityEngine_Vector2_o Size; // kr00_8
  int v113; // s0
  System_Single_array *v117; // x20
  float width; // s0
  int v119; // s1
  float v122; // s0
  float height; // s0
  float m_XMin; // s8
  UnityEngine_Vector2_o center; // kr08_8
  struct SubmarineMapDataManager_o *v126; // x8
  struct SubmarineSettingsManager_o *v127; // x8
  int v128; // s2
  Submarine2DUILocationInfo_o *v130; // x22
  const MethodInfo *v131; // x1
  UnityEngine_Rect_array *v132; // x0
  MapCamera_o *v133; // x23
  UnityEngine_Rect_array *v134; // x22
  __int64 v135; // x0
  UnityEngine_Rect_o v136; // [xsp+0h] [xbp-80h] BYREF
  MethodInfo methoda; // [xsp+10h] [xbp-70h] BYREF
  UnityEngine_Rect_o v138; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v139; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v140; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v141; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v142; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v143; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v144; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v145; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v146; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v147; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v148; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v149; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v12 = this;
  if ( (byte_41857ED & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Rect__Add__, *(_QWORD *)&scanId);
    sub_B2C35C(&Method_System_Collections_Generic_List_Rect__ToArray__, v13);
    sub_B2C35C(&Method_System_Collections_Generic_List_Rect___ctor__, v14);
    sub_B2C35C(&System_Collections_Generic_List_Rect__TypeInfo, v15);
    sub_B2C35C(&MapCameraViewAdjusterUtil_TypeInfo, v16);
    sub_B2C35C(&UnityEngine_Rect___TypeInfo, v17);
    sub_B2C35C(&float___TypeInfo, v18);
    sub_B2C35C(&SubmarinScanDialogUpSideWeakLocationInfo_TypeInfo, v19);
    sub_B2C35C(&Submarine2DUILocationInfo_TypeInfo, v20);
    this = (SubmarineMapManager_o *)sub_B2C35C(&SubmarineScanDialogUpsideLocationInfo_TypeInfo, v21);
    byte_41857ED = 1;
  }
  HIDWORD(methoda.genericContainerHandle) = 0;
  memset(&methoda, 0, 32);
  *(_QWORD *)&v136.fields.m_XMin = 0LL;
  *(_QWORD *)&v136.fields.m_Width = 0LL;
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
      v138.fields.m_XMin = panelData->fields._LocalPosition_k__BackingField.fields.x;
      v138.fields.m_YMin = panelData->fields._LocalPosition_k__BackingField.fields.y;
      v138.fields.m_Width = 0.0;
      v138.fields.m_Height = 0.0;
      UnityEngine_Rect___ctor_35349676(v138, *(UnityEngine_Vector2_o *)&v5, *(UnityEngine_Vector2_o *)&v7, &methoda);
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
            v139.fields.m_XMin = UnityEngine_Mathf__Min(xMin, v32->fields._LocalPosition_k__BackingField.fields.x, 0LL);
            UnityEngine_Rect__set_xMin(v139, v34, &methoda);
            xMax = UnityEngine_Rect__get_xMax(v140, &methoda);
            v141.fields.m_XMin = UnityEngine_Mathf__Max(xMax, v32->fields._LocalPosition_k__BackingField.fields.x, 0LL);
            UnityEngine_Rect__set_xMax(v141, v36, &methoda);
            yMin = UnityEngine_Rect__get_yMin(v142, &methoda);
            v143.fields.m_XMin = UnityEngine_Mathf__Min(yMin, v32->fields._LocalPosition_k__BackingField.fields.y, 0LL);
            UnityEngine_Rect__set_yMin(v143, v38, &methoda);
            yMax = UnityEngine_Rect__get_yMax(v144, &methoda);
            v145.fields.m_XMin = UnityEngine_Mathf__Max(yMax, v32->fields._LocalPosition_k__BackingField.fields.y, 0LL);
            UnityEngine_Rect__set_yMax(v145, v40, &methoda);
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
          v50 = UnityEngine_Rect__get_xMax(v146, &methoda);
          v54 = v12->fields.submarineData;
          if ( v54 )
          {
            v55 = v54->fields._Settings_k__BackingField;
            if ( v55 )
            {
              v56 = v55->fields._PanelUnitSize_k__BackingField.fields.x;
              v57 = v50 + v56;
              UnityEngine_Rect__set_xMax(*(UnityEngine_Rect_o *)(&v51 - 2), v53, &methoda);
              v58 = UnityEngine_Rect__get_yMin(v147, &methoda);
              v62 = v12->fields.submarineData;
              if ( v62 )
              {
                v63 = v62->fields._Settings_k__BackingField;
                if ( v63 )
                {
                  y = v63->fields._PanelUnitSize_k__BackingField.fields.y;
                  v65 = v58 - y;
                  UnityEngine_Rect__set_yMin(*(UnityEngine_Rect_o *)(&v59 - 2), v61, &methoda);
                  v66 = UnityEngine_Rect__get_yMax(v148, &methoda);
                  v70 = v12->fields.submarineData;
                  if ( v70 )
                  {
                    v71 = v70->fields._Settings_k__BackingField;
                    if ( v71 )
                    {
                      v72 = v71->fields._PanelUnitSize_k__BackingField.fields.y;
                      v73 = v66 + v72;
                      UnityEngine_Rect__set_yMax(*(UnityEngine_Rect_o *)(&v67 - 2), v69, &methoda);
                      this = (SubmarineMapManager_o *)sub_B2C374(UnityEngine_Rect___TypeInfo, 1LL);
                      if ( this )
                      {
                        v74 = (UnityEngine_Rect_array *)this;
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
    sub_B2C434(this, *(_QWORD *)&scanId);
  }
  v75 = (System_Collections_Generic_List_Rect__o *)sub_B2C42C(System_Collections_Generic_List_Rect__TypeInfo);
  System_Collections_Generic_List_Rect____ctor(
    v75,
    (const MethodInfo_2F06D58 *)Method_System_Collections_Generic_List_Rect___ctor__);
  this = (SubmarineMapManager_o *)SubmarineDataHelperScan__CreateScanEvents(
                                    scanId,
                                    panelData,
                                    v12->fields.submarineData,
                                    v76);
  if ( !v12->fields.submarineData )
    goto LABEL_62;
  this = (SubmarineMapManager_o *)SubmarineMapDataManager__GetPanelsByScanEvents(
                                    v12->fields.submarineData,
                                    (System_Collections_Generic_List_SubmarineScanEvent__o *)this,
                                    v77);
  if ( !this )
    goto LABEL_62;
  mapInfo = (int)this->fields.mapInfo;
  v79 = this;
  if ( mapInfo >= 1 )
  {
    v80 = 0;
    while ( v80 < mapInfo )
    {
      v81 = *((_QWORD *)&v79->fields.warInfo + (int)v80);
      *(UnityEngine_Vector3_o *)&v82 = UnityEngine_Vector3__get_zero(0LL);
      v88 = v12->fields.submarineData;
      if ( !v88 )
        goto LABEL_62;
      v89 = v88->fields._Settings_k__BackingField;
      if ( !v89 )
        goto LABEL_62;
      v90 = v89->fields._PanelUnitSize_k__BackingField.fields.x;
      v91 = v89->fields._PanelUnitSize_k__BackingField.fields.y;
      UnityEngine_Rect___ctor_35349676(
        *(UnityEngine_Rect_o *)&v82,
        *(UnityEngine_Vector2_o *)&v84,
        *(UnityEngine_Vector2_o *)&v86,
        (const MethodInfo *)&v136);
      if ( !v81 )
        goto LABEL_62;
      v96 = *(_DWORD *)(v81 + 28);
      v97 = *(_DWORD *)(v81 + 32);
      UnityEngine_Rect__set_center(
        *(UnityEngine_Rect_o *)(&v92 - 2),
        *(UnityEngine_Vector2_o *)&v94,
        (const MethodInfo *)&v136);
      if ( !v75 )
        goto LABEL_62;
      System_Collections_Generic_List_Rect___Add(
        v75,
        v136,
        (const MethodInfo_2F07AEC *)Method_System_Collections_Generic_List_Rect__Add__);
      mapInfo = (int)v79->fields.mapInfo;
      if ( (int)++v80 >= mapInfo )
        goto LABEL_35;
    }
    goto LABEL_63;
  }
LABEL_35:
  if ( !v75 )
    goto LABEL_62;
  v74 = System_Collections_Generic_List_Rect___ToArray(
          v75,
          (const MethodInfo_2F09D54 *)Method_System_Collections_Generic_List_Rect__ToArray__);
LABEL_37:
  v98 = (Submarine2DUILocationInfo_o *)sub_B2C42C(Submarine2DUILocationInfo_TypeInfo);
  Submarine2DUILocationInfo___ctor(v98, v99);
  if ( !v98 )
    goto LABEL_62;
  Rects = Base2DUILocationInfo__GetRects((Base2DUILocationInfo_o *)v98, 0LL);
  mapCamera = v12->fields.mapCamera;
  v102 = Rects;
  if ( (BYTE3(MapCameraViewAdjusterUtil_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MapCameraViewAdjusterUtil_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MapCameraViewAdjusterUtil_TypeInfo);
  }
  *(UnityEngine_Rect_o *)&methoda.name = MapCameraViewAdjusterUtil__CalculateEachRectIntersectAvoidedCameraRect(
                                           mapCamera,
                                           v74,
                                           v102,
                                           (int32_t *)&methoda.genericContainerHandle + 1,
                                           0LL);
  *isShowDialogUpper = 0;
  if ( HIDWORD(methoda.genericContainerHandle) == 1 )
  {
    v103 = (Submarine2DUILocationInfo_o *)sub_B2C42C(SubmarineScanDialogUpsideLocationInfo_TypeInfo);
    Submarine2DUILocationInfo___ctor(v103, v104);
    if ( !v103 )
      goto LABEL_62;
    v105 = Base2DUILocationInfo__GetRects((Base2DUILocationInfo_o *)v103, 0LL);
    v106 = v12->fields.mapCamera;
    v107 = v105;
    if ( (BYTE3(MapCameraViewAdjusterUtil_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MapCameraViewAdjusterUtil_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MapCameraViewAdjusterUtil_TypeInfo);
    }
    *(UnityEngine_Rect_o *)&v108 = MapCameraViewAdjusterUtil__CalculateEachRectIntersectAvoidedCameraRect(
                                     v106,
                                     v74,
                                     v107,
                                     (int32_t *)&methoda.genericContainerHandle + 1,
                                     0LL);
    if ( HIDWORD(methoda.genericContainerHandle) != 1 )
    {
      if ( HIDWORD(methoda.genericContainerHandle) )
        goto LABEL_49;
      goto LABEL_48;
    }
    v130 = (Submarine2DUILocationInfo_o *)sub_B2C42C(SubmarinScanDialogUpSideWeakLocationInfo_TypeInfo);
    Submarine2DUILocationInfo___ctor(v130, v131);
    if ( !v130 )
      goto LABEL_62;
    v132 = Base2DUILocationInfo__GetRects((Base2DUILocationInfo_o *)v130, 0LL);
    v133 = v12->fields.mapCamera;
    v134 = v132;
    if ( (BYTE3(MapCameraViewAdjusterUtil_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MapCameraViewAdjusterUtil_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MapCameraViewAdjusterUtil_TypeInfo);
    }
    *(UnityEngine_Rect_o *)&v108 = MapCameraViewAdjusterUtil__CalculateEachRectIntersectAvoidedCameraRect(
                                     v133,
                                     v74,
                                     v134,
                                     (int32_t *)&methoda.genericContainerHandle + 1,
                                     0LL);
    if ( !HIDWORD(methoda.genericContainerHandle) )
    {
LABEL_48:
      methoda.name = (const char *)__PAIR64__(v109, v108);
      methoda.klass = (Il2CppClass *)__PAIR64__(v111, v110);
      *isShowDialogUpper = 1;
    }
  }
LABEL_49:
  Size = FSWindowUtil__GetSize(0LL);
  this = (SubmarineMapManager_o *)sub_B2C374(float___TypeInfo, 3LL);
  if ( !this )
    goto LABEL_62;
  v117 = (System_Single_array *)this;
  if ( !LODWORD(this->fields.mapInfo)
    || (LODWORD(this->fields.warInfo) = 1065353216,
        width = UnityEngine_Rect__get_width(*(UnityEngine_Rect_o *)&v113, (const MethodInfo *)&methoda.name),
        v117->max_length <= 1)
    || (v122 = width / Size.fields.x,
        v117->m_Items[2] = v122,
        height = UnityEngine_Rect__get_height(*(UnityEngine_Rect_o *)(&v119 - 1), (const MethodInfo *)&methoda.name),
        v117->max_length <= 2) )
  {
LABEL_63:
    v135 = sub_B2C460(this);
    sub_B2C400(v135, 0LL);
  }
  v117->m_Items[3] = height / Size.fields.y;
  v149.fields.m_XMin = UnityEngine_Mathf__Max_40694716(v117, 0LL);
  m_XMin = v149.fields.m_XMin;
  center = UnityEngine_Rect__get_center(v149, (const MethodInfo *)&methoda.name);
  v126 = v12->fields.submarineData;
  if ( !v126 )
    goto LABEL_62;
  v127 = v126->fields._Settings_k__BackingField;
  if ( !v127 )
    goto LABEL_62;
  v128 = 0;
  return SubmarineMapManager__CreateMoveCameraToPositionTask(
           v12,
           *(UnityEngine_Vector3_o *)&center.fields.x,
           m_XMin,
           v127->fields._ViewScanRangeCameraDuration_k__BackingField,
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
  System_Collections_Generic_List_Enumerator_T__o v10; // [xsp+8h] [xbp-38h] BYREF
  System_Nullable_Vector3__o v11; // 0:x3.16
  System_Nullable_Vector3__o v12; // 0:x5.16

  v2 = this;
  if ( (byte_41857E4 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__Dispose__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__MoveNext__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__get_Current__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_SubmarineMapPanelData__GetEnumerator__, v5);
    this = (SubmarineMapManager_o *)sub_B2C35C(
                                      &Method_SubmarineMapManager_RentAndPutEffectAbovePanel_SubmarineEffectScannablePanelComponent___,
                                      v6);
    byte_41857E4 = 1;
  }
  memset(&v10, 0, sizeof(v10));
  if ( !v2->fields.isShowScannableEffect )
  {
    submarineData = v2->fields.submarineData;
    v2->fields.isShowScannableEffect = 1;
    if ( !submarineData || (this = (SubmarineMapManager_o *)submarineData->fields._PanelDataList_k__BackingField) == 0LL )
      sub_B2C434(this, method);
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v10,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this,
      (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_SubmarineMapPanelData__GetEnumerator__);
    while ( 1 )
    {
      v8 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
             &v10,
             (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__MoveNext__);
      if ( !v8 )
        break;
      if ( !v10.fields.current )
        sub_B2C434(v8, v9);
      if ( BYTE2(v10.fields.current[3].monitor) )
      {
        *(_QWORD *)&v11.fields.value.fields.x = 0LL;
        *(_QWORD *)&v11.fields.value.fields.z = 0LL;
        *(_QWORD *)&v12.fields.value.fields.x = 0LL;
        *(_QWORD *)&v12.fields.value.fields.z = 0LL;
        SubmarineMapManager__RentAndPutEffectAbovePanel_SubmarineEffectSelectedPanelComponent_(
          v2,
          (ComponentPool_T__o *)v2->fields.effectScannablePanelObjPool,
          (SubmarineMapPanelData_o *)v10.fields.current,
          v11,
          v12,
          (const MethodInfo_209DB3C *)Method_SubmarineMapManager_RentAndPutEffectAbovePanel_SubmarineEffectScannablePanelComponent___);
      }
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v10,
      (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__Dispose__);
  }
}


void __fastcall SubmarineMapManager__ShowSelectedPanelEffect(
        SubmarineMapManager_o *this,
        SubmarineMapPanelData_o *panelData,
        const MethodInfo *method)
{
  System_Nullable_Vector3__o v5; // 0:x3.16
  System_Nullable_Vector3__o v6; // 0:x5.16

  if ( (byte_41857E8 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_SubmarineMapManager_RentAndPutEffectAbovePanel_SubmarineEffectSelectedPanelComponent___,
      panelData);
    byte_41857E8 = 1;
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
    (const MethodInfo_209DB3C *)Method_SubmarineMapManager_RentAndPutEffectAbovePanel_SubmarineEffectSelectedPanelComponent___);
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
  __int64 v16; // x1
  CommonUI_o *Instance; // x22
  System_Action_o *v18; // x23
  TaskScheduler_o *taskScheduler; // x22
  const MethodInfo *v20; // x3
  TaskScheduler_o *v21; // x22
  SchedulerTaskBase_array *v22; // x23
  const MethodInfo *v23; // x3
  MissionNotifyManager_o *v24; // x20
  SchedulerTaskNone_o *v25; // x20
  System_Delegate_o *EndCallback; // x22
  SchedulerTaskBase_TaskCallback_o *v27; // x23
  System_Delegate_o *v28; // x0
  TaskScheduler_o *v29; // x19
  SchedulerTaskBase_array *v30; // x21
  __int64 v31; // x0
  __int64 v32; // x0
  SubmarineMapManager_o *v33; // x0
  const MethodInfo *v34; // x1

  if ( (byte_41857CD & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, *(_QWORD *)&scanId);
    sub_B2C35C(&SchedulerTaskBase___TypeInfo, v7);
    sub_B2C35C(&SchedulerTaskNone_TypeInfo, v8);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9);
    sub_B2C35C(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v10);
    sub_B2C35C(&SingletonTemplate_MissionNotifyManager__TypeInfo, v11);
    sub_B2C35C(&Method_SubmarineMapManager__StartScanPerformance_b__40_0__, v12);
    sub_B2C35C(&Method_SubmarineMapManager__StartScanPerformance_b__40_1__, v13);
    sub_B2C35C(&SchedulerTaskBase_TaskCallback_TypeInfo, v14);
    byte_41857CD = 1;
  }
  if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
  }
  ScanTask = (MissionNotifyManager_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !ScanTask )
    goto LABEL_22;
  MissionNotifyManager__StartPause(ScanTask, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v18 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v18, (Il2CppObject *)this, Method_SubmarineMapManager__StartScanPerformance_b__40_0__, 0LL);
  if ( !Instance )
    goto LABEL_22;
  CommonUI__SetTouchActionFadeMaskCollider(Instance, v18, 0LL);
  taskScheduler = this->fields.taskScheduler;
  ScanTask = (MissionNotifyManager_o *)SubmarineMapManager__CreateScanTask(this, panelData, scanId, v20);
  if ( !taskScheduler )
    goto LABEL_22;
  TaskScheduler__AddTask_18707352(
    taskScheduler,
    0,
    (System_Collections_Generic_List_SchedulerTaskBase__o *)ScanTask,
    0LL);
  v21 = this->fields.taskScheduler;
  v22 = (SchedulerTaskBase_array *)sub_B2C374(SchedulerTaskBase___TypeInfo, 1LL);
  ScanTask = (MissionNotifyManager_o *)SubmarineMapManager__CreateScanOpenPanelTask(this, scanId, panelData, v23);
  if ( !v22 )
    goto LABEL_22;
  v24 = ScanTask;
  if ( ScanTask )
  {
    ScanTask = (MissionNotifyManager_o *)sub_B2C41C(ScanTask, v22->obj.klass->_1.element_class);
    if ( !ScanTask )
      goto LABEL_24;
  }
  if ( !v22->max_length )
    goto LABEL_23;
  v22->m_Items[0] = (SchedulerTaskBase_o *)v24;
  sub_B2C2F8(v22->m_Items, v24);
  if ( !v21 )
    goto LABEL_22;
  TaskScheduler__AddTask(v21, 0, v22, 0LL);
  v25 = (SchedulerTaskNone_o *)sub_B2C42C(SchedulerTaskNone_TypeInfo);
  SchedulerTaskNone___ctor(v25, 0LL);
  if ( !v25 )
    goto LABEL_22;
  EndCallback = (System_Delegate_o *)v25->fields.EndCallback;
  v27 = (SchedulerTaskBase_TaskCallback_o *)sub_B2C42C(SchedulerTaskBase_TaskCallback_TypeInfo);
  SchedulerTaskBase_TaskCallback___ctor(
    v27,
    (Il2CppObject *)this,
    Method_SubmarineMapManager__StartScanPerformance_b__40_1__,
    0LL);
  v28 = System_Delegate__Combine(EndCallback, (System_Delegate_o *)v27, 0LL);
  if ( !v28 || (SchedulerTaskBase_TaskCallback_c *)v28->klass == SchedulerTaskBase_TaskCallback_TypeInfo )
  {
    v25->fields.EndCallback = (struct SchedulerTaskBase_TaskCallback_o *)v28;
    sub_B2C2F8(&v25->fields.EndCallback, v28);
    v29 = this->fields.taskScheduler;
    ScanTask = (MissionNotifyManager_o *)sub_B2C374(SchedulerTaskBase___TypeInfo, 1LL);
    if ( !ScanTask )
      goto LABEL_22;
    v30 = (SchedulerTaskBase_array *)ScanTask;
    ScanTask = (MissionNotifyManager_o *)sub_B2C41C(v25, ScanTask->klass->_1.element_class);
    if ( ScanTask )
    {
      if ( v30->max_length )
      {
        v30->m_Items[0] = (SchedulerTaskBase_o *)v25;
        sub_B2C2F8(v30->m_Items, v25);
        if ( v29 )
        {
          TaskScheduler__AddTask(v29, 0, v30, 0LL);
          return;
        }
LABEL_22:
        sub_B2C434(ScanTask, v16);
      }
LABEL_23:
      v31 = sub_B2C460(ScanTask);
      sub_B2C400(v31, 0LL);
    }
LABEL_24:
    v32 = sub_B2C454();
    sub_B2C400(v32, 0LL);
  }
  v33 = (SubmarineMapManager_o *)sub_B2C728(v28);
  SubmarineMapManager__OnEndScan(v33, v34);
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
  SubmarineMapManager___c__DisplayClass41_0_o *v9; // x21
  System_Collections_Generic_List_SchedulerTaskBase__o *SubsequentialOpenPanelTasks; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x1
  int32_t size; // w8
  System_Collections_Generic_List_SchedulerTaskBase__o *v14; // x20
  bool v15; // vf
  int v16; // w8
  SchedulerTaskBase_o *v17; // x22
  System_Delegate_o **p_EndCallback; // x22
  System_Delegate_o *EndCallback; // t1
  SchedulerTaskBase_TaskCallback_o *v20; // x24
  System_Delegate_o *v21; // x0
  SubmarineMapManager_o *v22; // x0
  System_Action_o *v23; // x1
  const MethodInfo *v24; // x2

  if ( (byte_41857CE & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_SchedulerTaskBase__get_Count__, finishCallback);
    sub_B2C35C(&Method_System_Collections_Generic_List_SchedulerTaskBase__get_Item__, v5);
    sub_B2C35C(&SchedulerTaskBase_TaskCallback_TypeInfo, v6);
    sub_B2C35C(&Method_SubmarineMapManager___c__DisplayClass41_0__SubsequentialOpenPanelTaskChain_b__0__, v7);
    sub_B2C35C(&SubmarineMapManager___c__DisplayClass41_0_TypeInfo, v8);
    byte_41857CE = 1;
  }
  v9 = (SubmarineMapManager___c__DisplayClass41_0_o *)sub_B2C42C(SubmarineMapManager___c__DisplayClass41_0_TypeInfo);
  SubmarineMapManager___c__DisplayClass41_0___ctor(v9, 0LL);
  if ( !v9 )
    goto LABEL_12;
  v9->fields.finishCallback = finishCallback;
  sub_B2C2F8(&v9->fields, finishCallback);
  SubsequentialOpenPanelTasks = SubmarineMapManager__CreateSubsequentialOpenPanelTasks(this, v12);
  if ( !SubsequentialOpenPanelTasks )
    goto LABEL_12;
  size = SubsequentialOpenPanelTasks->fields._size;
  v14 = SubsequentialOpenPanelTasks;
  v15 = __OFSUB__(size, 1);
  v16 = size - 1;
  if ( v16 < 0 != v15 )
  {
    ActionExtensions__Call(v9->fields.finishCallback, 0LL);
  }
  else
  {
    v17 = SubsequentialOpenPanelTasks->fields._items->m_Items[v16];
    if ( !v17 )
      goto LABEL_12;
    EndCallback = (System_Delegate_o *)v17->fields.EndCallback;
    p_EndCallback = (System_Delegate_o **)&v17->fields.EndCallback;
    v20 = (SchedulerTaskBase_TaskCallback_o *)sub_B2C42C(SchedulerTaskBase_TaskCallback_TypeInfo);
    SchedulerTaskBase_TaskCallback___ctor(
      v20,
      (Il2CppObject *)v9,
      Method_SubmarineMapManager___c__DisplayClass41_0__SubsequentialOpenPanelTaskChain_b__0__,
      0LL);
    v21 = System_Delegate__Combine(EndCallback, (System_Delegate_o *)v20, 0LL);
    if ( !v21 || (SchedulerTaskBase_TaskCallback_c *)v21->klass == SchedulerTaskBase_TaskCallback_TypeInfo )
    {
      *p_EndCallback = v21;
      sub_B2C2F8(p_EndCallback, v21);
      SubsequentialOpenPanelTasks = (System_Collections_Generic_List_SchedulerTaskBase__o *)this->fields.taskScheduler;
      if ( SubsequentialOpenPanelTasks )
      {
        TaskScheduler__AddTask_18707352((TaskScheduler_o *)SubsequentialOpenPanelTasks, 0, v14, 0LL);
        return;
      }
LABEL_12:
      sub_B2C434(SubsequentialOpenPanelTasks, v11);
    }
    v22 = (SubmarineMapManager_o *)sub_B2C728(v21);
    SubmarineMapManager__RevealAvailableSpots(v22, v23, v24);
  }
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
  EventScanPanelMapRequest_o *Request_WarBoardWallAttackRequest; // x20
  const MethodInfo *v12; // x1
  struct MapControl_MapInfo_o *v13; // x8

  if ( (byte_41857C5 & 1) == 0 )
  {
    sub_B2C35C(&Method_NetworkManager_getRequest_EventScanPanelMapRequest___, method);
    sub_B2C35C(&NetworkManager_TypeInfo, v3);
    sub_B2C35C(&NetworkManager_ResultCallbackFunc_TypeInfo, v4);
    sub_B2C35C(&Method_SubmarineMapManager__TryInitRequest_b__32_0__, v5);
    byte_41857C5 = 1;
  }
  this->fields.initRequestFinished = 0;
  eventId = SubmarineMapManager__get_eventId(this, method);
  mapInfo = this->fields.mapInfo;
  if ( !mapInfo )
    goto LABEL_12;
  if ( SubmarineMapDataManager__HasUserMapData(eventId, mapInfo->fields.mapId, v8) )
  {
    this->fields.initRequestFinished = 1;
    return;
  }
  v10 = (NetworkManager_ResultCallbackFunc_o *)sub_B2C42C(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v10,
    (Il2CppObject *)this,
    Method_SubmarineMapManager__TryInitRequest_b__32_0__,
    0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Request_WarBoardWallAttackRequest = (EventScanPanelMapRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                      v10,
                                                                      (const MethodInfo_1AB4500 *)Method_NetworkManager_getRequest_EventScanPanelMapRequest___);
  eventId = SubmarineMapManager__get_eventId(this, v12);
  v13 = this->fields.mapInfo;
  if ( !v13 || !Request_WarBoardWallAttackRequest )
LABEL_12:
    sub_B2C434(eventId, v7);
  EventScanPanelMapRequest__beginRequest(Request_WarBoardWallAttackRequest, eventId, v13->fields.mapId, 0, 0, 0LL);
}


void __fastcall SubmarineMapManager__TryOpenNewScannerDialog(SubmarineMapManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  SubmarineMapDataManager_o *submarineData; // x0
  int32_t NewReleasedScanId; // w0
  SubmarineNewScannerDialog_o *newScannerDialog; // x21
  int32_t v7; // w20
  System_Action_o *v8; // x22
  const MethodInfo *v9; // x3

  if ( (byte_41857DF & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_SubmarineMapManager_TryOpenNewScannerDialog__, v3);
    byte_41857DF = 1;
  }
  submarineData = this->fields.submarineData;
  if ( !submarineData )
    goto LABEL_8;
  NewReleasedScanId = SubmarineMapDataManager__GetNewReleasedScanId(submarineData, method);
  if ( NewReleasedScanId >= 1 )
  {
    newScannerDialog = this->fields.newScannerDialog;
    v7 = NewReleasedScanId;
    v8 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(v8, (Il2CppObject *)this, Method_SubmarineMapManager_TryOpenNewScannerDialog__, 0LL);
    if ( newScannerDialog )
    {
      SubmarineNewScannerDialog__Open(newScannerDialog, v7, v8, v9);
      return;
    }
LABEL_8:
    sub_B2C434(submarineData, method);
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
  if ( (byte_41857D1 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__Dispose__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__MoveNext__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__get_Current__, v4);
    this = (SubmarineMapManager_o *)sub_B2C35C(
                                      &Method_System_Collections_Generic_List_SubmarineMapPanelData__GetEnumerator__,
                                      v5);
    byte_41857D1 = 1;
  }
  memset(&v8, 0, sizeof(v8));
  submarineData = v2->fields.submarineData;
  if ( !submarineData || (this = (SubmarineMapManager_o *)submarineData->fields._PanelDataList_k__BackingField) == 0LL )
    sub_B2C434(this, method);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v8,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_SubmarineMapPanelData__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v8,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__MoveNext__) )
  {
    if ( !v8.fields.current )
      sub_B2C434(0LL, v7);
    SubmarineMapPanelData__UpdatePanelDisplay((SubmarineMapPanelData_o *)v8.fields.current, v7);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v8,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__Dispose__);
}


void __fastcall SubmarineMapManager__UpdateParams(
        SubmarineMapManager_o *this,
        int32_t beforeClearQuestId,
        const MethodInfo *method)
{
  SubmarineMapDataManager_o *submarineData; // x0

  submarineData = this->fields.submarineData;
  if ( !submarineData )
    sub_B2C434(0LL, beforeClearQuestId);
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
  UnityEngine_GameObject_c *klass; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x21
  const MethodInfo *v15; // x1
  TerminalPramsManager_c *v16; // x0
  TerminalPramsManager_c *v17; // x0
  System_String_array *ValueByArray; // x0
  __int64 v19; // x8
  UnityEngine_GameObject_c *v20; // x8
  TitleInfoControl_o *genericContainerHandle; // x20
  EventDetailEntity_o *v22; // x21
  System_Action_o *v23; // x22
  const MethodInfo *v24; // x1
  const MethodInfo *v25; // x1
  __int64 v26; // x0

  if ( (byte_41857D2 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_DataManager_GetMasterData_EventDetailMaster___, v3);
    sub_B2C35C(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v4);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v6);
    sub_B2C35C(&TerminalSceneComponent_TypeInfo, v7);
    sub_B2C35C(&Method_SubmarineMapManager___c__DisplayClass49_0__UpdateTerminalInfo_b__0__, v8);
    sub_B2C35C(&SubmarineMapManager___c__DisplayClass49_0_TypeInfo, v9);
    byte_41857D2 = 1;
  }
  v10 = sub_B2C42C(SubmarineMapManager___c__DisplayClass49_0_TypeInfo);
  SubmarineMapManager___c__DisplayClass49_0___ctor((SubmarineMapManager___c__DisplayClass49_0_o *)v10, 0LL);
  if ( !v10 )
    goto LABEL_54;
  *(_QWORD *)(v10 + 16) = this;
  sub_B2C2F8(v10 + 16, this);
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
  if ( !byte_4183C65 )
  {
    sub_B2C35C(&TerminalSceneComponent_TypeInfo, v12);
    byte_4183C65 = 1;
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
  terminalMap = (ScrTerminalMap_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !terminalMap )
    goto LABEL_54;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)terminalMap,
                                                                                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventDetailMaster___);
  terminalMap = (ScrTerminalMap_o *)SubmarineMapManager__get_eventId(this, v15);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_54;
  if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
         MasterData_WarQuestSelectionMaster,
         (WarEntity_o **)(v10 + 24),
         (int32_t)terminalMap,
         (const MethodInfo_24E412C *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
  {
    *(_DWORD *)(v10 + 32) = 0;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_418472F )
    {
      sub_B2C35C(&TerminalPramsManager_TypeInfo, v12);
      byte_418472F = 1;
    }
    v16 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v16 = TerminalPramsManager_TypeInfo;
    }
    if ( v16->static_fields->_BeforeEventSubmarineSaveData_k__BackingField )
    {
      if ( (BYTE3(v16->vtable._0_Equals.methodPtr) & 4) != 0 && !v16->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v16);
      if ( !byte_418472F )
      {
        sub_B2C35C(&TerminalPramsManager_TypeInfo, v12);
        byte_418472F = 1;
      }
      v17 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v17 = TerminalPramsManager_TypeInfo;
      }
      terminalMap = (ScrTerminalMap_o *)v17->static_fields->_BeforeEventSubmarineSaveData_k__BackingField;
      if ( !terminalMap )
        goto LABEL_54;
      ValueByArray = EventSaveData__GetValueByArray((EventSaveData_o *)terminalMap, 0x2Cu, 0LL);
      if ( ValueByArray )
      {
        v19 = *(_QWORD *)&ValueByArray->max_length;
        if ( v19 )
        {
          if ( !(_DWORD)v19 )
          {
            v26 = sub_B2C460(ValueByArray);
            sub_B2C400(v26, 0LL);
          }
          *(_DWORD *)(v10 + 32) = System_Int32__Parse(ValueByArray->m_Items[0], 0LL);
        }
      }
    }
    if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    }
    if ( !byte_4183C65 )
    {
      sub_B2C35C(&TerminalSceneComponent_TypeInfo, v12);
      byte_4183C65 = 1;
    }
    terminalMap = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
    if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      terminalMap = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
    }
    v20 = terminalMap->fields.pfbLineP->klass;
    if ( v20 )
    {
      genericContainerHandle = (TitleInfoControl_o *)v20->_2.genericContainerHandle;
      v22 = *(EventDetailEntity_o **)(v10 + 24);
      v23 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
      System_Action___ctor(
        v23,
        (Il2CppObject *)v10,
        Method_SubmarineMapManager___c__DisplayClass49_0__UpdateTerminalInfo_b__0__,
        0LL);
      if ( genericContainerHandle )
      {
        TitleInfoControl__CheckEventSubmarineStatusAnim(genericContainerHandle, v22, v23, 0LL);
        return;
      }
    }
LABEL_54:
    sub_B2C434(terminalMap, v12);
  }
  ((void (__fastcall *)(SubmarineMapManager_o *, void *))this->klass->vtable._32_AllTouchBlockForceFalse.method)(
    this,
    this->klass[1]._1.image);
  SubmarineMapManager__HideScannableEffect(this, v24);
  SubmarineMapManager__ShowScannableEffect(this, v25);
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
    sub_B2C434(0LL, method);
  SubmarineMapDataManager__UpdateParams(submarineData, -1, v2);
  SubmarineMapManager__UpdateClosedPanelDisplay(this, v5);
  SubmarineMapManager__HideSelectedPanelEffect(this, v6);
  SubmarineMapManager__UpdateTerminalInfo(this, v7);
}


void __fastcall SubmarineMapManager___OnEveryActionEnd_b__28_0(SubmarineMapManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Action_o *v4; // x20

  if ( (byte_41857F8 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_SubmarineMapManager__OnEveryActionEnd_b__28_1__, v3);
    byte_41857F8 = 1;
  }
  v4 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_SubmarineMapManager__OnEveryActionEnd_b__28_1__, 0LL);
  ((void (__fastcall *)(SubmarineMapManager_o *, System_Action_o *, Il2CppMethodPointer))this->klass->vtable._24_OnAfterQuestAfterAction.method)(
    this,
    v4,
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

  if ( (byte_41857F9 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_41857F9 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v4);
  CommonUI__SetSkipAnimation(Instance, 1, 0LL);
  UnityEngine_Time__set_timeScale(this->fields.ACCELERATION_TIME_SCALE, 0LL);
  this->fields.isTimeScaleAccelerate = 1;
}


void __fastcall SubmarineMapManager___StartScanPerformance_b__40_1(
        SubmarineMapManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_Action_o *v4; // x20
  const MethodInfo *v5; // x2

  if ( (byte_41857FA & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_SubmarineMapManager__StartScanPerformance_b__40_2__, v3);
    byte_41857FA = 1;
  }
  v4 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_SubmarineMapManager__StartScanPerformance_b__40_2__, 0LL);
  SubmarineMapManager__SubsequentialOpenPanelTaskChain(this, v4, v5);
}


void __fastcall SubmarineMapManager___StartScanPerformance_b__40_2(
        SubmarineMapManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_Action_o *v4; // x20
  const MethodInfo *v5; // x2

  if ( (byte_41857FB & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_SubmarineMapManager__StartScanPerformance_b__40_3__, v3);
    byte_41857FB = 1;
  }
  v4 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_SubmarineMapManager__StartScanPerformance_b__40_3__, 0LL);
  SubmarineMapManager__RevealAvailableSpots(this, v4, v5);
}


void __fastcall SubmarineMapManager___StartScanPerformance_b__40_3(
        SubmarineMapManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  MissionNotifyManager_o *v4; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x1

  if ( (byte_41857FC & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, method);
    sub_B2C35C(&SingletonTemplate_MissionNotifyManager__TypeInfo, v3);
    byte_41857FC = 1;
  }
  if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
  }
  v4 = (MissionNotifyManager_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !v4 )
    sub_B2C434(0LL, v5);
  MissionNotifyManager__EndPause(v4, 0LL);
  SubmarineMapManager__OnEndScan(this, v6);
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
    sub_B2C434(this, method);
  return MapControl_WarInfo__GetEventId((MapControl_WarInfo_o *)this, 0LL);
}


SubmarinePanelPositionCalculator_o *__fastcall SubmarineMapManager__get_positionCalculator(
        SubmarineMapManager_o *this,
        const MethodInfo *method)
{
  struct SubmarineMapDataManager_o *submarineData; // x8

  submarineData = this->fields.submarineData;
  if ( !submarineData )
    sub_B2C434(this, method);
  return submarineData->fields._PositionCalculator_k__BackingField;
}


SubmarineSettingsManager_o *__fastcall SubmarineMapManager__get_settings(
        SubmarineMapManager_o *this,
        const MethodInfo *method)
{
  struct SubmarineMapDataManager_o *submarineData; // x8

  submarineData = this->fields.submarineData;
  if ( !submarineData )
    sub_B2C434(this, method);
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
  System_Func_bool__o *v10; // x22
  UnityEngine_WaitUntil_o *v11; // x20
  Il2CppObject **p__2__current; // x19

  v2 = this;
  if ( (byte_41847A8 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Func_bool___ctor__, method);
    sub_B2C35C(&System_Func_bool__TypeInfo, v3);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_B2C35C(&Method_SubmarineMapManager__CoInitRequest_b__21_0__, v5);
    this = (SubmarineMapManager__CoInitRequest_d__21_o *)sub_B2C35C(&UnityEngine_WaitUntil_TypeInfo, v6);
    byte_41847A8 = 1;
  }
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
  if ( _1__state == 1 )
  {
    v2->fields.__1__state = -1;
    this = (SubmarineMapManager__CoInitRequest_d__21_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !this
      || (CommonUI__SetConnect((CommonUI_o *)this, 0, 0LL), !_4__this)
      || (this = (SubmarineMapManager__CoInitRequest_d__21_o *)_4__this->fields.submarineData) == 0LL )
    {
LABEL_14:
      sub_B2C434(this, method);
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
  this = (SubmarineMapManager__CoInitRequest_d__21_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !this )
    goto LABEL_14;
  v9 = 1;
  CommonUI__SetConnect((CommonUI_o *)this, 1, 0LL);
  v10 = (System_Func_bool__o *)sub_B2C42C(System_Func_bool__TypeInfo);
  System_Func_bool____ctor(
    v10,
    (Il2CppObject *)_4__this,
    Method_SubmarineMapManager__CoInitRequest_b__21_0__,
    (const MethodInfo_26FE8F8 *)Method_System_Func_bool___ctor__);
  v11 = (UnityEngine_WaitUntil_o *)sub_B2C42C(UnityEngine_WaitUntil_TypeInfo);
  UnityEngine_WaitUntil___ctor(v11, v10, 0LL);
  v2->fields.__2__current = (Il2CppObject *)v11;
  p__2__current = &v2->fields.__2__current;
  sub_B2C2F8(p__2__current, v11);
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
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B2C360(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B2C42C(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B2C360(&Method_SubmarineMapManager__CoInitRequest_d__21_System_Collections_IEnumerator_Reset__);
  sub_B2C400(v3, v4);
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
  if ( (byte_41847A9 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    this = (SubmarineMapManager__CoOnAfterSpotCreated_d__24_o *)sub_B2C35C(
                                                                  &Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__,
                                                                  v3);
    byte_41847A9 = 1;
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
          sub_B2C2F8(&_4__this->fields.closedPanelTexture, ResizedTexture2D);
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
              sub_B2C2F8(&_4__this->fields.closedPanelTexture, DarkTexture2D);
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
      sub_B2C434(this, method);
    }
    this = (SubmarineMapManager__CoOnAfterSpotCreated_d__24_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
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

  v2 = sub_B2C360(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B2C42C(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B2C360(&Method_SubmarineMapManager__CoOnAfterSpotCreated_d__24_System_Collections_IEnumerator_Reset__);
  sub_B2C400(v3, v4);
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
  Il2CppObject *v2; // x19
  struct SubmarineMapManager___c_StaticFields *static_fields; // x0

  if ( (byte_418479E & 1) == 0 )
  {
    sub_B2C35C(&SubmarineMapManager___c_TypeInfo, v1);
    byte_418479E = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(SubmarineMapManager___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = SubmarineMapManager___c_TypeInfo->static_fields;
  static_fields->__9 = (struct SubmarineMapManager___c_o *)v2;
  sub_B2C2F8(static_fields, v2);
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
    sub_B2C434(this, 0LL);
  return !x->fields._IsOpened_k__BackingField;
}


bool __fastcall SubmarineMapManager___c___CreateScanOpenPanelTask_b__98_0(
        SubmarineMapManager___c_o *this,
        SubmarineScanEvent_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B2C434(this, 0LL);
  return x->fields._IsHitObstacle_k__BackingField || x->fields._IsOpened_k__BackingField;
}


int32_t __fastcall SubmarineMapManager___c___CreateScanOpenPanelTask_b__98_1(
        SubmarineMapManager___c_o *this,
        SubmarineScanEvent_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B2C434(this, 0LL);
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
    sub_B2C434(this, x);
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
  System_Action_o *_9__1; // x23
  int32_t v8; // w22
  System_Collections_IEnumerator_o *Assets; // x1

  if ( (byte_418479F & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_SubmarineMapManager___c__DisplayClass20_0__LoadAssets_b__1__, v3);
    byte_418479F = 1;
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
  v8 = (int)_4__this;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_SubmarineMapManager___c__DisplayClass20_0__LoadAssets_b__1__,
      0LL);
    this->fields.__9__1 = _9__1;
    sub_B2C2F8(&this->fields.__9__1, _9__1);
  }
  if ( !monitor )
LABEL_9:
    sub_B2C434(_4__this, method);
  Assets = SubmarineMapAssetManager__CoLoadAssets(monitor, v8, _9__1, 0LL);
  UnityEngine_MonoBehaviour__StartCoroutine_35309748(v5, Assets, 0LL);
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
    sub_B2C434(_4__this, method);
  }
  inited = SubmarineMapManager__CoInitRequest(this->fields.__4__this, this->fields.finishCallback, 0LL);
  UnityEngine_MonoBehaviour__StartCoroutine_35309748(v6, inited, 0LL);
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
  __int64 v7; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *v8; // x20
  System_Collections_Generic_List_string__c *klass; // x8
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_41847A0 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_EventDetailMaster___, method);
    sub_B2C35C(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v3);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    sub_B2C35C(&TerminalSceneComponent_TypeInfo, v5);
    byte_41847A0 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !this->fields.__4__this )
    goto LABEL_19;
  v8 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
  Instance = (DataManager_o *)SubmarineMapManager__get_eventId(this->fields.__4__this, 0LL);
  if ( !v8 )
    goto LABEL_19;
  if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
         v8,
         &entity,
         (int32_t)Instance,
         (const MethodInfo_24E412C *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
  {
    if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    }
    if ( !byte_4183C65 )
    {
      sub_B2C35C(&TerminalSceneComponent_TypeInfo, v7);
      byte_4183C65 = 1;
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
    sub_B2C434(Instance, v7);
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
    sub_B2C434(0LL, method);
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
  System_Action_int__o *_9__1; // x22
  SubmarineMapManager_o *v7; // x20

  if ( (byte_41847A1 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Action_int___ctor__, method);
    sub_B2C35C(&System_Action_int__TypeInfo, v3);
    sub_B2C35C(&Method_SubmarineMapManager___c__DisplayClass36_0__ClickPanel_b__1__, v4);
    byte_41847A1 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_8;
  SubmarineMapManager__HideScannableEffect(_4__this, 0LL);
  _9__1 = this->fields.__9__1;
  v7 = this->fields.__4__this;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_int__o *)sub_B2C42C(System_Action_int__TypeInfo);
    System_Action_int____ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_SubmarineMapManager___c__DisplayClass36_0__ClickPanel_b__1__,
      (const MethodInfo_24BA548 *)Method_System_Action_int___ctor__);
    this->fields.__9__1 = _9__1;
    sub_B2C2F8(&this->fields.__9__1, _9__1);
  }
  if ( !v7 )
LABEL_8:
    sub_B2C434(_4__this, method);
  SubmarineMapManager__OpenSelectScannerDialog(v7, _9__1, 0LL);
}


void __fastcall SubmarineMapManager___c__DisplayClass36_0___ClickPanel_b__1(
        SubmarineMapManager___c__DisplayClass36_0_o *this,
        int32_t scanId,
        const MethodInfo *method)
{
  SubmarineMapManager_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B2C434(0LL, scanId);
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
  System_Action_bool__o *_9__1; // x22
  int32_t scanId; // w20
  SubmarineMapManager_o *v8; // x21
  _BOOL4 isShowDialogUpper; // w24

  if ( (byte_41847A2 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Action_bool___ctor__, method);
    sub_B2C35C(&System_Action_bool__TypeInfo, v3);
    sub_B2C35C(&Method_SubmarineMapManager___c__DisplayClass37_0__OnScannerSelected_b__1__, v4);
    byte_41847A2 = 1;
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
  v8 = this->fields.__4__this;
  isShowDialogUpper = this->fields.isShowDialogUpper;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_bool__o *)sub_B2C42C(System_Action_bool__TypeInfo);
    System_Action_bool____ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_SubmarineMapManager___c__DisplayClass37_0__OnScannerSelected_b__1__,
      (const MethodInfo_24B7B90 *)Method_System_Action_bool___ctor__);
    this->fields.__9__1 = _9__1;
    sub_B2C2F8(&this->fields.__9__1, _9__1);
  }
  if ( !v8 )
LABEL_9:
    sub_B2C434(_4__this, method);
  SubmarineMapManager__OpenScanConfirmDialog(v8, scanId, isShowDialogUpper, _9__1, 0LL);
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
  SubmarineMapManager_o *v8; // x20
  System_Action_int__o *_9__2; // x22

  if ( (byte_41847A3 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Action_int___ctor__, yes);
    sub_B2C35C(&System_Action_int__TypeInfo, v5);
    sub_B2C35C(&Method_SubmarineMapManager___c__DisplayClass37_0__OnScannerSelected_b__2__, v6);
    byte_41847A3 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_11;
  SubmarineMapManager__HideScanRange(_4__this, 0LL);
  v8 = this->fields.__4__this;
  if ( yes )
  {
    if ( v8 )
    {
      SubmarineMapManager__OnScanDecided(this->fields.__4__this, this->fields.scanId, this->fields.panelData, 0LL);
      return;
    }
LABEL_11:
    sub_B2C434(_4__this, yes);
  }
  _9__2 = this->fields.__9__2;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_int__o *)sub_B2C42C(System_Action_int__TypeInfo);
    System_Action_int____ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_SubmarineMapManager___c__DisplayClass37_0__OnScannerSelected_b__2__,
      (const MethodInfo_24BA548 *)Method_System_Action_int___ctor__);
    this->fields.__9__2 = _9__2;
    sub_B2C2F8(&this->fields.__9__2, _9__2);
  }
  if ( !v8 )
    goto LABEL_11;
  SubmarineMapManager__OpenSelectScannerDialog(v8, _9__2, 0LL);
}


void __fastcall SubmarineMapManager___c__DisplayClass37_0___OnScannerSelected_b__2(
        SubmarineMapManager___c__DisplayClass37_0_o *this,
        int32_t lscanId,
        const MethodInfo *method)
{
  SubmarineMapManager_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B2C434(0LL, lscanId);
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
    sub_B2C434(0LL, result);
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
  ErrorDialog_c *v7; // x8

  if ( (byte_41847A4 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    sub_B2C35C(&TerminalSceneComponent_TypeInfo, v3);
    byte_41847A4 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
  if ( !byte_4183C65 )
  {
    sub_B2C35C(&TerminalSceneComponent_TypeInfo, v5);
    byte_4183C65 = 1;
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
  if ( !byte_4183C65 )
  {
    sub_B2C35C(&TerminalSceneComponent_TypeInfo, v5);
    byte_4183C65 = 1;
  }
  Instance = (CommonUI_o *)TerminalSceneComponent_TypeInfo;
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    Instance = (CommonUI_o *)TerminalSceneComponent_TypeInfo;
  }
  v7 = Instance->fields.errorDialog->klass;
  if ( !v7
    || (Instance = *(CommonUI_o **)&v7->_2.static_fields_size) == 0LL
    || (ScrTerminalMap__UpdateAllSpotGameObject((ScrTerminalMap_o *)Instance, 0LL),
        (Instance = (CommonUI_o *)this->fields.__4__this) == 0LL)
    || (SubmarineMapManager__CheckNewPlayableEventQuest((SubmarineMapManager_o *)Instance, 0LL),
        (Instance = (CommonUI_o *)this->fields.__4__this) == 0LL) )
  {
LABEL_25:
    sub_B2C434(Instance, v5);
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
    sub_B2C434(this, x);
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

  if ( (byte_41847A5 & 1) == 0 )
  {
    sub_B2C35C(&Method_ActionExtensions_Call_int___, *(_QWORD *)&scanId);
    byte_41847A5 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B2C434(0LL, *(_QWORD *)&scanId);
  ((void (__fastcall *)(struct SubmarineMapManager_o *, _QWORD, Il2CppMethodPointer))_4__this->klass->vtable._31_SetCameraWorkBlock.method)(
    _4__this,
    0LL,
    _4__this->klass->vtable._32_AllTouchBlockForceFalse.methodPtr);
  ActionExtensions__Call_int_(
    (System_Action_T__o *)this->fields.callback,
    scanId,
    (const MethodInfo_2D65AF8 *)Method_ActionExtensions_Call_int___);
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

  if ( (byte_41847A6 & 1) == 0 )
  {
    sub_B2C35C(&Method_ActionExtensions_Call_bool___, yes);
    byte_41847A6 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B2C434(0LL, yes);
  ((void (__fastcall *)(struct SubmarineMapManager_o *, _QWORD, Il2CppMethodPointer))_4__this->klass->vtable._31_SetCameraWorkBlock.method)(
    _4__this,
    0LL,
    _4__this->klass->vtable._32_AllTouchBlockForceFalse.methodPtr);
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)this->fields.callback,
    yes,
    (const MethodInfo_2D65ADC *)Method_ActionExtensions_Call_bool___);
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
    sub_B2C434(0LL, method);
  UnityEngine_GameObject__SetActive(scanAnimObj, 1, 0LL);
}


void __fastcall SubmarineMapManager___c__DisplayClass94_0___CreateScanTask_b__1(
        SubmarineMapManager___c__DisplayClass94_0_o *this,
        const MethodInfo *method)
{
  SubmarineScanVoiceComponent_o *svtScanVoice; // x0

  svtScanVoice = this->fields.svtScanVoice;
  if ( !svtScanVoice )
    sub_B2C434(0LL, method);
  SubmarineScanVoiceComponent__PlayScanVoice(svtScanVoice, 0LL);
}


void __fastcall SubmarineMapManager___c__DisplayClass94_0___CreateScanTask_b__2(
        SubmarineMapManager___c__DisplayClass94_0_o *this,
        const MethodInfo *method)
{
  SubmarineMapManager_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B2C434(0LL, method);
  SubmarineMapManager__HideSelectedPanelEffect(_4__this, 0LL);
}


void __fastcall SubmarineMapManager___c__DisplayClass94_0___CreateScanTask_b__3(
        SubmarineMapManager___c__DisplayClass94_0_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *scanAnimObj; // x19

  if ( (byte_41847A7 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_41847A7 = 1;
  }
  scanAnimObj = (UnityEngine_Object_o *)this->fields.scanAnimObj;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__Destroy_35314896(scanAnimObj, 0LL);
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
    sub_B2C434(this, x);
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
    sub_B2C434(this, 0LL);
  return x->fields._Chain_k__BackingField == this->fields.i;
}