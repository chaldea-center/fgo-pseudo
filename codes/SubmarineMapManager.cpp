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
  changeVColor_array *v6; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  int max_length; // w8
  changeVColor_array *v10; // x22
  int v11; // w25
  int32_t v12; // w21
  changeVColor_o *v13; // x8
  int v14; // w8
  changeVColor_array *v15; // x20
  unsigned int v16; // w22
  int v17; // w19
  UIWidget_o *v18; // x0

  if ( (byte_40F7C70 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponentsInChildren_UIWidget___, go);
    byte_40F7C70 = 1;
  }
  if ( !go )
    goto LABEL_21;
  v6 = UnityEngine_GameObject__GetComponentsInChildren_changeVColor__27072796(
         go,
         (const MethodInfo_19D191C *)Method_UnityEngine_GameObject_GetComponentsInChildren_UIWidget___);
  if ( !v6 )
    goto LABEL_21;
  max_length = v6->max_length;
  v10 = v6;
  if ( max_length >= 1 )
  {
    v11 = 0;
    v12 = 0x7FFFFFFF;
    while ( v11 < (unsigned int)max_length )
    {
      v13 = v10->m_Items[v11];
      if ( !v13 )
        goto LABEL_21;
      v6 = (changeVColor_array *)UnityEngine_Mathf__Min_40727532((int32_t)v13[4].monitor, v12, 0LL);
      max_length = v10->max_length;
      ++v11;
      v12 = (int)v6;
      if ( v11 >= max_length )
        goto LABEL_12;
    }
LABEL_20:
    sub_B17100(v6, v7, v8);
    sub_B170A0();
  }
  v12 = 0x7FFFFFFF;
LABEL_12:
  if ( v12 != 0x7FFFFFFF )
  {
    v6 = UnityEngine_GameObject__GetComponentsInChildren_changeVColor__27072796(
           go,
           (const MethodInfo_19D191C *)Method_UnityEngine_GameObject_GetComponentsInChildren_UIWidget___);
    if ( v6 )
    {
      v14 = v6->max_length;
      v15 = v6;
      if ( v14 >= 1 )
      {
        v16 = 0;
        v17 = minDepth - v12;
        while ( v16 < v14 )
        {
          v18 = (UIWidget_o *)v15->m_Items[v16];
          if ( !v18 )
            goto LABEL_21;
          UIWidget__set_depth(v18, v17 + v18->fields.mDepth, 0LL);
          v14 = v15->max_length;
          if ( (int)++v16 >= v14 )
            return;
        }
        goto LABEL_20;
      }
      return;
    }
LABEL_21:
    sub_B170D4();
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
  UnityEngine_GameObject_o *v10; // x0
  UnityEngine_Object_o *Component_srcLineSprite; // x21

  if ( (byte_40F7C6D & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_SrcSpotBasePrefab___, method);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v3);
    byte_40F7C6D = 1;
  }
  Children = GameObjectExtensions__GetChildren(this->fields.rootSpotP, 0, 0LL);
  if ( !Children )
    goto LABEL_16;
  max_length = Children->max_length;
  v8 = Children;
  if ( max_length >= 1 )
  {
    v9 = 0;
    while ( 1 )
    {
      if ( v9 >= max_length )
      {
        sub_B17100(Children, v5, v6);
        sub_B170A0();
      }
      v10 = v8->m_Items[v9];
      if ( !v10 )
        break;
      Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                          v10,
                                                          (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_SrcSpotBasePrefab___);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      Children = (UnityEngine_GameObject_array *)UnityEngine_Object__op_Equality(Component_srcLineSprite, 0LL, 0LL);
      if ( ((unsigned __int8)Children & 1) == 0 )
        SubmarineMapManager__AdjustSpotPosition(this, (SrcSpotBasePrefab_o *)Component_srcLineSprite, v6);
      max_length = v8->max_length;
      if ( (int)++v9 >= max_length )
        return;
    }
LABEL_16:
    sub_B170D4();
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SubmarineMapManager__AdjustSilhouetteGimmicks(SubmarineMapManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
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
  __int64 v28; // x1
  __int64 v29; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v30; // x20
  UnityEngine_GameObject_array *Children; // x0
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x3
  __int64 v35; // x4
  int max_length; // w8
  UnityEngine_GameObject_array *v37; // x21
  unsigned int v38; // w19
  UnityEngine_GameObject_o *v39; // x0
  UnityEngine_Object_o *Component_srcLineSprite; // x22
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v41; // x21
  int v42; // w8
  UnityEngine_GameObject_array *v43; // x22
  unsigned int v44; // w19
  UnityEngine_GameObject_o *v45; // x0
  UnityEngine_Object_o *v46; // x23
  _DWORD *monitor; // x8
  struct SubmarineMapDataManager_o *submarineData; // x8
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *SilhouetteDataList_k__BackingField; // x0
  __int64 v50; // x1
  __int64 v51; // x2
  __int64 v52; // x3
  __int64 v53; // x4
  __int64 v54; // x23
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7
  System_Int32_array **parameters; // x1
  SubmarineSilhouetteData_o **v62; // x22
  __int64 v63; // x1
  __int64 v64; // x2
  __int64 v65; // x3
  __int64 v66; // x4
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v67; // x24
  UnityEngine_Component_o *v68; // x23
  const MethodInfo *v69; // x2
  SubmarineMapDataManager_o *v70; // x0
  System_Collections_Generic_IEnumerable_T__o *SilhouetteOccupiedPanels; // x24
  __int64 v72; // x1
  __int64 v73; // x2
  __int64 v74; // x3
  __int64 v75; // x4
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v76; // x22
  UnityEngine_Transform_o *transform; // x0
  float x; // s8
  float y; // s9
  int v80; // s0
  Il2CppObject *current; // x22
  float xMin; // s0
  float v86; // s4
  float xMax; // s0
  float v88; // s4
  float yMin; // s0
  float v90; // s4
  float yMax; // s0
  float v92; // s4
  int v93; // w23
  int v94; // w10
  UnityEngine_Transform_o *v95; // x22
  UnityEngine_Vector2_o center; // kr00_8
  int v97; // s2
  int v98; // w23
  int v99; // [xsp+14h] [xbp-DCh]
  _BYTE v100[32]; // [xsp+18h] [xbp-D8h] BYREF
  int v101; // [xsp+38h] [xbp-B8h]
  System_Collections_Generic_List_Enumerator_T__o v102; // [xsp+40h] [xbp-B0h] BYREF
  MethodInfo methoda; // [xsp+58h] [xbp-98h] BYREF
  UnityEngine_Vector2_o v104; // 0:s4.4,4:s5.4
  UnityEngine_Vector2_o v105; // 0:s6.4,4:s7.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Rect_o v107; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v108; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v109; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v110; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v111; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v112; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v113; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v114; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v115; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_40F7C6F & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__MapGimmickComponent__TryGetValue__, method);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__MapGimmickComponent___ctor__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__MapGimmickComponent__set_Item__, v7);
    sub_B16FFC(&System_Collections_Generic_Dictionary_int__MapGimmickComponent__TypeInfo, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__Dispose__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_SubmarineSilhouetteData__Dispose__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__MoveNext__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_SubmarineSilhouetteData__MoveNext__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__get_Current__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_SubmarineSilhouetteData__get_Current__, v14);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_MapGimmickComponent___, v15);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_SrcSpotBasePrefab___, v16);
    sub_B16FFC(&Method_System_Collections_Generic_List_SrcSpotBasePrefab__Add__, v17);
    sub_B16FFC(&Method_System_Collections_Generic_List_SrcSpotBasePrefab__Find__, v18);
    sub_B16FFC(&Method_System_Collections_Generic_List_SubmarineMapPanelData__GetEnumerator__, v19);
    sub_B16FFC(&Method_System_Collections_Generic_List_SubmarineSilhouetteData__GetEnumerator__, v20);
    sub_B16FFC(&Method_System_Collections_Generic_List_SrcSpotBasePrefab___ctor__, v21);
    sub_B16FFC(&Method_System_Collections_Generic_List_SubmarineMapPanelData___ctor___66746952, v22);
    sub_B16FFC(&System_Collections_Generic_List_SubmarineMapPanelData__TypeInfo, v23);
    sub_B16FFC(&System_Collections_Generic_List_SrcSpotBasePrefab__TypeInfo, v24);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v25);
    sub_B16FFC(&Method_System_Predicate_SrcSpotBasePrefab___ctor__, v26);
    sub_B16FFC(&System_Predicate_SrcSpotBasePrefab__TypeInfo, v27);
    sub_B16FFC(&Method_SubmarineMapManager___c__DisplayClass60_0__AdjustSilhouetteGimmicks_b__0__, v28);
    sub_B16FFC(&SubmarineMapManager___c__DisplayClass60_0_TypeInfo, v29);
    byte_40F7C6F = 1;
  }
  memset(&methoda, 0, 48);
  memset(&v102, 0, sizeof(v102));
  v101 = 0;
  v30 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_SrcSpotBasePrefab__TypeInfo,
                                                                                                  method,
                                                                                                  v2,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v30,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_SrcSpotBasePrefab___ctor__);
  Children = GameObjectExtensions__GetChildren(this->fields.rootSpotP, 0, 0LL);
  if ( !Children )
    goto LABEL_63;
  max_length = Children->max_length;
  v37 = Children;
  if ( max_length >= 1 )
  {
    v38 = 0;
    while ( v38 < max_length )
    {
      v39 = v37->m_Items[v38];
      if ( !v39 )
        goto LABEL_63;
      Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                          v39,
                                                          (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_SrcSpotBasePrefab___);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      Children = (UnityEngine_GameObject_array *)UnityEngine_Object__op_Inequality(Component_srcLineSprite, 0LL, 0LL);
      if ( ((unsigned __int8)Children & 1) != 0 )
      {
        if ( !v30 )
          goto LABEL_63;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v30,
          (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_SrcSpotBasePrefab__Add__);
      }
      max_length = v37->max_length;
      if ( (int)++v38 >= max_length )
        goto LABEL_15;
    }
LABEL_64:
    sub_B17100(Children, v32, v33);
    sub_B170A0();
  }
LABEL_15:
  v41 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B170CC(
                                                                                                   System_Collections_Generic_Dictionary_int__MapGimmickComponent__TypeInfo,
                                                                                                   v32,
                                                                                                   v33,
                                                                                                   v34,
                                                                                                   v35);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v41,
    (const MethodInfo_2DE8808 *)Method_System_Collections_Generic_Dictionary_int__MapGimmickComponent___ctor__);
  Children = GameObjectExtensions__GetChildren(this->fields.rootGimmickP, 0, 0LL);
  if ( !Children )
    goto LABEL_63;
  v42 = Children->max_length;
  v43 = Children;
  if ( v42 >= 1 )
  {
    v44 = 0;
    while ( v44 < v42 )
    {
      v45 = v43->m_Items[v44];
      if ( !v45 )
        goto LABEL_63;
      v46 = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                      v45,
                                      (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_MapGimmickComponent___);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      Children = (UnityEngine_GameObject_array *)UnityEngine_Object__op_Equality(v46, 0LL, 0LL);
      if ( ((unsigned __int8)Children & 1) == 0 )
      {
        if ( !v46 )
          goto LABEL_63;
        monitor = v46[4].monitor;
        if ( !monitor || !v41 )
          goto LABEL_63;
        System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___set_Item(
          (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)v41,
          monitor[5],
          (WarBoardAIRoute_RouteData_o *)v46,
          (const MethodInfo_2DE9394 *)Method_System_Collections_Generic_Dictionary_int__MapGimmickComponent__set_Item__);
      }
      v42 = v43->max_length;
      if ( (int)++v44 >= v42 )
        goto LABEL_29;
    }
    goto LABEL_64;
  }
LABEL_29:
  submarineData = this->fields.submarineData;
  if ( !submarineData
    || (SilhouetteDataList_k__BackingField = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)submarineData->fields._SilhouetteDataList_k__BackingField) == 0LL )
  {
LABEL_63:
    sub_B170D4();
  }
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)v100,
    SilhouetteDataList_k__BackingField,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_SubmarineSilhouetteData__GetEnumerator__);
  v99 = 0;
  methoda.parameters = *(const void **)&v100[16];
  *(_OWORD *)&methoda.klass = *(_OWORD *)v100;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            (System_Collections_Generic_List_Enumerator_T__o *)&methoda.klass,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_SubmarineSilhouetteData__MoveNext__) )
  {
    v54 = sub_B170CC(SubmarineMapManager___c__DisplayClass60_0_TypeInfo, v50, v51, v52, v53);
    SubmarineMapManager___c__DisplayClass60_0___ctor((SubmarineMapManager___c__DisplayClass60_0_o *)v54, 0LL);
    if ( !v54 )
      sub_B170D4();
    parameters = (System_Int32_array **)methoda.parameters;
    *(_QWORD *)(v54 + 16) = methoda.parameters;
    v62 = (SubmarineSilhouetteData_o **)(v54 + 16);
    sub_B16F98((BattleServantConfConponent_o *)(v54 + 16), parameters, v55, v56, v57, v58, v59, v60);
    if ( !*(_QWORD *)(v54 + 16) )
      sub_B170D4();
    if ( *(int *)(*(_QWORD *)(v54 + 16) + 20LL) > 0 )
    {
      v67 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B170CC(
                                                                       System_Predicate_SrcSpotBasePrefab__TypeInfo,
                                                                       v63,
                                                                       v64,
                                                                       v65,
                                                                       v66);
      System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
        v67,
        (Il2CppObject *)v54,
        Method_SubmarineMapManager___c__DisplayClass60_0__AdjustSilhouetteGimmicks_b__0__,
        (const MethodInfo_2B0B204 *)Method_System_Predicate_SrcSpotBasePrefab___ctor__);
      if ( !v30 )
        sub_B170D4();
      v68 = (UnityEngine_Component_o *)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                                         (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)v30,
                                         (System_Predicate_T__o *)v67,
                                         (const MethodInfo_2F26598 *)Method_System_Collections_Generic_List_SrcSpotBasePrefab__Find__);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v68, 0LL, 0LL) )
      {
        if ( !*v62 )
          sub_B170D4();
        if ( !v41 )
          sub_B170D4();
        if ( System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___TryGetValue(
               (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)v41,
               (*v62)->fields._ObjectId_k__BackingField,
               (WarBoardEvalValueSquare_CalcEval_o **)&methoda.name,
               (const MethodInfo_2DEB0E0 *)Method_System_Collections_Generic_Dictionary_int__MapGimmickComponent__TryGetValue__) )
        {
          v70 = this->fields.submarineData;
          if ( !v70 )
            sub_B170D4();
          SilhouetteOccupiedPanels = (System_Collections_Generic_IEnumerable_T__o *)SubmarineMapDataManager__GetSilhouetteOccupiedPanels(
                                                                                      v70,
                                                                                      *v62,
                                                                                      v69);
          v76 = (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)sub_B170CC(
                                                                                  System_Collections_Generic_List_SubmarineMapPanelData__TypeInfo,
                                                                                  v72,
                                                                                  v73,
                                                                                  v74,
                                                                                  v75);
          System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
            v76,
            SilhouetteOccupiedPanels,
            (const MethodInfo_2F2520C *)Method_System_Collections_Generic_List_SubmarineMapPanelData___ctor___66746952);
          if ( !v68 )
            sub_B170D4();
          transform = UnityEngine_Component__get_transform(v68, 0LL);
          if ( !transform )
            sub_B170D4();
          localPosition = UnityEngine_Transform__get_localPosition(transform, 0LL);
          x = localPosition.fields.x;
          y = localPosition.fields.y;
          *(UnityEngine_Vector3_o *)&v107.fields.m_XMin = UnityEngine_Vector3__get_zero(0LL);
          v107.fields.m_Width = v107.fields.m_XMin;
          v107.fields.m_Height = v107.fields.m_YMin;
          v107.fields.m_XMin = x;
          v107.fields.m_YMin = y;
          UnityEngine_Rect___ctor_34844244(v107, v104, v105, &methoda);
          if ( !v76 )
            sub_B170D4();
          System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
            (System_Collections_Generic_List_Enumerator_T__o *)v100,
            (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v76,
            (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_SubmarineMapPanelData__GetEnumerator__);
          v102 = *(System_Collections_Generic_List_Enumerator_T__o *)v100;
          while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                    &v102,
                    (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__MoveNext__) )
          {
            current = v102.fields.current;
            xMin = UnityEngine_Rect__get_xMin(*(UnityEngine_Rect_o *)&v80, &methoda);
            if ( !current )
              sub_B170D4();
            v108.fields.m_XMin = UnityEngine_Mathf__Min(xMin, *((float *)&current[1].monitor + 1), 0LL);
            UnityEngine_Rect__set_xMin(v108, v86, &methoda);
            xMax = UnityEngine_Rect__get_xMax(v109, &methoda);
            v110.fields.m_XMin = UnityEngine_Mathf__Max(xMax, *((float *)&current[1].monitor + 1), 0LL);
            UnityEngine_Rect__set_xMax(v110, v88, &methoda);
            yMin = UnityEngine_Rect__get_yMin(v111, &methoda);
            v112.fields.m_XMin = UnityEngine_Mathf__Min(yMin, *(float *)&current[2].klass, 0LL);
            UnityEngine_Rect__set_yMin(v112, v90, &methoda);
            yMax = UnityEngine_Rect__get_yMax(v113, &methoda);
            v114.fields.m_XMin = UnityEngine_Mathf__Max(yMax, *(float *)&current[2].klass, 0LL);
            UnityEngine_Rect__set_yMax(v114, v92, &methoda);
          }
          *(_DWORD *)&v100[4 * v99 + 24] = 492;
          v93 = ++v101;
          System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
            &v102,
            (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__Dispose__);
          v94 = v93;
          if ( v93 && *(_DWORD *)&v100[4 * v93 + 20] == 492 )
          {
            v94 = v93 - 1;
            v101 = v93 - 1;
          }
          v99 = v94;
          if ( !methoda.name )
            sub_B170D4();
          v95 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)methoda.name, 0LL);
          center = UnityEngine_Rect__get_center(v115, &methoda);
          if ( !v95 )
            sub_B170D4();
          v97 = 0;
          UnityEngine_Transform__set_localPosition(v95, *(UnityEngine_Vector3_o *)&center.fields.x, 0LL);
        }
      }
    }
  }
  *(_DWORD *)&v100[4 * v99 + 24] = 544;
  v98 = ++v101;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    (System_Collections_Generic_List_Enumerator_T__o *)&methoda.klass,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_SubmarineSilhouetteData__Dispose__);
  if ( v98 && *(_DWORD *)&v100[4 * v98 + 20] == 544 )
    v101 = v98 - 1;
}


void __fastcall SubmarineMapManager__AdjustSpotCollider(
        SubmarineMapManager_o *this,
        SrcSpotBasePrefab_o *spot,
        const MethodInfo *method)
{
  __int64 v5; // x1
  struct SubmarineMapDataManager_o *submarineData; // x8
  struct SubmarineSettingsManager_o *Settings_k__BackingField; // x8
  const MethodInfo_29CF778 *v8; // x2
  System_Nullable_Vector3__o centerPosition; // [xsp+0h] [xbp-40h] BYREF
  System_Nullable_Vector2__o v10; // [xsp+10h] [xbp-30h] BYREF
  System_Nullable_Vector2__o v11; // 0:x0.12
  System_Nullable_Vector3__o v12; // 0:x0.16
  UnityEngine_Vector2_o PanelUnitSize_k__BackingField; // 0:s0.4,4:s1.4
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40F7C6C & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Nullable_Vector2___ctor__, spot);
    sub_B16FFC(&Method_System_Nullable_Vector3___ctor__, v5);
    byte_40F7C6C = 1;
  }
  submarineData = this->fields.submarineData;
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
  System_Nullable_Vector2____ctor(v11, PanelUnitSize_k__BackingField, (const MethodInfo_29CF390 *)method);
  zero = UnityEngine_Vector3__get_zero(0LL);
  *(_QWORD *)&v12.fields.value.fields.x = &centerPosition;
  *(_QWORD *)&centerPosition.fields.value.fields.x = 0LL;
  *(_QWORD *)&centerPosition.fields.value.fields.z = 0LL;
  *(_QWORD *)&v12.fields.value.fields.z = Method_System_Nullable_Vector3___ctor__;
  System_Nullable_Vector3____ctor(v12, zero, v8);
  if ( !spot )
LABEL_7:
    sub_B170D4();
  SrcSpotBasePrefab__AdjustBtnColliderArea(spot, v10, centerPosition, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SubmarineMapManager__AdjustSpotPosition(
        SubmarineMapManager_o *this,
        SrcSpotBasePrefab_o *spot,
        const MethodInfo *method)
{
  struct MapControl_SpotInfo_o *mMapCtrl_SpotInfo; // x8
  SubmarineMapDataManager_o *submarineData; // x0
  SubmarineMapPanelData_o *PanelBySpotId; // x0
  struct SubmarineMapDataManager_o *v8; // x8
  float32x2_t *PositionCalculator_k__BackingField; // x8
  float v10; // s8
  MapControl_SpotInfo_o *v11; // x0
  SpotEntity_o *Mine; // x0
  SpotEntity_o *v13; // x8
  ScrTerminalMap_o *terminalMap; // x0
  float32x2_t v15; // d0
  unsigned __int32 v16; // s1
  float v17; // s2
  struct SubmarineMapDataManager_o *v18; // x8
  struct SubmarineSettingsManager_o *Settings_k__BackingField; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v21; // x2
  unsigned __int64 v22; // [xsp+0h] [xbp-30h]
  UnityEngine_Vector3_o v23; // 0:s0.4,4:s1.4,8:s2.4

  if ( !spot )
    goto LABEL_15;
  mMapCtrl_SpotInfo = spot->fields.mMapCtrl_SpotInfo;
  if ( !mMapCtrl_SpotInfo )
    goto LABEL_15;
  submarineData = this->fields.submarineData;
  if ( !submarineData )
    goto LABEL_15;
  PanelBySpotId = SubmarineMapDataManager__GetPanelBySpotId(submarineData, mMapCtrl_SpotInfo->fields.spotId, method);
  if ( !PanelBySpotId )
  {
    v11 = spot->fields.mMapCtrl_SpotInfo;
    if ( v11 )
    {
      Mine = MapControl_SpotInfo__GetMine(v11, 0LL);
      if ( Mine )
      {
        v13 = Mine;
        terminalMap = this->fields.terminalMap;
        if ( terminalMap )
        {
          *(UnityEngine_Vector3_o *)v15.n64_u64 = ScrTerminalMap__LocalPosFromCoord(
                                                    terminalMap,
                                                    (float)v13->fields.x,
                                                    (float)v13->fields.y,
                                                    0.0,
                                                    0.0,
                                                    0LL);
          v18 = this->fields.submarineData;
          if ( v18 )
          {
            Settings_k__BackingField = v18->fields._Settings_k__BackingField;
            if ( Settings_k__BackingField )
            {
              v15.n64_u32[1] = v16;
              v10 = v17 + Settings_k__BackingField->fields._BoardOffset_k__BackingField.fields.z;
              v22 = vadd_f32(
                      v15,
                      *(float32x2_t *)&Settings_k__BackingField->fields._BoardOffset_k__BackingField.fields.x).n64_u64[0];
              goto LABEL_14;
            }
          }
        }
      }
    }
LABEL_15:
    sub_B170D4();
  }
  v8 = this->fields.submarineData;
  if ( !v8 )
    goto LABEL_15;
  PositionCalculator_k__BackingField = (float32x2_t *)v8->fields._PositionCalculator_k__BackingField;
  if ( !PositionCalculator_k__BackingField )
    goto LABEL_15;
  v22 = vadd_f32(
          PositionCalculator_k__BackingField[4],
          vmul_f32(
            vmul_f32(
              PositionCalculator_k__BackingField[2],
              vcvt_f32_s32(
                vsub_s32(
                  (int32x2_t)(vshl_n_s32(*(int32x2_t *)&PanelBySpotId->fields._HIndex_k__BackingField, 1uLL).n64_u64[0] | 0x100000001LL),
                  PositionCalculator_k__BackingField[3]))),
            (float32x2_t)0x3F0000003F000000LL)).n64_u64[0];
  v10 = 0.0;
LABEL_14:
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)spot, 0LL);
  LODWORD(v23.fields.x) = v22;
  v23.fields.z = v10;
  v23.fields.y = *((float *)&v22 + 1);
  GameObjectExtensions__SetLocalPosition(gameObject, v23, 0LL);
  SubmarineMapManager__AdjustSpotCollider(this, spot, v21);
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
  int32_t eventId; // w0
  System_Int32_array *v15; // x0
  System_Int32_array *v16; // x20
  QuestReleaseMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  __int64 v21; // x4
  CommonUI_o *v22; // x19
  int32_t v23; // w20
  SubmarineMapManager___c_c *v24; // x0
  struct SubmarineMapManager___c_StaticFields *static_fields; // x8
  System_Action_o *_9__50_0; // x22
  System_String_o *v27; // x21
  Il2CppObject *v28; // x23
  struct SubmarineMapManager___c_StaticFields *v29; // x0
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  System_Nullable_float__o messagePosY; // [xsp+8h] [xbp-38h] BYREF
  System_Nullable_float__o p_messagePosY; // 0:x0.8
  System_Nullable_float__o v38; // 0:x5.8

  if ( (byte_40F7C67 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_DataManager_GetMaster_QuestReleaseMaster___, v3);
    sub_B16FFC(&DataManager_TypeInfo, v4);
    sub_B16FFC(&Method_System_Nullable_float___ctor__, v5);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_B16FFC(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v7);
    sub_B16FFC(&SingletonTemplate_clsQuestCheck__TypeInfo, v8);
    sub_B16FFC(&Method_SubmarineMapManager___c__CheckNewPlayableEventQuest_b__50_0__, v9);
    sub_B16FFC(&SubmarineMapManager___c_TypeInfo, v10);
    sub_B16FFC(&StringLiteral_6830/*"GET_EVENT_POINT_AFTER_DIALOG_MESSAGE_PANEL_MAP"*/, v11);
    byte_40F7C67 = 1;
  }
  if ( (BYTE3(SingletonTemplate_clsQuestCheck__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_clsQuestCheck__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_clsQuestCheck__TypeInfo);
  }
  v12 = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  eventId = SubmarineMapManager__get_eventId(this, v13);
  if ( !v12 )
    goto LABEL_27;
  v15 = clsQuestCheck__GetNewPlayableEventQuestId(v12, eventId, 0LL);
  if ( !v15 )
    goto LABEL_27;
  v16 = v15;
  if ( !*(_QWORD *)&v15->max_length )
    return;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (QuestReleaseMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_QuestReleaseMaster___);
  if ( !v16->max_length )
    goto LABEL_28;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_27;
  if ( !QuestReleaseMaster__IsContainCondType(Master_WarQuestSelectionMaster, v16->m_Items[1], 143, 0LL) )
    return;
  Master_WarQuestSelectionMaster = (QuestReleaseMaster_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !v16->max_length )
  {
LABEL_28:
    sub_B17100(Master_WarQuestSelectionMaster, v18, v19);
    sub_B170A0();
  }
  v22 = (CommonUI_o *)Master_WarQuestSelectionMaster;
  v23 = v16->m_Items[1];
  v24 = SubmarineMapManager___c_TypeInfo;
  if ( (BYTE3(SubmarineMapManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SubmarineMapManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SubmarineMapManager___c_TypeInfo);
    v24 = SubmarineMapManager___c_TypeInfo;
  }
  static_fields = v24->static_fields;
  _9__50_0 = static_fields->__9__50_0;
  v27 = (System_String_o *)StringLiteral_6830/*"GET_EVENT_POINT_AFTER_DIALOG_MESSAGE_PANEL_MAP"*/;
  if ( !_9__50_0 )
  {
    if ( (BYTE3(v24->vtable._0_Equals.methodPtr) & 4) != 0 && !v24->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v24);
      static_fields = SubmarineMapManager___c_TypeInfo->static_fields;
    }
    v28 = (Il2CppObject *)static_fields->__9;
    _9__50_0 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v18, v19, v20, v21);
    System_Action___ctor(_9__50_0, v28, Method_SubmarineMapManager___c__CheckNewPlayableEventQuest_b__50_0__, 0LL);
    v29 = SubmarineMapManager___c_TypeInfo->static_fields;
    v29->__9__50_0 = _9__50_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v29->__9__50_0,
      (System_Int32_array **)_9__50_0,
      v30,
      v31,
      v32,
      v33,
      v34,
      v35);
  }
  p_messagePosY = (System_Nullable_float__o)&messagePosY;
  messagePosY = 0LL;
  System_Nullable_float____ctor(p_messagePosY, 30.0, (const MethodInfo_296A23C *)Method_System_Nullable_float___ctor__);
  if ( !v22 )
LABEL_27:
    sub_B170D4();
  v38 = messagePosY;
  CommonUI__OpenQuestNewPlayableDialog(v22, v23, v27, _9__50_0, 0, v38, 0LL);
}


void __fastcall SubmarineMapManager__ClickPanel(
        SubmarineMapManager_o *this,
        SubmarineMapPanelData_o *panelData,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x20
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  const MethodInfo *v25; // x2
  SubmarineMapPanelData_o *v26; // x1
  _QWORD *v27; // x0
  System_Reflection_MethodBase_o *v28; // x0
  _QWORD *v29; // x0
  System_Reflection_MethodBase_o *v30; // x0
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x3
  __int64 v34; // x4
  struct SubmarineMapDataManager_o *submarineData; // x8
  struct SubmarineSettingsManager_o *Settings_k__BackingField; // x8
  float PanelSelectDelaySecond_k__BackingField; // s8
  __int64 v38; // x21
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x3
  __int64 v42; // x4
  System_Delegate_o *v43; // x23
  SchedulerTaskBase_TaskCallback_o *v44; // x24
  System_Int32_array **v45; // x0
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  TaskScheduler_o *taskScheduler; // x19
  __int64 v53; // x2
  __int64 v54; // x0
  __int64 v55; // x20
  __int64 v56; // x0
  __int64 v57; // x1
  System_String_array **v58; // x2
  System_String_array **v59; // x3
  System_Boolean_array **v60; // x4
  System_Int32_array **v61; // x5
  System_Int32_array *v62; // x6
  System_Int32_array *v63; // x7
  SubmarineMapPanelData_o *v64; // x0
  const MethodInfo *v65; // x1

  if ( (byte_40F7C5D & 1) == 0 )
  {
    sub_B16FFC(&SchedulerTaskBase___TypeInfo, panelData);
    sub_B16FFC(&SchedulerTaskWaitTime_TypeInfo, v7);
    sub_B16FFC(&Method_SubmarineMapManager_ClickPanel__, v8);
    sub_B16FFC(&SchedulerTaskBase_TaskCallback_TypeInfo, v9);
    sub_B16FFC(&Method_SubmarineMapManager___c__DisplayClass36_0__ClickPanel_b__0__, v10);
    sub_B16FFC(&SubmarineMapManager___c__DisplayClass36_0_TypeInfo, v11);
    byte_40F7C5D = 1;
  }
  v12 = sub_B170CC(SubmarineMapManager___c__DisplayClass36_0_TypeInfo, panelData, method, v3, v4);
  SubmarineMapManager___c__DisplayClass36_0___ctor((SubmarineMapManager___c__DisplayClass36_0_o *)v12, 0LL);
  if ( !v12 )
    goto LABEL_25;
  *(_QWORD *)(v12 + 16) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v12 + 16), (System_Int32_array **)this, v13, v14, v15, v16, v17, v18);
  *(_QWORD *)(v12 + 24) = panelData;
  sub_B16F98((BattleServantConfConponent_o *)(v12 + 24), (System_Int32_array **)panelData, v19, v20, v21, v22, v23, v24);
  v26 = *(SubmarineMapPanelData_o **)(v12 + 24);
  if ( !v26 || !this->fields.isEnableClickPanel )
    return;
  if ( !v26->fields._IsOpened_k__BackingField || !v26->fields._HasEnemyParts_k__BackingField )
  {
    if ( !v26->fields._IsScannable_k__BackingField )
      return;
    SubmarineMapManager__ShowSelectedPanelEffect(this, v26, v25);
    v29 = Method_SubmarineMapManager_ClickPanel__;
    if ( (*((_BYTE *)Method_SubmarineMapManager_ClickPanel__ + 75) & 2) != 0 )
      v29 = (_QWORD *)sub_B17004(Method_SubmarineMapManager_ClickPanel__);
    v30 = (System_Reflection_MethodBase_o *)sub_B16FE0(v29, v29[3]);
    OverwriteAssetSoundName__PlaySystemSe(v30, 0, 0LL);
    submarineData = this->fields.submarineData;
    if ( submarineData )
    {
      Settings_k__BackingField = submarineData->fields._Settings_k__BackingField;
      if ( Settings_k__BackingField )
      {
        PanelSelectDelaySecond_k__BackingField = Settings_k__BackingField->fields._PanelSelectDelaySecond_k__BackingField;
        v38 = sub_B170CC(SchedulerTaskWaitTime_TypeInfo, v31, v32, v33, v34);
        SchedulerTaskWaitTime___ctor((SchedulerTaskWaitTime_o *)v38, PanelSelectDelaySecond_k__BackingField, 0LL);
        if ( v38 )
        {
          v43 = *(System_Delegate_o **)(v38 + 32);
          v44 = (SchedulerTaskBase_TaskCallback_o *)sub_B170CC(
                                                      SchedulerTaskBase_TaskCallback_TypeInfo,
                                                      v39,
                                                      v40,
                                                      v41,
                                                      v42);
          SchedulerTaskBase_TaskCallback___ctor(
            v44,
            (Il2CppObject *)v12,
            Method_SubmarineMapManager___c__DisplayClass36_0__ClickPanel_b__0__,
            0LL);
          v45 = (System_Int32_array **)System_Delegate__Combine(v43, (System_Delegate_o *)v44, 0LL);
          if ( v45 && *v45 != (System_Int32_array *)SchedulerTaskBase_TaskCallback_TypeInfo )
          {
            v64 = (SubmarineMapPanelData_o *)sub_B173C8(v45);
            SubmarineMapPanelData__get_IsEnemyVisible(v64, v65);
            return;
          }
          *(_QWORD *)(v38 + 32) = v45;
          sub_B16F98((BattleServantConfConponent_o *)(v38 + 32), v45, v46, v47, v48, v49, v50, v51);
          taskScheduler = this->fields.taskScheduler;
          v54 = sub_B17014(SchedulerTaskBase___TypeInfo, 1LL, v53);
          if ( v54 )
          {
            v55 = v54;
            v56 = sub_B170BC(v38, *(_QWORD *)(*(_QWORD *)v54 + 64LL));
            if ( !v56 )
            {
              sub_B170F4(0LL);
              sub_B170A0();
            }
            if ( !*(_DWORD *)(v55 + 24) )
            {
              sub_B17100(v56, v57, v58);
              sub_B170A0();
            }
            *(_QWORD *)(v55 + 32) = v38;
            sub_B16F98(
              (BattleServantConfConponent_o *)(v55 + 32),
              (System_Int32_array **)v38,
              v58,
              v59,
              v60,
              v61,
              v62,
              v63);
            if ( taskScheduler )
            {
              TaskScheduler__AddTask(taskScheduler, 0, (SchedulerTaskBase_array *)v55, 0LL);
              return;
            }
          }
        }
      }
    }
LABEL_25:
    sub_B170D4();
  }
  v27 = Method_SubmarineMapManager_ClickPanel__;
  if ( (*((_BYTE *)Method_SubmarineMapManager_ClickPanel__ + 75) & 2) != 0 )
    v27 = (_QWORD *)sub_B17004(Method_SubmarineMapManager_ClickPanel__);
  v28 = (System_Reflection_MethodBase_o *)sub_B16FE0(v27, v27[3]);
  OverwriteAssetSoundName__PlaySystemSe(v28, 2, 0LL);
}


System_Collections_IEnumerator_o *__fastcall SubmarineMapManager__CoInitRequest(
        SubmarineMapManager_o *this,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x21
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

  if ( (byte_40F7C54 & 1) == 0 )
  {
    sub_B16FFC(&SubmarineMapManager__CoInitRequest_d__21_TypeInfo, finishCallback);
    byte_40F7C54 = 1;
  }
  v7 = sub_B170CC(SubmarineMapManager__CoInitRequest_d__21_TypeInfo, finishCallback, method, v3, v4);
  SubmarineMapManager__CoInitRequest_d__21___ctor((SubmarineMapManager__CoInitRequest_d__21_o *)v7, 0, 0LL);
  if ( !v7 )
    sub_B170D4();
  *(_QWORD *)(v7 + 32) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v7 + 32), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v7 + 40) = finishCallback;
  sub_B16F98(
    (BattleServantConfConponent_o *)(v7 + 40),
    (System_Int32_array **)finishCallback,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  return (System_Collections_IEnumerator_o *)v7;
}


System_Collections_IEnumerator_o *__fastcall SubmarineMapManager__CoOnAfterSpotCreated(
        SubmarineMapManager_o *this,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x21
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

  if ( (byte_40F7C55 & 1) == 0 )
  {
    sub_B16FFC(&SubmarineMapManager__CoOnAfterSpotCreated_d__24_TypeInfo, finishCallback);
    byte_40F7C55 = 1;
  }
  v7 = sub_B170CC(SubmarineMapManager__CoOnAfterSpotCreated_d__24_TypeInfo, finishCallback, method, v3, v4);
  SubmarineMapManager__CoOnAfterSpotCreated_d__24___ctor(
    (SubmarineMapManager__CoOnAfterSpotCreated_d__24_o *)v7,
    0,
    0LL);
  if ( !v7 )
    sub_B170D4();
  *(_QWORD *)(v7 + 32) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v7 + 32), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v7 + 40) = finishCallback;
  sub_B16F98(
    (BattleServantConfConponent_o *)(v7 + 40),
    (System_Int32_array **)finishCallback,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  return (System_Collections_IEnumerator_o *)v7;
}


void __fastcall SubmarineMapManager__ConstructOnPartOfDialog(SubmarineMapManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  UnityEngine_Object_o *scanConfirmDialog; // x21
  struct SubmarineMapAssetManager_o *assetManager; // x8
  UnityEngine_UI_Dropdown_DropdownItem_o *ScanConfirmDialogPrefab_k__BackingField; // x21
  UnityEngine_GameObject_o *v10; // x0
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
  UnityEngine_GameObject_o *v21; // x0
  struct SubmarineSelectScannerDialog_o *v22; // x0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  UnityEngine_Object_o *newScannerDialog; // x21
  struct SubmarineMapAssetManager_o *v30; // x8
  UnityEngine_UI_Dropdown_DropdownItem_o *NewScannerDialogPrefab_k__BackingField; // x21
  UnityEngine_GameObject_o *v32; // x0
  struct SubmarineNewScannerDialog_o *v33; // x0
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7

  if ( (byte_40F7C71 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_SubmarineNewScannerDialog___, method);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_SubmarineScanConfirmDialog___, v3);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_SubmarineSelectScannerDialog___, v4);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject___, v5);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v6);
    byte_40F7C71 = 1;
  }
  scanConfirmDialog = (UnityEngine_Object_o *)this->fields.scanConfirmDialog;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(scanConfirmDialog, 0LL, 0LL) )
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
    v10 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                        ScanConfirmDialogPrefab_k__BackingField,
                                        (const MethodInfo_19DE20C *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !v10 )
      goto LABEL_34;
    Component_srcLineSprite = (struct SubmarineScanConfirmDialog_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                       v10,
                                                                       (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_SubmarineScanConfirmDialog___);
    this->fields.scanConfirmDialog = Component_srcLineSprite;
    sub_B16F98(
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
  if ( UnityEngine_Object__op_Equality(selectScannerDialog, 0LL, 0LL) )
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
    v21 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                        SelectScannerDialogPrefab_k__BackingField,
                                        (const MethodInfo_19DE20C *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !v21 )
      goto LABEL_34;
    v22 = (struct SubmarineSelectScannerDialog_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                     v21,
                                                     (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_SubmarineSelectScannerDialog___);
    this->fields.selectScannerDialog = v22;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.selectScannerDialog,
      (System_Int32_array **)v22,
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
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(newScannerDialog, 0LL, 0LL) )
  {
    v30 = this->fields.assetManager;
    if ( v30 )
    {
      NewScannerDialogPrefab_k__BackingField = (UnityEngine_UI_Dropdown_DropdownItem_o *)v30->fields._NewScannerDialogPrefab_k__BackingField;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v32 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                          NewScannerDialogPrefab_k__BackingField,
                                          (const MethodInfo_19DE20C *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( v32 )
      {
        v33 = (struct SubmarineNewScannerDialog_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      v32,
                                                      (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_SubmarineNewScannerDialog___);
        this->fields.newScannerDialog = v33;
        sub_B16F98(
          (BattleServantConfConponent_o *)&this->fields.newScannerDialog,
          (System_Int32_array **)v33,
          v34,
          v35,
          v36,
          v37,
          v38,
          v39);
        EventMapManagerBase__LocateDialogToUiRoot(
          (EventMapManagerBase_o *)this,
          (BaseDialog_o *)this->fields.newScannerDialog,
          0LL);
        return;
      }
    }
LABEL_34:
    sub_B170D4();
  }
}


void __fastcall SubmarineMapManager__CreateAssetManagerIfNotExists(
        SubmarineMapManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  BattleServantConfConponent_o *p_assetManager; // x19
  struct SubmarineMapAssetManager_o *assetManager; // t1
  SubmarineMapAssetManager_o *v8; // x20
  const MethodInfo *v9; // x1
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  const MethodInfo *v16; // x1

  if ( (byte_40F7C5A & 1) == 0 )
  {
    sub_B16FFC(&SubmarineMapAssetManager_TypeInfo, method);
    byte_40F7C5A = 1;
  }
  assetManager = this->fields.assetManager;
  p_assetManager = (BattleServantConfConponent_o *)&this->fields.assetManager;
  if ( !assetManager )
  {
    v8 = (SubmarineMapAssetManager_o *)sub_B170CC(SubmarineMapAssetManager_TypeInfo, method, v2, v3, v4);
    SubmarineMapAssetManager___ctor(v8, v9);
    p_assetManager->klass = (BattleServantConfConponent_c *)v8;
    sub_B16F98(p_assetManager, (System_Int32_array **)v8, v10, v11, v12, v13, v14, v15);
    if ( !p_assetManager->klass )
      sub_B170D4();
    SubmarineMapAssetManager__Initialize((SubmarineMapAssetManager_o *)p_assetManager->klass, v16);
  }
}


void __fastcall SubmarineMapManager__CreateContainers(SubmarineMapManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct SubmarineMapAssetManager_o *assetManager; // x8
  struct ScrTerminalMap_o *terminalMap; // x9
  UnityEngine_GameObject_o *mapButtonGrid; // x0
  UILabel_o *PanelContainerPrefab_k__BackingField; // x20
  UnityEngine_Transform_o *transform; // x21
  struct UnityEngine_GameObject_o *v9; // x0
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  struct SubmarineMapAssetManager_o *v16; // x8
  struct ScrTerminalMap_o *v17; // x9
  UnityEngine_GameObject_o *v18; // x0
  UILabel_o *EffectContainerPrefab_k__BackingField; // x20
  UnityEngine_Transform_o *v20; // x0
  struct UnityEngine_GameObject_o *v21; // x0
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  struct SubmarineMapAssetManager_o *v28; // x8
  struct ScrTerminalMap_o *v29; // x9
  UnityEngine_GameObject_o *v30; // x0
  UILabel_o *GridLinePrefab_k__BackingField; // x20
  UnityEngine_Transform_o *v32; // x0
  struct UnityEngine_GameObject_o *v33; // x0
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7

  if ( (byte_40F7C68 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject____66874888, method);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v3);
    byte_40F7C68 = 1;
  }
  assetManager = this->fields.assetManager;
  if ( !assetManager )
    goto LABEL_16;
  terminalMap = this->fields.terminalMap;
  if ( !terminalMap )
    goto LABEL_16;
  mapButtonGrid = (UnityEngine_GameObject_o *)terminalMap->fields.mapButtonGrid;
  if ( !mapButtonGrid )
    goto LABEL_16;
  PanelContainerPrefab_k__BackingField = (UILabel_o *)assetManager->fields._PanelContainerPrefab_k__BackingField;
  transform = UnityEngine_GameObject__get_transform(mapButtonGrid, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v9 = (struct UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_UILabel_(
                                            PanelContainerPrefab_k__BackingField,
                                            transform,
                                            (const MethodInfo_19DE348 *)Method_UnityEngine_Object_Instantiate_GameObject____66874888);
  this->fields.panelContainer = v9;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.panelContainer,
    (System_Int32_array **)v9,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  v16 = this->fields.assetManager;
  if ( !v16 )
    goto LABEL_16;
  v17 = this->fields.terminalMap;
  if ( !v17 )
    goto LABEL_16;
  v18 = (UnityEngine_GameObject_o *)v17->fields.mapButtonGrid;
  if ( !v18 )
    goto LABEL_16;
  EffectContainerPrefab_k__BackingField = (UILabel_o *)v16->fields._EffectContainerPrefab_k__BackingField;
  v20 = UnityEngine_GameObject__get_transform(v18, 0LL);
  v21 = (struct UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_UILabel_(
                                             EffectContainerPrefab_k__BackingField,
                                             v20,
                                             (const MethodInfo_19DE348 *)Method_UnityEngine_Object_Instantiate_GameObject____66874888);
  this->fields.effectContainer = v21;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.effectContainer,
    (System_Int32_array **)v21,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  v28 = this->fields.assetManager;
  if ( !v28
    || (v29 = this->fields.terminalMap) == 0LL
    || (v30 = (UnityEngine_GameObject_o *)v29->fields.mapButtonGrid) == 0LL )
  {
LABEL_16:
    sub_B170D4();
  }
  GridLinePrefab_k__BackingField = (UILabel_o *)v28->fields._GridLinePrefab_k__BackingField;
  v32 = UnityEngine_GameObject__get_transform(v30, 0LL);
  v33 = (struct UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_UILabel_(
                                             GridLinePrefab_k__BackingField,
                                             v32,
                                             (const MethodInfo_19DE348 *)Method_UnityEngine_Object_Instantiate_GameObject____66874888);
  this->fields.gridLine = v33;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.gridLine,
    (System_Int32_array **)v33,
    v34,
    v35,
    v36,
    v37,
    v38,
    v39);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_SchedulerTaskBase__o *__fastcall SubmarineMapManager__CreateHideEnemyOccupiedPanelTasks(
        SubmarineMapManager_o *this,
        int32_t beforeClearQuestId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v28; // x19
  struct SubmarineMapDataManager_o *submarineData; // x8
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *SilhouetteDataList_k__BackingField; // x0
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x3
  __int64 v34; // x4
  __int64 v35; // x23
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  System_Int32_array **current; // x1
  SubmarineSilhouetteData_o **v43; // x22
  const MethodInfo *v44; // x2
  SubmarineSilhouetteData_o *v45; // x0
  const MethodInfo *v46; // x3
  const MethodInfo *v47; // x2
  SubmarineMapDataManager_o *v48; // x0
  System_Collections_Generic_IEnumerable_T__o *SilhouetteOccupiedPanels; // x25
  __int64 v50; // x1
  __int64 v51; // x2
  __int64 v52; // x3
  __int64 v53; // x4
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v54; // x24
  __int64 v55; // x1
  __int64 v56; // x2
  __int64 v57; // x3
  __int64 v58; // x4
  SubmarineMapManager___c_c *v59; // x0
  struct SubmarineMapManager___c_StaticFields *static_fields; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__102_0; // x25
  Il2CppObject *v62; // x26
  struct SubmarineMapManager___c_StaticFields *v63; // x0
  System_String_array **v64; // x2
  System_String_array **v65; // x3
  System_Boolean_array **v66; // x4
  System_Int32_array **v67; // x5
  System_Int32_array *v68; // x6
  System_Int32_array *v69; // x7
  System_Collections_Generic_List_T__o *All; // x0
  System_Collections_Generic_List_WarBoardUiData_SaveData__o *v71; // x24
  MapControl_MapInfo_o *mapInfo; // x0
  System_Collections_Generic_List_MapControl_SpotInfo__o *SpotList; // x25
  __int64 v74; // x1
  __int64 v75; // x2
  __int64 v76; // x3
  __int64 v77; // x4
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v78; // x26
  UnityEngine_GameObject_o *rootSpotP; // x0
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *v81; // x23
  int32_t SpotId_k__BackingField; // w22
  System_String_o *GobjName; // x1
  UnityEngine_Transform_o *v84; // x0
  const MethodInfo *v85; // x1
  int v86; // s0
  struct SubmarineMapDataManager_o *v89; // x8
  struct SubmarineSettingsManager_o *Settings_k__BackingField; // x8
  EventMissionProgressRequest_Argument_ProgressData_o *MoveCameraToPositionTask; // x1
  SubmarineMapPanelData_array *v92; // x1
  const MethodInfo *v93; // x2
  EventMissionProgressRequest_Argument_ProgressData_o *OpenPanelsAndRevealSpotsTask; // x1
  System_Collections_Generic_List_Enumerator_T__o v96; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v97; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_40F7C8A & 1) == 0 )
  {
    sub_B16FFC(
      &Method_System_Collections_Generic_List_Enumerator_SubmarineSilhouetteData__Dispose__,
      *(_QWORD *)&beforeClearQuestId);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_SubmarineSilhouetteData__MoveNext__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_SubmarineSilhouetteData__get_Current__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_SchedulerTaskBase__Add__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_SubmarineMapPanelData__FindAll__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_MapControl_SpotInfo__Find__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_SubmarineSilhouetteData__GetEnumerator__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_SubmarineMapPanelData__ToArray__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__, v14);
    sub_B16FFC(&Method_System_Collections_Generic_List_SubmarineMapPanelData___ctor___66746952, v15);
    sub_B16FFC(&Method_System_Collections_Generic_List_SubmarineMapPanelData__get_Count__, v16);
    sub_B16FFC(&System_Collections_Generic_List_SubmarineMapPanelData__TypeInfo, v17);
    sub_B16FFC(&System_Collections_Generic_List_SchedulerTaskBase__TypeInfo, v18);
    sub_B16FFC(&Method_System_Predicate_MapControl_SpotInfo___ctor__, v19);
    sub_B16FFC(&Method_System_Predicate_SubmarineMapPanelData___ctor__, v20);
    sub_B16FFC(&System_Predicate_SubmarineMapPanelData__TypeInfo, v21);
    sub_B16FFC(&System_Predicate_MapControl_SpotInfo__TypeInfo, v22);
    sub_B16FFC(&SrcSpotBasePrefab_TypeInfo, v23);
    sub_B16FFC(&Method_SubmarineMapManager___c__CreateHideEnemyOccupiedPanelTasks_b__102_0__, v24);
    sub_B16FFC(&Method_SubmarineMapManager___c__DisplayClass102_0__CreateHideEnemyOccupiedPanelTasks_b__1__, v25);
    sub_B16FFC(&SubmarineMapManager___c__DisplayClass102_0_TypeInfo, v26);
    sub_B16FFC(&SubmarineMapManager___c_TypeInfo, v27);
    byte_40F7C8A = 1;
  }
  memset(&v97, 0, sizeof(v97));
  v28 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_SchedulerTaskBase__TypeInfo,
                                                                                                  *(_QWORD *)&beforeClearQuestId,
                                                                                                  method,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v28,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
  submarineData = this->fields.submarineData;
  if ( !submarineData
    || (SilhouetteDataList_k__BackingField = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)submarineData->fields._SilhouetteDataList_k__BackingField) == 0LL )
  {
    sub_B170D4();
  }
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v96,
    SilhouetteDataList_k__BackingField,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_SubmarineSilhouetteData__GetEnumerator__);
  v97 = v96;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v97,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_SubmarineSilhouetteData__MoveNext__) )
  {
    v35 = sub_B170CC(SubmarineMapManager___c__DisplayClass102_0_TypeInfo, v31, v32, v33, v34);
    SubmarineMapManager___c__DisplayClass102_0___ctor((SubmarineMapManager___c__DisplayClass102_0_o *)v35, 0LL);
    if ( !v35 )
      sub_B170D4();
    current = (System_Int32_array **)v97.fields.current;
    *(_QWORD *)(v35 + 16) = v97.fields.current;
    v43 = (SubmarineSilhouetteData_o **)(v35 + 16);
    sub_B16F98((BattleServantConfConponent_o *)(v35 + 16), current, v36, v37, v38, v39, v40, v41);
    v45 = *(SubmarineSilhouetteData_o **)(v35 + 16);
    if ( !v45 )
      sub_B170D4();
    if ( SubmarineSilhouetteData__HasClearCondQuestId(v45, beforeClearQuestId, v44) )
    {
      if ( !*v43 )
        sub_B170D4();
      if ( SubmarineMapDataManager__IsClearEachQuests((*v43)->fields._ObjectQuestIds_k__BackingField, -1, 0, v46) )
      {
        v48 = this->fields.submarineData;
        if ( !v48 )
          sub_B170D4();
        SilhouetteOccupiedPanels = (System_Collections_Generic_IEnumerable_T__o *)SubmarineMapDataManager__GetSilhouetteOccupiedPanels(
                                                                                    v48,
                                                                                    *v43,
                                                                                    v47);
        v54 = (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)sub_B170CC(
                                                                                System_Collections_Generic_List_SubmarineMapPanelData__TypeInfo,
                                                                                v50,
                                                                                v51,
                                                                                v52,
                                                                                v53);
        System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
          v54,
          SilhouetteOccupiedPanels,
          (const MethodInfo_2F2520C *)Method_System_Collections_Generic_List_SubmarineMapPanelData___ctor___66746952);
        v59 = SubmarineMapManager___c_TypeInfo;
        if ( (BYTE3(SubmarineMapManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SubmarineMapManager___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SubmarineMapManager___c_TypeInfo);
          v59 = SubmarineMapManager___c_TypeInfo;
        }
        static_fields = v59->static_fields;
        _9__102_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)static_fields->__9__102_0;
        if ( !_9__102_0 )
        {
          if ( (BYTE3(v59->vtable._0_Equals.methodPtr) & 4) != 0 && !v59->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v59);
            static_fields = SubmarineMapManager___c_TypeInfo->static_fields;
          }
          v62 = (Il2CppObject *)static_fields->__9;
          _9__102_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B170CC(
                                                                                 System_Predicate_SubmarineMapPanelData__TypeInfo,
                                                                                 v55,
                                                                                 v56,
                                                                                 v57,
                                                                                 v58);
          System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
            _9__102_0,
            v62,
            Method_SubmarineMapManager___c__CreateHideEnemyOccupiedPanelTasks_b__102_0__,
            (const MethodInfo_2B0B204 *)Method_System_Predicate_SubmarineMapPanelData___ctor__);
          v63 = SubmarineMapManager___c_TypeInfo->static_fields;
          v63->__9__102_0 = (struct System_Predicate_SubmarineMapPanelData__o *)_9__102_0;
          sub_B16F98(
            (BattleServantConfConponent_o *)&v63->__9__102_0,
            (System_Int32_array **)_9__102_0,
            v64,
            v65,
            v66,
            v67,
            v68,
            v69);
        }
        if ( !v54 )
          sub_B170D4();
        All = System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo___FindAll(
                (System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *)v54,
                (System_Predicate_T__o *)_9__102_0,
                (const MethodInfo_2F26660 *)Method_System_Collections_Generic_List_SubmarineMapPanelData__FindAll__);
        v71 = (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)All;
        if ( !All )
          sub_B170D4();
        if ( All->fields._size >= 1 )
        {
          mapInfo = this->fields.mapInfo;
          if ( !mapInfo )
            sub_B170D4();
          SpotList = MapControl_MapInfo__GetSpotList(mapInfo, 0LL);
          v78 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B170CC(
                                                                           System_Predicate_MapControl_SpotInfo__TypeInfo,
                                                                           v74,
                                                                           v75,
                                                                           v76,
                                                                           v77);
          System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
            v78,
            (Il2CppObject *)v35,
            Method_SubmarineMapManager___c__DisplayClass102_0__CreateHideEnemyOccupiedPanelTasks_b__1__,
            (const MethodInfo_2B0B204 *)Method_System_Predicate_MapControl_SpotInfo___ctor__);
          if ( !SpotList )
            sub_B170D4();
          if ( System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                 (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)SpotList,
                 (System_Predicate_T__o *)v78,
                 (const MethodInfo_2F26598 *)Method_System_Collections_Generic_List_MapControl_SpotInfo__Find__) )
          {
            rootSpotP = this->fields.rootSpotP;
            if ( !rootSpotP )
              sub_B170D4();
            transform = UnityEngine_GameObject__get_transform(rootSpotP, 0LL);
            if ( !*v43 )
              sub_B170D4();
            v81 = transform;
            SpotId_k__BackingField = (*v43)->fields._SpotId_k__BackingField;
            if ( (BYTE3(SrcSpotBasePrefab_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !SrcSpotBasePrefab_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(SrcSpotBasePrefab_TypeInfo);
            }
            GobjName = SrcSpotBasePrefab__GetGobjName(SpotId_k__BackingField, 0LL);
            if ( !v81 )
              sub_B170D4();
            v84 = UnityEngine_Transform__Find(v81, GobjName, 0LL);
            if ( !v84 )
              sub_B170D4();
            *(UnityEngine_Vector3_o *)&v86 = UnityEngine_Transform__get_localPosition(v84, 0LL);
            v89 = this->fields.submarineData;
            if ( !v89 )
              sub_B170D4();
            Settings_k__BackingField = v89->fields._Settings_k__BackingField;
            if ( !Settings_k__BackingField )
              sub_B170D4();
            MoveCameraToPositionTask = (EventMissionProgressRequest_Argument_ProgressData_o *)SubmarineMapManager__CreateMoveCameraToPositionTask(
                                                                                                this,
                                                                                                *(UnityEngine_Vector3_o *)&v86,
                                                                                                1.0,
                                                                                                Settings_k__BackingField->fields._OpenPanelCameraDuration_k__BackingField,
                                                                                                v85);
            if ( !v28 )
              sub_B170D4();
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v28,
              MoveCameraToPositionTask,
              (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_SchedulerTaskBase__Add__);
          }
          v92 = (SubmarineMapPanelData_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                 v71,
                                                 (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_SubmarineMapPanelData__ToArray__);
          OpenPanelsAndRevealSpotsTask = (EventMissionProgressRequest_Argument_ProgressData_o *)SubmarineMapManager__CreateOpenPanelsAndRevealSpotsTask(
                                                                                                  this,
                                                                                                  v92,
                                                                                                  v93);
          if ( !v28 )
            sub_B170D4();
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v28,
            OpenPanelsAndRevealSpotsTask,
            (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_SchedulerTaskBase__Add__);
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v97,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_SubmarineSilhouetteData__Dispose__);
  return (System_Collections_Generic_List_SchedulerTaskBase__o *)v28;
}


SchedulerTaskBase_o *__fastcall SubmarineMapManager__CreateHitObstractTask(
        SubmarineMapManager_o *this,
        SubmarineMapPanelData_o *panelData,
        float waitTime,
        const MethodInfo *method)
{
  __int64 v4; // x3
  __int64 v5; // x4
  SchedulerTaskNone_o *v6; // x19

  if ( (byte_40F7C87 & 1) == 0 )
  {
    sub_B16FFC(&SchedulerTaskNone_TypeInfo, panelData);
    byte_40F7C87 = 1;
  }
  v6 = (SchedulerTaskNone_o *)sub_B170CC(SchedulerTaskNone_TypeInfo, panelData, method, v4, v5);
  SchedulerTaskNone___ctor(v6, 0LL);
  return (SchedulerTaskBase_o *)v6;
}


// local variable allocation has failed, the output may be wrong!
SchedulerTaskBase_o *__fastcall SubmarineMapManager__CreateMoveCameraToPositionTask(
        SubmarineMapManager_o *this,
        UnityEngine_Vector3_o destPos,
        float size,
        float second,
        const MethodInfo *method)
{
  const MethodInfo_29CF390 *v5; // x2
  float y; // s10
  float x; // s11
  __int64 v11; // x1
  __int64 v12; // x1
  MapCamera_o *mapCamera; // x19
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  MapCameraPerformance_o *v18; // x0
  SchedulerTaskBase_o *v19; // x20
  System_Nullable_float__o v21; // [xsp+8h] [xbp-48h] BYREF
  System_Nullable_Vector2__o v22; // [xsp+10h] [xbp-40h] BYREF
  System_Nullable_float__o v23; // 0:x0.8
  System_Nullable_float__o v24; // 0:x4.8
  System_Nullable_Vector2__o v25; // 0:x0.12
  UnityEngine_Vector2_o v26; // 0:s0.4,4:s1.4

  y = destPos.fields.y;
  x = destPos.fields.x;
  if ( (byte_40F7C80 & 1) == 0 )
  {
    sub_B16FFC(&MapCameraPerformance_TypeInfo, method);
    sub_B16FFC(&Method_System_Nullable_float___ctor__, v11);
    sub_B16FFC(&Method_System_Nullable_Vector2___ctor__, v12);
    byte_40F7C80 = 1;
  }
  mapCamera = this->fields.mapCamera;
  v25.fields.value = (struct UnityEngine_Vector2_o)&v22;
  v26.fields.x = x;
  v26.fields.y = y;
  *(_DWORD *)&v25.fields.has_value = Method_System_Nullable_Vector2___ctor__;
  *(_DWORD *)&v22.fields.has_value = 0;
  v22.fields.value = 0LL;
  System_Nullable_Vector2____ctor(v25, v26, v5);
  v23 = (System_Nullable_float__o)&v21;
  v21 = 0LL;
  System_Nullable_float____ctor(v23, size, (const MethodInfo_296A23C *)Method_System_Nullable_float___ctor__);
  v18 = (MapCameraPerformance_o *)sub_B170CC(MapCameraPerformance_TypeInfo, v14, v15, v16, v17);
  v24 = v21;
  v19 = (SchedulerTaskBase_o *)v18;
  MapCameraPerformance___ctor(v18, mapCamera, second, v22, v24, 15, 0LL);
  return v19;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SubmarineMapManager__CreateNeverOpenSurrounds(SubmarineMapManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct SubmarineMapAssetManager_o *assetManager; // x8
  UnityEngine_Object_o *PanelPrefab_k__BackingField; // x20
  UnityEngine_Object_o *panelContainer; // x20
  UnityEngine_Object_o *closedPanelTexture; // x20
  struct SubmarineMapDataManager_o *submarineData; // x8
  ObjectDomain_array *NeverOpenSurroundsDomains; // x0
  const MethodInfo *v12; // x1
  __int64 v13; // x24
  ObjectDomain_array *v14; // x20
  il2cpp_array_size_t v15; // w25
  struct SubmarineMapAssetManager_o *v16; // x8
  UnityEngine_GameObject_o *v17; // x0
  ObjectDomain_o *v18; // x21
  UILabel_o *v19; // x22
  UnityEngine_Transform_o *transform; // x23
  UnityEngine_GameObject_o *v21; // x0
  UnityEngine_GameObject_o *v22; // x22
  UnityEngine_Transform_o *v23; // x0
  UnityEngine_Transform_o *v24; // x23
  int v25; // s0
  srcLineSprite_o *Component_srcLineSprite; // x0
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  SubmarineMapPanelComponent_o *v35; // x22
  const MethodInfo *v36; // x2
  const MethodInfo *v37; // x3
  const MethodInfo *v38; // x2
  __int64 v39; // x0
  __int64 v40; // x2
  SubmarineMapDataManager_o *v41; // x0
  System_Int32_array *EmptyPanelUniqueIds; // x0
  struct SubmarineMapDataManager_o *v43; // x8
  struct SubmarinePanelPositionCalculator_o *PositionCalculator_k__BackingField; // x9
  System_Int32_array *v45; // x20
  int32_t v46; // w21
  int32_t v47; // w22
  int v48; // w28
  struct SubmarineMapDataManager_o *v49; // x8
  struct SubmarinePanelPositionCalculator_o *v50; // x0
  unsigned __int64 v51; // d0 OVERLAPPED
  int v52; // s1
  int v53; // s2
  ObjectDomain_o *ClosedPanelDomain; // x0
  struct SubmarineMapAssetManager_o *v55; // x8
  ObjectDomain_o *v56; // x23
  UnityEngine_GameObject_o *v57; // x0
  UILabel_o *v58; // x24
  UnityEngine_Transform_o *v59; // x25
  UnityEngine_GameObject_o *v60; // x0
  UnityEngine_GameObject_o *v61; // x24
  UnityEngine_Transform_o *v62; // x0
  UnityEngine_Transform_o *v63; // x25
  int v64; // s0
  srcLineSprite_o *v67; // x0
  System_String_array **v68; // x2
  System_String_array **v69; // x3
  System_Boolean_array **v70; // x4
  System_Int32_array **v71; // x5
  System_Int32_array *v72; // x6
  System_Int32_array *v73; // x7
  SubmarineMapPanelComponent_o *v74; // x24
  const MethodInfo *v75; // x2
  const MethodInfo *v76; // x3
  const MethodInfo *v77; // x2

  if ( (byte_40F7C6A & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_SubmarineMapPanelComponent___, method);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject____66874888, v3);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v4);
    sub_B16FFC(&PanelUniqueIDUtil_TypeInfo, v5);
    byte_40F7C6A = 1;
  }
  assetManager = this->fields.assetManager;
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
    panelContainer = (UnityEngine_Object_o *)this->fields.panelContainer;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Equality(panelContainer, 0LL, 0LL) )
    {
      closedPanelTexture = (UnityEngine_Object_o *)this->fields.closedPanelTexture;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( !UnityEngine_Object__op_Equality(closedPanelTexture, 0LL, 0LL) )
      {
        submarineData = this->fields.submarineData;
        if ( !submarineData )
          goto LABEL_59;
        NeverOpenSurroundsDomains = ClosePanelTextureUtil__CreateNeverOpenSurroundsDomains(
                                      submarineData->fields._PositionCalculator_k__BackingField,
                                      this->fields.closedPanelTexture,
                                      0LL);
        if ( !NeverOpenSurroundsDomains )
          goto LABEL_59;
        v13 = *(_QWORD *)&NeverOpenSurroundsDomains->max_length;
        v14 = NeverOpenSurroundsDomains;
        if ( (int)v13 >= 1 )
        {
          v15 = 0;
          while ( 1 )
          {
            v16 = this->fields.assetManager;
            if ( !v16 )
              break;
            v17 = this->fields.panelContainer;
            if ( !v17 )
              break;
            v18 = v14->m_Items[v15];
            v19 = (UILabel_o *)v16->fields._PanelPrefab_k__BackingField;
            transform = UnityEngine_GameObject__get_transform(v17, 0LL);
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            v21 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_UILabel_(
                                                v19,
                                                transform,
                                                (const MethodInfo_19DE348 *)Method_UnityEngine_Object_Instantiate_GameObject____66874888);
            if ( !v21 )
              break;
            v22 = v21;
            v23 = UnityEngine_GameObject__get_transform(v21, 0LL);
            if ( !v18 )
              break;
            v24 = v23;
            *(UnityEngine_Vector3_o *)&v25 = ObjectDomain__get_center(v18, 0LL);
            if ( !v24 )
              break;
            UnityEngine_Transform__set_localPosition(v24, *(UnityEngine_Vector3_o *)&v25, 0LL);
            Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                        v22,
                                        (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_SubmarineMapPanelComponent___);
            if ( !Component_srcLineSprite )
              break;
            v35 = (SubmarineMapPanelComponent_o *)Component_srcLineSprite;
            Component_srcLineSprite->fields.mcLineSprite = 0LL;
            sub_B16F98(
              (BattleServantConfConponent_o *)&Component_srcLineSprite->fields.mcLineSprite,
              0LL,
              v29,
              v30,
              v31,
              v32,
              v33,
              v34);
            SubmarineMapPanelComponent__SetSize(v35, v18, v36);
            SubmarineMapPanelComponent__SetClosedPanelTexture(v35, v18, this->fields.closedPanelTexture, v37);
            SubmarineMapPanelComponent__SetClosedPanelVisible(v35, 1, v38);
            if ( (int)++v15 >= (int)v13 )
              goto LABEL_32;
            if ( v15 >= v14->max_length )
            {
              sub_B17100(v39, v12, v40);
              sub_B170A0();
            }
          }
LABEL_59:
          sub_B170D4();
        }
LABEL_32:
        v41 = this->fields.submarineData;
        if ( !v41 )
          goto LABEL_59;
        EmptyPanelUniqueIds = SubmarineMapDataManager__GetEmptyPanelUniqueIds(v41, v12);
        v43 = this->fields.submarineData;
        if ( !v43 )
          goto LABEL_59;
        PositionCalculator_k__BackingField = v43->fields._PositionCalculator_k__BackingField;
        if ( !PositionCalculator_k__BackingField )
          goto LABEL_59;
        v45 = EmptyPanelUniqueIds;
        v46 = 0;
        while ( v46 < PositionCalculator_k__BackingField->fields._HorizontalPanelNum_k__BackingField )
        {
          v47 = 0;
          v48 = 1;
          while ( v47 < PositionCalculator_k__BackingField->fields._VerticalPanelNum_k__BackingField )
          {
            if ( (BYTE3(PanelUniqueIDUtil_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !PanelUniqueIDUtil_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(PanelUniqueIDUtil_TypeInfo);
            }
            if ( PanelUniqueIDUtil__HasID(v46, v47, v45, 0LL) )
            {
              v49 = this->fields.submarineData;
              if ( !v49 )
                goto LABEL_59;
              v50 = v49->fields._PositionCalculator_k__BackingField;
              if ( !v50 )
                goto LABEL_59;
              v51 = vadd_f32(
                      *(float32x2_t *)&v50->fields._OffsetX_k__BackingField,
                      vmul_f32(
                        vmul_f32(
                          (float32x2_t)v50->fields._PanelUnitSize_k__BackingField,
                          vcvt_f32_s32(
                            vsub_s32(
                              (int32x2_t)__PAIR64__(v48, (2 * v46) | 1u),
                              *(int32x2_t *)&v50->fields._HorizontalPanelNum_k__BackingField))),
                        (float32x2_t)0x3F0000003F000000LL)).n64_u64[0];
              v52 = HIDWORD(v51);
              v53 = 0;
              ClosedPanelDomain = ClosePanelTextureUtil__CreateClosedPanelDomain(
                                    *(UnityEngine_Vector3_o *)&v51,
                                    v50,
                                    0LL);
              v55 = this->fields.assetManager;
              if ( !v55 )
                goto LABEL_59;
              v56 = ClosedPanelDomain;
              v57 = this->fields.panelContainer;
              if ( !v57 )
                goto LABEL_59;
              v58 = (UILabel_o *)v55->fields._PanelPrefab_k__BackingField;
              v59 = UnityEngine_GameObject__get_transform(v57, 0LL);
              if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              }
              v60 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_UILabel_(
                                                  v58,
                                                  v59,
                                                  (const MethodInfo_19DE348 *)Method_UnityEngine_Object_Instantiate_GameObject____66874888);
              if ( !v60 )
                goto LABEL_59;
              v61 = v60;
              v62 = UnityEngine_GameObject__get_transform(v60, 0LL);
              if ( !v56 )
                goto LABEL_59;
              v63 = v62;
              *(UnityEngine_Vector3_o *)&v64 = ObjectDomain__get_center(v56, 0LL);
              if ( !v63 )
                goto LABEL_59;
              UnityEngine_Transform__set_localPosition(v63, *(UnityEngine_Vector3_o *)&v64, 0LL);
              v67 = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                      v61,
                      (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_SubmarineMapPanelComponent___);
              if ( !v67 )
                goto LABEL_59;
              v74 = (SubmarineMapPanelComponent_o *)v67;
              v67->fields.mcLineSprite = 0LL;
              sub_B16F98((BattleServantConfConponent_o *)&v67->fields.mcLineSprite, 0LL, v68, v69, v70, v71, v72, v73);
              SubmarineMapPanelComponent__SetSize(v74, v56, v75);
              SubmarineMapPanelComponent__SetClosedPanelTexture(v74, v56, this->fields.closedPanelTexture, v76);
              SubmarineMapPanelComponent__SetClosedPanelVisible(v74, 1, v77);
            }
            v43 = this->fields.submarineData;
            if ( v43 )
            {
              PositionCalculator_k__BackingField = v43->fields._PositionCalculator_k__BackingField;
              ++v47;
              v48 += 2;
              if ( PositionCalculator_k__BackingField )
                continue;
            }
            goto LABEL_59;
          }
          PositionCalculator_k__BackingField = v43->fields._PositionCalculator_k__BackingField;
          ++v46;
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
  UnityEngine_Transform_o *transform; // x0
  const MethodInfo_29CF778 *v20; // x2
  ComponentPool_CommonEffectComponent__o *effectScanedPanelObjPool; // x23
  UnityEngine_Transform_o *v22; // x22
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x3
  __int64 v26; // x4
  SchedulerTaskCommonEffect_o *v27; // x0
  SchedulerTaskCommonEffect_o *v28; // x21
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x3
  __int64 v32; // x4
  System_Delegate_o *StartCallback; // x23
  SchedulerTaskBase_TaskCallback_o *v34; // x24
  System_Int32_array **v35; // x0
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  __int64 v42; // x2
  SchedulerTaskBase_array *v43; // x22
  __int64 v44; // x1
  __int64 v45; // x2
  __int64 v46; // x3
  __int64 v47; // x4
  SchedulerTaskWaitTime_o *v48; // x23
  __int64 v49; // x0
  __int64 v50; // x1
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  __int64 v62; // x1
  __int64 v63; // x2
  __int64 v64; // x3
  __int64 v65; // x4
  SchedulerTaskOrthostichy_o *v66; // x21
  __int64 v67; // x1
  __int64 v68; // x2
  __int64 v69; // x3
  __int64 v70; // x4
  struct SubmarineMapDataManager_o *submarineData; // x8
  struct SubmarineSettingsManager_o *Settings_k__BackingField; // x8
  float v73; // s8
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v74; // x22
  __int64 v75; // x1
  __int64 v76; // x2
  __int64 v77; // x3
  __int64 v78; // x4
  SchedulerTaskWaitTime_o *v79; // x23
  const MethodInfo *v80; // x2
  System_Collections_Generic_IEnumerable_T__o *RevealSpotOnPanelTasks; // x0
  __int64 v82; // x1
  __int64 v83; // x2
  __int64 v84; // x3
  __int64 v85; // x4
  SchedulerTaskOrthostichy_o *v86; // x19
  __int64 v87; // x2
  System_String_array **v88; // x3
  System_Boolean_array **v89; // x4
  System_Int32_array **v90; // x5
  System_Int32_array *v91; // x6
  System_Int32_array *v92; // x7
  __int64 v93; // x20
  System_String_array **v94; // x3
  System_Boolean_array **v95; // x4
  System_Int32_array **v96; // x5
  System_Int32_array *v97; // x6
  System_Int32_array *v98; // x7
  __int64 v99; // x1
  __int64 v100; // x2
  __int64 v101; // x3
  __int64 v102; // x4
  SchedulerTaskParallel_o *v103; // x19
  SubmarineMapManager_o *v105; // x0
  SubmarineMapPanelData_array *v106; // x1
  const MethodInfo *v107; // x2
  System_Nullable_Vector3__o v108; // [xsp+20h] [xbp-60h] BYREF
  System_Nullable_Vector3__o v109; // 0:x0.16
  System_Nullable_Vector3__o v110; // 0:x5.16
  UnityEngine_Vector3_o LocalPosition_k__BackingField; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40F7C84 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_SchedulerTaskBase__AddRange__, panelData);
    sub_B16FFC(&Method_System_Collections_Generic_List_SchedulerTaskBase__Add__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__, v8);
    sub_B16FFC(&System_Collections_Generic_List_SchedulerTaskBase__TypeInfo, v9);
    sub_B16FFC(&Method_System_Nullable_Vector3___ctor__, v10);
    sub_B16FFC(&SchedulerTaskBase___TypeInfo, v11);
    sub_B16FFC(&SchedulerTaskCommonEffect_TypeInfo, v12);
    sub_B16FFC(&SchedulerTaskOrthostichy_TypeInfo, v13);
    sub_B16FFC(&SchedulerTaskParallel_TypeInfo, v14);
    sub_B16FFC(&SchedulerTaskWaitTime_TypeInfo, v15);
    sub_B16FFC(&Method_SubmarineMapPanelData_OpenPanel__, v16);
    sub_B16FFC(&SchedulerTaskBase_TaskCallback_TypeInfo, v17);
    byte_40F7C84 = 1;
  }
  effectContainer = this->fields.effectContainer;
  if ( !effectContainer )
    goto LABEL_25;
  transform = UnityEngine_GameObject__get_transform(effectContainer, 0LL);
  if ( !panelData )
    goto LABEL_25;
  effectScanedPanelObjPool = this->fields.effectScanedPanelObjPool;
  LocalPosition_k__BackingField = panelData->fields._LocalPosition_k__BackingField;
  v22 = transform;
  *(_QWORD *)&v109.fields.value.fields.x = &v108;
  *(_QWORD *)&v108.fields.value.fields.x = 0LL;
  *(_QWORD *)&v108.fields.value.fields.z = 0LL;
  *(_QWORD *)&v109.fields.value.fields.z = Method_System_Nullable_Vector3___ctor__;
  System_Nullable_Vector3____ctor(v109, LocalPosition_k__BackingField, v20);
  v27 = (SchedulerTaskCommonEffect_o *)sub_B170CC(SchedulerTaskCommonEffect_TypeInfo, v23, v24, v25, v26);
  *(_QWORD *)&v110.fields.value.fields.x = 0LL;
  *(_QWORD *)&v110.fields.value.fields.z = 0LL;
  v28 = v27;
  SchedulerTaskCommonEffect___ctor_29754916(
    v27,
    v22,
    effectScanedPanelObjPool,
    v108,
    v110,
    (System_Nullable_Vector3__o)0,
    1,
    0LL);
  if ( !v28 )
    goto LABEL_25;
  StartCallback = (System_Delegate_o *)v28->fields.StartCallback;
  v34 = (SchedulerTaskBase_TaskCallback_o *)sub_B170CC(SchedulerTaskBase_TaskCallback_TypeInfo, v29, v30, v31, v32);
  SchedulerTaskBase_TaskCallback___ctor(v34, (Il2CppObject *)panelData, Method_SubmarineMapPanelData_OpenPanel__, 0LL);
  v35 = (System_Int32_array **)System_Delegate__Combine(StartCallback, (System_Delegate_o *)v34, 0LL);
  if ( !v35 || *v35 == (System_Int32_array *)SchedulerTaskBase_TaskCallback_TypeInfo )
  {
    v28->fields.StartCallback = (struct SchedulerTaskBase_TaskCallback_o *)v35;
    sub_B16F98((BattleServantConfConponent_o *)&v28->fields.StartCallback, v35, v36, v37, v38, v39, v40, v41);
    v43 = (SchedulerTaskBase_array *)sub_B17014(SchedulerTaskBase___TypeInfo, 2LL, v42);
    v48 = (SchedulerTaskWaitTime_o *)sub_B170CC(SchedulerTaskWaitTime_TypeInfo, v44, v45, v46, v47);
    SchedulerTaskWaitTime___ctor(v48, waitTime, 0LL);
    if ( v43 )
    {
      if ( v48 )
      {
        v49 = sub_B170BC(v48, v43->obj.klass->_1.element_class);
        if ( !v49 )
          goto LABEL_27;
      }
      if ( !v43->max_length )
        goto LABEL_26;
      v43->m_Items[0] = (SchedulerTaskBase_o *)v48;
      sub_B16F98((BattleServantConfConponent_o *)v43->m_Items, (System_Int32_array **)v48, v51, v52, v53, v54, v55, v56);
      v49 = sub_B170BC(v28, v43->obj.klass->_1.element_class);
      if ( !v49 )
        goto LABEL_27;
      if ( v43->max_length <= 1 )
        goto LABEL_26;
      v43->m_Items[1] = (SchedulerTaskBase_o *)v28;
      sub_B16F98(
        (BattleServantConfConponent_o *)&v43->m_Items[1],
        (System_Int32_array **)v28,
        v51,
        v57,
        v58,
        v59,
        v60,
        v61);
      v66 = (SchedulerTaskOrthostichy_o *)sub_B170CC(SchedulerTaskOrthostichy_TypeInfo, v62, v63, v64, v65);
      SchedulerTaskOrthostichy___ctor(v66, v43, 0LL);
      submarineData = this->fields.submarineData;
      if ( submarineData )
      {
        Settings_k__BackingField = submarineData->fields._Settings_k__BackingField;
        if ( Settings_k__BackingField )
        {
          v73 = Settings_k__BackingField->fields._SecondOfOpenPanelToRevealSpot_k__BackingField + waitTime;
          v74 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(System_Collections_Generic_List_SchedulerTaskBase__TypeInfo, v67, v68, v69, v70);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
            v74,
            (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
          v79 = (SchedulerTaskWaitTime_o *)sub_B170CC(SchedulerTaskWaitTime_TypeInfo, v75, v76, v77, v78);
          SchedulerTaskWaitTime___ctor(v79, v73, 0LL);
          if ( v74 )
          {
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v74,
              (EventMissionProgressRequest_Argument_ProgressData_o *)v79,
              (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_SchedulerTaskBase__Add__);
            RevealSpotOnPanelTasks = (System_Collections_Generic_IEnumerable_T__o *)SubmarineMapManager__CreateRevealSpotOnPanelTasks(
                                                                                      this,
                                                                                      panelData,
                                                                                      v80);
            System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
              (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v74,
              RevealSpotOnPanelTasks,
              (const MethodInfo_2F25F28 *)Method_System_Collections_Generic_List_SchedulerTaskBase__AddRange__);
            v86 = (SchedulerTaskOrthostichy_o *)sub_B170CC(SchedulerTaskOrthostichy_TypeInfo, v82, v83, v84, v85);
            SchedulerTaskOrthostichy___ctor_17170372(
              v86,
              (System_Collections_Generic_List_SchedulerTaskBase__o *)v74,
              0LL);
            v49 = sub_B17014(SchedulerTaskBase___TypeInfo, 2LL, v87);
            if ( v49 )
            {
              v93 = v49;
              if ( !v66 || (v49 = sub_B170BC(v66, *(_QWORD *)(*(_QWORD *)v49 + 64LL))) != 0 )
              {
                if ( !*(_DWORD *)(v93 + 24) )
                  goto LABEL_26;
                *(_QWORD *)(v93 + 32) = v66;
                sub_B16F98(
                  (BattleServantConfConponent_o *)(v93 + 32),
                  (System_Int32_array **)v66,
                  v51,
                  v88,
                  v89,
                  v90,
                  v91,
                  v92);
                if ( !v86 || (v49 = sub_B170BC(v86, *(_QWORD *)(*(_QWORD *)v93 + 64LL))) != 0 )
                {
                  if ( *(_DWORD *)(v93 + 24) > 1u )
                  {
                    *(_QWORD *)(v93 + 40) = v86;
                    sub_B16F98(
                      (BattleServantConfConponent_o *)(v93 + 40),
                      (System_Int32_array **)v86,
                      v51,
                      v94,
                      v95,
                      v96,
                      v97,
                      v98);
                    v103 = (SchedulerTaskParallel_o *)sub_B170CC(SchedulerTaskParallel_TypeInfo, v99, v100, v101, v102);
                    SchedulerTaskParallel___ctor(v103, (SchedulerTaskBase_array *)v93, 0LL);
                    return (SchedulerTaskBase_o *)v103;
                  }
LABEL_26:
                  sub_B17100(v49, v50, v51);
                  sub_B170A0();
                }
              }
LABEL_27:
              sub_B170F4(v49);
              sub_B170A0();
            }
          }
        }
      }
    }
LABEL_25:
    sub_B170D4();
  }
  v105 = (SubmarineMapManager_o *)sub_B173C8(v35);
  return SubmarineMapManager__CreateOpenPanelsAndRevealSpotsTask(v105, v106, v107);
}


SchedulerTaskBase_o *__fastcall SubmarineMapManager__CreateOpenPanelsAndRevealSpotsTask(
        SubmarineMapManager_o *this,
        SubmarineMapPanelData_array *panelDataArray,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v10; // x21
  __int64 v11; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  __int64 v16; // x8
  unsigned __int64 v17; // x22
  EventMissionProgressRequest_Argument_ProgressData_o *OpenPanelAndRevealSpotTask; // x0
  SchedulerTaskParallel_o *v19; // x19

  if ( (byte_40F7C85 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_SchedulerTaskBase__Add__, panelDataArray);
    sub_B16FFC(&Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__, v7);
    sub_B16FFC(&System_Collections_Generic_List_SchedulerTaskBase__TypeInfo, v8);
    sub_B16FFC(&SchedulerTaskParallel_TypeInfo, v9);
    byte_40F7C85 = 1;
  }
  v10 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_SchedulerTaskBase__TypeInfo,
                                                                                                  panelDataArray,
                                                                                                  method,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v10,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
  if ( !panelDataArray )
    goto LABEL_11;
  v16 = *(_QWORD *)&panelDataArray->max_length;
  if ( (int)v16 >= 1 )
  {
    v17 = 0LL;
    while ( 1 )
    {
      if ( v17 >= (unsigned int)v16 )
      {
        sub_B17100(v11, v12, v13);
        sub_B170A0();
      }
      OpenPanelAndRevealSpotTask = (EventMissionProgressRequest_Argument_ProgressData_o *)SubmarineMapManager__CreateOpenPanelAndRevealSpotTask(
                                                                                            this,
                                                                                            panelDataArray->m_Items[v17],
                                                                                            0.0,
                                                                                            v13);
      if ( !v10 )
        break;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v10,
        OpenPanelAndRevealSpotTask,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_SchedulerTaskBase__Add__);
      LODWORD(v16) = panelDataArray->max_length;
      if ( (__int64)++v17 >= (int)v16 )
        goto LABEL_9;
    }
LABEL_11:
    sub_B170D4();
  }
LABEL_9:
  v19 = (SchedulerTaskParallel_o *)sub_B170CC(SchedulerTaskParallel_TypeInfo, v12, v13, v14, v15);
  SchedulerTaskParallel___ctor_17170684(v19, (System_Collections_Generic_List_SchedulerTaskBase__o *)v10, 0LL);
  return (SchedulerTaskBase_o *)v19;
}


void __fastcall SubmarineMapManager__CreatePanels(SubmarineMapManager_o *this, const MethodInfo *method)
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
  struct SubmarineMapAssetManager_o *assetManager; // x8
  UnityEngine_Object_o *PanelPrefab_k__BackingField; // x20
  UnityEngine_Object_o *panelContainer; // x20
  UnityEngine_Object_o *closedPanelTexture; // x20
  struct SubmarineMapDataManager_o *submarineData; // x8
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *PanelDataList_k__BackingField; // x0
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
  __int64 v49; // x3
  __int64 v50; // x4
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v51; // x21
  const MethodInfo *v52; // x2
  System_Collections_Generic_List_Enumerator_T__o v53; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v54; // [xsp+20h] [xbp-90h] BYREF
  UnityEngine_Vector3_o v55; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v56; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40F7C69 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_SubmarineMapPanelData___ctor__, method);
    sub_B16FFC(&System_Action_SubmarineMapPanelData__TypeInfo, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__Dispose__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__MoveNext__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__get_Current__, v6);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_SubmarineMapPanelComponent___, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_SubmarineMapPanelData__GetEnumerator__, v8);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject____66874888, v9);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v10);
    sub_B16FFC(&Method_SubmarineMapManager_ClickPanel__, v11);
    byte_40F7C69 = 1;
  }
  memset(&v54, 0, sizeof(v54));
  assetManager = this->fields.assetManager;
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
    panelContainer = (UnityEngine_Object_o *)this->fields.panelContainer;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Equality(panelContainer, 0LL, 0LL) )
    {
      closedPanelTexture = (UnityEngine_Object_o *)this->fields.closedPanelTexture;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( !UnityEngine_Object__op_Equality(closedPanelTexture, 0LL, 0LL) )
      {
        submarineData = this->fields.submarineData;
        if ( submarineData )
        {
          PanelDataList_k__BackingField = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)submarineData->fields._PanelDataList_k__BackingField;
          if ( PanelDataList_k__BackingField )
          {
            System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
              &v53,
              PanelDataList_k__BackingField,
              (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_SubmarineMapPanelData__GetEnumerator__);
            v54 = v53;
            while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                      &v54,
                      (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__MoveNext__) )
            {
              v18 = this->fields.assetManager;
              if ( !v18 )
                sub_B170D4();
              v19 = this->fields.panelContainer;
              if ( !v19 )
                sub_B170D4();
              current = v54.fields.current;
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
                                                  (const MethodInfo_19DE348 *)Method_UnityEngine_Object_Instantiate_GameObject____66874888);
              v24 = v23;
              if ( !v23 )
                sub_B170D4();
              Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                          v23,
                                          (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_SubmarineMapPanelComponent___);
              v26 = this->fields.submarineData;
              if ( !v26 )
                sub_B170D4();
              if ( !current )
                sub_B170D4();
              v27 = Component_srcLineSprite;
              PositionCalculator_k__BackingField = v26->fields._PositionCalculator_k__BackingField;
              if ( !PositionCalculator_k__BackingField )
                sub_B170D4();
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
              v55.fields.z = 0.0;
              v55.fields.x = v29;
              v55.fields.y = v30;
              ClosedPanelDomain = ClosePanelTextureUtil__CreateClosedPanelDomain(
                                    v55,
                                    PositionCalculator_k__BackingField,
                                    0LL);
              if ( !v27 )
                sub_B170D4();
              v38 = ClosedPanelDomain;
              v27->fields.mcLineSprite = 0LL;
              sub_B16F98((BattleServantConfConponent_o *)&v27->fields.mcLineSprite, 0LL, v32, v33, v34, v35, v36, v37);
              v56.fields.z = 0.0;
              v56.fields.x = v29;
              v56.fields.y = v30;
              GameObjectExtensions__SetLocalPosition(v24, v56, 0LL);
              SubmarineMapPanelComponent__SetSize((SubmarineMapPanelComponent_o *)v27, v38, v39);
              SubmarineMapPanelComponent__SetClosedPanelTexture(
                (SubmarineMapPanelComponent_o *)v27,
                v38,
                this->fields.closedPanelTexture,
                v40);
              current[3].klass = (Il2CppClass *)v27;
              sub_B16F98(
                (BattleServantConfConponent_o *)&current[3],
                (System_Int32_array **)v27,
                v41,
                v42,
                v43,
                v44,
                v45,
                v46);
              v51 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B170CC(
                                                                                           System_Action_SubmarineMapPanelData__TypeInfo,
                                                                                           v47,
                                                                                           v48,
                                                                                           v49,
                                                                                           v50);
              System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
                v51,
                (Il2CppObject *)this,
                (intptr_t)Method_SubmarineMapManager_ClickPanel__,
                (const MethodInfo_24B7310 *)Method_System_Action_SubmarineMapPanelData___ctor__);
              SubmarineMapPanelData__SetPanelClickAction(
                (SubmarineMapPanelData_o *)current,
                (System_Action_SubmarineMapPanelData__o *)v51,
                v52);
            }
            System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
              &v54,
              (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__Dispose__);
            return;
          }
        }
LABEL_40:
        sub_B170D4();
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
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v10; // x20
  UnityEngine_GameObject_array *Children; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x2
  int max_length; // w8
  UnityEngine_GameObject_array *v15; // x21
  unsigned int v16; // w23
  UnityEngine_GameObject_o *v17; // x0
  UnityEngine_Object_o *Component_srcLineSprite; // x22
  System_Collections_Generic_IEnumerable_T__o *RevealSpotTasks; // x0

  if ( (byte_40F7C88 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_SrcSpotBasePrefab___, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_SchedulerTaskBase__AddRange__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__, v7);
    sub_B16FFC(&System_Collections_Generic_List_SchedulerTaskBase__TypeInfo, v8);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v9);
    byte_40F7C88 = 1;
  }
  v10 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_SchedulerTaskBase__TypeInfo,
                                                                                                  method,
                                                                                                  v2,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v10,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
  Children = GameObjectExtensions__GetChildren(this->fields.rootSpotP, 0, 0LL);
  if ( !Children )
    goto LABEL_16;
  max_length = Children->max_length;
  v15 = Children;
  if ( max_length >= 1 )
  {
    v16 = 0;
    while ( 1 )
    {
      if ( v16 >= max_length )
      {
        sub_B17100(Children, v12, v13);
        sub_B170A0();
      }
      v17 = v15->m_Items[v16];
      if ( !v17 )
        break;
      Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                          v17,
                                                          (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_SrcSpotBasePrefab___);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      Children = (UnityEngine_GameObject_array *)UnityEngine_Object__op_Equality(Component_srcLineSprite, 0LL, 0LL);
      if ( ((unsigned __int8)Children & 1) == 0 )
      {
        RevealSpotTasks = (System_Collections_Generic_IEnumerable_T__o *)SubmarineMapManager__CreateRevealSpotTasks(
                                                                           this,
                                                                           (SrcSpotBasePrefab_o *)Component_srcLineSprite,
                                                                           v13);
        if ( !v10 )
          break;
        System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
          (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v10,
          RevealSpotTasks,
          (const MethodInfo_2F25F28 *)Method_System_Collections_Generic_List_SchedulerTaskBase__AddRange__);
      }
      max_length = v15->max_length;
      if ( (int)++v16 >= max_length )
        return (System_Collections_Generic_List_SchedulerTaskBase__o *)v10;
    }
LABEL_16:
    sub_B170D4();
  }
  return (System_Collections_Generic_List_SchedulerTaskBase__o *)v10;
}


System_Collections_Generic_List_SchedulerTaskBase__o *__fastcall SubmarineMapManager__CreateRevealSpotOnPanelTasks(
        SubmarineMapManager_o *this,
        SubmarineMapPanelData_o *panelData,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
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
  __int64 v18; // x22
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  __int64 v25; // x21
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x3
  __int64 v29; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v30; // x20
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x3
  __int64 v34; // x4
  SchedulerTaskNone_o *v35; // x23
  MapControl_MapInfo_o *mapInfo; // x0
  System_Collections_Generic_List_MapControl_SpotInfo__o *SpotList; // x23
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x3
  __int64 v41; // x4
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v42; // x24
  UnityEngine_GameObject_o *rootSpotP; // x0
  UnityEngine_Transform_o *transform; // x0
  __int64 v45; // x8
  UnityEngine_Transform_o *v46; // x21
  int32_t v47; // w22
  System_String_o *GobjName; // x0
  UnityEngine_Object_o *v49; // x21
  WebViewObject_o *Component_WebViewObject; // x1
  const MethodInfo *v52; // x2

  if ( (byte_40F7C83 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_SrcSpotBasePrefab___, panelData);
    sub_B16FFC(&Method_System_Collections_Generic_List_SchedulerTaskBase__Add__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_MapControl_SpotInfo__Find__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__, v9);
    sub_B16FFC(&System_Collections_Generic_List_SchedulerTaskBase__TypeInfo, v10);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v11);
    sub_B16FFC(&Method_System_Predicate_MapControl_SpotInfo___ctor__, v12);
    sub_B16FFC(&System_Predicate_MapControl_SpotInfo__TypeInfo, v13);
    sub_B16FFC(&SchedulerTaskNone_TypeInfo, v14);
    sub_B16FFC(&SrcSpotBasePrefab_TypeInfo, v15);
    sub_B16FFC(&Method_SubmarineMapManager___c__DisplayClass95_0__CreateRevealSpotOnPanelTasks_b__0__, v16);
    sub_B16FFC(&SubmarineMapManager___c__DisplayClass95_0_TypeInfo, v17);
    byte_40F7C83 = 1;
  }
  v18 = sub_B170CC(SubmarineMapManager___c__DisplayClass95_0_TypeInfo, panelData, method, v3, v4);
  SubmarineMapManager___c__DisplayClass95_0___ctor((SubmarineMapManager___c__DisplayClass95_0_o *)v18, 0LL);
  if ( !v18 )
    goto LABEL_23;
  *(_QWORD *)(v18 + 16) = panelData;
  v25 = v18 + 16;
  sub_B16F98((BattleServantConfConponent_o *)(v18 + 16), (System_Int32_array **)panelData, v19, v20, v21, v22, v23, v24);
  v30 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_SchedulerTaskBase__TypeInfo,
                                                                                                  v26,
                                                                                                  v27,
                                                                                                  v28,
                                                                                                  v29);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v30,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
  v35 = (SchedulerTaskNone_o *)sub_B170CC(SchedulerTaskNone_TypeInfo, v31, v32, v33, v34);
  SchedulerTaskNone___ctor(v35, 0LL);
  if ( !v30 )
    goto LABEL_23;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v30,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v35,
    (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_SchedulerTaskBase__Add__);
  if ( !*(_QWORD *)v25 || *(int *)(*(_QWORD *)v25 + 40LL) < 1 )
    return (System_Collections_Generic_List_SchedulerTaskBase__o *)v30;
  mapInfo = this->fields.mapInfo;
  if ( !mapInfo )
    goto LABEL_23;
  SpotList = MapControl_MapInfo__GetSpotList(mapInfo, 0LL);
  v42 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B170CC(
                                                                   System_Predicate_MapControl_SpotInfo__TypeInfo,
                                                                   v38,
                                                                   v39,
                                                                   v40,
                                                                   v41);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v42,
    (Il2CppObject *)v18,
    Method_SubmarineMapManager___c__DisplayClass95_0__CreateRevealSpotOnPanelTasks_b__0__,
    (const MethodInfo_2B0B204 *)Method_System_Predicate_MapControl_SpotInfo___ctor__);
  if ( !SpotList )
    goto LABEL_23;
  if ( !System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
          (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)SpotList,
          (System_Predicate_T__o *)v42,
          (const MethodInfo_2F26598 *)Method_System_Collections_Generic_List_MapControl_SpotInfo__Find__) )
    return (System_Collections_Generic_List_SchedulerTaskBase__o *)v30;
  rootSpotP = this->fields.rootSpotP;
  if ( !rootSpotP )
    goto LABEL_23;
  transform = UnityEngine_GameObject__get_transform(rootSpotP, 0LL);
  v45 = *(_QWORD *)v25;
  if ( !*(_QWORD *)v25 )
    goto LABEL_23;
  v46 = transform;
  v47 = *(_DWORD *)(v45 + 40);
  if ( (BYTE3(SrcSpotBasePrefab_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SrcSpotBasePrefab_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SrcSpotBasePrefab_TypeInfo);
  }
  GobjName = SrcSpotBasePrefab__GetGobjName(v47, 0LL);
  if ( !v46 )
    goto LABEL_23;
  v49 = (UnityEngine_Object_o *)UnityEngine_Transform__Find(v46, GobjName, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(v49, 0LL, 0LL) )
    return (System_Collections_Generic_List_SchedulerTaskBase__o *)v30;
  if ( !v49 )
LABEL_23:
    sub_B170D4();
  Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                              (UnityEngine_Component_o *)v49,
                              (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_SrcSpotBasePrefab___);
  return SubmarineMapManager__CreateRevealSpotTasks(this, (SrcSpotBasePrefab_o *)Component_WebViewObject, v52);
}


System_Collections_Generic_List_SchedulerTaskBase__o *__fastcall SubmarineMapManager__CreateRevealSpotTasks(
        SubmarineMapManager_o *this,
        SrcSpotBasePrefab_o *spot,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v13; // x20
  struct MapControl_SpotInfo_o *mMapCtrl_SpotInfo; // x0
  SpotEntity_o *Mine; // x22
  QuestTree_o *v16; // x0
  const MethodInfo *v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  __int64 v21; // x4
  __int64 v22; // x21
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  QuestTree_o *v29; // x0
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x3
  __int64 v33; // x4
  __int64 v34; // x21
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7

  if ( (byte_40F7C89 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_SchedulerTaskBase__Add__, spot);
    sub_B16FFC(&Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__, v7);
    sub_B16FFC(&System_Collections_Generic_List_SchedulerTaskBase__TypeInfo, v8);
    sub_B16FFC(&Method_SingletonTemplate_QuestTree__get_Instance__, v9);
    sub_B16FFC(&SingletonTemplate_QuestTree__TypeInfo, v10);
    sub_B16FFC(&SubmarineLightenSpotPerformance_TypeInfo, v11);
    sub_B16FFC(&SubmarineRevealSpotPerformance_TypeInfo, v12);
    byte_40F7C89 = 1;
  }
  v13 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_SchedulerTaskBase__TypeInfo,
                                                                                                  spot,
                                                                                                  method,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v13,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
  if ( !spot )
    goto LABEL_19;
  mMapCtrl_SpotInfo = spot->fields.mMapCtrl_SpotInfo;
  if ( !mMapCtrl_SpotInfo )
    goto LABEL_19;
  if ( mMapCtrl_SpotInfo->fields.dispType )
    return (System_Collections_Generic_List_SchedulerTaskBase__o *)v13;
  Mine = MapControl_SpotInfo__GetMine(mMapCtrl_SpotInfo, 0LL);
  if ( (BYTE3(SingletonTemplate_QuestTree__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_QuestTree__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_QuestTree__TypeInfo);
  }
  v16 = (QuestTree_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !v16 )
    goto LABEL_19;
  if ( !QuestTree__IsSpotSatisfyingDisplayCond(v16, Mine, 0, 0LL) )
    return (System_Collections_Generic_List_SchedulerTaskBase__o *)v13;
  SubmarineMapManager__AdjustSpotPosition(this, spot, v17);
  v22 = sub_B170CC(SubmarineRevealSpotPerformance_TypeInfo, v18, v19, v20, v21);
  SchedulerTaskBase___ctor((SchedulerTaskBase_o *)v22, 0LL);
  *(_QWORD *)(v22 + 48) = spot;
  sub_B16F98((BattleServantConfConponent_o *)(v22 + 48), (System_Int32_array **)spot, v23, v24, v25, v26, v27, v28);
  if ( !v13 )
    goto LABEL_19;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v13,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v22,
    (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_SchedulerTaskBase__Add__);
  if ( (BYTE3(SingletonTemplate_QuestTree__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_QuestTree__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_QuestTree__TypeInfo);
  }
  v29 = (QuestTree_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !v29 )
LABEL_19:
    sub_B170D4();
  if ( QuestTree__IsSpotSatisfyingActiveCond(v29, Mine, 0LL) )
  {
    v34 = sub_B170CC(SubmarineLightenSpotPerformance_TypeInfo, v30, v31, v32, v33);
    SchedulerTaskBase___ctor((SchedulerTaskBase_o *)v34, 0LL);
    *(_QWORD *)(v34 + 48) = spot;
    sub_B16F98((BattleServantConfConponent_o *)(v34 + 48), (System_Int32_array **)spot, v35, v36, v37, v38, v39, v40);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v13,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v34,
      (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_SchedulerTaskBase__Add__);
  }
  return (System_Collections_Generic_List_SchedulerTaskBase__o *)v13;
}


// local variable allocation has failed, the output may be wrong!
SchedulerTaskBase_o *__fastcall SubmarineMapManager__CreateScanOpenPanelTask(
        SubmarineMapManager_o *this,
        int32_t scanId,
        SubmarineMapPanelData_o *panelData,
        const MethodInfo *method)
{
  __int64 v4; // x4
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v26; // x20
  const MethodInfo *v27; // x2
  struct SubmarineMapDataManager_o *submarineData; // x8
  SubmarineSettingsManager_o *Settings_k__BackingField; // x0
  float ScanOpenPanelInterval; // s8
  const MethodInfo *v31; // x3
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x3
  __int64 v35; // x4
  System_Collections_Generic_List_SubmarineScanEvent__o *ScanEvents; // x21
  SubmarineMapManager___c_c *v37; // x8
  struct SubmarineMapManager___c_StaticFields *static_fields; // x9
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__98_0; // x22
  Il2CppObject *v40; // x23
  struct SubmarineMapManager___c_StaticFields *v41; // x0
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  System_Collections_Generic_List_T__o *All; // x0
  __int64 v49; // x1
  __int64 v50; // x2
  __int64 v51; // x3
  __int64 v52; // x4
  SubmarineMapManager___c_c *v53; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v54; // x21
  struct SubmarineMapManager___c_StaticFields *v55; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__98_1; // x22
  Il2CppObject *v57; // x23
  struct SubmarineMapManager___c_StaticFields *v58; // x0
  System_String_array **v59; // x2
  System_String_array **v60; // x3
  System_Boolean_array **v61; // x4
  System_Int32_array **v62; // x5
  System_Int32_array *v63; // x6
  System_Int32_array *v64; // x7
  int32_t v65; // w23
  __int64 v66; // x1
  __int64 v67; // x2
  __int64 v68; // x3
  __int64 v69; // x4
  SubmarineMapManager___c__DisplayClass98_0_o *v70; // x22
  __int64 v71; // x1
  __int64 v72; // x2
  __int64 v73; // x3
  __int64 v74; // x4
  int v75; // w27
  int v76; // w25
  float v77; // s9
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v78; // x23
  System_Collections_Generic_List_T__o *v79; // x23
  __int64 v80; // x1
  __int64 v81; // x2
  __int64 v82; // x3
  __int64 v83; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v84; // x0
  const MethodInfo *v85; // x3
  Il2CppObject *current; // x23
  SubmarineMapDataManager_o *v87; // x0
  SubmarineMapPanelData_o *PanelByIndices; // x0
  const MethodInfo *v89; // x2
  float v90; // s0
  EventMissionProgressRequest_Argument_ProgressData_o *HitObstractTask; // x1
  int v92; // w8
  int v93; // w8
  SchedulerTaskParallel_o *v94; // x19
  _BYTE v96[28]; // [xsp+0h] [xbp-A0h] BYREF
  int v97; // [xsp+1Ch] [xbp-84h]
  System_Collections_Generic_List_Enumerator_T__o v98; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_40F7C86 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Linq_Enumerable_Max_SubmarineScanEvent___, *(_QWORD *)&scanId);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_SubmarineScanEvent__Dispose__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_SubmarineScanEvent__MoveNext__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_SubmarineScanEvent__get_Current__, v10);
    sub_B16FFC(&Method_System_Func_SubmarineScanEvent__int___ctor__, v11);
    sub_B16FFC(&System_Func_SubmarineScanEvent__int__TypeInfo, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_SchedulerTaskBase__Add__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_SubmarineScanEvent__FindAll__, v14);
    sub_B16FFC(&Method_System_Collections_Generic_List_SubmarineScanEvent__GetEnumerator__, v15);
    sub_B16FFC(&Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__, v16);
    sub_B16FFC(&System_Collections_Generic_List_SchedulerTaskBase__TypeInfo, v17);
    sub_B16FFC(&Method_System_Predicate_SubmarineScanEvent___ctor__, v18);
    sub_B16FFC(&System_Predicate_SubmarineScanEvent__TypeInfo, v19);
    sub_B16FFC(&SchedulerTaskParallel_TypeInfo, v20);
    sub_B16FFC(&Method_SubmarineMapManager___c__CreateScanOpenPanelTask_b__98_0__, v21);
    sub_B16FFC(&Method_SubmarineMapManager___c__CreateScanOpenPanelTask_b__98_1__, v22);
    sub_B16FFC(&Method_SubmarineMapManager___c__DisplayClass98_0__CreateScanOpenPanelTask_b__2__, v23);
    sub_B16FFC(&SubmarineMapManager___c__DisplayClass98_0_TypeInfo, v24);
    sub_B16FFC(&SubmarineMapManager___c_TypeInfo, v25);
    byte_40F7C86 = 1;
  }
  memset(&v98, 0, sizeof(v98));
  v97 = 0;
  v26 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_SchedulerTaskBase__TypeInfo,
                                                                                                  *(_QWORD *)&scanId,
                                                                                                  panelData,
                                                                                                  method,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v26,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
  submarineData = this->fields.submarineData;
  if ( !submarineData )
    goto LABEL_47;
  Settings_k__BackingField = submarineData->fields._Settings_k__BackingField;
  if ( !Settings_k__BackingField )
    goto LABEL_47;
  ScanOpenPanelInterval = SubmarineSettingsManager__GetScanOpenPanelInterval(Settings_k__BackingField, scanId, v27);
  ScanEvents = SubmarineDataHelperScan__CreateScanEvents(scanId, panelData, this->fields.submarineData, v31);
  v37 = SubmarineMapManager___c_TypeInfo;
  if ( (BYTE3(SubmarineMapManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SubmarineMapManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SubmarineMapManager___c_TypeInfo);
    v37 = SubmarineMapManager___c_TypeInfo;
  }
  static_fields = v37->static_fields;
  _9__98_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)static_fields->__9__98_0;
  if ( !_9__98_0 )
  {
    if ( (BYTE3(v37->vtable._0_Equals.methodPtr) & 4) != 0 && !v37->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v37);
      static_fields = SubmarineMapManager___c_TypeInfo->static_fields;
    }
    v40 = (Il2CppObject *)static_fields->__9;
    _9__98_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B170CC(
                                                                          System_Predicate_SubmarineScanEvent__TypeInfo,
                                                                          v32,
                                                                          v33,
                                                                          v34,
                                                                          v35);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__98_0,
      v40,
      Method_SubmarineMapManager___c__CreateScanOpenPanelTask_b__98_0__,
      (const MethodInfo_2B0B204 *)Method_System_Predicate_SubmarineScanEvent___ctor__);
    v41 = SubmarineMapManager___c_TypeInfo->static_fields;
    v41->__9__98_0 = (struct System_Predicate_SubmarineScanEvent__o *)_9__98_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v41->__9__98_0,
      (System_Int32_array **)_9__98_0,
      v42,
      v43,
      v44,
      v45,
      v46,
      v47);
  }
  if ( !ScanEvents )
    goto LABEL_47;
  All = System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo___FindAll(
          (System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *)ScanEvents,
          (System_Predicate_T__o *)_9__98_0,
          (const MethodInfo_2F26660 *)Method_System_Collections_Generic_List_SubmarineScanEvent__FindAll__);
  v53 = SubmarineMapManager___c_TypeInfo;
  v54 = (System_Collections_Generic_IEnumerable_TSource__o *)All;
  if ( (BYTE3(SubmarineMapManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SubmarineMapManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SubmarineMapManager___c_TypeInfo);
    v53 = SubmarineMapManager___c_TypeInfo;
  }
  v55 = v53->static_fields;
  _9__98_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)v55->__9__98_1;
  if ( !_9__98_1 )
  {
    if ( (BYTE3(v53->vtable._0_Equals.methodPtr) & 4) != 0 && !v53->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v53);
      v55 = SubmarineMapManager___c_TypeInfo->static_fields;
    }
    v57 = (Il2CppObject *)v55->__9;
    _9__98_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B170CC(
                                                                                 System_Func_SubmarineScanEvent__int__TypeInfo,
                                                                                 v49,
                                                                                 v50,
                                                                                 v51,
                                                                                 v52);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__98_1,
      v57,
      Method_SubmarineMapManager___c__CreateScanOpenPanelTask_b__98_1__,
      (const MethodInfo_2B6B6EC *)Method_System_Func_SubmarineScanEvent__int___ctor__);
    v58 = SubmarineMapManager___c_TypeInfo->static_fields;
    v58->__9__98_1 = (struct System_Func_SubmarineScanEvent__int__o *)_9__98_1;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v58->__9__98_1,
      (System_Int32_array **)_9__98_1,
      v59,
      v60,
      v61,
      v62,
      v63,
      v64);
  }
  v65 = System_Linq_Enumerable__Max_BattleBuffData_BuffData_(
          v54,
          (System_Func_TSource__int__o *)_9__98_1,
          (const MethodInfo_19BCDAC *)Method_System_Linq_Enumerable_Max_SubmarineScanEvent___);
  v70 = (SubmarineMapManager___c__DisplayClass98_0_o *)sub_B170CC(
                                                         SubmarineMapManager___c__DisplayClass98_0_TypeInfo,
                                                         v66,
                                                         v67,
                                                         v68,
                                                         v69);
  SubmarineMapManager___c__DisplayClass98_0___ctor(v70, 0LL);
  if ( !v70 )
    goto LABEL_47;
  v75 = v65 + 1;
  v70->fields.i = 0;
  if ( v65 + 1 >= 1 )
  {
    v76 = 0;
    v77 = 0.0;
    while ( 1 )
    {
      v78 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B170CC(
                                                                       System_Predicate_SubmarineScanEvent__TypeInfo,
                                                                       v71,
                                                                       v72,
                                                                       v73,
                                                                       v74);
      System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
        v78,
        (Il2CppObject *)v70,
        Method_SubmarineMapManager___c__DisplayClass98_0__CreateScanOpenPanelTask_b__2__,
        (const MethodInfo_2B0B204 *)Method_System_Predicate_SubmarineScanEvent___ctor__);
      if ( !v54 )
        break;
      v79 = System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo___FindAll(
              (System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *)v54,
              (System_Predicate_T__o *)v78,
              (const MethodInfo_2F26660 *)Method_System_Collections_Generic_List_SubmarineScanEvent__FindAll__);
      v84 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(System_Collections_Generic_List_SchedulerTaskBase__TypeInfo, v80, v81, v82, v83);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
        v84,
        (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
      if ( !v79 )
        break;
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)v96,
        (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v79,
        (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_SubmarineScanEvent__GetEnumerator__);
      v98 = *(System_Collections_Generic_List_Enumerator_T__o *)v96;
      while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v98,
                (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_SubmarineScanEvent__MoveNext__) )
      {
        current = v98.fields.current;
        if ( !v98.fields.current )
          sub_B170D4();
        v87 = this->fields.submarineData;
        if ( !v87 )
          sub_B170D4();
        PanelByIndices = SubmarineMapDataManager__GetPanelByIndices(
                           v87,
                           (int32_t)v98.fields.current[1].klass,
                           HIDWORD(v98.fields.current[1].klass),
                           v85);
        if ( PanelByIndices )
        {
          if ( BYTE5(current[2].klass) )
          {
            HitObstractTask = (EventMissionProgressRequest_Argument_ProgressData_o *)SubmarineMapManager__CreateHitObstractTask(
                                                                                       (SubmarineMapManager_o *)PanelByIndices,
                                                                                       PanelByIndices,
                                                                                       v90,
                                                                                       v89);
            if ( !v26 )
              sub_B170D4();
          }
          else
          {
            HitObstractTask = (EventMissionProgressRequest_Argument_ProgressData_o *)SubmarineMapManager__CreateOpenPanelAndRevealSpotTask(
                                                                                       this,
                                                                                       PanelByIndices,
                                                                                       v77,
                                                                                       v89);
            if ( !v26 )
              sub_B170D4();
          }
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v26,
            HitObstractTask,
            (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_SchedulerTaskBase__Add__);
        }
      }
      *(_DWORD *)&v96[4 * v76 + 24] = 274;
      v76 = ++v97;
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v98,
        (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_SubmarineScanEvent__Dispose__);
      if ( v76 )
      {
        v92 = v76 - 1;
        if ( *(_DWORD *)&v96[4 * v76 + 20] == 274 )
        {
          --v76;
          v97 = v92;
        }
      }
      v77 = ScanOpenPanelInterval + v77;
      v93 = v70->fields.i + 1;
      v70->fields.i = v93;
      if ( v93 >= v75 )
        goto LABEL_46;
    }
LABEL_47:
    sub_B170D4();
  }
LABEL_46:
  v94 = (SchedulerTaskParallel_o *)sub_B170CC(SchedulerTaskParallel_TypeInfo, v71, v72, v73, v74);
  SchedulerTaskParallel___ctor_17170684(v94, (System_Collections_Generic_List_SchedulerTaskBase__o *)v26, 0LL);
  return (SchedulerTaskBase_o *)v94;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_SchedulerTaskBase__o *__fastcall SubmarineMapManager__CreateScanTask(
        SubmarineMapManager_o *this,
        SubmarineMapPanelData_o *panelData,
        int32_t scanId,
        const MethodInfo *method)
{
  __int64 v4; // x4
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
  __int64 v33; // x1
  __int64 v34; // x20
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x3
  __int64 v44; // x4
  struct SubmarineMapDataManager_o *submarineData; // x8
  struct SubmarinePanelPositionCalculator_o *PositionCalculator_k__BackingField; // x8
  int32x2_t v47; // d11
  float32x2_t v48; // d9
  int32x2_t v49; // d10
  float32x2_t v50; // d8
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v51; // x19
  const MethodInfo *v52; // x1
  struct SubmarineMapDataManager_o *v53; // x8
  struct SubmarineSettingsManager_o *Settings_k__BackingField; // x8
  unsigned __int64 v55; // d0 OVERLAPPED
  float v56; // s8
  int v57; // s2
  int v58; // s1
  EventMissionProgressRequest_Argument_ProgressData_o *MoveCameraToPositionTask; // x0
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  WarEntity_o *Entity; // x0
  const MethodInfo *v63; // x2
  UnityEngine_Object_o *ScanAnimObjectPrefab; // x22
  const MethodInfo *v65; // x1
  UnityEngine_Object_o *HomeSpot; // x23
  UnityEngine_Transform_o *transform; // x0
  float v68; // s2
  UnityEngine_GameObject_o *effectContainer; // x0
  float v70; // s0
  float v71; // s1
  float v72; // s9
  UnityEngine_Transform_o *v73; // x23
  System_Int32_array **v74; // x0
  UnityEngine_GameObject_o **v75; // x24
  System_String_array **v76; // x2
  System_String_array **v77; // x3
  System_Boolean_array **v78; // x4
  System_Int32_array **v79; // x5
  System_Int32_array *v80; // x6
  System_Int32_array *v81; // x7
  UIWidget_o *Component_UIWidget; // x0
  unsigned __int64 v83; // d1 OVERLAPPED
  SubmarineScannerComponent_o *v84; // x22
  void (__fastcall *v85)(); // d0
  const MethodInfo *v86; // x1
  float magnitude; // s0
  __int64 v88; // x1
  __int64 v89; // x2
  __int64 v90; // x3
  __int64 v91; // x4
  const MethodInfo *v92; // x1
  struct SubmarineMapDataManager_o *v93; // x8
  struct SubmarineSettingsManager_o *v94; // x8
  float v95; // s0
  float v96; // s1
  float v97; // s2
  EventMissionProgressRequest_Argument_ProgressData_o *v98; // x0
  const MethodInfo *v99; // x1
  float JumpStartTime; // s10
  __int64 v101; // x1
  __int64 v102; // x2
  __int64 v103; // x3
  __int64 v104; // x4
  SchedulerTaskWaitTime_o *v105; // x25
  __int64 v106; // x1
  __int64 v107; // x2
  __int64 v108; // x3
  __int64 v109; // x4
  BattleServantConfConponent_o *p_StartCallback; // x25
  System_Delegate_o *StartCallback; // t1
  SchedulerTaskBase_TaskCallback_o *v112; // x27
  System_Int32_array **v113; // x0
  System_String_array **v114; // x2
  System_String_array **v115; // x3
  System_Boolean_array **v116; // x4
  System_Int32_array **v117; // x5
  System_Int32_array *v118; // x6
  System_Int32_array *v119; // x7
  System_Int32_array **v120; // x8
  struct SubmarineMapManager_PlayingScanVoiceData_o *playingScanVoiceData; // x8
  struct SubmarineMapManager_PlayingScanVoiceData_o *v122; // x8
  struct SubmarineMapManager_PlayingScanVoiceData_o *v123; // x8
  System_String_o *assetName; // x25
  System_String_o *vcName; // x26
  System_Int32_array **v126; // x0
  __int64 v127; // x25
  System_String_array **v128; // x2
  System_String_array **v129; // x3
  System_Boolean_array **v130; // x4
  System_Int32_array **v131; // x5
  System_Int32_array *v132; // x6
  System_Int32_array *v133; // x7
  __int64 v134; // x1
  __int64 v135; // x2
  __int64 v136; // x3
  __int64 v137; // x4
  __int64 v138; // x8
  System_String_o *v139; // x26
  SchedulerTaskWaitLoadAsset_o *v140; // x27
  System_String_array **v141; // x2
  System_String_array **v142; // x3
  System_Boolean_array **v143; // x4
  System_Int32_array **v144; // x5
  System_Int32_array *v145; // x6
  System_Int32_array *v146; // x7
  struct SubmarineMapManager_PlayingScanVoiceData_o *v147; // x0
  System_Int32_array **v148; // x1
  System_String_array **v149; // x2
  System_String_array **v150; // x3
  System_Boolean_array **v151; // x4
  System_Int32_array **v152; // x5
  System_Int32_array *v153; // x6
  System_Int32_array *v154; // x7
  struct SubmarineMapManager_PlayingScanVoiceData_o *v155; // x0
  System_Int32_array **v156; // x1
  __int64 v157; // x1
  __int64 v158; // x2
  __int64 v159; // x3
  __int64 v160; // x4
  float v161; // s10
  __int64 v162; // x25
  __int64 v163; // x1
  __int64 v164; // x2
  __int64 v165; // x3
  __int64 v166; // x4
  System_Delegate_o *v167; // x27
  SchedulerTaskBase_TaskCallback_o *v168; // x28
  System_Int32_array **v169; // x0
  System_String_array **v170; // x2
  System_String_array **v171; // x3
  System_Boolean_array **v172; // x4
  System_Int32_array **v173; // x5
  System_Int32_array *v174; // x6
  System_Int32_array *v175; // x7
  const MethodInfo *v176; // x1
  float SelectedPanelEffecFinishTime; // s10
  __int64 v178; // x1
  __int64 v179; // x2
  __int64 v180; // x3
  __int64 v181; // x4
  __int64 v182; // x25
  __int64 v183; // x1
  __int64 v184; // x2
  __int64 v185; // x3
  __int64 v186; // x4
  System_Delegate_o *v187; // x27
  SchedulerTaskBase_TaskCallback_o *v188; // x28
  System_Int32_array **v189; // x0
  System_String_array **v190; // x2
  System_String_array **v191; // x3
  System_Boolean_array **v192; // x4
  System_Int32_array **v193; // x5
  System_Int32_array *v194; // x6
  System_Int32_array *v195; // x7
  const MethodInfo *v196; // x1
  float JumpDuration; // s10
  void (__fastcall *v198)(); // d0 OVERLAPPED
  float v199; // s1
  float v200; // s0
  MapCamera_o *mapCamera; // x21
  float v202; // s11
  const MethodInfo_29CF390 *v203; // x2
  __int64 v204; // x1
  __int64 v205; // x2
  __int64 v206; // x3
  __int64 v207; // x4
  MapCameraPerformance_o *v208; // x0
  System_Int32_array **v209; // x26
  UnityEngine_GameObject_o *v210; // x24
  __int64 v211; // x1
  __int64 v212; // x2
  __int64 v213; // x3
  __int64 v214; // x4
  SchedulerTaskMovePerformance_o *v215; // x0
  System_Int32_array **v216; // x21
  __int64 v217; // x2
  __int64 v218; // x0
  __int64 v219; // x1
  System_String_array **v220; // x2
  System_String_array **v221; // x3
  System_Boolean_array **v222; // x4
  System_Int32_array **v223; // x5
  System_Int32_array *v224; // x6
  System_Int32_array *v225; // x7
  SchedulerTaskBase_array *v226; // x24
  System_String_array **v227; // x3
  System_Boolean_array **v228; // x4
  System_Int32_array **v229; // x5
  System_Int32_array *v230; // x6
  System_Int32_array *v231; // x7
  __int64 v232; // x1
  __int64 v233; // x2
  __int64 v234; // x3
  __int64 v235; // x4
  SchedulerTaskParallel_o *v236; // x21
  const MethodInfo *v237; // x1
  __int64 v238; // x1
  __int64 v239; // x2
  __int64 v240; // x3
  __int64 v241; // x4
  SimpleAnimation_o *AnimationComponent; // x26
  struct SimpleAnimation_EditorState_o *state; // x8
  System_String_o **p_name; // x8
  System_String_o *v245; // x27
  __int64 v246; // x24
  __int64 v247; // x1
  __int64 v248; // x2
  __int64 v249; // x3
  __int64 v250; // x4
  System_Delegate_o *v251; // x27
  SchedulerTaskBase_TaskCallback_o *v252; // x28
  System_Int32_array **v253; // x0
  System_String_array **v254; // x2
  System_String_array **v255; // x3
  System_Boolean_array **v256; // x4
  System_Int32_array **v257; // x5
  System_Int32_array *v258; // x6
  System_Int32_array *v259; // x7
  __int64 v260; // x2
  __int64 v261; // x0
  __int64 v262; // x20
  System_String_array **v263; // x3
  System_Boolean_array **v264; // x4
  System_Int32_array **v265; // x5
  System_Int32_array *v266; // x6
  System_Int32_array *v267; // x7
  __int64 v268; // x2
  __int64 v269; // x0
  __int64 v270; // x24
  System_String_array **v271; // x3
  System_Boolean_array **v272; // x4
  System_Int32_array **v273; // x5
  System_Int32_array *v274; // x6
  System_Int32_array *v275; // x7
  System_String_array **v276; // x3
  System_Boolean_array **v277; // x4
  System_Int32_array **v278; // x5
  System_Int32_array *v279; // x6
  System_Int32_array *v280; // x7
  __int64 v281; // x1
  __int64 v282; // x2
  __int64 v283; // x3
  __int64 v284; // x4
  SchedulerTaskOrthostichy_o *v285; // x21
  System_String_array **v286; // x3
  System_Boolean_array **v287; // x4
  System_Int32_array **v288; // x5
  System_Int32_array *v289; // x6
  System_Int32_array *v290; // x7
  __int64 v291; // x1
  __int64 v292; // x2
  __int64 v293; // x3
  __int64 v294; // x4
  SchedulerTaskParallel_o *v295; // x21
  const MethodInfo *v296; // x1
  float TimeToStartOpenPanel; // s8
  __int64 v298; // x1
  __int64 v299; // x2
  __int64 v300; // x3
  __int64 v301; // x4
  SchedulerTaskWaitTime_o *v302; // x20
  SubmarineMapManager_o *v304; // x0
  int32_t v305; // w1
  SubmarineMapPanelData_o *v306; // x2
  const MethodInfo *v307; // x3
  System_Int32_array **v308; // [xsp+8h] [xbp-E8h]
  float v309; // [xsp+20h] [xbp-D0h]
  float v310; // [xsp+30h] [xbp-C0h]
  UnityEngine_Vector2_o value; // [xsp+40h] [xbp-B0h]
  System_Nullable_float__o v312; // [xsp+50h] [xbp-A0h] BYREF
  System_Nullable_Vector2__o v313; // [xsp+58h] [xbp-98h] BYREF
  MethodInfo methoda; // [xsp+68h] [xbp-88h] BYREF
  System_Nullable_float__o v315; // 0:x0.8
  System_Nullable_float__o v316; // 0:x4.8
  System_Nullable_Vector2__o v317; // 0:x0.12
  UnityEngine_Vector2_o v318; // 0:s0.4,4:s1.4
  UnityEngine_Vector3_o v319; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v320; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v321; // 0:s3.4,4:s4.4,8:s5.4

  if ( (byte_40F7C82 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_EventPanelScanMaster___, panelData);
    sub_B16FFC(&Method_DataMasterBase_EventPanelScanMaster__EventPanelScanEntity__int__GetEntity__, v8);
    sub_B16FFC(&Method_GameObjectExtensions_SafeGetComponent_SubmarineScanVoiceComponent___, v9);
    sub_B16FFC(&Method_GameObjectExtensions_SafeGetComponent_SubmarineScannerComponent___, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_SchedulerTaskBase__Add__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__, v12);
    sub_B16FFC(&System_Collections_Generic_List_SchedulerTaskBase__TypeInfo, v13);
    sub_B16FFC(&MapCameraPerformance_TypeInfo, v14);
    sub_B16FFC(&Method_System_Nullable_float___ctor__, v15);
    sub_B16FFC(&Method_System_Nullable_Vector2___ctor__, v16);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject____66874888, v17);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v18);
    sub_B16FFC(&SchedulerTaskBase___TypeInfo, v19);
    sub_B16FFC(&SchedulerTaskMovePerformance_TypeInfo, v20);
    sub_B16FFC(&SchedulerTaskOrthostichy_TypeInfo, v21);
    sub_B16FFC(&SchedulerTaskParallel_TypeInfo, v22);
    sub_B16FFC(&SchedulerTaskSimpleAnimation_TypeInfo, v23);
    sub_B16FFC(&SchedulerTaskWaitLoadAsset_TypeInfo, v24);
    sub_B16FFC(&SchedulerTaskWaitTime_TypeInfo, v25);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v26);
    sub_B16FFC(&SoundManager_TypeInfo, v27);
    sub_B16FFC(&SchedulerTaskBase_TaskCallback_TypeInfo, v28);
    sub_B16FFC(&Method_SubmarineMapManager___c__DisplayClass94_0__CreateScanTask_b__0__, v29);
    sub_B16FFC(&Method_SubmarineMapManager___c__DisplayClass94_0__CreateScanTask_b__1__, v30);
    sub_B16FFC(&Method_SubmarineMapManager___c__DisplayClass94_0__CreateScanTask_b__2__, v31);
    sub_B16FFC(&Method_SubmarineMapManager___c__DisplayClass94_0__CreateScanTask_b__3__, v32);
    sub_B16FFC(&SubmarineMapManager___c__DisplayClass94_0_TypeInfo, v33);
    byte_40F7C82 = 1;
  }
  LODWORD(methoda.invoker_method) = 0;
  methoda.methodPointer = 0LL;
  v34 = sub_B170CC(SubmarineMapManager___c__DisplayClass94_0_TypeInfo, panelData, *(_QWORD *)&scanId, method, v4);
  SubmarineMapManager___c__DisplayClass94_0___ctor((SubmarineMapManager___c__DisplayClass94_0_o *)v34, 0LL);
  if ( !v34 )
    goto LABEL_88;
  *(_QWORD *)(v34 + 32) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v34 + 32), (System_Int32_array **)this, v35, v36, v37, v38, v39, v40);
  submarineData = this->fields.submarineData;
  if ( !submarineData )
    goto LABEL_88;
  if ( !panelData )
    goto LABEL_88;
  PositionCalculator_k__BackingField = submarineData->fields._PositionCalculator_k__BackingField;
  if ( !PositionCalculator_k__BackingField )
    goto LABEL_88;
  v47.n64_u64[0] = *(unsigned __int64 *)&panelData->fields._HIndex_k__BackingField;
  v48.n64_u64[0] = (unsigned __int64)PositionCalculator_k__BackingField->fields._PanelUnitSize_k__BackingField;
  v49.n64_u64[0] = *(unsigned __int64 *)&PositionCalculator_k__BackingField->fields._HorizontalPanelNum_k__BackingField;
  v50.n64_u64[0] = *(unsigned __int64 *)&PositionCalculator_k__BackingField->fields._OffsetX_k__BackingField;
  v51 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_SchedulerTaskBase__TypeInfo,
                                                                                                  v41,
                                                                                                  v42,
                                                                                                  v43,
                                                                                                  v44);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v51,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
  v53 = this->fields.submarineData;
  if ( !v53 )
    goto LABEL_88;
  Settings_k__BackingField = v53->fields._Settings_k__BackingField;
  if ( !Settings_k__BackingField )
    goto LABEL_88;
  v55 = vadd_f32(
          v50,
          vmul_f32(
            vmul_f32(v48, vcvt_f32_s32(vsub_s32((int32x2_t)(vshl_n_s32(v47, 1uLL).n64_u64[0] | 0x100000001LL), v49))),
            (float32x2_t)0x3F0000003F000000LL)).n64_u64[0];
  v56 = *((float *)&v55 + 1);
  v57 = 0;
  v58 = HIDWORD(v55);
  value = (UnityEngine_Vector2_o)v55;
  MoveCameraToPositionTask = (EventMissionProgressRequest_Argument_ProgressData_o *)SubmarineMapManager__CreateMoveCameraToPositionTask(
                                                                                      this,
                                                                                      *(UnityEngine_Vector3_o *)&v55,
                                                                                      1.0,
                                                                                      Settings_k__BackingField->fields._ScanRangeToHomeSpotCameraDuration_k__BackingField,
                                                                                      v52);
  if ( !v51 )
    goto LABEL_88;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v51,
    MoveCameraToPositionTask,
    (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_SchedulerTaskBase__Add__);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_88;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)Instance,
                                                                                        (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventPanelScanMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_88;
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             MasterData_WarQuestSelectionMaster,
             scanId,
             (const MethodInfo_266F388 *)Method_DataMasterBase_EventPanelScanMaster__EventPanelScanEntity__int__GetEntity__);
  if ( !Entity )
    return (System_Collections_Generic_List_SchedulerTaskBase__o *)v51;
  if ( !this->fields.assetManager )
    goto LABEL_88;
  ScanAnimObjectPrefab = (UnityEngine_Object_o *)SubmarineMapAssetManager__GetScanAnimObjectPrefab(
                                                   this->fields.assetManager,
                                                   Entity->fields.parentWarId,
                                                   v63);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(ScanAnimObjectPrefab, 0LL, 0LL) )
    return (System_Collections_Generic_List_SchedulerTaskBase__o *)v51;
  HomeSpot = (UnityEngine_Object_o *)SubmarineMapManager__GetHomeSpot(this, v65);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(HomeSpot, 0LL, 0LL) )
    return (System_Collections_Generic_List_SchedulerTaskBase__o *)v51;
  if ( !HomeSpot )
    goto LABEL_88;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)HomeSpot, 0LL);
  if ( !transform )
    goto LABEL_88;
  *(UnityEngine_Vector3_o *)(&v68 - 2) = UnityEngine_Transform__get_localPosition(transform, 0LL);
  effectContainer = this->fields.effectContainer;
  v310 = v70;
  v309 = v71;
  if ( !effectContainer )
    goto LABEL_88;
  v72 = v68;
  v73 = UnityEngine_GameObject__get_transform(effectContainer, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v74 = (System_Int32_array **)UnityEngine_Object__Instantiate_UILabel_(
                                 (UILabel_o *)ScanAnimObjectPrefab,
                                 v73,
                                 (const MethodInfo_19DE348 *)Method_UnityEngine_Object_Instantiate_GameObject____66874888);
  *(_QWORD *)(v34 + 16) = v74;
  v75 = (UnityEngine_GameObject_o **)(v34 + 16);
  sub_B16F98((BattleServantConfConponent_o *)(v34 + 16), v74, v76, v77, v78, v79, v80, v81);
  v319.fields.y = v309;
  v319.fields.x = v310;
  v319.fields.z = v72;
  GameObjectExtensions__SetLocalPosition(*(UnityEngine_GameObject_o **)(v34 + 16), v319, 0LL);
  if ( !*(_QWORD *)(v34 + 16) )
    goto LABEL_88;
  UnityEngine_GameObject__SetActive(*(UnityEngine_GameObject_o **)(v34 + 16), 0, 0LL);
  Component_UIWidget = GameObjectExtensions__SafeGetComponent_UIWidget_(
                         *v75,
                         (const MethodInfo_19D2264 *)Method_GameObjectExtensions_SafeGetComponent_SubmarineScannerComponent___);
  v83 = __PAIR64__(LODWORD(v309), LODWORD(v310));
  v84 = (SubmarineScannerComponent_o *)Component_UIWidget;
  *(float *)&methoda.invoker_method = v72;
  v85 = (void (__fastcall *)())vsub_f32((float32x2_t)__PAIR64__(LODWORD(v309), LODWORD(v310)), (float32x2_t)value).n64_u64[0];
  methoda.methodPointer = v85;
  magnitude = UnityEngine_Vector3__get_magnitude(*(UnityEngine_Vector3_o *)((char *)&v83 - 4), &methoda);
  if ( !v84 )
    goto LABEL_88;
  SubmarineScannerComponent__PrepareAnimation(v84, magnitude, v86);
  if ( !v84->fields.state )
    return (System_Collections_Generic_List_SchedulerTaskBase__o *)v51;
  v51 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_SchedulerTaskBase__TypeInfo,
                                                                                                  v88,
                                                                                                  v89,
                                                                                                  v90,
                                                                                                  v91);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v51,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
  v93 = this->fields.submarineData;
  if ( !v93 )
    goto LABEL_88;
  v94 = v93->fields._Settings_k__BackingField;
  v96 = v309;
  v95 = v310;
  if ( !v94 )
    goto LABEL_88;
  v97 = v72;
  v98 = (EventMissionProgressRequest_Argument_ProgressData_o *)SubmarineMapManager__CreateMoveCameraToPositionTask(
                                                                 this,
                                                                 *(UnityEngine_Vector3_o *)&v95,
                                                                 1.0,
                                                                 v94->fields._ScanRangeToHomeSpotCameraDuration_k__BackingField,
                                                                 v92);
  if ( !v51 )
    goto LABEL_88;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v51,
    v98,
    (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_SchedulerTaskBase__Add__);
  JumpStartTime = SubmarineScannerComponent__GetJumpStartTime(v84, v99);
  v105 = (SchedulerTaskWaitTime_o *)sub_B170CC(SchedulerTaskWaitTime_TypeInfo, v101, v102, v103, v104);
  SchedulerTaskWaitTime___ctor(v105, JumpStartTime, 0LL);
  if ( !v105 )
    goto LABEL_88;
  v308 = (System_Int32_array **)v105;
  StartCallback = (System_Delegate_o *)v105->fields.StartCallback;
  p_StartCallback = (BattleServantConfConponent_o *)&v105->fields.StartCallback;
  v112 = (SchedulerTaskBase_TaskCallback_o *)sub_B170CC(SchedulerTaskBase_TaskCallback_TypeInfo, v106, v107, v108, v109);
  SchedulerTaskBase_TaskCallback___ctor(
    v112,
    (Il2CppObject *)v34,
    Method_SubmarineMapManager___c__DisplayClass94_0__CreateScanTask_b__0__,
    0LL);
  v113 = (System_Int32_array **)System_Delegate__Combine(StartCallback, (System_Delegate_o *)v112, 0LL);
  v120 = v113;
  if ( !v113 || *v113 == (System_Int32_array *)SchedulerTaskBase_TaskCallback_TypeInfo )
  {
    p_StartCallback->klass = (BattleServantConfConponent_c *)v113;
    sub_B16F98(p_StartCallback, v113, v114, v115, v116, v117, v118, v119);
    playingScanVoiceData = this->fields.playingScanVoiceData;
    if ( !playingScanVoiceData )
      goto LABEL_88;
    if ( !System_String__IsNullOrEmpty(playingScanVoiceData->fields.vcName, 0LL) )
    {
      v122 = this->fields.playingScanVoiceData;
      if ( !v122 )
        goto LABEL_88;
      if ( !System_String__IsNullOrEmpty(v122->fields.assetName, 0LL) )
      {
        v123 = this->fields.playingScanVoiceData;
        if ( !v123 )
          goto LABEL_88;
        assetName = v123->fields.assetName;
        vcName = v123->fields.vcName;
        if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SoundManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        }
        SoundManager__stopVoice(assetName, vcName, 0.0, 0LL);
      }
    }
    v126 = (System_Int32_array **)GameObjectExtensions__SafeGetComponent_UIWidget_(
                                    *(UnityEngine_GameObject_o **)(v34 + 16),
                                    (const MethodInfo_19D2264 *)Method_GameObjectExtensions_SafeGetComponent_SubmarineScanVoiceComponent___);
    v127 = v34 + 24;
    *(_QWORD *)(v34 + 24) = v126;
    sub_B16F98((BattleServantConfConponent_o *)(v34 + 24), v126, v128, v129, v130, v131, v132, v133);
    v138 = *(_QWORD *)(v34 + 24);
    if ( !v138 )
      goto LABEL_88;
    v139 = *(System_String_o **)(v138 + 48);
    v140 = (SchedulerTaskWaitLoadAsset_o *)sub_B170CC(SchedulerTaskWaitLoadAsset_TypeInfo, v134, v135, v136, v137);
    SchedulerTaskWaitLoadAsset___ctor(v140, v139, 0LL);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v51,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v140,
      (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_SchedulerTaskBase__Add__);
    if ( !*(_QWORD *)v127 )
      goto LABEL_88;
    v147 = this->fields.playingScanVoiceData;
    if ( !v147 )
      goto LABEL_88;
    v148 = *(System_Int32_array ***)(*(_QWORD *)v127 + 48LL);
    v147->fields.assetName = (struct System_String_o *)v148;
    sub_B16F98((BattleServantConfConponent_o *)&v147->fields, v148, v141, v142, v143, v144, v145, v146);
    if ( !*(_QWORD *)v127
      || (v155 = this->fields.playingScanVoiceData) == 0LL
      || (v156 = *(System_Int32_array ***)(*(_QWORD *)v127 + 40LL),
          v155->fields.vcName = (struct System_String_o *)v156,
          sub_B16F98((BattleServantConfConponent_o *)&v155->fields.vcName, v156, v149, v150, v151, v152, v153, v154),
          !*(_QWORD *)v127)
      || (v161 = *(float *)(*(_QWORD *)v127 + 24LL),
          v162 = sub_B170CC(SchedulerTaskWaitTime_TypeInfo, v157, v158, v159, v160),
          SchedulerTaskWaitTime___ctor((SchedulerTaskWaitTime_o *)v162, v161, 0LL),
          !v162) )
    {
LABEL_88:
      sub_B170D4();
    }
    v167 = *(System_Delegate_o **)(v162 + 24);
    v168 = (SchedulerTaskBase_TaskCallback_o *)sub_B170CC(
                                                 SchedulerTaskBase_TaskCallback_TypeInfo,
                                                 v163,
                                                 v164,
                                                 v165,
                                                 v166);
    SchedulerTaskBase_TaskCallback___ctor(
      v168,
      (Il2CppObject *)v34,
      Method_SubmarineMapManager___c__DisplayClass94_0__CreateScanTask_b__1__,
      0LL);
    v169 = (System_Int32_array **)System_Delegate__Combine(v167, (System_Delegate_o *)v168, 0LL);
    v120 = v169;
    if ( !v169 || *v169 == (System_Int32_array *)SchedulerTaskBase_TaskCallback_TypeInfo )
    {
      *(_QWORD *)(v162 + 24) = v169;
      sub_B16F98((BattleServantConfConponent_o *)(v162 + 24), v169, v170, v171, v172, v173, v174, v175);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v51,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v162,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_SchedulerTaskBase__Add__);
      SelectedPanelEffecFinishTime = SubmarineScannerComponent__GetSelectedPanelEffecFinishTime(v84, v176);
      v182 = sub_B170CC(SchedulerTaskWaitTime_TypeInfo, v178, v179, v180, v181);
      SchedulerTaskWaitTime___ctor((SchedulerTaskWaitTime_o *)v182, SelectedPanelEffecFinishTime, 0LL);
      if ( !v182 )
        goto LABEL_88;
      v187 = *(System_Delegate_o **)(v182 + 32);
      v188 = (SchedulerTaskBase_TaskCallback_o *)sub_B170CC(
                                                   SchedulerTaskBase_TaskCallback_TypeInfo,
                                                   v183,
                                                   v184,
                                                   v185,
                                                   v186);
      SchedulerTaskBase_TaskCallback___ctor(
        v188,
        (Il2CppObject *)v34,
        Method_SubmarineMapManager___c__DisplayClass94_0__CreateScanTask_b__2__,
        0LL);
      v189 = (System_Int32_array **)System_Delegate__Combine(v187, (System_Delegate_o *)v188, 0LL);
      v120 = v189;
      if ( !v189 || *v189 == (System_Int32_array *)SchedulerTaskBase_TaskCallback_TypeInfo )
      {
        *(_QWORD *)(v182 + 32) = v189;
        sub_B16F98((BattleServantConfConponent_o *)(v182 + 32), v189, v190, v191, v192, v193, v194, v195);
        *(_BYTE *)(v182 + 16) = 1;
        JumpDuration = SubmarineScannerComponent__GetJumpDuration(v84, v196);
        v198 = (void (__fastcall *)())vsub_f32(
                                        (float32x2_t)value,
                                        (float32x2_t)__PAIR64__(LODWORD(v309), LODWORD(v310))).n64_u64[0];
        v199 = 0.0 - v72;
        methoda.methodPointer = v198;
        *(float *)&methoda.invoker_method = 0.0 - v72;
        v200 = UnityEngine_Vector3__get_magnitude(*(UnityEngine_Vector3_o *)&v198, &methoda);
        mapCamera = this->fields.mapCamera;
        v202 = v200 / JumpDuration;
        v318.fields.x = value.fields.x;
        v317.fields.value = (struct UnityEngine_Vector2_o)&v313;
        *(_DWORD *)&v317.fields.has_value = Method_System_Nullable_Vector2___ctor__;
        v318.fields.y = v56;
        *(_DWORD *)&v313.fields.has_value = 0;
        v313.fields.value = 0LL;
        System_Nullable_Vector2____ctor(v317, v318, v203);
        v315 = (System_Nullable_float__o)&v312;
        v312 = 0LL;
        System_Nullable_float____ctor(v315, 1.0, (const MethodInfo_296A23C *)Method_System_Nullable_float___ctor__);
        v208 = (MapCameraPerformance_o *)sub_B170CC(MapCameraPerformance_TypeInfo, v204, v205, v206, v207);
        v316 = v312;
        v209 = (System_Int32_array **)v208;
        MapCameraPerformance___ctor(v208, mapCamera, JumpDuration, v313, v316, 0, 0LL);
        v210 = *v75;
        v215 = (SchedulerTaskMovePerformance_o *)sub_B170CC(
                                                   SchedulerTaskMovePerformance_TypeInfo,
                                                   v211,
                                                   v212,
                                                   v213,
                                                   v214);
        v320.fields.y = v309;
        v320.fields.x = v310;
        v321.fields.x = value.fields.x;
        v321.fields.z = 0.0;
        v320.fields.z = v72;
        v321.fields.y = v56;
        v216 = (System_Int32_array **)v215;
        SchedulerTaskMovePerformance___ctor(v215, v210, v320, v321, v202, 0, 0LL);
        v218 = sub_B17014(SchedulerTaskBase___TypeInfo, 2LL, v217);
        if ( !v218 )
          goto LABEL_88;
        v226 = (SchedulerTaskBase_array *)v218;
        if ( v209 )
        {
          v218 = sub_B170BC(v209, *(_QWORD *)(*(_QWORD *)v218 + 64LL));
          if ( !v218 )
            goto LABEL_90;
        }
        if ( !v226->max_length )
          goto LABEL_89;
        v226->m_Items[0] = (SchedulerTaskBase_o *)v209;
        sub_B16F98((BattleServantConfConponent_o *)v226->m_Items, v209, v220, v221, v222, v223, v224, v225);
        if ( v216 )
        {
          v218 = sub_B170BC(v216, v226->obj.klass->_1.element_class);
          if ( !v218 )
            goto LABEL_90;
        }
        if ( v226->max_length <= 1 )
          goto LABEL_89;
        v226->m_Items[1] = (SchedulerTaskBase_o *)v216;
        sub_B16F98((BattleServantConfConponent_o *)&v226->m_Items[1], v216, v220, v227, v228, v229, v230, v231);
        v236 = (SchedulerTaskParallel_o *)sub_B170CC(SchedulerTaskParallel_TypeInfo, v232, v233, v234, v235);
        SchedulerTaskParallel___ctor(v236, v226, 0LL);
        AnimationComponent = SubmarineScannerComponent__get_AnimationComponent(v84, v237);
        if ( (byte_40F7CBE & 1) == 0 )
        {
          sub_B16FFC(&StringLiteral_1/*""*/, v238);
          byte_40F7CBE = 1;
        }
        state = v84->fields.state;
        if ( state )
          p_name = &state->fields.name;
        else
          p_name = (System_String_o **)&StringLiteral_1/*""*/;
        v245 = *p_name;
        v246 = sub_B170CC(SchedulerTaskSimpleAnimation_TypeInfo, v238, v239, v240, v241);
        SchedulerTaskSimpleAnimation___ctor((SchedulerTaskSimpleAnimation_o *)v246, AnimationComponent, v245, 0LL);
        if ( !v246 )
          goto LABEL_88;
        v251 = *(System_Delegate_o **)(v246 + 32);
        v252 = (SchedulerTaskBase_TaskCallback_o *)sub_B170CC(
                                                     SchedulerTaskBase_TaskCallback_TypeInfo,
                                                     v247,
                                                     v248,
                                                     v249,
                                                     v250);
        SchedulerTaskBase_TaskCallback___ctor(
          v252,
          (Il2CppObject *)v34,
          Method_SubmarineMapManager___c__DisplayClass94_0__CreateScanTask_b__3__,
          0LL);
        v253 = (System_Int32_array **)System_Delegate__Combine(v251, (System_Delegate_o *)v252, 0LL);
        v120 = v253;
        if ( !v253 || *v253 == (System_Int32_array *)SchedulerTaskBase_TaskCallback_TypeInfo )
        {
          *(_QWORD *)(v246 + 32) = v253;
          sub_B16F98((BattleServantConfConponent_o *)(v246 + 32), v253, v254, v255, v256, v257, v258, v259);
          v261 = sub_B17014(SchedulerTaskBase___TypeInfo, 2LL, v260);
          if ( !v261 )
            goto LABEL_88;
          v262 = v261;
          v218 = sub_B170BC(v246, *(_QWORD *)(*(_QWORD *)v261 + 64LL));
          if ( v218 )
          {
            if ( !*(_DWORD *)(v262 + 24) )
              goto LABEL_89;
            *(_QWORD *)(v262 + 32) = v246;
            sub_B16F98(
              (BattleServantConfConponent_o *)(v262 + 32),
              (System_Int32_array **)v246,
              v220,
              v263,
              v264,
              v265,
              v266,
              v267);
            v269 = sub_B17014(SchedulerTaskBase___TypeInfo, 2LL, v268);
            if ( !v269 )
              goto LABEL_88;
            v270 = v269;
            v218 = sub_B170BC(v308, *(_QWORD *)(*(_QWORD *)v269 + 64LL));
            if ( v218 )
            {
              if ( !*(_DWORD *)(v270 + 24) )
                goto LABEL_89;
              *(_QWORD *)(v270 + 32) = v308;
              sub_B16F98((BattleServantConfConponent_o *)(v270 + 32), v308, v220, v271, v272, v273, v274, v275);
              if ( !v236 || (v218 = sub_B170BC(v236, *(_QWORD *)(*(_QWORD *)v270 + 64LL))) != 0 )
              {
                if ( *(_DWORD *)(v270 + 24) <= 1u )
                  goto LABEL_89;
                *(_QWORD *)(v270 + 40) = v236;
                sub_B16F98(
                  (BattleServantConfConponent_o *)(v270 + 40),
                  (System_Int32_array **)v236,
                  v220,
                  v276,
                  v277,
                  v278,
                  v279,
                  v280);
                v285 = (SchedulerTaskOrthostichy_o *)sub_B170CC(
                                                       SchedulerTaskOrthostichy_TypeInfo,
                                                       v281,
                                                       v282,
                                                       v283,
                                                       v284);
                SchedulerTaskOrthostichy___ctor(v285, (SchedulerTaskBase_array *)v270, 0LL);
                if ( !v285 || (v218 = sub_B170BC(v285, *(_QWORD *)(*(_QWORD *)v262 + 64LL))) != 0 )
                {
                  if ( *(_DWORD *)(v262 + 24) > 1u )
                  {
                    *(_QWORD *)(v262 + 40) = v285;
                    sub_B16F98(
                      (BattleServantConfConponent_o *)(v262 + 40),
                      (System_Int32_array **)v285,
                      v220,
                      v286,
                      v287,
                      v288,
                      v289,
                      v290);
                    v295 = (SchedulerTaskParallel_o *)sub_B170CC(SchedulerTaskParallel_TypeInfo, v291, v292, v293, v294);
                    SchedulerTaskParallel___ctor(v295, (SchedulerTaskBase_array *)v262, 0LL);
                    if ( v295 )
                    {
                      v295->fields.NonBlocking = 1;
                      TimeToStartOpenPanel = SubmarineScannerComponent__GetTimeToStartOpenPanel(v84, v296);
                      v302 = (SchedulerTaskWaitTime_o *)sub_B170CC(
                                                          SchedulerTaskWaitTime_TypeInfo,
                                                          v298,
                                                          v299,
                                                          v300,
                                                          v301);
                      SchedulerTaskWaitTime___ctor(v302, TimeToStartOpenPanel, 0LL);
                      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                        v51,
                        (EventMissionProgressRequest_Argument_ProgressData_o *)v182,
                        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_SchedulerTaskBase__Add__);
                      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                        v51,
                        (EventMissionProgressRequest_Argument_ProgressData_o *)v295,
                        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_SchedulerTaskBase__Add__);
                      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                        v51,
                        (EventMissionProgressRequest_Argument_ProgressData_o *)v302,
                        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_SchedulerTaskBase__Add__);
                      return (System_Collections_Generic_List_SchedulerTaskBase__o *)v51;
                    }
                    goto LABEL_88;
                  }
LABEL_89:
                  sub_B17100(v218, v219, v220);
                  sub_B170A0();
                }
              }
            }
          }
LABEL_90:
          sub_B170F4(v218);
          sub_B170A0();
        }
      }
    }
  }
  v304 = (SubmarineMapManager_o *)sub_B173C8(v120);
  return (System_Collections_Generic_List_SchedulerTaskBase__o *)SubmarineMapManager__CreateScanOpenPanelTask(
                                                                   v304,
                                                                   v305,
                                                                   v306,
                                                                   v307);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_SchedulerTaskBase__o *__fastcall SubmarineMapManager__CreateSubsequentialOpenPanelTasks(
        SubmarineMapManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v17; // x20
  float z; // s8
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  __int64 v22; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v23; // x21
  struct SubmarineMapDataManager_o *submarineData; // x8
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *PanelDataList_k__BackingField; // x0
  __int128 v26; // q1
  const MethodInfo *v27; // x2
  Il2CppObject *current; // x22
  struct SubmarineMapDataManager_o *v29; // x8
  float32x2_t *PositionCalculator_k__BackingField; // x8
  __int128 v31; // q1
  SubmarineMapPanelData_array *v32; // x0
  const MethodInfo *v33; // x2
  SchedulerTaskBase_o *OpenPanelsAndRevealSpotsTask; // x0
  const MethodInfo *v35; // x1
  struct SubmarineMapDataManager_o *v36; // x8
  struct SubmarineSettingsManager_o *Settings_k__BackingField; // x8
  signed int size; // w9
  EventMissionProgressRequest_Argument_ProgressData_o *v39; // x22
  unsigned __int64 v40; // d0 OVERLAPPED
  float v41; // s2
  int v42; // s1
  EventMissionProgressRequest_Argument_ProgressData_o *MoveCameraToPositionTask; // x0
  float y; // [xsp+0h] [xbp-B0h]
  __int128 v46; // [xsp+10h] [xbp-A0h]
  float32x2_t v47[3]; // [xsp+10h] [xbp-A0h]
  System_Collections_Generic_List_Enumerator_T__o v48; // [xsp+28h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v49; // [xsp+40h] [xbp-70h] BYREF
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_40F7C8B & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__Dispose__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__MoveNext__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__get_Current__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_SchedulerTaskBase__Add__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_SubmarineMapPanelData__Add__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_SubmarineMapPanelData__GetEnumerator__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_SubmarineMapPanelData__ToArray__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_SubmarineMapPanelData___ctor__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_SubmarineMapPanelData__get_Count__, v14);
    sub_B16FFC(&System_Collections_Generic_List_SubmarineMapPanelData__TypeInfo, v15);
    sub_B16FFC(&System_Collections_Generic_List_SchedulerTaskBase__TypeInfo, v16);
    byte_40F7C8B = 1;
  }
  memset(&v49, 0, sizeof(v49));
  v17 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_SchedulerTaskBase__TypeInfo,
                                                                                                  method,
                                                                                                  v2,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v17,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
  zero = UnityEngine_Vector3__get_zero(0LL);
  *(_QWORD *)&v46 = *(_QWORD *)&zero.fields.x;
  y = zero.fields.y;
  z = zero.fields.z;
  v23 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_SubmarineMapPanelData__TypeInfo,
                                                                                                  v19,
                                                                                                  v20,
                                                                                                  v21,
                                                                                                  v22);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v23,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_SubmarineMapPanelData___ctor__);
  submarineData = this->fields.submarineData;
  if ( !submarineData )
    goto LABEL_22;
  PanelDataList_k__BackingField = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)submarineData->fields._PanelDataList_k__BackingField;
  if ( !PanelDataList_k__BackingField )
    goto LABEL_22;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v48,
    PanelDataList_k__BackingField,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_SubmarineMapPanelData__GetEnumerator__);
  v26 = v46;
  *((float *)&v26 + 1) = y;
  *(_OWORD *)v47[0].n64_u64 = v26;
  v49 = v48;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v49,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__MoveNext__) )
  {
    current = v49.fields.current;
    if ( !v49.fields.current )
      sub_B170D4();
    if ( !LOBYTE(v49.fields.current[3].monitor)
      && SubmarineMapDataManager__IsPanelSatisfyCommonReleaseCond(
           (SubmarineMapPanelData_o *)v49.fields.current,
           -1,
           v27) )
    {
      v29 = this->fields.submarineData;
      if ( !v29 )
        sub_B170D4();
      PositionCalculator_k__BackingField = (float32x2_t *)v29->fields._PositionCalculator_k__BackingField;
      if ( !PositionCalculator_k__BackingField )
        sub_B170D4();
      z = z + 0.0;
      *((float32x2_t *)&v31 + 1) = v47[1];
      *(float32x2_t *)&v31 = vadd_f32(
                               v47[0],
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
      *(_OWORD *)v47[0].n64_u64 = v31;
      if ( !v23 )
        sub_B170D4();
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v23,
        (EventMissionProgressRequest_Argument_ProgressData_o *)current,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_SubmarineMapPanelData__Add__);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v49,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__Dispose__);
  if ( !v23 )
    goto LABEL_22;
  if ( v23->fields._size >= 1 )
  {
    v32 = (SubmarineMapPanelData_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                           (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v23,
                                           (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_SubmarineMapPanelData__ToArray__);
    OpenPanelsAndRevealSpotsTask = SubmarineMapManager__CreateOpenPanelsAndRevealSpotsTask(this, v32, v33);
    v36 = this->fields.submarineData;
    if ( v36 )
    {
      Settings_k__BackingField = v36->fields._Settings_k__BackingField;
      if ( Settings_k__BackingField )
      {
        size = v23->fields._size;
        v39 = (EventMissionProgressRequest_Argument_ProgressData_o *)OpenPanelsAndRevealSpotsTask;
        v40 = vdiv_f32(v47[0], vcvt_f32_s32(vdup_n_s32(size))).n64_u64[0];
        v41 = z / (float)size;
        v42 = HIDWORD(v40);
        MoveCameraToPositionTask = (EventMissionProgressRequest_Argument_ProgressData_o *)SubmarineMapManager__CreateMoveCameraToPositionTask(
                                                                                            this,
                                                                                            *(UnityEngine_Vector3_o *)&v40,
                                                                                            1.0,
                                                                                            Settings_k__BackingField->fields._OpenPanelCameraDuration_k__BackingField,
                                                                                            v35);
        if ( v17 )
        {
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v17,
            MoveCameraToPositionTask,
            (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_SchedulerTaskBase__Add__);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v17,
            v39,
            (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_SchedulerTaskBase__Add__);
          return (System_Collections_Generic_List_SchedulerTaskBase__o *)v17;
        }
      }
    }
LABEL_22:
    sub_B170D4();
  }
  return (System_Collections_Generic_List_SchedulerTaskBase__o *)v17;
}


void __fastcall SubmarineMapManager__DestroyDialog(SubmarineMapManager_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o **p_scanConfirmDialog; // x20
  UnityEngine_Object_o *scanConfirmDialog; // x21
  UnityEngine_Object_o *gameObject; // x21
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  UnityEngine_Component_o **p_selectScannerDialog; // x20
  UnityEngine_Object_o *selectScannerDialog; // x21
  UnityEngine_Object_o *v14; // x21
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  UnityEngine_Component_o **p_newScannerDialog; // x19
  UnityEngine_Object_o *v22; // x20
  struct SubmarineNewScannerDialog_o *newScannerDialog; // t1
  UnityEngine_Object_o *v24; // x20
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7

  if ( (byte_40F7C75 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40F7C75 = 1;
  }
  p_scanConfirmDialog = (UnityEngine_Component_o **)&this->fields.scanConfirmDialog;
  scanConfirmDialog = (UnityEngine_Object_o *)this->fields.scanConfirmDialog;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(scanConfirmDialog, 0LL, 0LL) )
  {
    if ( !*p_scanConfirmDialog )
      goto LABEL_31;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(*p_scanConfirmDialog, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_34809464(gameObject, 0LL);
    *p_scanConfirmDialog = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)&this->fields.scanConfirmDialog, 0LL, v6, v7, v8, v9, v10, v11);
  }
  p_selectScannerDialog = (UnityEngine_Component_o **)&this->fields.selectScannerDialog;
  selectScannerDialog = (UnityEngine_Object_o *)this->fields.selectScannerDialog;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(selectScannerDialog, 0LL, 0LL) )
  {
    if ( !*p_selectScannerDialog )
      goto LABEL_31;
    v14 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(*p_selectScannerDialog, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_34809464(v14, 0LL);
    *p_selectScannerDialog = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)&this->fields.selectScannerDialog, 0LL, v15, v16, v17, v18, v19, v20);
  }
  newScannerDialog = this->fields.newScannerDialog;
  p_newScannerDialog = (UnityEngine_Component_o **)&this->fields.newScannerDialog;
  v22 = (UnityEngine_Object_o *)newScannerDialog;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v22, 0LL, 0LL) )
  {
    if ( *p_newScannerDialog )
    {
      v24 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(*p_newScannerDialog, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_34809464(v24, 0LL);
      *p_newScannerDialog = 0LL;
      sub_B16F98((BattleServantConfConponent_o *)p_newScannerDialog, 0LL, v25, v26, v27, v28, v29, v30);
      return;
    }
LABEL_31:
    sub_B170D4();
  }
}


void __fastcall SubmarineMapManager__DestroyMapObjects(SubmarineMapManager_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *panelContainer; // x20
  const MethodInfo *v4; // x1

  if ( (byte_40F7C58 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40F7C58 = 1;
  }
  panelContainer = (UnityEngine_Object_o *)this->fields.panelContainer;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__Destroy_34809464(panelContainer, 0LL);
  UnityEngine_Object__Destroy_34809464((UnityEngine_Object_o *)this->fields.gridLine, 0LL);
  UnityEngine_Object__Destroy_34809464((UnityEngine_Object_o *)this->fields.effectContainer, 0LL);
  SubmarineMapManager__DestroyDialog(this, v4);
  EventMapManagerBase__DestroyMapObjects((EventMapManagerBase_o *)this, 0LL);
}


void __fastcall SubmarineMapManager__DoPerformancesByVariedCond(
        SubmarineMapManager_o *this,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x21
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
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x3
  __int64 v30; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v31; // x20
  const MethodInfo *v32; // x2
  struct SubmarineMapDataManager_o *submarineData; // x8
  struct SubmarineQuestSaveInfo_o *BeforeQuestInfo_k__BackingField; // x8
  int32_t v35; // w1
  System_Collections_Generic_IEnumerable_T__o *HideEnemyOccupiedPanelTasks; // x0
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x3
  __int64 v40; // x4
  __int64 v41; // x22
  __int64 v42; // x1
  __int64 v43; // x2
  __int64 v44; // x3
  __int64 v45; // x4
  SchedulerTaskBase_TaskCallback_o *v46; // x23
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  TaskScheduler_o *taskScheduler; // x0

  if ( (byte_40F7C5C & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_SchedulerTaskBase__AddRange__, finishCallback);
    sub_B16FFC(&Method_System_Collections_Generic_List_SchedulerTaskBase__Add__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__, v8);
    sub_B16FFC(&System_Collections_Generic_List_SchedulerTaskBase__TypeInfo, v9);
    sub_B16FFC(&SchedulerTaskNone_TypeInfo, v10);
    sub_B16FFC(&SchedulerTaskBase_TaskCallback_TypeInfo, v11);
    sub_B16FFC(&Method_SubmarineMapManager___c__DisplayClass35_0__DoPerformancesByVariedCond_b__0__, v12);
    sub_B16FFC(&SubmarineMapManager___c__DisplayClass35_0_TypeInfo, v13);
    byte_40F7C5C = 1;
  }
  v14 = sub_B170CC(SubmarineMapManager___c__DisplayClass35_0_TypeInfo, finishCallback, method, v3, v4);
  SubmarineMapManager___c__DisplayClass35_0___ctor((SubmarineMapManager___c__DisplayClass35_0_o *)v14, 0LL);
  if ( !v14 )
    goto LABEL_14;
  *(_QWORD *)(v14 + 16) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v14 + 16), (System_Int32_array **)this, v15, v16, v17, v18, v19, v20);
  *(_QWORD *)(v14 + 24) = finishCallback;
  sub_B16F98(
    (BattleServantConfConponent_o *)(v14 + 24),
    (System_Int32_array **)finishCallback,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  v31 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_SchedulerTaskBase__TypeInfo,
                                                                                                  v27,
                                                                                                  v28,
                                                                                                  v29,
                                                                                                  v30);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v31,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
  submarineData = this->fields.submarineData;
  if ( !submarineData )
    goto LABEL_14;
  BeforeQuestInfo_k__BackingField = submarineData->fields._BeforeQuestInfo_k__BackingField;
  if ( !BeforeQuestInfo_k__BackingField )
    goto LABEL_14;
  v35 = BeforeQuestInfo_k__BackingField->fields._IsQuestClear_k__BackingField
     || BeforeQuestInfo_k__BackingField->fields._IsQuestPhaseClear_k__BackingField
      ? BeforeQuestInfo_k__BackingField->fields._QuestId_k__BackingField
      : -1;
  HideEnemyOccupiedPanelTasks = (System_Collections_Generic_IEnumerable_T__o *)SubmarineMapManager__CreateHideEnemyOccupiedPanelTasks(
                                                                                 this,
                                                                                 v35,
                                                                                 v32);
  if ( !v31 )
    goto LABEL_14;
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v31,
    HideEnemyOccupiedPanelTasks,
    (const MethodInfo_2F25F28 *)Method_System_Collections_Generic_List_SchedulerTaskBase__AddRange__);
  v41 = sub_B170CC(SchedulerTaskNone_TypeInfo, v37, v38, v39, v40);
  SchedulerTaskNone___ctor((SchedulerTaskNone_o *)v41, 0LL);
  v46 = (SchedulerTaskBase_TaskCallback_o *)sub_B170CC(SchedulerTaskBase_TaskCallback_TypeInfo, v42, v43, v44, v45);
  SchedulerTaskBase_TaskCallback___ctor(
    v46,
    (Il2CppObject *)v14,
    Method_SubmarineMapManager___c__DisplayClass35_0__DoPerformancesByVariedCond_b__0__,
    0LL);
  if ( !v41
    || (*(_QWORD *)(v41 + 32) = v46,
        sub_B16F98((BattleServantConfConponent_o *)(v41 + 32), (System_Int32_array **)v46, v47, v48, v49, v50, v51, v52),
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v31,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v41,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_SchedulerTaskBase__Add__),
        (taskScheduler = this->fields.taskScheduler) == 0LL) )
  {
LABEL_14:
    sub_B170D4();
  }
  TaskScheduler__AddTask_19029216(taskScheduler, 0, (System_Collections_Generic_List_SchedulerTaskBase__o *)v31, 0LL);
}


void __fastcall SubmarineMapManager__ExtractMapObjectFromAssetData(
        SubmarineMapManager_o *this,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x3
  struct MapControl_MapInfo_o *mapInfo; // x8
  SubmarineMapAssetManager_o *assetManager; // x0

  SubmarineMapManager__CreateAssetManagerIfNotExists(this, (const MethodInfo *)assetData);
  mapInfo = this->fields.mapInfo;
  if ( !mapInfo || (assetManager = this->fields.assetManager) == 0LL )
    sub_B170D4();
  SubmarineMapAssetManager__LoadMapObject(assetManager, assetData, mapInfo->fields.mapId, v5);
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
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.submarineData, 0LL, v2, v3, v4, v5, v6, v7);
  EventMapManagerBase__Finish((EventMapManagerBase_o *)this, 0LL);
}


SrcSpotBasePrefab_o *__fastcall SubmarineMapManager__GetHomeSpot(SubmarineMapManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *v4; // x20
  struct SubmarineMapDataManager_o *submarineData; // x8
  struct SubmarineSettingsManager_o *Settings_k__BackingField; // x8
  int32_t HomeSpotId_k__BackingField; // w22
  UnityEngine_GameObject_array *Children; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  int max_length; // w8
  UnityEngine_GameObject_array *v12; // x19
  unsigned int v13; // w23
  UnityEngine_GameObject_o *v14; // x0
  UnityEngine_Object_o *Component_srcLineSprite; // x21

  if ( (byte_40F7C6E & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_SrcSpotBasePrefab___, method);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v3);
    byte_40F7C6E = 1;
  }
  v4 = 0LL;
  if ( GameObjectExtensions__HasChild(this->fields.rootSpotP, 0LL) )
  {
    submarineData = this->fields.submarineData;
    if ( !submarineData
      || (Settings_k__BackingField = submarineData->fields._Settings_k__BackingField) == 0LL
      || (HomeSpotId_k__BackingField = Settings_k__BackingField->fields._HomeSpotId_k__BackingField,
          (Children = GameObjectExtensions__GetChildren(this->fields.rootSpotP, 0, 0LL)) == 0LL) )
    {
LABEL_29:
      sub_B170D4();
    }
    max_length = Children->max_length;
    v12 = Children;
    if ( max_length >= 1 )
    {
      v13 = 0;
      v4 = 0LL;
      while ( 1 )
      {
        if ( v13 >= max_length )
        {
          sub_B17100(Children, v9, v10);
          sub_B170A0();
        }
        v14 = v12->m_Items[v13];
        if ( !v14 )
          goto LABEL_29;
        Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                            v14,
                                                            (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_SrcSpotBasePrefab___);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        Children = (UnityEngine_GameObject_array *)UnityEngine_Object__op_Equality(Component_srcLineSprite, 0LL, 0LL);
        if ( ((unsigned __int8)Children & 1) == 0 )
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
          Children = (UnityEngine_GameObject_array *)UnityEngine_Object__op_Equality(v4, 0LL, 0LL);
          if ( ((unsigned __int8)Children & 1) != 0 )
            goto LABEL_23;
          if ( !v4 )
            goto LABEL_29;
          if ( Component_srcLineSprite[5].fields.m_CachedPtr < v4[5].fields.m_CachedPtr )
LABEL_23:
            v4 = Component_srcLineSprite;
        }
        max_length = v12->max_length;
        if ( (int)++v13 >= max_length )
          return (SrcSpotBasePrefab_o *)v4;
      }
    }
    return 0LL;
  }
  return (SrcSpotBasePrefab_o *)v4;
}


bool __fastcall SubmarineMapManager__HasSelfQuestAfterAction(SubmarineMapManager_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  struct SubmarineMapDataManager_o *submarineData; // x8
  struct SubmarineQuestSaveInfo_o *BeforeQuestInfo_k__BackingField; // x8
  int32_t QuestId_k__BackingField; // w1
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *HideEnemyOccupiedPanelTasks; // x20
  const MethodInfo *v9; // x1
  System_Collections_Generic_IEnumerable_T__o *SubsequentialOpenPanelTasks; // x0

  if ( (byte_40F7C5B & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_SchedulerTaskBase__AddRange__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_SchedulerTaskBase__get_Count__, v4);
    byte_40F7C5B = 1;
  }
  submarineData = this->fields.submarineData;
  if ( !submarineData
    || (BeforeQuestInfo_k__BackingField = submarineData->fields._BeforeQuestInfo_k__BackingField) == 0LL
    || (!BeforeQuestInfo_k__BackingField->fields._IsQuestClear_k__BackingField
     && !BeforeQuestInfo_k__BackingField->fields._IsQuestPhaseClear_k__BackingField
      ? (QuestId_k__BackingField = -1)
      : (QuestId_k__BackingField = BeforeQuestInfo_k__BackingField->fields._QuestId_k__BackingField),
        HideEnemyOccupiedPanelTasks = (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)SubmarineMapManager__CreateHideEnemyOccupiedPanelTasks(this, QuestId_k__BackingField, v2),
        SubsequentialOpenPanelTasks = (System_Collections_Generic_IEnumerable_T__o *)SubmarineMapManager__CreateSubsequentialOpenPanelTasks(
                                                                                       this,
                                                                                       v9),
        !HideEnemyOccupiedPanelTasks) )
  {
    sub_B170D4();
  }
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    HideEnemyOccupiedPanelTasks,
    SubsequentialOpenPanelTasks,
    (const MethodInfo_2F25F28 *)Method_System_Collections_Generic_List_SchedulerTaskBase__AddRange__);
  return HideEnemyOccupiedPanelTasks->fields._size > 0;
}


void __fastcall SubmarineMapManager__HideScanObstacleEffect(SubmarineMapManager_o *this, const MethodInfo *method)
{
  if ( (byte_40F7C7B & 1) == 0 )
  {
    sub_B16FFC(&Method_SubmarineMapManager_ReturnEffectsToPool_SubmarineEffectScanObstaclePanelComponent___, method);
    byte_40F7C7B = 1;
  }
  SubmarineMapManager__ReturnEffectsToPool_SubmarineEffectSelectedPanelComponent_(
    this,
    (ComponentPool_T__o *)this->fields.effectScanObstaclePanelObjPool,
    (const MethodInfo_2250F44 *)Method_SubmarineMapManager_ReturnEffectsToPool_SubmarineEffectScanObstaclePanelComponent___);
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

  if ( (byte_40F7C7F & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40F7C7F = 1;
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
    UnityEngine_Object__Destroy_34809464(klass, 0LL);
    p_scanRangeNotificator->klass = 0LL;
    sub_B16F98(p_scanRangeNotificator, 0LL, v7, v8, v9, v10, v11, v12);
  }
}


void __fastcall SubmarineMapManager__HideScannableEffect(SubmarineMapManager_o *this, const MethodInfo *method)
{
  if ( (byte_40F7C79 & 1) == 0 )
  {
    sub_B16FFC(&Method_SubmarineMapManager_ReturnEffectsToPool_SubmarineEffectScannablePanelComponent___, method);
    byte_40F7C79 = 1;
  }
  SubmarineMapManager__ReturnEffectsToPool_SubmarineEffectSelectedPanelComponent_(
    this,
    (ComponentPool_T__o *)this->fields.effectScannablePanelObjPool,
    (const MethodInfo_2250F44 *)Method_SubmarineMapManager_ReturnEffectsToPool_SubmarineEffectScannablePanelComponent___);
  this->fields.isShowScannableEffect = 0;
}


void __fastcall SubmarineMapManager__HideSelectedPanelEffect(SubmarineMapManager_o *this, const MethodInfo *method)
{
  if ( (byte_40F7C7D & 1) == 0 )
  {
    sub_B16FFC(&Method_SubmarineMapManager_ReturnEffectsToPool_SubmarineEffectSelectedPanelComponent___, method);
    byte_40F7C7D = 1;
  }
  SubmarineMapManager__ReturnEffectsToPool_SubmarineEffectSelectedPanelComponent_(
    this,
    (ComponentPool_T__o *)this->fields.effectSelectedPanelObjPool,
    (const MethodInfo_2250F44 *)Method_SubmarineMapManager_ReturnEffectsToPool_SubmarineEffectSelectedPanelComponent___);
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
  __int64 v11; // x3
  __int64 v12; // x4
  SubmarineMapDataManager_o *v13; // x22
  const MethodInfo *v14; // x3
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x3
  __int64 v24; // x4
  TaskScheduler_o *v25; // x20
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  struct TaskScheduler_o *taskScheduler; // x20
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x3
  __int64 v36; // x4
  System_Action_bool__o *v37; // x0
  System_Int32_array **v38; // x21
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x3
  __int64 v48; // x4
  SubmarineMapManager_PlayingScanVoiceData_o *v49; // x20
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7

  if ( (byte_40F7C52 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_bool___ctor__, method);
    sub_B16FFC(&System_Action_bool__TypeInfo, v3);
    sub_B16FFC(&SubmarineMapManager_PlayingScanVoiceData_TypeInfo, v4);
    sub_B16FFC(&SubmarineMapDataManager_TypeInfo, v5);
    sub_B16FFC(&TaskScheduler_TypeInfo, v6);
    byte_40F7C52 = 1;
  }
  EventMapManagerBase__Initialize((EventMapManagerBase_o *)this, 0LL);
  mapInfo = this->fields.mapInfo;
  warInfo = this->fields.warInfo;
  v13 = (SubmarineMapDataManager_o *)sub_B170CC(SubmarineMapDataManager_TypeInfo, v9, v10, v11, v12);
  SubmarineMapDataManager___ctor(v13, mapInfo, warInfo, v14);
  this->fields.submarineData = v13;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.submarineData,
    (System_Int32_array **)v13,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  v25 = (TaskScheduler_o *)sub_B170CC(TaskScheduler_TypeInfo, v21, v22, v23, v24);
  TaskScheduler___ctor(v25, 0LL);
  this->fields.taskScheduler = v25;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.taskScheduler,
    (System_Int32_array **)v25,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  taskScheduler = this->fields.taskScheduler;
  v37 = (System_Action_bool__o *)sub_B170CC(System_Action_bool__TypeInfo, v33, v34, v35, v36);
  if ( !this
    || (v38 = (System_Int32_array **)v37,
        System_Action_bool____ctor(
          v37,
          (Il2CppObject *)this,
          (intptr_t)this->klass->vtable._31_SetCameraWorkBlock.methodPtr,
          (const MethodInfo_24B33C8 *)Method_System_Action_bool___ctor__),
        !taskScheduler) )
  {
    sub_B170D4();
  }
  taskScheduler->fields._AllTouchBlockMethod_k__BackingField = (struct System_Action_bool__o *)v38;
  sub_B16F98(
    (BattleServantConfConponent_o *)&taskScheduler->fields._AllTouchBlockMethod_k__BackingField,
    v38,
    v39,
    v40,
    v41,
    v42,
    v43,
    v44);
  v49 = (SubmarineMapManager_PlayingScanVoiceData_o *)sub_B170CC(
                                                        SubmarineMapManager_PlayingScanVoiceData_TypeInfo,
                                                        v45,
                                                        v46,
                                                        v47,
                                                        v48);
  SubmarineMapManager_PlayingScanVoiceData___ctor(v49, 0LL);
  this->fields.playingScanVoiceData = v49;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.playingScanVoiceData,
    (System_Int32_array **)v49,
    v50,
    v51,
    v52,
    v53,
    v54,
    v55);
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
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x21
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x3
  __int64 v26; // x4
  System_Action_o *v27; // x19

  if ( (byte_40F7C53 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, finishCallback);
    sub_B16FFC(&AtlasManager_TypeInfo, v7);
    sub_B16FFC(&Method_SubmarineMapManager___c__DisplayClass20_0__LoadAssets_b__0__, v8);
    sub_B16FFC(&SubmarineMapManager___c__DisplayClass20_0_TypeInfo, v9);
    byte_40F7C53 = 1;
  }
  v10 = sub_B170CC(SubmarineMapManager___c__DisplayClass20_0_TypeInfo, finishCallback, method, v3, v4);
  SubmarineMapManager___c__DisplayClass20_0___ctor((SubmarineMapManager___c__DisplayClass20_0_o *)v10, 0LL);
  if ( !v10 )
    sub_B170D4();
  *(_QWORD *)(v10 + 16) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v10 + 16), (System_Int32_array **)this, v11, v12, v13, v14, v15, v16);
  *(_QWORD *)(v10 + 24) = finishCallback;
  sub_B16F98(
    (BattleServantConfConponent_o *)(v10 + 24),
    (System_Int32_array **)finishCallback,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  v27 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v23, v24, v25, v26);
  System_Action___ctor(
    v27,
    (Il2CppObject *)v10,
    Method_SubmarineMapManager___c__DisplayClass20_0__LoadAssets_b__0__,
    0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadUISkin(v27, 5, 1, 0LL);
}


void __fastcall SubmarineMapManager__LoadPoolEffects(SubmarineMapManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  struct SubmarineMapAssetManager_o *assetManager; // x8
  UnityEngine_GameObject_o *EffectScannedPanelPrefab_k__BackingField; // x20
  ComponentPool_SubmarineEffectSelectedPanelComponent__o *v17; // x21
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  struct ComponentPool_CommonEffectComponent__o *effectScanedPanelObjPool; // x0
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x3
  __int64 v28; // x4
  struct SubmarineMapAssetManager_o *v29; // x8
  UnityEngine_GameObject_o *EffectScanObstaclePanelPrafab_k__BackingField; // x20
  ComponentPool_SubmarineEffectSelectedPanelComponent__o *v31; // x21
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x3
  __int64 v41; // x4
  struct SubmarineMapAssetManager_o *v42; // x8
  UnityEngine_GameObject_o *EffectScannablePanelPrafab_k__BackingField; // x20
  ComponentPool_SubmarineEffectSelectedPanelComponent__o *v44; // x21
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  ComponentPool_SubmarineEffectScannablePanelComponent__o *effectScannablePanelObjPool; // x0
  __int64 v52; // x1
  __int64 v53; // x2
  __int64 v54; // x3
  __int64 v55; // x4
  struct SubmarineMapAssetManager_o *v56; // x8
  UnityEngine_GameObject_o *EffectSelectedPanelPrefab_k__BackingField; // x20
  ComponentPool_SubmarineEffectSelectedPanelComponent__o *v58; // x21
  System_String_array **v59; // x2
  System_String_array **v60; // x3
  System_Boolean_array **v61; // x4
  System_Int32_array **v62; // x5
  System_Int32_array *v63; // x6
  System_Int32_array *v64; // x7

  if ( (byte_40F7C76 & 1) == 0 )
  {
    sub_B16FFC(&Method_ComponentPool_SubmarineEffectScannablePanelComponent__Preload__, method);
    sub_B16FFC(&Method_ComponentPool_CommonEffectComponent__Preload__, v6);
    sub_B16FFC(&Method_ComponentPool_SubmarineEffectScanObstaclePanelComponent___ctor__, v7);
    sub_B16FFC(&Method_ComponentPool_SubmarineEffectSelectedPanelComponent___ctor__, v8);
    sub_B16FFC(&Method_ComponentPool_SubmarineEffectScannablePanelComponent___ctor__, v9);
    sub_B16FFC(&Method_ComponentPool_CommonEffectComponent___ctor__, v10);
    sub_B16FFC(&ComponentPool_SubmarineEffectSelectedPanelComponent__TypeInfo, v11);
    sub_B16FFC(&ComponentPool_SubmarineEffectScanObstaclePanelComponent__TypeInfo, v12);
    sub_B16FFC(&ComponentPool_CommonEffectComponent__TypeInfo, v13);
    sub_B16FFC(&ComponentPool_SubmarineEffectScannablePanelComponent__TypeInfo, v14);
    byte_40F7C76 = 1;
  }
  assetManager = this->fields.assetManager;
  if ( !assetManager )
    goto LABEL_10;
  EffectScannedPanelPrefab_k__BackingField = assetManager->fields._EffectScannedPanelPrefab_k__BackingField;
  v17 = (ComponentPool_SubmarineEffectSelectedPanelComponent__o *)sub_B170CC(
                                                                    ComponentPool_CommonEffectComponent__TypeInfo,
                                                                    method,
                                                                    v2,
                                                                    v3,
                                                                    v4);
  ComponentPool_SubmarineEffectSelectedPanelComponent____ctor(
    v17,
    EffectScannedPanelPrefab_k__BackingField,
    20,
    (const MethodInfo_25CAAF8 *)Method_ComponentPool_CommonEffectComponent___ctor__);
  this->fields.effectScanedPanelObjPool = (struct ComponentPool_CommonEffectComponent__o *)v17;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.effectScanedPanelObjPool,
    (System_Int32_array **)v17,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  effectScanedPanelObjPool = this->fields.effectScanedPanelObjPool;
  if ( !effectScanedPanelObjPool )
    goto LABEL_10;
  ComponentPool_SubmarineEffectScannablePanelComponent___Preload(
    (ComponentPool_SubmarineEffectScannablePanelComponent__o *)effectScanedPanelObjPool,
    9,
    (const MethodInfo_25CABE0 *)Method_ComponentPool_CommonEffectComponent__Preload__);
  v29 = this->fields.assetManager;
  if ( !v29 )
    goto LABEL_10;
  EffectScanObstaclePanelPrafab_k__BackingField = v29->fields._EffectScanObstaclePanelPrafab_k__BackingField;
  v31 = (ComponentPool_SubmarineEffectSelectedPanelComponent__o *)sub_B170CC(
                                                                    ComponentPool_SubmarineEffectScanObstaclePanelComponent__TypeInfo,
                                                                    v25,
                                                                    v26,
                                                                    v27,
                                                                    v28);
  ComponentPool_SubmarineEffectSelectedPanelComponent____ctor(
    v31,
    EffectScanObstaclePanelPrafab_k__BackingField,
    20,
    (const MethodInfo_25CAAF8 *)Method_ComponentPool_SubmarineEffectScanObstaclePanelComponent___ctor__);
  this->fields.effectScanObstaclePanelObjPool = (struct ComponentPool_SubmarineEffectScanObstaclePanelComponent__o *)v31;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.effectScanObstaclePanelObjPool,
    (System_Int32_array **)v31,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
  v42 = this->fields.assetManager;
  if ( !v42 )
    goto LABEL_10;
  EffectScannablePanelPrafab_k__BackingField = v42->fields._EffectScannablePanelPrafab_k__BackingField;
  v44 = (ComponentPool_SubmarineEffectSelectedPanelComponent__o *)sub_B170CC(
                                                                    ComponentPool_SubmarineEffectScannablePanelComponent__TypeInfo,
                                                                    v38,
                                                                    v39,
                                                                    v40,
                                                                    v41);
  ComponentPool_SubmarineEffectSelectedPanelComponent____ctor(
    v44,
    EffectScannablePanelPrafab_k__BackingField,
    200,
    (const MethodInfo_25CAAF8 *)Method_ComponentPool_SubmarineEffectScannablePanelComponent___ctor__);
  this->fields.effectScannablePanelObjPool = (struct ComponentPool_SubmarineEffectScannablePanelComponent__o *)v44;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.effectScannablePanelObjPool,
    (System_Int32_array **)v44,
    v45,
    v46,
    v47,
    v48,
    v49,
    v50);
  effectScannablePanelObjPool = this->fields.effectScannablePanelObjPool;
  if ( !effectScannablePanelObjPool
    || (ComponentPool_SubmarineEffectScannablePanelComponent___Preload(
          effectScannablePanelObjPool,
          50,
          (const MethodInfo_25CABE0 *)Method_ComponentPool_SubmarineEffectScannablePanelComponent__Preload__),
        (v56 = this->fields.assetManager) == 0LL) )
  {
LABEL_10:
    sub_B170D4();
  }
  EffectSelectedPanelPrefab_k__BackingField = v56->fields._EffectSelectedPanelPrefab_k__BackingField;
  v58 = (ComponentPool_SubmarineEffectSelectedPanelComponent__o *)sub_B170CC(
                                                                    ComponentPool_SubmarineEffectSelectedPanelComponent__TypeInfo,
                                                                    v52,
                                                                    v53,
                                                                    v54,
                                                                    v55);
  ComponentPool_SubmarineEffectSelectedPanelComponent____ctor(
    v58,
    EffectSelectedPanelPrefab_k__BackingField,
    1,
    (const MethodInfo_25CAAF8 *)Method_ComponentPool_SubmarineEffectSelectedPanelComponent___ctor__);
  this->fields.effectSelectedPanelObjPool = v58;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.effectSelectedPanelObjPool,
    (System_Int32_array **)v58,
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
  const MethodInfo *v9; // x1
  SubmarineMapDataManager_o *v10; // x0

  submarineData = this->fields.submarineData;
  if ( !submarineData
    || (SubmarineMapDataManager__UpdateParams(submarineData, -1, method),
        SubmarineMapManager__UpdateClosedPanelDisplay(this, v6),
        SubmarineMapManager__HideScanObstacleEffect(this, v7),
        SubmarineMapManager__ShowScanObstacleEffect(this, v8),
        (v10 = this->fields.submarineData) == 0LL) )
  {
    sub_B170D4();
  }
  SubmarineMapDataManager__DeleteBeforeQuestInfo(v10, v9);
  ActionExtensions__Call(finishCallback, 0LL);
}


void __fastcall SubmarineMapManager__OnAfterSpotCreated(
        SubmarineMapManager_o *this,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  System_Collections_IEnumerator_o *v4; // x1

  v4 = SubmarineMapManager__CoOnAfterSpotCreated(this, finishCallback, method);
  UnityEngine_MonoBehaviour__StartCoroutine_34804316((UnityEngine_MonoBehaviour_o *)this, v4, 0LL);
}


void __fastcall SubmarineMapManager__OnBeforeQuestAfterAction(
        SubmarineMapManager_o *this,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x21
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
  __int64 v24; // x3
  __int64 v25; // x4
  System_Action_o *v26; // x20
  const MethodInfo *v27; // x2

  if ( (byte_40F7C56 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, finishCallback);
    sub_B16FFC(&Method_SubmarineMapManager___c__DisplayClass26_0__OnBeforeQuestAfterAction_b__0__, v7);
    sub_B16FFC(&SubmarineMapManager___c__DisplayClass26_0_TypeInfo, v8);
    byte_40F7C56 = 1;
  }
  v9 = sub_B170CC(SubmarineMapManager___c__DisplayClass26_0_TypeInfo, finishCallback, method, v3, v4);
  SubmarineMapManager___c__DisplayClass26_0___ctor((SubmarineMapManager___c__DisplayClass26_0_o *)v9, 0LL);
  if ( !v9 )
    sub_B170D4();
  *(_QWORD *)(v9 + 16) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v9 + 16), (System_Int32_array **)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v9 + 24) = finishCallback;
  sub_B16F98(
    (BattleServantConfConponent_o *)(v9 + 24),
    (System_Int32_array **)finishCallback,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  v26 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v22, v23, v24, v25);
  System_Action___ctor(
    v26,
    (Il2CppObject *)v9,
    Method_SubmarineMapManager___c__DisplayClass26_0__OnBeforeQuestAfterAction_b__0__,
    0LL);
  SubmarineMapManager__DoPerformancesByVariedCond(this, v26, v27);
}


void __fastcall SubmarineMapManager__OnEndScan(SubmarineMapManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  clsQuestCheck_o *v6; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x3
  __int64 v10; // x4
  struct MapControl_WarInfo_o *warInfo; // x8
  int32_t warId; // w21
  QuestTree_o *v13; // x20
  System_Action_o *v14; // x22
  System_Collections_IEnumerator_o *v15; // x1

  if ( (byte_40F7C64 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_SingletonTemplate_QuestTree__get_Instance__, v3);
    sub_B16FFC(&SingletonTemplate_QuestTree__TypeInfo, v4);
    sub_B16FFC(&Method_SubmarineMapManager__OnEndScan_b__43_0__, v5);
    byte_40F7C64 = 1;
  }
  if ( (BYTE3(SingletonTemplate_QuestTree__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_QuestTree__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_QuestTree__TypeInfo);
  }
  v6 = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_QuestTree__get_Instance__);
  warInfo = this->fields.warInfo;
  if ( !warInfo
    || (warId = warInfo->fields.warId,
        v13 = (QuestTree_o *)v6,
        v14 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v7, v8, v9, v10),
        System_Action___ctor(v14, (Il2CppObject *)this, Method_SubmarineMapManager__OnEndScan_b__43_0__, 0LL),
        !v13) )
  {
    sub_B170D4();
  }
  v15 = QuestTree__mfBaseTreeUpdateWithOpenCheck(v13, warId, v14, 0LL);
  UnityEngine_MonoBehaviour__StartCoroutine_34804316((UnityEngine_MonoBehaviour_o *)this, v15, 0LL);
}


void __fastcall SubmarineMapManager__OnEveryActionEnd(SubmarineMapManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  const MethodInfo *v4; // x1
  __int64 v5; // x2
  __int64 v6; // x3
  __int64 v7; // x4
  System_Action_o *v8; // x20
  const MethodInfo *v9; // x1

  if ( (byte_40F7C57 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_SubmarineMapManager__OnEveryActionEnd_b__28_0__, v3);
    byte_40F7C57 = 1;
  }
  if ( SubmarineMapManager__HasSelfQuestAfterAction(this, method) )
  {
    v8 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v4, v5, v6, v7);
    System_Action___ctor(v8, (Il2CppObject *)this, Method_SubmarineMapManager__OnEveryActionEnd_b__28_0__, 0LL);
    ((void (__fastcall *)(SubmarineMapManager_o *, System_Action_o *, Il2CppMethodPointer))this->klass->vtable._23_OnBeforeQuestAfterAction.method)(
      this,
      v8,
      this->klass->vtable._24_OnAfterQuestAfterAction.methodPtr);
  }
  else
  {
    SubmarineMapManager__HideScannableEffect(this, v4);
    SubmarineMapManager__ShowScannableEffect(this, v9);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SubmarineMapManager__OnScanDecided(
        SubmarineMapManager_o *this,
        int32_t scanId,
        SubmarineMapPanelData_o *panelData,
        const MethodInfo *method)
{
  __int64 v4; // x4
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x20
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
  int32_t eventId; // w0
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x3
  __int64 v35; // x4
  NetworkManager_ResultCallbackFunc_o *v36; // x22
  EventScanPanelMapRequest_o *Request_WarBoardWallAttackRequest; // x22
  const MethodInfo *v38; // x1
  int32_t v39; // w0
  struct MapControl_MapInfo_o *mapInfo; // x8

  if ( (byte_40F7C5F & 1) == 0 )
  {
    sub_B16FFC(&Method_NetworkManager_getRequest_EventScanPanelMapRequest___, *(_QWORD *)&scanId);
    sub_B16FFC(&NetworkManager_TypeInfo, v8);
    sub_B16FFC(&NetworkManager_ResultCallbackFunc_TypeInfo, v9);
    sub_B16FFC(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v10);
    sub_B16FFC(&SingletonTemplate_clsQuestCheck__TypeInfo, v11);
    sub_B16FFC(&Method_SubmarineMapManager___c__DisplayClass38_0__OnScanDecided_b__0__, v12);
    sub_B16FFC(&SubmarineMapManager___c__DisplayClass38_0_TypeInfo, v13);
    byte_40F7C5F = 1;
  }
  v14 = sub_B170CC(SubmarineMapManager___c__DisplayClass38_0_TypeInfo, *(_QWORD *)&scanId, panelData, method, v4);
  SubmarineMapManager___c__DisplayClass38_0___ctor((SubmarineMapManager___c__DisplayClass38_0_o *)v14, 0LL);
  if ( !v14 )
    goto LABEL_15;
  *(_QWORD *)(v14 + 16) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v14 + 16), (System_Int32_array **)this, v15, v16, v17, v18, v19, v20);
  *(_QWORD *)(v14 + 32) = panelData;
  v21 = v14 + 32;
  *(_DWORD *)(v14 + 24) = scanId;
  sub_B16F98((BattleServantConfConponent_o *)(v14 + 32), (System_Int32_array **)panelData, v22, v23, v24, v25, v26, v27);
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
  v29 = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  eventId = SubmarineMapManager__get_eventId(this, v30);
  if ( !v29 )
    goto LABEL_15;
  clsQuestCheck__SaveEventQuestIdListPlayable(v29, eventId, 0LL);
  v36 = (NetworkManager_ResultCallbackFunc_o *)sub_B170CC(
                                                 NetworkManager_ResultCallbackFunc_TypeInfo,
                                                 v32,
                                                 v33,
                                                 v34,
                                                 v35);
  NetworkManager_ResultCallbackFunc___ctor(
    v36,
    (Il2CppObject *)v14,
    Method_SubmarineMapManager___c__DisplayClass38_0__OnScanDecided_b__0__,
    0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Request_WarBoardWallAttackRequest = (EventScanPanelMapRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                      v36,
                                                                      (const MethodInfo_19DD960 *)Method_NetworkManager_getRequest_EventScanPanelMapRequest___);
  v39 = SubmarineMapManager__get_eventId(this, v38);
  mapInfo = this->fields.mapInfo;
  if ( !mapInfo || !*(_QWORD *)v21 || !Request_WarBoardWallAttackRequest )
LABEL_15:
    sub_B170D4();
  EventScanPanelMapRequest__beginRequest(
    Request_WarBoardWallAttackRequest,
    v39,
    mapInfo->fields.mapId,
    *(_DWORD *)(*(_QWORD *)v21 + 24LL),
    *(_DWORD *)(v14 + 24),
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
  UserPresentBoxWindow_resData_array *v22; // x0
  __int64 v23; // x1
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  __int64 v30; // x8
  UserPresentBoxWindow_resData_array *v31; // x19
  UserPresentBoxWindow_resData_o *v32; // x9
  __int64 v33; // x9
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
  EventSaveData_o *BeforeEventSubmarineSaveData_k__BackingField; // x0
  System_String_array *ValueByArray; // x0
  __int64 v50; // x1
  int max_length; // w8
  System_String_o **v52; // x9
  System_String_o *v53; // x21
  System_String_o **v54; // x9
  System_String_o *v55; // x20
  __int64 *v56; // x8
  System_String_o *v57; // x22
  TerminalPramsManager_c *v58; // x0
  struct EventSaveData_o *v59; // x23
  System_String_o *v60; // x24
  System_Int32_array **SaveData_21931300; // x0
  System_String_array **v62; // x2
  System_String_array **v63; // x3
  System_Boolean_array **v64; // x4
  System_Int32_array **v65; // x5
  System_Int32_array *v66; // x6
  System_Int32_array *v67; // x7
  UserPresentBoxWindow_resData_o *v68; // x8
  System_Int32_array **getSvts; // x19
  TerminalPramsManager_c *v70; // x0
  BattleServantConfConponent_o *p_mResultEventPanelRewardInfos; // x0
  __int64 v72; // x1
  TerminalSceneComponent_c *v73; // x0
  struct TerminalSceneComponent_o *mInstance; // x8
  TitleInfoControl_o *mTitleInfo; // x0
  int v76; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_40F7C60 & 1) == 0 )
  {
    sub_B16FFC(&EventSaveData_TypeInfo, result);
    sub_B16FFC(&Method_JsonManager_DeserializeArray_EventScanPanelMapRequest_ResultData___, v9);
    sub_B16FFC(&JsonManager_TypeInfo, v10);
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v11);
    sub_B16FFC(&TerminalSceneComponent_TypeInfo, v12);
    sub_B16FFC(&TitleInfoEventSubmarineStatusComponent_TypeInfo, v13);
    sub_B16FFC(&StringLiteral_20980/*"ng"*/, v14);
    sub_B16FFC(&StringLiteral_15571/*"["*/, v15);
    sub_B16FFC(&StringLiteral_6560/*"False"*/, v16);
    sub_B16FFC(&StringLiteral_15807/*"]"*/, v17);
    sub_B16FFC(&StringLiteral_951/*"0"*/, v18);
    byte_40F7C60 = 1;
  }
  v76 = 0;
  if ( !System_String__op_Inequality(result, (System_String_o *)StringLiteral_20980/*"ng"*/, 0LL) )
  {
    SubmarineMapManager__OnEndScan(this, v19);
    return;
  }
  SubmarineMapManager__StartScanPerformance(this, scanId, panelData, v20);
  v21 = (Il2CppObject *)System_String__Concat_43746016(
                          (System_String_o *)StringLiteral_15571/*"["*/,
                          result,
                          (System_String_o *)StringLiteral_15807/*"]"*/,
                          0LL);
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v22 = JsonManager__DeserializeArray_UserPresentBoxWindow_resData_(
          v21,
          (const MethodInfo_19D67B8 *)Method_JsonManager_DeserializeArray_EventScanPanelMapRequest_ResultData___);
  if ( !v22 )
    goto LABEL_83;
  v30 = *(_QWORD *)&v22->max_length;
  v31 = v22;
  if ( !v30 )
    return;
  if ( !(_DWORD)v30 )
  {
LABEL_84:
    sub_B17100(v22, v23, v24);
    sub_B170A0();
  }
  v32 = v22->m_Items[0];
  if ( !v32 )
    goto LABEL_83;
  v33 = *(_QWORD *)&v32->fields.overflowType;
  if ( v33 )
  {
    v34 = *(_QWORD *)(v33 + 24);
    if ( v34 )
    {
      if ( !(_DWORD)v34 )
        goto LABEL_84;
      v35 = *(_QWORD *)(v33 + 32);
      if ( v35 )
      {
        v76 = *(_QWORD *)(v35 + 32);
        if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        }
        if ( !byte_40F6E3E )
        {
          sub_B16FFC(&TerminalPramsManager_TypeInfo, v23);
          byte_40F6E3E = 1;
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
          v37 = (EventSaveData_o *)sub_B170CC(EventSaveData_TypeInfo, v23, v24, v25, v26);
          EventSaveData___ctor(v37, 0LL);
          if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          }
          if ( !byte_40F6E18 )
          {
            sub_B16FFC(&TerminalPramsManager_TypeInfo, v38);
            byte_40F6E18 = 1;
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
          sub_B16F98(
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
        if ( !byte_40F6E3E )
        {
          sub_B16FFC(&TerminalPramsManager_TypeInfo, v23);
          byte_40F6E3E = 1;
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
            v52 = &ValueByArray->m_Items[1];
            if ( max_length <= 1 )
              v52 = (System_String_o **)&StringLiteral_951/*"0"*/;
            v53 = *v52;
            v54 = max_length <= 2 ? (System_String_o **)&StringLiteral_951/*"0"*/ : &ValueByArray->m_Items[2];
            v55 = *v54;
            v56 = max_length <= 3 ? &StringLiteral_6560/*"False"*/ : (__int64 *)&ValueByArray->m_Items[3];
          }
          else
          {
            v55 = (System_String_o *)StringLiteral_951/*"0"*/;
            v56 = &StringLiteral_6560/*"False"*/;
            v53 = (System_String_o *)StringLiteral_951/*"0"*/;
          }
          v57 = (System_String_o *)*v56;
          if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          }
          if ( !byte_40F6E3E )
          {
            sub_B16FFC(&TerminalPramsManager_TypeInfo, v50);
            byte_40F6E3E = 1;
          }
          v58 = TerminalPramsManager_TypeInfo;
          if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            v58 = TerminalPramsManager_TypeInfo;
          }
          v59 = v58->static_fields->_BeforeEventSubmarineSaveData_k__BackingField;
          v60 = System_Int32__ToString((int32_t)&v76, 0LL);
          if ( (BYTE3(TitleInfoEventSubmarineStatusComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TitleInfoEventSubmarineStatusComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TitleInfoEventSubmarineStatusComponent_TypeInfo);
          }
          SaveData_21931300 = (System_Int32_array **)TitleInfoEventSubmarineStatusComponent__CreateSaveData_21931300(
                                                       v60,
                                                       v53,
                                                       v55,
                                                       v57,
                                                       0LL);
          if ( v59 )
          {
            v59->fields.value = (struct System_String_o *)SaveData_21931300;
            sub_B16F98(
              (BattleServantConfConponent_o *)&v59->fields.value,
              SaveData_21931300,
              v62,
              v63,
              v64,
              v65,
              v66,
              v67);
            v30 = *(_QWORD *)&v31->max_length;
            goto LABEL_66;
          }
        }
LABEL_83:
        sub_B170D4();
      }
    }
  }
LABEL_66:
  if ( !(_DWORD)v30 )
    goto LABEL_84;
  v68 = v31->m_Items[0];
  if ( !v68 )
    goto LABEL_83;
  getSvts = (System_Int32_array **)v68->fields.getSvts;
  v70 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v70 = TerminalPramsManager_TypeInfo;
  }
  p_mResultEventPanelRewardInfos = (BattleServantConfConponent_o *)&v70->static_fields->mResultEventPanelRewardInfos;
  p_mResultEventPanelRewardInfos->klass = (BattleServantConfConponent_c *)getSvts;
  sub_B16F98(p_mResultEventPanelRewardInfos, getSvts, v24, v25, v26, v27, v28, v29);
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  }
  if ( !byte_40F6042 )
  {
    sub_B16FFC(&TerminalSceneComponent_TypeInfo, v72);
    byte_40F6042 = 1;
  }
  v73 = TerminalSceneComponent_TypeInfo;
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v73 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = v73->static_fields->mInstance;
  if ( !mInstance )
    goto LABEL_83;
  mTitleInfo = mInstance->fields.mTitleInfo;
  if ( !mTitleInfo )
    goto LABEL_83;
  TitleInfoControl__UpdateEventSubmarineItemDisp(mTitleInfo, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SubmarineMapManager__OnScannerSelected(
        SubmarineMapManager_o *this,
        int32_t scanId,
        SubmarineMapPanelData_o *panelData,
        const MethodInfo *method)
{
  __int64 v4; // x4
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x20
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
  __int64 v29; // x3
  __int64 v30; // x4
  SchedulerTaskBase_TaskCallback_o *v31; // x22
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  TaskScheduler_o *taskScheduler; // x19
  __int64 v39; // x2
  __int64 v40; // x0
  __int64 v41; // x20
  __int64 v42; // x0
  __int64 v43; // x1
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  const MethodInfo *v50; // x1
  const MethodInfo *v51; // x1
  const MethodInfo *v52; // x1

  if ( (byte_40F7C5E & 1) == 0 )
  {
    sub_B16FFC(&SchedulerTaskBase___TypeInfo, *(_QWORD *)&scanId);
    sub_B16FFC(&SchedulerTaskBase_TaskCallback_TypeInfo, v8);
    sub_B16FFC(&Method_SubmarineMapManager___c__DisplayClass37_0__OnScannerSelected_b__0__, v9);
    sub_B16FFC(&SubmarineMapManager___c__DisplayClass37_0_TypeInfo, v10);
    byte_40F7C5E = 1;
  }
  v11 = sub_B170CC(SubmarineMapManager___c__DisplayClass37_0_TypeInfo, *(_QWORD *)&scanId, panelData, method, v4);
  SubmarineMapManager___c__DisplayClass37_0___ctor((SubmarineMapManager___c__DisplayClass37_0_o *)v11, 0LL);
  if ( !v11 )
    goto LABEL_12;
  *(_QWORD *)(v11 + 16) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v11 + 16), (System_Int32_array **)this, v12, v13, v14, v15, v16, v17);
  *(_QWORD *)(v11 + 32) = panelData;
  *(_DWORD *)(v11 + 24) = scanId;
  sub_B16F98((BattleServantConfConponent_o *)(v11 + 32), (System_Int32_array **)panelData, v18, v19, v20, v21, v22, v23);
  klass = this->klass;
  if ( *(int *)(v11 + 24) > 0 )
  {
    ((void (__fastcall *)(SubmarineMapManager_o *, __int64, Il2CppMethodPointer))klass->vtable._30_SetAllTouchBlock.method)(
      this,
      1LL,
      klass->vtable._31_SetCameraWorkBlock.methodPtr);
    *(_BYTE *)(v11 + 40) = 0;
    v26 = SubmarineMapManager__ShowScanRangeTask(
            this,
            *(_DWORD *)(v11 + 24),
            *(SubmarineMapPanelData_o **)(v11 + 32),
            (bool *)(v11 + 40),
            v25);
    v31 = (SchedulerTaskBase_TaskCallback_o *)sub_B170CC(SchedulerTaskBase_TaskCallback_TypeInfo, v27, v28, v29, v30);
    SchedulerTaskBase_TaskCallback___ctor(
      v31,
      (Il2CppObject *)v11,
      Method_SubmarineMapManager___c__DisplayClass37_0__OnScannerSelected_b__0__,
      0LL);
    if ( v26 )
    {
      v26->fields.EndCallback = v31;
      sub_B16F98(
        (BattleServantConfConponent_o *)&v26->fields.EndCallback,
        (System_Int32_array **)v31,
        v32,
        v33,
        v34,
        v35,
        v36,
        v37);
      taskScheduler = this->fields.taskScheduler;
      v40 = sub_B17014(SchedulerTaskBase___TypeInfo, 1LL, v39);
      if ( v40 )
      {
        v41 = v40;
        v42 = sub_B170BC(v26, *(_QWORD *)(*(_QWORD *)v40 + 64LL));
        if ( !v42 )
        {
          sub_B170F4(0LL);
          sub_B170A0();
        }
        if ( !*(_DWORD *)(v41 + 24) )
        {
          sub_B17100(v42, v43, v44);
          sub_B170A0();
        }
        *(_QWORD *)(v41 + 32) = v26;
        sub_B16F98((BattleServantConfConponent_o *)(v41 + 32), (System_Int32_array **)v26, v44, v45, v46, v47, v48, v49);
        if ( taskScheduler )
        {
          TaskScheduler__AddTask(taskScheduler, 0, (SchedulerTaskBase_array *)v41, 0LL);
          return;
        }
      }
    }
LABEL_12:
    sub_B170D4();
  }
  ((void (__fastcall *)(SubmarineMapManager_o *, void *))klass->vtable._32_AllTouchBlockForceFalse.method)(
    this,
    klass[1]._1.image);
  SubmarineMapManager__HideScannableEffect(this, v50);
  SubmarineMapManager__ShowScannableEffect(this, v51);
  SubmarineMapManager__HideSelectedPanelEffect(this, v52);
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
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  SubmarineScanConfirmDialog_o *scanConfirmDialog; // x21
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x3
  __int64 v29; // x4
  System_Action_bool__o *v30; // x22
  const MethodInfo *v31; // x4

  if ( (byte_40F7C74 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_bool___ctor__, *(_QWORD *)&scanId);
    sub_B16FFC(&System_Action_bool__TypeInfo, v9);
    sub_B16FFC(&Method_SubmarineMapManager___c__DisplayClass69_0__OpenScanConfirmDialog_b__0__, v10);
    sub_B16FFC(&SubmarineMapManager___c__DisplayClass69_0_TypeInfo, v11);
    byte_40F7C74 = 1;
  }
  v12 = sub_B170CC(
          SubmarineMapManager___c__DisplayClass69_0_TypeInfo,
          *(_QWORD *)&scanId,
          isShowDialogUpper,
          callback,
          method);
  SubmarineMapManager___c__DisplayClass69_0___ctor((SubmarineMapManager___c__DisplayClass69_0_o *)v12, 0LL);
  if ( !v12 )
    goto LABEL_6;
  *(_QWORD *)(v12 + 16) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v12 + 16), (System_Int32_array **)this, v13, v14, v15, v16, v17, v18);
  *(_QWORD *)(v12 + 24) = callback;
  sub_B16F98((BattleServantConfConponent_o *)(v12 + 24), (System_Int32_array **)callback, v19, v20, v21, v22, v23, v24);
  ((void (__fastcall *)(SubmarineMapManager_o *, __int64, Il2CppMethodPointer))this->klass->vtable._31_SetCameraWorkBlock.method)(
    this,
    1LL,
    this->klass->vtable._32_AllTouchBlockForceFalse.methodPtr);
  scanConfirmDialog = this->fields.scanConfirmDialog;
  v30 = (System_Action_bool__o *)sub_B170CC(System_Action_bool__TypeInfo, v26, v27, v28, v29);
  System_Action_bool____ctor(
    v30,
    (Il2CppObject *)v12,
    Method_SubmarineMapManager___c__DisplayClass69_0__OpenScanConfirmDialog_b__0__,
    (const MethodInfo_24B33C8 *)Method_System_Action_bool___ctor__);
  if ( !scanConfirmDialog )
LABEL_6:
    sub_B170D4();
  SubmarineScanConfirmDialog__Open(scanConfirmDialog, scanId, isShowDialogUpper, v30, v31);
}


void __fastcall SubmarineMapManager__OpenSelectScannerDialog(
        SubmarineMapManager_o *this,
        System_Action_int__o *callback,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x21
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  SubmarineSelectScannerDialog_o *selectScannerDialog; // x20
  const MethodInfo *v26; // x1
  int32_t eventId; // w22
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x3
  __int64 v31; // x4
  System_Action_int__o *v32; // x23
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x3
  __int64 v36; // x4
  System_Action_o *v37; // x21
  const MethodInfo *v38; // x4

  if ( (byte_40F7C72 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_int___ctor__, callback);
    sub_B16FFC(&System_Action_int__TypeInfo, v7);
    sub_B16FFC(&System_Action_TypeInfo, v8);
    sub_B16FFC(&Method_SubmarineMapManager_TryOpenNewScannerDialog__, v9);
    sub_B16FFC(&Method_SubmarineMapManager___c__DisplayClass67_0__OpenSelectScannerDialog_b__0__, v10);
    sub_B16FFC(&SubmarineMapManager___c__DisplayClass67_0_TypeInfo, v11);
    byte_40F7C72 = 1;
  }
  v12 = sub_B170CC(SubmarineMapManager___c__DisplayClass67_0_TypeInfo, callback, method, v3, v4);
  SubmarineMapManager___c__DisplayClass67_0___ctor((SubmarineMapManager___c__DisplayClass67_0_o *)v12, 0LL);
  if ( !v12 )
    goto LABEL_6;
  *(_QWORD *)(v12 + 16) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v12 + 16), (System_Int32_array **)this, v13, v14, v15, v16, v17, v18);
  *(_QWORD *)(v12 + 24) = callback;
  sub_B16F98((BattleServantConfConponent_o *)(v12 + 24), (System_Int32_array **)callback, v19, v20, v21, v22, v23, v24);
  ((void (__fastcall *)(SubmarineMapManager_o *, __int64, Il2CppMethodPointer))this->klass->vtable._31_SetCameraWorkBlock.method)(
    this,
    1LL,
    this->klass->vtable._32_AllTouchBlockForceFalse.methodPtr);
  selectScannerDialog = this->fields.selectScannerDialog;
  eventId = SubmarineMapManager__get_eventId(this, v26);
  v32 = (System_Action_int__o *)sub_B170CC(System_Action_int__TypeInfo, v28, v29, v30, v31);
  System_Action_int____ctor(
    v32,
    (Il2CppObject *)v12,
    Method_SubmarineMapManager___c__DisplayClass67_0__OpenSelectScannerDialog_b__0__,
    (const MethodInfo_24B5D80 *)Method_System_Action_int___ctor__);
  v37 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v33, v34, v35, v36);
  System_Action___ctor(v37, (Il2CppObject *)this, Method_SubmarineMapManager_TryOpenNewScannerDialog__, 0LL);
  if ( !selectScannerDialog )
LABEL_6:
    sub_B170D4();
  SubmarineSelectScannerDialog__Open(selectScannerDialog, eventId, v32, v37, v38);
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
    sub_B16F98(p_assetManager, 0LL, v5, v6, v7, v8, v9, v10);
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

  if ( (byte_40F7C77 & 1) == 0 )
  {
    sub_B16FFC(&Method_ComponentPool_CommonEffectComponent__Finish__, method);
    sub_B16FFC(&Method_ComponentPool_SubmarineEffectScannablePanelComponent__Finish__, v3);
    sub_B16FFC(&Method_ComponentPool_SubmarineEffectScanObstaclePanelComponent__Finish__, v4);
    byte_40F7C77 = 1;
  }
  effectScanedPanelObjPool = this->fields.effectScanedPanelObjPool;
  if ( effectScanedPanelObjPool )
  {
    ComponentPool_SubmarineEffectScannablePanelComponent___Finish(
      (ComponentPool_SubmarineEffectScannablePanelComponent__o *)effectScanedPanelObjPool,
      (const MethodInfo_25CB5B8 *)Method_ComponentPool_CommonEffectComponent__Finish__);
    this->fields.effectScanedPanelObjPool = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)&this->fields.effectScanedPanelObjPool, 0LL, v6, v7, v8, v9, v10, v11);
  }
  effectScannablePanelObjPool = this->fields.effectScannablePanelObjPool;
  if ( effectScannablePanelObjPool )
  {
    ComponentPool_SubmarineEffectScannablePanelComponent___Finish(
      effectScannablePanelObjPool,
      (const MethodInfo_25CB5B8 *)Method_ComponentPool_SubmarineEffectScannablePanelComponent__Finish__);
    this->fields.effectScannablePanelObjPool = 0LL;
    sub_B16F98(
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
      (const MethodInfo_25CB5B8 *)Method_ComponentPool_SubmarineEffectScanObstaclePanelComponent__Finish__);
    p_effectScanObstaclePanelObjPool->klass = 0LL;
    sub_B16F98(p_effectScanObstaclePanelObjPool, 0LL, v22, v23, v24, v25, v26, v27);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SubmarineMapManager__RentAndPutEffectAbovePanel_SubmarineEffectSelectedPanelComponent_(
        SubmarineMapManager_o *this,
        ComponentPool_T__o *pool,
        SubmarineMapPanelData_o *panelData,
        System_Nullable_Vector3__o offset,
        System_Nullable_Vector3__o scale,
        const MethodInfo_2250DA0 *method)
{
  unsigned __int64 v7; // x19
  __int64 v8; // x20
  __int64 v12; // x1
  UnityEngine_GameObject_o *effectContainer; // x0
  UnityEngine_Transform_o *transform; // x24
  SubmarinePanelPositionCalculator_o *positionCalculator; // x0
  float v16; // s0
  float v17; // s1
  float v18; // s2
  UnityEngine_Component_o *v19; // x0
  UnityEngine_Component_o *v20; // x21
  UnityEngine_Transform_o *v21; // x0
  UnityEngine_Transform_o *v22; // x22
  const MethodInfo_29CF794 *v23; // x2
  float x; // s8
  float y; // s9
  float z; // s10
  float v27; // s0
  float v28; // s1
  float v29; // s2
  unsigned __int64 v30; // x19
  UnityEngine_Transform_o *v31; // x0
  const MethodInfo_29CF794 *v32; // x2
  bool v33; // zf
  UnityEngine_Transform_o *v34; // x19
  int v35; // s0
  System_Nullable_Vector3__o v38; // [xsp+0h] [xbp-70h] BYREF
  System_Nullable_Vector3__o v39; // [xsp+10h] [xbp-60h] BYREF
  System_Nullable_Vector3__o v40; // 0:x0.16
  System_Nullable_Vector3__o v41; // 0:x0.16
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v43; // 0:s0.4,4:s1.4,8:s2.4

  v7 = *(_QWORD *)&scale.fields.value.fields.z;
  v8 = *(_QWORD *)&offset.fields.value.fields.z;
  v39 = offset;
  v38 = scale;
  if ( (byte_41015DA & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Nullable_Vector3__get_HasValue__, pool);
    sub_B16FFC(&Method_System_Nullable_Vector3__get_Value__, v12);
    byte_41015DA = 1;
  }
  effectContainer = this->fields.effectContainer;
  if ( !effectContainer )
    goto LABEL_16;
  transform = UnityEngine_GameObject__get_transform(effectContainer, 0LL);
  positionCalculator = SubmarineMapManager__get_positionCalculator(this, 0LL);
  if ( !panelData )
    goto LABEL_16;
  if ( !positionCalculator )
    goto LABEL_16;
  *(UnityEngine_Vector3_o *)&v16 = SubmarinePanelPositionCalculator__GetPositionByIndices(
                                     positionCalculator,
                                     panelData->fields._HIndex_k__BackingField,
                                     panelData->fields._VIndex_k__BackingField,
                                     0LL);
  if ( !pool )
    goto LABEL_16;
  v19 = (UnityEngine_Component_o *)((__int64 (__fastcall *)(ComponentPool_T__o *, UnityEngine_Transform_o *, float, float, float))method->rgctx_data->_0_ComponentPool_T__Rent->methodPointer)(
                                     pool,
                                     transform,
                                     v16,
                                     v17,
                                     v18);
  if ( !v19 )
    goto LABEL_16;
  v20 = v19;
  v21 = UnityEngine_Component__get_transform(v19, 0LL);
  if ( !v21 )
    goto LABEL_16;
  v22 = v21;
  localPosition = UnityEngine_Transform__get_localPosition(v21, 0LL);
  x = localPosition.fields.x;
  y = localPosition.fields.y;
  z = localPosition.fields.z;
  if ( (v8 & 0xFF00000000LL) != 0 )
  {
    *(_QWORD *)&v40.fields.value.fields.x = &v39;
    *(_QWORD *)&v40.fields.value.fields.z = Method_System_Nullable_Vector3__get_Value__;
    *(UnityEngine_Vector3_o *)&v27 = System_Nullable_Vector3___get_Value(v40, v23);
    LOBYTE(v30) = v38.fields.has_value;
  }
  else
  {
    v30 = HIDWORD(v7);
    *(UnityEngine_Vector3_o *)&v27 = UnityEngine_Vector3__get_zero(0LL);
  }
  v43.fields.x = x + v27;
  v43.fields.y = y + v28;
  v43.fields.z = z + v29;
  UnityEngine_Transform__set_localPosition(v22, v43, 0LL);
  v31 = UnityEngine_Component__get_transform(v20, 0LL);
  v33 = (unsigned __int8)v30 == 0;
  v34 = v31;
  if ( v33 )
  {
    *(UnityEngine_Vector3_o *)&v35 = UnityEngine_Vector3__get_one(0LL);
    if ( v34 )
      goto LABEL_14;
LABEL_16:
    sub_B170D4();
  }
  *(_QWORD *)&v41.fields.value.fields.x = &v38;
  *(_QWORD *)&v41.fields.value.fields.z = Method_System_Nullable_Vector3__get_Value__;
  *(UnityEngine_Vector3_o *)&v35 = System_Nullable_Vector3___get_Value(v41, v32);
  if ( !v34 )
    goto LABEL_16;
LABEL_14:
  UnityEngine_Transform__set_localScale(v34, *(UnityEngine_Vector3_o *)&v35, 0LL);
}


void __fastcall SubmarineMapManager__ResetTimeAcceleration(SubmarineMapManager_o *this, const MethodInfo *method)
{
  UnityEngine_Time__set_timeScale(1.0, 0LL);
  this->fields.isTimeScaleAccelerate = 0;
}


void __fastcall SubmarineMapManager__ReturnEffectsToPool_SubmarineEffectSelectedPanelComponent_(
        SubmarineMapManager_o *this,
        ComponentPool_T__o *pool,
        const MethodInfo_2250F44 *method)
{
  UnityEngine_GameObject_array *Children; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  int max_length; // w8
  UnityEngine_GameObject_array *v9; // x21
  unsigned int v10; // w22
  __int64 v11; // x0

  Children = GameObjectExtensions__GetChildren(this->fields.effectContainer, 0, 0LL);
  if ( !Children )
    goto LABEL_9;
  max_length = Children->max_length;
  v9 = Children;
  if ( max_length >= 1 )
  {
    v10 = 0;
    while ( 1 )
    {
      if ( v10 >= max_length )
      {
        sub_B17100(Children, v6, v7);
        sub_B170A0();
      }
      if ( !v9->m_Items[v10] )
        break;
      v11 = ((__int64 (*)(void))method->rgctx_data->_0_UnityEngine_GameObject_GetComponent_T_->methodPointer)();
      if ( !pool )
        break;
      Children = (UnityEngine_GameObject_array *)((__int64 (__fastcall *)(ComponentPool_T__o *, __int64))method->rgctx_data->_1_ComponentPool_T__Return->methodPointer)(
                                                   pool,
                                                   v11);
      max_length = v9->max_length;
      if ( (int)++v10 >= max_length )
        return;
    }
LABEL_9:
    sub_B170D4();
  }
}


void __fastcall SubmarineMapManager__RevealAvailableSpots(
        SubmarineMapManager_o *this,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x21
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  TaskScheduler_o *taskScheduler; // x20
  const MethodInfo *v19; // x1
  System_Collections_Generic_List_SchedulerTaskBase__o *RevealEachSpotsTasks; // x0
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x3
  __int64 v24; // x4
  __int64 v25; // x20
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x3
  __int64 v29; // x4
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
  __int64 v40; // x2
  __int64 v41; // x0
  __int64 v42; // x21
  __int64 v43; // x0
  __int64 v44; // x1
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  SubmarineMapManager_o *v51; // x0
  const MethodInfo *v52; // x1

  if ( (byte_40F7C63 & 1) == 0 )
  {
    sub_B16FFC(&SchedulerTaskBase___TypeInfo, finishCallback);
    sub_B16FFC(&SchedulerTaskNone_TypeInfo, v7);
    sub_B16FFC(&SchedulerTaskBase_TaskCallback_TypeInfo, v8);
    sub_B16FFC(&Method_SubmarineMapManager___c__DisplayClass42_0__RevealAvailableSpots_b__0__, v9);
    sub_B16FFC(&SubmarineMapManager___c__DisplayClass42_0_TypeInfo, v10);
    byte_40F7C63 = 1;
  }
  v11 = sub_B170CC(SubmarineMapManager___c__DisplayClass42_0_TypeInfo, finishCallback, method, v3, v4);
  SubmarineMapManager___c__DisplayClass42_0___ctor((SubmarineMapManager___c__DisplayClass42_0_o *)v11, 0LL);
  if ( !v11 )
    goto LABEL_13;
  *(_QWORD *)(v11 + 16) = finishCallback;
  sub_B16F98(
    (BattleServantConfConponent_o *)(v11 + 16),
    (System_Int32_array **)finishCallback,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  taskScheduler = this->fields.taskScheduler;
  RevealEachSpotsTasks = SubmarineMapManager__CreateRevealEachSpotsTasks(this, v19);
  if ( !taskScheduler )
    goto LABEL_13;
  TaskScheduler__AddTask_19029216(taskScheduler, 0, RevealEachSpotsTasks, 0LL);
  v25 = sub_B170CC(SchedulerTaskNone_TypeInfo, v21, v22, v23, v24);
  SchedulerTaskNone___ctor((SchedulerTaskNone_o *)v25, 0LL);
  if ( !v25 )
    goto LABEL_13;
  v30 = *(System_Delegate_o **)(v25 + 32);
  v31 = (SchedulerTaskBase_TaskCallback_o *)sub_B170CC(SchedulerTaskBase_TaskCallback_TypeInfo, v26, v27, v28, v29);
  SchedulerTaskBase_TaskCallback___ctor(
    v31,
    (Il2CppObject *)v11,
    Method_SubmarineMapManager___c__DisplayClass42_0__RevealAvailableSpots_b__0__,
    0LL);
  v32 = (System_Int32_array **)System_Delegate__Combine(v30, (System_Delegate_o *)v31, 0LL);
  if ( !v32 || *v32 == (System_Int32_array *)SchedulerTaskBase_TaskCallback_TypeInfo )
  {
    *(_QWORD *)(v25 + 32) = v32;
    sub_B16F98((BattleServantConfConponent_o *)(v25 + 32), v32, v33, v34, v35, v36, v37, v38);
    v39 = this->fields.taskScheduler;
    v41 = sub_B17014(SchedulerTaskBase___TypeInfo, 1LL, v40);
    if ( v41 )
    {
      v42 = v41;
      v43 = sub_B170BC(v25, *(_QWORD *)(*(_QWORD *)v41 + 64LL));
      if ( !v43 )
      {
        sub_B170F4(0LL);
        sub_B170A0();
      }
      if ( !*(_DWORD *)(v42 + 24) )
      {
        sub_B17100(v43, v44, v45);
        sub_B170A0();
      }
      *(_QWORD *)(v42 + 32) = v25;
      sub_B16F98((BattleServantConfConponent_o *)(v42 + 32), (System_Int32_array **)v25, v45, v46, v47, v48, v49, v50);
      if ( v39 )
      {
        TaskScheduler__AddTask(v39, 0, (SchedulerTaskBase_array *)v42, 0LL);
        return;
      }
    }
LABEL_13:
    sub_B170D4();
  }
  v51 = (SubmarineMapManager_o *)sub_B173C8(v32);
  SubmarineMapManager__CreateRevealEachSpotsTasks(v51, v52);
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
  struct SubmarineMapAssetManager_o *assetManager; // x8
  UnityEngine_Object_o *GridTexture_k__BackingField; // x20
  const MethodInfo *v7; // x1
  SubmarineMapDataManager_o *submarineData; // x0
  System_Int32_array *EmptyPanelUniqueIds; // x0
  struct SubmarineMapDataManager_o *v10; // x8
  struct SubmarineMapAssetManager_o *v11; // x9
  UnityEngine_Texture2D_o *WholeGridTexture; // x0
  UnityEngine_Texture2D_o *v13; // x20
  srcLineSprite_o *Component_srcLineSprite; // x0
  UIWidget_o *v15; // x21
  int32_t v16; // w0
  int32_t v17; // w0
  UnityEngine_GameObject_o *v18; // x0
  UnityEngine_Transform_o *transform; // x0
  struct SubmarineMapDataManager_o *v20; // x8
  struct SubmarineSettingsManager_o *Settings_k__BackingField; // x8

  if ( (byte_40F7C6B & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_UITexture___, method);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v3);
    byte_40F7C6B = 1;
  }
  gridLine = (UnityEngine_Object_o *)this->fields.gridLine;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(gridLine, 0LL, 0LL) )
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
        EmptyPanelUniqueIds = SubmarineMapDataManager__GetEmptyPanelUniqueIds(submarineData, v7);
        v10 = this->fields.submarineData;
        if ( v10 )
        {
          v11 = this->fields.assetManager;
          if ( v11 )
          {
            WholeGridTexture = GridLineTextureUtil__CreateWholeGridTexture(
                                 EmptyPanelUniqueIds,
                                 v10->fields._PositionCalculator_k__BackingField,
                                 v11->fields._GridTexture_k__BackingField,
                                 0LL);
            if ( this->fields.gridLine )
            {
              v13 = WholeGridTexture;
              Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                          this->fields.gridLine,
                                          (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_UITexture___);
              if ( v13 )
              {
                v15 = (UIWidget_o *)Component_srcLineSprite;
                v16 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))v13->klass->vtable._4_get_width.method)(
                        v13,
                        v13->klass->vtable._5_set_width.methodPtr);
                if ( v15 )
                {
                  UIWidget__set_width(v15, v16, 0LL);
                  v17 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))v13->klass->vtable._6_get_height.method)(
                          v13,
                          v13->klass->vtable._7_set_height.methodPtr);
                  UIWidget__set_height(v15, v17, 0LL);
                  ((void (__fastcall *)(UIWidget_o *, UnityEngine_Texture2D_o *, Il2CppMethodPointer))v15->klass->vtable._27_set_mainTexture.method)(
                    v15,
                    v13,
                    v15->klass->vtable._28_get_shader.methodPtr);
                  v18 = this->fields.gridLine;
                  if ( v18 )
                  {
                    transform = UnityEngine_GameObject__get_transform(v18, 0LL);
                    v20 = this->fields.submarineData;
                    if ( v20 )
                    {
                      Settings_k__BackingField = v20->fields._Settings_k__BackingField;
                      if ( Settings_k__BackingField )
                      {
                        if ( transform )
                        {
                          UnityEngine_Transform__set_localPosition(
                            transform,
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
    sub_B170D4();
  }
}


void __fastcall SubmarineMapManager__SetTimeAcceleration(SubmarineMapManager_o *this, const MethodInfo *method)
{
  UnityEngine_Time__set_timeScale(this->fields.ACCELERATION_TIME_SCALE, 0LL);
  this->fields.isTimeScaleAccelerate = 1;
}


void __fastcall SubmarineMapManager__ShowScanObstacleEffect(SubmarineMapManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  struct SubmarineMapDataManager_o *submarineData; // x8
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *PanelDataList_k__BackingField; // x0
  System_Collections_Generic_List_Enumerator_T__o v9; // [xsp+8h] [xbp-38h] BYREF
  System_Nullable_Vector3__o v10; // 0:x3.16
  System_Nullable_Vector3__o v11; // 0:x5.16

  if ( (byte_40F7C7A & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__Dispose__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__MoveNext__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__get_Current__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_SubmarineMapPanelData__GetEnumerator__, v5);
    sub_B16FFC(&Method_SubmarineMapManager_RentAndPutEffectAbovePanel_SubmarineEffectScanObstaclePanelComponent___, v6);
    byte_40F7C7A = 1;
  }
  memset(&v9, 0, sizeof(v9));
  if ( !this->fields.isShowScanObstacleEffect )
  {
    submarineData = this->fields.submarineData;
    this->fields.isShowScanObstacleEffect = 1;
    if ( !submarineData
      || (PanelDataList_k__BackingField = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)submarineData->fields._PanelDataList_k__BackingField) == 0LL )
    {
      sub_B170D4();
    }
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v9,
      PanelDataList_k__BackingField,
      (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_SubmarineMapPanelData__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v9,
              (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__MoveNext__) )
    {
      if ( !v9.fields.current )
        sub_B170D4();
      if ( BYTE1(v9.fields.current[3].monitor) )
      {
        *(_QWORD *)&v10.fields.value.fields.x = 0LL;
        *(_QWORD *)&v10.fields.value.fields.z = 0LL;
        *(_QWORD *)&v11.fields.value.fields.x = 0LL;
        *(_QWORD *)&v11.fields.value.fields.z = 0LL;
        SubmarineMapManager__RentAndPutEffectAbovePanel_SubmarineEffectSelectedPanelComponent_(
          this,
          (ComponentPool_T__o *)this->fields.effectScanObstaclePanelObjPool,
          (SubmarineMapPanelData_o *)v9.fields.current,
          v10,
          v11,
          (const MethodInfo_2250DA0 *)Method_SubmarineMapManager_RentAndPutEffectAbovePanel_SubmarineEffectScanObstaclePanelComponent___);
      }
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v9,
      (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__Dispose__);
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
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  WarEntity_o *Entity; // x0
  const MethodInfo *v14; // x2
  UnityEngine_GameObject_o *ScanRangeNotificatorPrefab; // x21
  const MethodInfo *v16; // x1
  UnityEngine_GameObject_o *effectContainer; // x0
  UnityEngine_Transform_o *transform; // x22
  struct UnityEngine_GameObject_o *v19; // x0
  struct UnityEngine_GameObject_o **p_scanRangeNotificator; // x20
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  UnityEngine_Transform_o *v27; // x0

  if ( (byte_40F7C7E & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_EventPanelScanMaster___, *(_QWORD *)&scanId);
    sub_B16FFC(&Method_DataMasterBase_EventPanelScanMaster__EventPanelScanEntity__int__GetEntity__, v7);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject____66874888, v8);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v9);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    byte_40F7C7E = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_20;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)Instance,
                                                                                        (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventPanelScanMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_20;
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             MasterData_WarQuestSelectionMaster,
             scanId,
             (const MethodInfo_266F388 *)Method_DataMasterBase_EventPanelScanMaster__EventPanelScanEntity__int__GetEntity__);
  if ( !Entity )
    return;
  if ( !this->fields.assetManager )
LABEL_20:
    sub_B170D4();
  ScanRangeNotificatorPrefab = SubmarineMapAssetManager__GetScanRangeNotificatorPrefab(
                                 this->fields.assetManager,
                                 Entity->fields.parentWarId,
                                 v14);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)ScanRangeNotificatorPrefab, 0LL, 0LL) )
  {
    SubmarineMapManager__HideScanRange(this, v16);
    effectContainer = this->fields.effectContainer;
    if ( effectContainer )
    {
      transform = UnityEngine_GameObject__get_transform(effectContainer, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v19 = (struct UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_UILabel_(
                                                 (UILabel_o *)ScanRangeNotificatorPrefab,
                                                 transform,
                                                 (const MethodInfo_19DE348 *)Method_UnityEngine_Object_Instantiate_GameObject____66874888);
      this->fields.scanRangeNotificator = v19;
      p_scanRangeNotificator = &this->fields.scanRangeNotificator;
      sub_B16F98(
        (BattleServantConfConponent_o *)p_scanRangeNotificator,
        (System_Int32_array **)v19,
        v21,
        v22,
        v23,
        v24,
        v25,
        v26);
      if ( *p_scanRangeNotificator )
      {
        v27 = UnityEngine_GameObject__get_transform(*p_scanRangeNotificator, 0LL);
        if ( basePanelData )
        {
          if ( v27 )
          {
            UnityEngine_Transform__set_localPosition(v27, basePanelData->fields._LocalPosition_k__BackingField, 0LL);
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
  SubmarineMapDataManager_o *v27; // x0
  SubmarineMapPanelData_o *PanelByIndices; // x0
  int v29; // s0
  SubmarineMapPanelData_o *v33; // x22
  float xMin; // s0
  float v35; // s4
  float xMax; // s0
  float v37; // s4
  float yMin; // s0
  float v39; // s4
  float yMax; // s0
  float v41; // s4
  float v43; // s0
  int v44; // s2
  float v46; // s4
  struct SubmarineMapDataManager_o *v47; // x8
  struct SubmarineSettingsManager_o *v48; // x8
  float x; // s1
  float v50; // s0
  float v51; // s0
  int v52; // s2
  float v54; // s4
  struct SubmarineMapDataManager_o *v55; // x8
  struct SubmarineSettingsManager_o *v56; // x8
  float v57; // s1
  float v58; // s0
  float v59; // s0
  int v60; // s2
  float v62; // s4
  struct SubmarineMapDataManager_o *v63; // x8
  struct SubmarineSettingsManager_o *v64; // x8
  float y; // s1
  float v66; // s0
  float v67; // s0
  int v68; // s2
  float v70; // s4
  struct SubmarineMapDataManager_o *v71; // x8
  struct SubmarineSettingsManager_o *v72; // x8
  float v73; // s1
  float v74; // s0
  __int64 v75; // x2
  SubmarineMapPanelData_array *PanelsByScanEvents; // x0
  __int64 v77; // x1
  __int64 v78; // x2
  __int64 v79; // x3
  __int64 v80; // x4
  UnityEngine_Rect_array *v81; // x21
  System_Collections_Generic_List_Rect__o *v82; // x22
  const MethodInfo *v83; // x3
  System_Collections_Generic_List_SubmarineScanEvent__o *ScanEvents; // x0
  const MethodInfo *v85; // x2
  int max_length; // w8
  SubmarineMapPanelData_array *v87; // x21
  unsigned int v88; // w23
  SubmarineMapPanelData_o *v89; // x25
  int v90; // s0
  int v92; // s4
  int v94; // s6
  struct SubmarineMapDataManager_o *v96; // x8
  struct SubmarineSettingsManager_o *v97; // x8
  float v98; // s2
  float v99; // s3
  int v100; // s2
  int v102; // s4
  float v104; // s0
  float v105; // s1
  Submarine2DUILocationInfo_o *v106; // x22
  const MethodInfo *v107; // x1
  UnityEngine_Rect_array *Rects; // x0
  MapCamera_o *mapCamera; // x23
  UnityEngine_Rect_array *v110; // x22
  __int64 v111; // x1
  __int64 v112; // x2
  __int64 v113; // x3
  __int64 v114; // x4
  Submarine2DUILocationInfo_o *v115; // x22
  const MethodInfo *v116; // x1
  UnityEngine_Rect_array *v117; // x0
  MapCamera_o *v118; // x23
  UnityEngine_Rect_array *v119; // x22
  __int64 v120; // x1
  __int64 v121; // x2
  __int64 v122; // x3
  __int64 v123; // x4
  unsigned int v124; // s0
  unsigned int v125; // s1
  unsigned int v126; // s2
  unsigned int v127; // s3
  UnityEngine_Vector2_o Size; // kr00_8
  __int64 v129; // x2
  int v130; // s0
  System_Single_array *v134; // x20
  float width; // s0
  int v136; // s1
  float v139; // s0
  float height; // s0
  float m_XMin; // s8
  const MethodInfo *v142; // x1
  UnityEngine_Vector2_o center; // kr08_8
  struct SubmarineMapDataManager_o *v144; // x8
  struct SubmarineSettingsManager_o *v145; // x8
  int v146; // s2
  Submarine2DUILocationInfo_o *v148; // x22
  const MethodInfo *v149; // x1
  UnityEngine_Rect_array *v150; // x0
  MapCamera_o *v151; // x23
  UnityEngine_Rect_array *v152; // x22
  UnityEngine_Rect_o v153; // [xsp+0h] [xbp-80h] BYREF
  MethodInfo methoda; // [xsp+10h] [xbp-70h] BYREF
  UnityEngine_Rect_o v155; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
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

  if ( (byte_40F7C81 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Rect__Add__, *(_QWORD *)&scanId);
    sub_B16FFC(&Method_System_Collections_Generic_List_Rect__ToArray__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_Rect___ctor__, v14);
    sub_B16FFC(&System_Collections_Generic_List_Rect__TypeInfo, v15);
    sub_B16FFC(&MapCameraViewAdjusterUtil_TypeInfo, v16);
    sub_B16FFC(&UnityEngine_Rect___TypeInfo, v17);
    sub_B16FFC(&float___TypeInfo, v18);
    sub_B16FFC(&SubmarinScanDialogUpSideWeakLocationInfo_TypeInfo, v19);
    sub_B16FFC(&Submarine2DUILocationInfo_TypeInfo, v20);
    sub_B16FFC(&SubmarineScanDialogUpsideLocationInfo_TypeInfo, v21);
    byte_40F7C81 = 1;
  }
  HIDWORD(methoda.genericContainerHandle) = 0;
  memset(&methoda, 0, 32);
  *(_QWORD *)&v153.fields.m_XMin = 0LL;
  *(_QWORD *)&v153.fields.m_Width = 0LL;
  submarineData = this->fields.submarineData;
  if ( !submarineData )
    goto LABEL_62;
  Settings_k__BackingField = submarineData->fields._Settings_k__BackingField;
  if ( !Settings_k__BackingField )
    goto LABEL_62;
  if ( Settings_k__BackingField->fields._RegardScanRangeAsSimpleSquare_k__BackingField )
  {
    if ( panelData )
    {
      v155.fields.m_XMin = panelData->fields._LocalPosition_k__BackingField.fields.x;
      v155.fields.m_YMin = panelData->fields._LocalPosition_k__BackingField.fields.y;
      v155.fields.m_Width = 0.0;
      v155.fields.m_Height = 0.0;
      UnityEngine_Rect___ctor_34844244(v155, *(UnityEngine_Vector2_o *)&v5, *(UnityEngine_Vector2_o *)&v7, &methoda);
      v25 = -2;
      do
      {
        v26 = -3;
        do
        {
          v27 = this->fields.submarineData;
          if ( !v27 )
            goto LABEL_62;
          PanelByIndices = SubmarineMapDataManager__GetPanelByIndices(
                             v27,
                             panelData->fields._HIndex_k__BackingField + v25,
                             v26 + panelData->fields._VIndex_k__BackingField + 1,
                             v24);
          if ( PanelByIndices )
          {
            v33 = PanelByIndices;
            xMin = UnityEngine_Rect__get_xMin(*(UnityEngine_Rect_o *)&v29, &methoda);
            v156.fields.m_XMin = UnityEngine_Mathf__Min(xMin, v33->fields._LocalPosition_k__BackingField.fields.x, 0LL);
            UnityEngine_Rect__set_xMin(v156, v35, &methoda);
            xMax = UnityEngine_Rect__get_xMax(v157, &methoda);
            v158.fields.m_XMin = UnityEngine_Mathf__Max(xMax, v33->fields._LocalPosition_k__BackingField.fields.x, 0LL);
            UnityEngine_Rect__set_xMax(v158, v37, &methoda);
            yMin = UnityEngine_Rect__get_yMin(v159, &methoda);
            v160.fields.m_XMin = UnityEngine_Mathf__Min(yMin, v33->fields._LocalPosition_k__BackingField.fields.y, 0LL);
            UnityEngine_Rect__set_yMin(v160, v39, &methoda);
            yMax = UnityEngine_Rect__get_yMax(v161, &methoda);
            v162.fields.m_XMin = UnityEngine_Mathf__Max(yMax, v33->fields._LocalPosition_k__BackingField.fields.y, 0LL);
            UnityEngine_Rect__set_yMax(v162, v41, &methoda);
          }
          ++v26;
        }
        while ( v26 < 2 );
      }
      while ( v25++ <= 1 );
      v43 = UnityEngine_Rect__get_xMin(*(UnityEngine_Rect_o *)&v29, &methoda);
      v47 = this->fields.submarineData;
      if ( v47 )
      {
        v48 = v47->fields._Settings_k__BackingField;
        if ( v48 )
        {
          x = v48->fields._PanelUnitSize_k__BackingField.fields.x;
          v50 = v43 - x;
          UnityEngine_Rect__set_xMin(*(UnityEngine_Rect_o *)(&v44 - 2), v46, &methoda);
          v51 = UnityEngine_Rect__get_xMax(v163, &methoda);
          v55 = this->fields.submarineData;
          if ( v55 )
          {
            v56 = v55->fields._Settings_k__BackingField;
            if ( v56 )
            {
              v57 = v56->fields._PanelUnitSize_k__BackingField.fields.x;
              v58 = v51 + v57;
              UnityEngine_Rect__set_xMax(*(UnityEngine_Rect_o *)(&v52 - 2), v54, &methoda);
              v59 = UnityEngine_Rect__get_yMin(v164, &methoda);
              v63 = this->fields.submarineData;
              if ( v63 )
              {
                v64 = v63->fields._Settings_k__BackingField;
                if ( v64 )
                {
                  y = v64->fields._PanelUnitSize_k__BackingField.fields.y;
                  v66 = v59 - y;
                  UnityEngine_Rect__set_yMin(*(UnityEngine_Rect_o *)(&v60 - 2), v62, &methoda);
                  v67 = UnityEngine_Rect__get_yMax(v165, &methoda);
                  v71 = this->fields.submarineData;
                  if ( v71 )
                  {
                    v72 = v71->fields._Settings_k__BackingField;
                    if ( v72 )
                    {
                      v73 = v72->fields._PanelUnitSize_k__BackingField.fields.y;
                      v74 = v67 + v73;
                      UnityEngine_Rect__set_yMax(*(UnityEngine_Rect_o *)(&v68 - 2), v70, &methoda);
                      PanelsByScanEvents = (SubmarineMapPanelData_array *)sub_B17014(
                                                                            UnityEngine_Rect___TypeInfo,
                                                                            1LL,
                                                                            v75);
                      if ( PanelsByScanEvents )
                      {
                        v81 = (UnityEngine_Rect_array *)PanelsByScanEvents;
                        if ( !PanelsByScanEvents->max_length )
                          goto LABEL_63;
                        *(_OWORD *)PanelsByScanEvents->m_Items = *(_OWORD *)&methoda.methodPointer;
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
    sub_B170D4();
  }
  v82 = (System_Collections_Generic_List_Rect__o *)sub_B170CC(
                                                     System_Collections_Generic_List_Rect__TypeInfo,
                                                     *(_QWORD *)&scanId,
                                                     panelData,
                                                     isShowDialogUpper,
                                                     method);
  System_Collections_Generic_List_Rect____ctor(
    v82,
    (const MethodInfo_2E934A4 *)Method_System_Collections_Generic_List_Rect___ctor__);
  ScanEvents = SubmarineDataHelperScan__CreateScanEvents(scanId, panelData, this->fields.submarineData, v83);
  if ( !this->fields.submarineData )
    goto LABEL_62;
  PanelsByScanEvents = SubmarineMapDataManager__GetPanelsByScanEvents(this->fields.submarineData, ScanEvents, v85);
  if ( !PanelsByScanEvents )
    goto LABEL_62;
  max_length = PanelsByScanEvents->max_length;
  v87 = PanelsByScanEvents;
  if ( max_length >= 1 )
  {
    v88 = 0;
    while ( v88 < max_length )
    {
      v89 = v87->m_Items[v88];
      *(UnityEngine_Vector3_o *)&v90 = UnityEngine_Vector3__get_zero(0LL);
      v96 = this->fields.submarineData;
      if ( !v96 )
        goto LABEL_62;
      v97 = v96->fields._Settings_k__BackingField;
      if ( !v97 )
        goto LABEL_62;
      v98 = v97->fields._PanelUnitSize_k__BackingField.fields.x;
      v99 = v97->fields._PanelUnitSize_k__BackingField.fields.y;
      UnityEngine_Rect___ctor_34844244(
        *(UnityEngine_Rect_o *)&v90,
        *(UnityEngine_Vector2_o *)&v92,
        *(UnityEngine_Vector2_o *)&v94,
        (const MethodInfo *)&v153);
      if ( !v89 )
        goto LABEL_62;
      v104 = v89->fields._LocalPosition_k__BackingField.fields.x;
      v105 = v89->fields._LocalPosition_k__BackingField.fields.y;
      UnityEngine_Rect__set_center(
        *(UnityEngine_Rect_o *)(&v100 - 2),
        *(UnityEngine_Vector2_o *)&v102,
        (const MethodInfo *)&v153);
      if ( !v82 )
        goto LABEL_62;
      System_Collections_Generic_List_Rect___Add(
        v82,
        v153,
        (const MethodInfo_2E94238 *)Method_System_Collections_Generic_List_Rect__Add__);
      max_length = v87->max_length;
      if ( (int)++v88 >= max_length )
        goto LABEL_35;
    }
    goto LABEL_63;
  }
LABEL_35:
  if ( !v82 )
    goto LABEL_62;
  v81 = System_Collections_Generic_List_Rect___ToArray(
          v82,
          (const MethodInfo_2E964A0 *)Method_System_Collections_Generic_List_Rect__ToArray__);
LABEL_37:
  v106 = (Submarine2DUILocationInfo_o *)sub_B170CC(Submarine2DUILocationInfo_TypeInfo, v77, v78, v79, v80);
  Submarine2DUILocationInfo___ctor(v106, v107);
  if ( !v106 )
    goto LABEL_62;
  Rects = Base2DUILocationInfo__GetRects((Base2DUILocationInfo_o *)v106, 0LL);
  mapCamera = this->fields.mapCamera;
  v110 = Rects;
  if ( (BYTE3(MapCameraViewAdjusterUtil_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MapCameraViewAdjusterUtil_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MapCameraViewAdjusterUtil_TypeInfo);
  }
  *(UnityEngine_Rect_o *)&methoda.name = MapCameraViewAdjusterUtil__CalculateEachRectIntersectAvoidedCameraRect(
                                           mapCamera,
                                           v81,
                                           v110,
                                           (int32_t *)&methoda.genericContainerHandle + 1,
                                           0LL);
  *isShowDialogUpper = 0;
  if ( HIDWORD(methoda.genericContainerHandle) == 1 )
  {
    v115 = (Submarine2DUILocationInfo_o *)sub_B170CC(
                                            SubmarineScanDialogUpsideLocationInfo_TypeInfo,
                                            v111,
                                            v112,
                                            v113,
                                            v114);
    Submarine2DUILocationInfo___ctor(v115, v116);
    if ( !v115 )
      goto LABEL_62;
    v117 = Base2DUILocationInfo__GetRects((Base2DUILocationInfo_o *)v115, 0LL);
    v118 = this->fields.mapCamera;
    v119 = v117;
    if ( (BYTE3(MapCameraViewAdjusterUtil_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MapCameraViewAdjusterUtil_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MapCameraViewAdjusterUtil_TypeInfo);
    }
    *(UnityEngine_Rect_o *)&v124 = MapCameraViewAdjusterUtil__CalculateEachRectIntersectAvoidedCameraRect(
                                     v118,
                                     v81,
                                     v119,
                                     (int32_t *)&methoda.genericContainerHandle + 1,
                                     0LL);
    if ( HIDWORD(methoda.genericContainerHandle) != 1 )
    {
      if ( HIDWORD(methoda.genericContainerHandle) )
        goto LABEL_49;
      goto LABEL_48;
    }
    v148 = (Submarine2DUILocationInfo_o *)sub_B170CC(
                                            SubmarinScanDialogUpSideWeakLocationInfo_TypeInfo,
                                            v120,
                                            v121,
                                            v122,
                                            v123);
    Submarine2DUILocationInfo___ctor(v148, v149);
    if ( !v148 )
      goto LABEL_62;
    v150 = Base2DUILocationInfo__GetRects((Base2DUILocationInfo_o *)v148, 0LL);
    v151 = this->fields.mapCamera;
    v152 = v150;
    if ( (BYTE3(MapCameraViewAdjusterUtil_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MapCameraViewAdjusterUtil_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MapCameraViewAdjusterUtil_TypeInfo);
    }
    *(UnityEngine_Rect_o *)&v124 = MapCameraViewAdjusterUtil__CalculateEachRectIntersectAvoidedCameraRect(
                                     v151,
                                     v81,
                                     v152,
                                     (int32_t *)&methoda.genericContainerHandle + 1,
                                     0LL);
    if ( !HIDWORD(methoda.genericContainerHandle) )
    {
LABEL_48:
      methoda.name = (const char *)__PAIR64__(v125, v124);
      methoda.klass = (Il2CppClass *)__PAIR64__(v127, v126);
      *isShowDialogUpper = 1;
    }
  }
LABEL_49:
  Size = FSWindowUtil__GetSize(0LL);
  PanelsByScanEvents = (SubmarineMapPanelData_array *)sub_B17014(float___TypeInfo, 3LL, v129);
  if ( !PanelsByScanEvents )
    goto LABEL_62;
  v134 = (System_Single_array *)PanelsByScanEvents;
  if ( !PanelsByScanEvents->max_length
    || (LODWORD(PanelsByScanEvents->m_Items[0]) = 1065353216,
        width = UnityEngine_Rect__get_width(*(UnityEngine_Rect_o *)&v130, (const MethodInfo *)&methoda.name),
        v134->max_length <= 1)
    || (v139 = width / Size.fields.x,
        v134->m_Items[2] = v139,
        height = UnityEngine_Rect__get_height(*(UnityEngine_Rect_o *)(&v136 - 1), (const MethodInfo *)&methoda.name),
        v134->max_length <= 2) )
  {
LABEL_63:
    sub_B17100(PanelsByScanEvents, v77, v78);
    sub_B170A0();
  }
  v134->m_Items[3] = height / Size.fields.y;
  v166.fields.m_XMin = UnityEngine_Mathf__Max_40727544(v134, 0LL);
  m_XMin = v166.fields.m_XMin;
  center = UnityEngine_Rect__get_center(v166, (const MethodInfo *)&methoda.name);
  v144 = this->fields.submarineData;
  if ( !v144 )
    goto LABEL_62;
  v145 = v144->fields._Settings_k__BackingField;
  if ( !v145 )
    goto LABEL_62;
  v146 = 0;
  return SubmarineMapManager__CreateMoveCameraToPositionTask(
           this,
           *(UnityEngine_Vector3_o *)&center.fields.x,
           m_XMin,
           v145->fields._ViewScanRangeCameraDuration_k__BackingField,
           v142);
}


void __fastcall SubmarineMapManager__ShowScannableEffect(SubmarineMapManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  struct SubmarineMapDataManager_o *submarineData; // x8
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *PanelDataList_k__BackingField; // x0
  System_Collections_Generic_List_Enumerator_T__o v9; // [xsp+8h] [xbp-38h] BYREF
  System_Nullable_Vector3__o v10; // 0:x3.16
  System_Nullable_Vector3__o v11; // 0:x5.16

  if ( (byte_40F7C78 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__Dispose__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__MoveNext__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__get_Current__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_SubmarineMapPanelData__GetEnumerator__, v5);
    sub_B16FFC(&Method_SubmarineMapManager_RentAndPutEffectAbovePanel_SubmarineEffectScannablePanelComponent___, v6);
    byte_40F7C78 = 1;
  }
  memset(&v9, 0, sizeof(v9));
  if ( !this->fields.isShowScannableEffect )
  {
    submarineData = this->fields.submarineData;
    this->fields.isShowScannableEffect = 1;
    if ( !submarineData
      || (PanelDataList_k__BackingField = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)submarineData->fields._PanelDataList_k__BackingField) == 0LL )
    {
      sub_B170D4();
    }
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v9,
      PanelDataList_k__BackingField,
      (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_SubmarineMapPanelData__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v9,
              (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__MoveNext__) )
    {
      if ( !v9.fields.current )
        sub_B170D4();
      if ( BYTE2(v9.fields.current[3].monitor) )
      {
        *(_QWORD *)&v10.fields.value.fields.x = 0LL;
        *(_QWORD *)&v10.fields.value.fields.z = 0LL;
        *(_QWORD *)&v11.fields.value.fields.x = 0LL;
        *(_QWORD *)&v11.fields.value.fields.z = 0LL;
        SubmarineMapManager__RentAndPutEffectAbovePanel_SubmarineEffectSelectedPanelComponent_(
          this,
          (ComponentPool_T__o *)this->fields.effectScannablePanelObjPool,
          (SubmarineMapPanelData_o *)v9.fields.current,
          v10,
          v11,
          (const MethodInfo_2250DA0 *)Method_SubmarineMapManager_RentAndPutEffectAbovePanel_SubmarineEffectScannablePanelComponent___);
      }
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v9,
      (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__Dispose__);
  }
}


void __fastcall SubmarineMapManager__ShowSelectedPanelEffect(
        SubmarineMapManager_o *this,
        SubmarineMapPanelData_o *panelData,
        const MethodInfo *method)
{
  System_Nullable_Vector3__o v5; // 0:x3.16
  System_Nullable_Vector3__o v6; // 0:x5.16

  if ( (byte_40F7C7C & 1) == 0 )
  {
    sub_B16FFC(
      &Method_SubmarineMapManager_RentAndPutEffectAbovePanel_SubmarineEffectSelectedPanelComponent___,
      panelData);
    byte_40F7C7C = 1;
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
    (const MethodInfo_2250DA0 *)Method_SubmarineMapManager_RentAndPutEffectAbovePanel_SubmarineEffectSelectedPanelComponent___);
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
  MissionNotifyManager_o *v15; // x0
  CommonUI_o *Instance; // x22
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  System_Action_o *v21; // x23
  TaskScheduler_o *taskScheduler; // x22
  const MethodInfo *v23; // x3
  System_Collections_Generic_List_SchedulerTaskBase__o *ScanTask; // x0
  TaskScheduler_o *v25; // x22
  __int64 v26; // x2
  SchedulerTaskBase_array *v27; // x23
  const MethodInfo *v28; // x3
  SchedulerTaskBase_o *ScanOpenPanelTask; // x0
  __int64 v30; // x1
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  System_Int32_array **v37; // x20
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x3
  __int64 v41; // x4
  __int64 v42; // x20
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x3
  __int64 v46; // x4
  System_Delegate_o *v47; // x22
  SchedulerTaskBase_TaskCallback_o *v48; // x23
  System_Int32_array **v49; // x0
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  TaskScheduler_o *v56; // x19
  __int64 v57; // x2
  __int64 v58; // x0
  __int64 v59; // x21
  System_String_array **v60; // x3
  System_Boolean_array **v61; // x4
  System_Int32_array **v62; // x5
  System_Int32_array *v63; // x6
  System_Int32_array *v64; // x7
  SubmarineMapManager_o *v65; // x0
  const MethodInfo *v66; // x1

  if ( (byte_40F7C61 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, *(_QWORD *)&scanId);
    sub_B16FFC(&SchedulerTaskBase___TypeInfo, v7);
    sub_B16FFC(&SchedulerTaskNone_TypeInfo, v8);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9);
    sub_B16FFC(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v10);
    sub_B16FFC(&SingletonTemplate_MissionNotifyManager__TypeInfo, v11);
    sub_B16FFC(&Method_SubmarineMapManager__StartScanPerformance_b__40_0__, v12);
    sub_B16FFC(&Method_SubmarineMapManager__StartScanPerformance_b__40_1__, v13);
    sub_B16FFC(&SchedulerTaskBase_TaskCallback_TypeInfo, v14);
    byte_40F7C61 = 1;
  }
  if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
  }
  v15 = (MissionNotifyManager_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !v15 )
    goto LABEL_22;
  MissionNotifyManager__StartPause(v15, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v21 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v17, v18, v19, v20);
  System_Action___ctor(v21, (Il2CppObject *)this, Method_SubmarineMapManager__StartScanPerformance_b__40_0__, 0LL);
  if ( !Instance )
    goto LABEL_22;
  CommonUI__SetTouchActionFadeMaskCollider(Instance, v21, 0LL);
  taskScheduler = this->fields.taskScheduler;
  ScanTask = SubmarineMapManager__CreateScanTask(this, panelData, scanId, v23);
  if ( !taskScheduler )
    goto LABEL_22;
  TaskScheduler__AddTask_19029216(taskScheduler, 0, ScanTask, 0LL);
  v25 = this->fields.taskScheduler;
  v27 = (SchedulerTaskBase_array *)sub_B17014(SchedulerTaskBase___TypeInfo, 1LL, v26);
  ScanOpenPanelTask = SubmarineMapManager__CreateScanOpenPanelTask(this, scanId, panelData, v28);
  if ( !v27 )
    goto LABEL_22;
  v37 = (System_Int32_array **)ScanOpenPanelTask;
  if ( ScanOpenPanelTask )
  {
    ScanOpenPanelTask = (SchedulerTaskBase_o *)sub_B170BC(ScanOpenPanelTask, v27->obj.klass->_1.element_class);
    if ( !ScanOpenPanelTask )
      goto LABEL_24;
  }
  if ( !v27->max_length )
    goto LABEL_23;
  v27->m_Items[0] = (SchedulerTaskBase_o *)v37;
  sub_B16F98((BattleServantConfConponent_o *)v27->m_Items, v37, v31, v32, v33, v34, v35, v36);
  if ( !v25 )
    goto LABEL_22;
  TaskScheduler__AddTask(v25, 0, v27, 0LL);
  v42 = sub_B170CC(SchedulerTaskNone_TypeInfo, v38, v39, v40, v41);
  SchedulerTaskNone___ctor((SchedulerTaskNone_o *)v42, 0LL);
  if ( !v42 )
    goto LABEL_22;
  v47 = *(System_Delegate_o **)(v42 + 32);
  v48 = (SchedulerTaskBase_TaskCallback_o *)sub_B170CC(SchedulerTaskBase_TaskCallback_TypeInfo, v43, v44, v45, v46);
  SchedulerTaskBase_TaskCallback___ctor(
    v48,
    (Il2CppObject *)this,
    Method_SubmarineMapManager__StartScanPerformance_b__40_1__,
    0LL);
  v49 = (System_Int32_array **)System_Delegate__Combine(v47, (System_Delegate_o *)v48, 0LL);
  if ( !v49 || *v49 == (System_Int32_array *)SchedulerTaskBase_TaskCallback_TypeInfo )
  {
    *(_QWORD *)(v42 + 32) = v49;
    sub_B16F98((BattleServantConfConponent_o *)(v42 + 32), v49, v50, v51, v52, v53, v54, v55);
    v56 = this->fields.taskScheduler;
    v58 = sub_B17014(SchedulerTaskBase___TypeInfo, 1LL, v57);
    if ( !v58 )
      goto LABEL_22;
    v59 = v58;
    ScanOpenPanelTask = (SchedulerTaskBase_o *)sub_B170BC(v42, *(_QWORD *)(*(_QWORD *)v58 + 64LL));
    if ( ScanOpenPanelTask )
    {
      if ( *(_DWORD *)(v59 + 24) )
      {
        *(_QWORD *)(v59 + 32) = v42;
        sub_B16F98((BattleServantConfConponent_o *)(v59 + 32), (System_Int32_array **)v42, v31, v60, v61, v62, v63, v64);
        if ( v56 )
        {
          TaskScheduler__AddTask(v56, 0, (SchedulerTaskBase_array *)v59, 0LL);
          return;
        }
LABEL_22:
        sub_B170D4();
      }
LABEL_23:
      sub_B17100(ScanOpenPanelTask, v30, v31);
      sub_B170A0();
    }
LABEL_24:
    sub_B170F4(ScanOpenPanelTask);
    sub_B170A0();
  }
  v65 = (SubmarineMapManager_o *)sub_B173C8(v49);
  SubmarineMapManager__OnEndScan(v65, v66);
}


void __fastcall SubmarineMapManager__SubsequentialOpenPanelTaskChain(
        SubmarineMapManager_o *this,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x21
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  const MethodInfo *v18; // x1
  System_Collections_Generic_List_SchedulerTaskBase__o *SubsequentialOpenPanelTasks; // x0
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  __int64 v23; // x4
  int32_t size; // w8
  System_Collections_Generic_List_SchedulerTaskBase__o *v25; // x20
  bool v26; // vf
  int v27; // w8
  SchedulerTaskBase_o *v28; // x22
  BattleServantConfConponent_o *p_EndCallback; // x22
  System_Delegate_o *EndCallback; // t1
  SchedulerTaskBase_TaskCallback_o *v31; // x24
  System_Int32_array **v32; // x0
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  TaskScheduler_o *taskScheduler; // x0
  SubmarineMapManager_o *v40; // x0
  System_Action_o *v41; // x1
  const MethodInfo *v42; // x2

  if ( (byte_40F7C62 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_SchedulerTaskBase__get_Count__, finishCallback);
    sub_B16FFC(&Method_System_Collections_Generic_List_SchedulerTaskBase__get_Item__, v7);
    sub_B16FFC(&SchedulerTaskBase_TaskCallback_TypeInfo, v8);
    sub_B16FFC(&Method_SubmarineMapManager___c__DisplayClass41_0__SubsequentialOpenPanelTaskChain_b__0__, v9);
    sub_B16FFC(&SubmarineMapManager___c__DisplayClass41_0_TypeInfo, v10);
    byte_40F7C62 = 1;
  }
  v11 = sub_B170CC(SubmarineMapManager___c__DisplayClass41_0_TypeInfo, finishCallback, method, v3, v4);
  SubmarineMapManager___c__DisplayClass41_0___ctor((SubmarineMapManager___c__DisplayClass41_0_o *)v11, 0LL);
  if ( !v11 )
    goto LABEL_12;
  *(_QWORD *)(v11 + 16) = finishCallback;
  sub_B16F98(
    (BattleServantConfConponent_o *)(v11 + 16),
    (System_Int32_array **)finishCallback,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  SubsequentialOpenPanelTasks = SubmarineMapManager__CreateSubsequentialOpenPanelTasks(this, v18);
  if ( !SubsequentialOpenPanelTasks )
    goto LABEL_12;
  size = SubsequentialOpenPanelTasks->fields._size;
  v25 = SubsequentialOpenPanelTasks;
  v26 = __OFSUB__(size, 1);
  v27 = size - 1;
  if ( v27 < 0 != v26 )
  {
    ActionExtensions__Call(*(System_Action_o **)(v11 + 16), 0LL);
  }
  else
  {
    v28 = SubsequentialOpenPanelTasks->fields._items->m_Items[v27];
    if ( !v28 )
      goto LABEL_12;
    EndCallback = (System_Delegate_o *)v28->fields.EndCallback;
    p_EndCallback = (BattleServantConfConponent_o *)&v28->fields.EndCallback;
    v31 = (SchedulerTaskBase_TaskCallback_o *)sub_B170CC(SchedulerTaskBase_TaskCallback_TypeInfo, v20, v21, v22, v23);
    SchedulerTaskBase_TaskCallback___ctor(
      v31,
      (Il2CppObject *)v11,
      Method_SubmarineMapManager___c__DisplayClass41_0__SubsequentialOpenPanelTaskChain_b__0__,
      0LL);
    v32 = (System_Int32_array **)System_Delegate__Combine(EndCallback, (System_Delegate_o *)v31, 0LL);
    if ( !v32 || *v32 == (System_Int32_array *)SchedulerTaskBase_TaskCallback_TypeInfo )
    {
      p_EndCallback->klass = (BattleServantConfConponent_c *)v32;
      sub_B16F98(p_EndCallback, v32, v33, v34, v35, v36, v37, v38);
      taskScheduler = this->fields.taskScheduler;
      if ( taskScheduler )
      {
        TaskScheduler__AddTask_19029216(taskScheduler, 0, v25, 0LL);
        return;
      }
LABEL_12:
      sub_B170D4();
    }
    v40 = (SubmarineMapManager_o *)sub_B173C8(v32);
    SubmarineMapManager__RevealAvailableSpots(v40, v41, v42);
  }
}


void __fastcall SubmarineMapManager__TryInitRequest(SubmarineMapManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  int32_t eventId; // w0
  const MethodInfo *v7; // x2
  struct MapControl_MapInfo_o *mapInfo; // x8
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x4
  NetworkManager_ResultCallbackFunc_o *v13; // x20
  EventScanPanelMapRequest_o *Request_WarBoardWallAttackRequest; // x20
  const MethodInfo *v15; // x1
  int32_t v16; // w0
  struct MapControl_MapInfo_o *v17; // x8

  if ( (byte_40F7C59 & 1) == 0 )
  {
    sub_B16FFC(&Method_NetworkManager_getRequest_EventScanPanelMapRequest___, method);
    sub_B16FFC(&NetworkManager_TypeInfo, v3);
    sub_B16FFC(&NetworkManager_ResultCallbackFunc_TypeInfo, v4);
    sub_B16FFC(&Method_SubmarineMapManager__TryInitRequest_b__32_0__, v5);
    byte_40F7C59 = 1;
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
  v13 = (NetworkManager_ResultCallbackFunc_o *)sub_B170CC(NetworkManager_ResultCallbackFunc_TypeInfo, v9, v10, v11, v12);
  NetworkManager_ResultCallbackFunc___ctor(
    v13,
    (Il2CppObject *)this,
    Method_SubmarineMapManager__TryInitRequest_b__32_0__,
    0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Request_WarBoardWallAttackRequest = (EventScanPanelMapRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                      v13,
                                                                      (const MethodInfo_19DD960 *)Method_NetworkManager_getRequest_EventScanPanelMapRequest___);
  v16 = SubmarineMapManager__get_eventId(this, v15);
  v17 = this->fields.mapInfo;
  if ( !v17 || !Request_WarBoardWallAttackRequest )
LABEL_12:
    sub_B170D4();
  EventScanPanelMapRequest__beginRequest(Request_WarBoardWallAttackRequest, v16, v17->fields.mapId, 0, 0, 0LL);
}


void __fastcall SubmarineMapManager__TryOpenNewScannerDialog(SubmarineMapManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  SubmarineMapDataManager_o *submarineData; // x0
  int32_t NewReleasedScanId; // w0
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x4
  SubmarineNewScannerDialog_o *newScannerDialog; // x21
  int32_t v11; // w20
  System_Action_o *v12; // x22
  const MethodInfo *v13; // x3

  if ( (byte_40F7C73 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_SubmarineMapManager_TryOpenNewScannerDialog__, v3);
    byte_40F7C73 = 1;
  }
  submarineData = this->fields.submarineData;
  if ( !submarineData )
    goto LABEL_8;
  NewReleasedScanId = SubmarineMapDataManager__GetNewReleasedScanId(submarineData, method);
  if ( NewReleasedScanId >= 1 )
  {
    newScannerDialog = this->fields.newScannerDialog;
    v11 = NewReleasedScanId;
    v12 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v6, v7, v8, v9);
    System_Action___ctor(v12, (Il2CppObject *)this, Method_SubmarineMapManager_TryOpenNewScannerDialog__, 0LL);
    if ( newScannerDialog )
    {
      SubmarineNewScannerDialog__Open(newScannerDialog, v11, v12, v13);
      return;
    }
LABEL_8:
    sub_B170D4();
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct SubmarineMapDataManager_o *submarineData; // x8
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *PanelDataList_k__BackingField; // x0
  const MethodInfo *v8; // x1
  System_Collections_Generic_List_Enumerator_T__o v9; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_40F7C65 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__Dispose__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__MoveNext__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__get_Current__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_SubmarineMapPanelData__GetEnumerator__, v5);
    byte_40F7C65 = 1;
  }
  memset(&v9, 0, sizeof(v9));
  submarineData = this->fields.submarineData;
  if ( !submarineData
    || (PanelDataList_k__BackingField = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)submarineData->fields._PanelDataList_k__BackingField) == 0LL )
  {
    sub_B170D4();
  }
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v9,
    PanelDataList_k__BackingField,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_SubmarineMapPanelData__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v9,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__MoveNext__) )
  {
    if ( !v9.fields.current )
      sub_B170D4();
    SubmarineMapPanelData__UpdatePanelDisplay((SubmarineMapPanelData_o *)v9.fields.current, v8);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v9,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__Dispose__);
}


void __fastcall SubmarineMapManager__UpdateParams(
        SubmarineMapManager_o *this,
        int32_t beforeClearQuestId,
        const MethodInfo *method)
{
  SubmarineMapDataManager_o *submarineData; // x0

  submarineData = this->fields.submarineData;
  if ( !submarineData )
    sub_B170D4();
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
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x19
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  ScrTerminalMap_o *terminalMap; // x0
  ScrTerminalMap_o *v21; // x0
  ScrTerminalMap_o *v22; // x0
  __int64 v23; // x1
  TerminalSceneComponent_c *v24; // x0
  struct TerminalSceneComponent_o *mInstance; // x8
  TitleInfoControl_o *mTitleInfo; // x0
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x21
  const MethodInfo *v29; // x1
  int32_t eventId; // w0
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x3
  __int64 v34; // x4
  TerminalPramsManager_c *v35; // x0
  TerminalPramsManager_c *v36; // x0
  EventSaveData_o *BeforeEventSubmarineSaveData_k__BackingField; // x0
  System_String_array *ValueByArray; // x0
  __int64 v39; // x8
  TerminalSceneComponent_c *v40; // x0
  struct TerminalSceneComponent_o *v41; // x8
  TitleInfoControl_o *v42; // x20
  EventDetailEntity_o *v43; // x21
  System_Action_o *v44; // x22
  const MethodInfo *v45; // x1
  const MethodInfo *v46; // x1

  if ( (byte_40F7C66 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_DataManager_GetMasterData_EventDetailMaster___, v6);
    sub_B16FFC(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v7);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v9);
    sub_B16FFC(&TerminalSceneComponent_TypeInfo, v10);
    sub_B16FFC(&Method_SubmarineMapManager___c__DisplayClass49_0__UpdateTerminalInfo_b__0__, v11);
    sub_B16FFC(&SubmarineMapManager___c__DisplayClass49_0_TypeInfo, v12);
    byte_40F7C66 = 1;
  }
  v13 = sub_B170CC(SubmarineMapManager___c__DisplayClass49_0_TypeInfo, method, v2, v3, v4);
  SubmarineMapManager___c__DisplayClass49_0___ctor((SubmarineMapManager___c__DisplayClass49_0_o *)v13, 0LL);
  if ( !v13 )
    goto LABEL_54;
  *(_QWORD *)(v13 + 16) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v13 + 16), (System_Int32_array **)this, v14, v15, v16, v17, v18, v19);
  terminalMap = this->fields.terminalMap;
  if ( !terminalMap )
    goto LABEL_54;
  ScrTerminalMap__UpdateMapButtonBadge(terminalMap, 0LL);
  v21 = this->fields.terminalMap;
  if ( !v21 )
    goto LABEL_54;
  ScrTerminalMap__UpdateCaldeaFolderBoardList(v21, 0LL);
  v22 = this->fields.terminalMap;
  if ( !v22 )
    goto LABEL_54;
  ScrTerminalMap__UpdateAreaBoardList(v22, 0LL);
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  }
  if ( !byte_40F6042 )
  {
    sub_B16FFC(&TerminalSceneComponent_TypeInfo, v23);
    byte_40F6042 = 1;
  }
  v24 = TerminalSceneComponent_TypeInfo;
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v24 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = v24->static_fields->mInstance;
  if ( !mInstance )
    goto LABEL_54;
  mTitleInfo = mInstance->fields.mTitleInfo;
  if ( !mTitleInfo )
    goto LABEL_54;
  TitleInfoControl__UpdateEventItemInfo(mTitleInfo, 0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_54;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)Instance,
                                                                                        (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventDetailMaster___);
  eventId = SubmarineMapManager__get_eventId(this, v29);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_54;
  if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
         MasterData_WarQuestSelectionMaster,
         (WarEntity_o **)(v13 + 24),
         eventId,
         (const MethodInfo_266F3E4 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
  {
    *(_DWORD *)(v13 + 32) = 0;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_40F6E3E )
    {
      sub_B16FFC(&TerminalPramsManager_TypeInfo, v31);
      byte_40F6E3E = 1;
    }
    v35 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v35 = TerminalPramsManager_TypeInfo;
    }
    if ( v35->static_fields->_BeforeEventSubmarineSaveData_k__BackingField )
    {
      if ( (BYTE3(v35->vtable._0_Equals.methodPtr) & 4) != 0 && !v35->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v35);
      if ( !byte_40F6E3E )
      {
        sub_B16FFC(&TerminalPramsManager_TypeInfo, v31);
        byte_40F6E3E = 1;
      }
      v36 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v36 = TerminalPramsManager_TypeInfo;
      }
      BeforeEventSubmarineSaveData_k__BackingField = v36->static_fields->_BeforeEventSubmarineSaveData_k__BackingField;
      if ( !BeforeEventSubmarineSaveData_k__BackingField )
        goto LABEL_54;
      ValueByArray = EventSaveData__GetValueByArray(BeforeEventSubmarineSaveData_k__BackingField, 0x2Cu, 0LL);
      if ( ValueByArray )
      {
        v39 = *(_QWORD *)&ValueByArray->max_length;
        if ( v39 )
        {
          if ( !(_DWORD)v39 )
          {
            sub_B17100(ValueByArray, v31, v32);
            sub_B170A0();
          }
          *(_DWORD *)(v13 + 32) = System_Int32__Parse(ValueByArray->m_Items[0], 0LL);
        }
      }
    }
    if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    }
    if ( !byte_40F6042 )
    {
      sub_B16FFC(&TerminalSceneComponent_TypeInfo, v31);
      byte_40F6042 = 1;
    }
    v40 = TerminalSceneComponent_TypeInfo;
    if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      v40 = TerminalSceneComponent_TypeInfo;
    }
    v41 = v40->static_fields->mInstance;
    if ( v41 )
    {
      v42 = v41->fields.mTitleInfo;
      v43 = *(EventDetailEntity_o **)(v13 + 24);
      v44 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v31, v32, v33, v34);
      System_Action___ctor(
        v44,
        (Il2CppObject *)v13,
        Method_SubmarineMapManager___c__DisplayClass49_0__UpdateTerminalInfo_b__0__,
        0LL);
      if ( v42 )
      {
        TitleInfoControl__CheckEventSubmarineStatusAnim(v42, v43, v44, 0LL);
        return;
      }
    }
LABEL_54:
    sub_B170D4();
  }
  ((void (__fastcall *)(SubmarineMapManager_o *, void *))this->klass->vtable._32_AllTouchBlockForceFalse.method)(
    this,
    this->klass[1]._1.image);
  SubmarineMapManager__HideScannableEffect(this, v45);
  SubmarineMapManager__ShowScannableEffect(this, v46);
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
    sub_B170D4();
  SubmarineMapDataManager__UpdateParams(submarineData, -1, v2);
  SubmarineMapManager__UpdateClosedPanelDisplay(this, v5);
  SubmarineMapManager__HideSelectedPanelEffect(this, v6);
  SubmarineMapManager__UpdateTerminalInfo(this, v7);
}


void __fastcall SubmarineMapManager___OnEveryActionEnd_b__28_0(SubmarineMapManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  System_Action_o *v7; // x20

  if ( (byte_40F7C8C & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_SubmarineMapManager__OnEveryActionEnd_b__28_1__, v6);
    byte_40F7C8C = 1;
  }
  v7 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, method, v2, v3, v4);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_SubmarineMapManager__OnEveryActionEnd_b__28_1__, 0LL);
  ((void (__fastcall *)(SubmarineMapManager_o *, System_Action_o *, Il2CppMethodPointer))this->klass->vtable._24_OnAfterQuestAfterAction.method)(
    this,
    v7,
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

  if ( (byte_40F7C8D & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_40F7C8D = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B170D4();
  CommonUI__SetSkipAnimation(Instance, 1, 0LL);
  UnityEngine_Time__set_timeScale(this->fields.ACCELERATION_TIME_SCALE, 0LL);
  this->fields.isTimeScaleAccelerate = 1;
}


void __fastcall SubmarineMapManager___StartScanPerformance_b__40_1(
        SubmarineMapManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  System_Action_o *v7; // x20
  const MethodInfo *v8; // x2

  if ( (byte_40F7C8E & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_SubmarineMapManager__StartScanPerformance_b__40_2__, v6);
    byte_40F7C8E = 1;
  }
  v7 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, method, v2, v3, v4);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_SubmarineMapManager__StartScanPerformance_b__40_2__, 0LL);
  SubmarineMapManager__SubsequentialOpenPanelTaskChain(this, v7, v8);
}


void __fastcall SubmarineMapManager___StartScanPerformance_b__40_2(
        SubmarineMapManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  System_Action_o *v7; // x20
  const MethodInfo *v8; // x2

  if ( (byte_40F7C8F & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_SubmarineMapManager__StartScanPerformance_b__40_3__, v6);
    byte_40F7C8F = 1;
  }
  v7 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, method, v2, v3, v4);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_SubmarineMapManager__StartScanPerformance_b__40_3__, 0LL);
  SubmarineMapManager__RevealAvailableSpots(this, v7, v8);
}


void __fastcall SubmarineMapManager___StartScanPerformance_b__40_3(
        SubmarineMapManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  MissionNotifyManager_o *v4; // x0
  const MethodInfo *v5; // x1

  if ( (byte_40F7C90 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, method);
    sub_B16FFC(&SingletonTemplate_MissionNotifyManager__TypeInfo, v3);
    byte_40F7C90 = 1;
  }
  if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
  }
  v4 = (MissionNotifyManager_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !v4 )
    sub_B170D4();
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
  MapControl_WarInfo_o *WarInfo; // x0

  submarineData = this->fields.submarineData;
  if ( !submarineData || (WarInfo = submarineData->fields.WarInfo) == 0LL )
    sub_B170D4();
  return MapControl_WarInfo__GetEventId(WarInfo, 0LL);
}


SubmarinePanelPositionCalculator_o *__fastcall SubmarineMapManager__get_positionCalculator(
        SubmarineMapManager_o *this,
        const MethodInfo *method)
{
  struct SubmarineMapDataManager_o *submarineData; // x8

  submarineData = this->fields.submarineData;
  if ( !submarineData )
    sub_B170D4();
  return submarineData->fields._PositionCalculator_k__BackingField;
}


SubmarineSettingsManager_o *__fastcall SubmarineMapManager__get_settings(
        SubmarineMapManager_o *this,
        const MethodInfo *method)
{
  struct SubmarineMapDataManager_o *submarineData; // x8

  submarineData = this->fields.submarineData;
  if ( !submarineData )
    sub_B170D4();
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  int32_t _1__state; // w8
  struct SubmarineMapManager_o *_4__this; // x20
  CommonUI_o *v9; // x0
  bool v10; // w21
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  System_Func_bool__o *v15; // x22
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  UnityEngine_WaitUntil_o *v20; // x20
  Il2CppObject **p__2__current; // x19
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  CommonUI_o *Instance; // x0
  SubmarineMapDataManager_o *submarineData; // x0

  if ( (byte_40F7A77 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Func_bool___ctor__, method);
    sub_B16FFC(&System_Func_bool__TypeInfo, v3);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_B16FFC(&Method_SubmarineMapManager__CoInitRequest_b__21_0__, v5);
    sub_B16FFC(&UnityEngine_WaitUntil_TypeInfo, v6);
    byte_40F7A77 = 1;
  }
  _1__state = this->fields.__1__state;
  _4__this = this->fields.__4__this;
  if ( _1__state == 1 )
  {
    this->fields.__1__state = -1;
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance
      || (CommonUI__SetConnect(Instance, 0, 0LL), !_4__this)
      || (submarineData = _4__this->fields.submarineData) == 0LL )
    {
LABEL_14:
      sub_B170D4();
    }
    SubmarineMapDataManager__ConstructParams(submarineData, 0LL);
    ActionExtensions__Call(this->fields.finishCallback, 0LL);
    return 0;
  }
  if ( _1__state )
    return 0;
  this->fields.__1__state = -1;
  if ( !_4__this )
    goto LABEL_14;
  SubmarineMapManager__TryInitRequest(_4__this, 0LL);
  v9 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !v9 )
    goto LABEL_14;
  v10 = 1;
  CommonUI__SetConnect(v9, 1, 0LL);
  v15 = (System_Func_bool__o *)sub_B170CC(System_Func_bool__TypeInfo, v11, v12, v13, v14);
  System_Func_bool____ctor(
    v15,
    (Il2CppObject *)_4__this,
    Method_SubmarineMapManager__CoInitRequest_b__21_0__,
    (const MethodInfo_284E7D0 *)Method_System_Func_bool___ctor__);
  v20 = (UnityEngine_WaitUntil_o *)sub_B170CC(UnityEngine_WaitUntil_TypeInfo, v16, v17, v18, v19);
  UnityEngine_WaitUntil___ctor(v20, v15, 0LL);
  this->fields.__2__current = (Il2CppObject *)v20;
  p__2__current = &this->fields.__2__current;
  sub_B16F98((BattleServantConfConponent_o *)p__2__current, (System_Int32_array **)v20, v22, v23, v24, v25, v26, v27);
  *((_DWORD *)p__2__current - 2) = 1;
  return v10;
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
  __int64 v5; // x3
  __int64 v6; // x4
  System_NotSupportedException_o *v7; // x0
  __int64 v8; // x1

  v2 = sub_B17000(&System_NotSupportedException_TypeInfo, method);
  v7 = (System_NotSupportedException_o *)sub_B170CC(v2, v3, v4, v5, v6);
  System_NotSupportedException___ctor(v7, 0LL);
  sub_B17000(&Method_SubmarineMapManager__CoInitRequest_d__21_System_Collections_IEnumerator_Reset__, v8);
  sub_B170A0();
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
  __int64 v3; // x1
  struct SubmarineMapManager_o *_4__this; // x20
  int32_t eventId; // w0
  struct MapControl_MapInfo_o *mapInfo; // x8
  TaskScheduler_o *taskScheduler; // x0
  struct SubmarineMapAssetManager_o *assetManager; // x8
  UnityEngine_Texture2D_o *ClosedPanelTexture_k__BackingField; // x0
  struct ScrTerminalMap_o *terminalMap; // x8
  AvalonSceneManager_o *Instance; // x0
  System_Int32_array **ResizedTexture2D; // x0
  UnityEngine_Texture2D_o **p_closedPanelTexture; // x21
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  struct SubmarineMapAssetManager_o *v20; // x8
  UnityEngine_Object_o *v21; // x22
  System_Int32_array **DarkTexture2D; // x0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  struct SubmarineMapDataManager_o *submarineData; // x8
  SubmarineQuestSaveInfo_o *BeforeQuestInfo_k__BackingField; // x0
  int32_t v31; // w0

  if ( (byte_40F7A78 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    sub_B16FFC(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v3);
    byte_40F7A78 = 1;
  }
  if ( !this->fields.__1__state )
  {
    _4__this = this->fields.__4__this;
    this->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_26;
    eventId = SubmarineMapManager__get_eventId(_4__this, 0LL);
    mapInfo = _4__this->fields.mapInfo;
    if ( !mapInfo )
      goto LABEL_26;
    if ( SubmarineMapDataManager__HasUserMapData(eventId, mapInfo->fields.mapId, 0LL) )
    {
      taskScheduler = _4__this->fields.taskScheduler;
      if ( taskScheduler )
      {
        TaskScheduler__Activate(taskScheduler, 0LL);
        assetManager = _4__this->fields.assetManager;
        if ( assetManager )
        {
          ClosedPanelTexture_k__BackingField = assetManager->fields._ClosedPanelTexture_k__BackingField;
          terminalMap = _4__this->fields.terminalMap;
          if ( ClosedPanelTexture_k__BackingField )
          {
            if ( !terminalMap )
              goto LABEL_26;
          }
          else
          {
            if ( !terminalMap )
              goto LABEL_26;
            ClosedPanelTexture_k__BackingField = (UnityEngine_Texture2D_o *)terminalMap->fields.mapModelManager;
          }
          ResizedTexture2D = (System_Int32_array **)ClosePanelTextureUtil__CreateResizedTexture2D(
                                                      ClosedPanelTexture_k__BackingField,
                                                      terminalMap->fields._currentMapImageH_k__BackingField,
                                                      LODWORD(terminalMap->fields.mapImageOffsetX),
                                                      0LL);
          _4__this->fields.closedPanelTexture = (struct UnityEngine_Texture2D_o *)ResizedTexture2D;
          p_closedPanelTexture = &_4__this->fields.closedPanelTexture;
          sub_B16F98(
            (BattleServantConfConponent_o *)&_4__this->fields.closedPanelTexture,
            ResizedTexture2D,
            v14,
            v15,
            v16,
            v17,
            v18,
            v19);
          v20 = _4__this->fields.assetManager;
          if ( v20 )
          {
            v21 = (UnityEngine_Object_o *)v20->fields._ClosedPanelTexture_k__BackingField;
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            if ( UnityEngine_Object__op_Equality(v21, 0LL, 0LL) )
            {
              DarkTexture2D = (System_Int32_array **)ClosePanelTextureUtil__CreateDarkTexture2D(
                                                       *p_closedPanelTexture,
                                                       0.4,
                                                       0LL);
              *p_closedPanelTexture = (UnityEngine_Texture2D_o *)DarkTexture2D;
              sub_B16F98(
                (BattleServantConfConponent_o *)&_4__this->fields.closedPanelTexture,
                DarkTexture2D,
                v23,
                v24,
                v25,
                v26,
                v27,
                v28);
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
              BeforeQuestInfo_k__BackingField = submarineData->fields._BeforeQuestInfo_k__BackingField;
              if ( BeforeQuestInfo_k__BackingField )
              {
                v31 = SubmarineQuestSaveInfo__get_BeforeClearQuestId(BeforeQuestInfo_k__BackingField, 0LL);
                SubmarineMapManager__UpdateParams(_4__this, v31, 0LL);
                SubmarineMapManager__UpdateClosedPanelDisplay(_4__this, 0LL);
                SubmarineMapManager__UpdateScannObstacleEffects(_4__this, 0LL);
                ActionExtensions__Call(this->fields.finishCallback, 0LL);
                return 0;
              }
            }
          }
        }
      }
LABEL_26:
      sub_B170D4();
    }
    Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !Instance )
      goto LABEL_26;
    AvalonSceneManager__transitionSceneRefresh(Instance, 34, 1, 0LL, 0, 0LL);
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
  __int64 v5; // x3
  __int64 v6; // x4
  System_NotSupportedException_o *v7; // x0
  __int64 v8; // x1

  v2 = sub_B17000(&System_NotSupportedException_TypeInfo, method);
  v7 = (System_NotSupportedException_o *)sub_B170CC(v2, v3, v4, v5, v6);
  System_NotSupportedException___ctor(v7, 0LL);
  sub_B17000(&Method_SubmarineMapManager__CoOnAfterSpotCreated_d__24_System_Collections_IEnumerator_Reset__, v8);
  sub_B170A0();
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
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v5; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40F7A6D & 1) == 0 )
  {
    sub_B16FFC(&SubmarineMapManager___c_TypeInfo, v1);
    byte_40F7A6D = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(SubmarineMapManager___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)SubmarineMapManager___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
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
    sub_B170D4();
  return !x->fields._IsOpened_k__BackingField;
}


bool __fastcall SubmarineMapManager___c___CreateScanOpenPanelTask_b__98_0(
        SubmarineMapManager___c_o *this,
        SubmarineScanEvent_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B170D4();
  return x->fields._IsHitObstacle_k__BackingField || x->fields._IsOpened_k__BackingField;
}


int32_t __fastcall SubmarineMapManager___c___CreateScanOpenPanelTask_b__98_1(
        SubmarineMapManager___c_o *this,
        SubmarineScanEvent_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B170D4();
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
    sub_B170D4();
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
  int32_t eventId; // w0
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x4
  System_Action_o *_9__1; // x23
  int32_t v13; // w22
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  System_Collections_IEnumerator_o *Assets; // x1

  if ( (byte_40F7A6E & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_SubmarineMapManager___c__DisplayClass20_0__LoadAssets_b__1__, v3);
    byte_40F7A6E = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_9;
  SubmarineMapManager__CreateAssetManagerIfNotExists(_4__this, 0LL);
  v5 = (UnityEngine_MonoBehaviour_o *)this->fields.__4__this;
  if ( !v5 )
    goto LABEL_9;
  monitor = (SubmarineMapAssetManager_o *)v5[6].monitor;
  eventId = SubmarineMapManager__get_eventId(this->fields.__4__this, 0LL);
  _9__1 = this->fields.__9__1;
  v13 = eventId;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v8, v9, v10, v11);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_SubmarineMapManager___c__DisplayClass20_0__LoadAssets_b__1__,
      0LL);
    this->fields.__9__1 = _9__1;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.__9__1,
      (System_Int32_array **)_9__1,
      v14,
      v15,
      v16,
      v17,
      v18,
      v19);
  }
  if ( !monitor )
LABEL_9:
    sub_B170D4();
  Assets = SubmarineMapAssetManager__CoLoadAssets(monitor, v13, _9__1, 0LL);
  UnityEngine_MonoBehaviour__StartCoroutine_34804316(v5, Assets, 0LL);
}


void __fastcall SubmarineMapManager___c__DisplayClass20_0___LoadAssets_b__1(
        SubmarineMapManager___c__DisplayClass20_0_o *this,
        const MethodInfo *method)
{
  SubmarineMapManager_o *_4__this; // x0
  struct SubmarineMapManager_o *v4; // x8
  struct SubmarineMapAssetManager_o *assetManager; // x9
  SubmarineMapDataManager_o *submarineData; // x0
  UnityEngine_MonoBehaviour_o *v7; // x20
  System_Collections_IEnumerator_o *inited; // x1

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (SubmarineMapManager__LoadPoolEffects(_4__this, 0LL), (v4 = this->fields.__4__this) == 0LL)
    || (assetManager = v4->fields.assetManager) == 0LL
    || (submarineData = v4->fields.submarineData) == 0LL
    || (SubmarineMapDataManager__LoadSettings(submarineData, assetManager->fields._Settings_k__BackingField, 0LL),
        (v7 = (UnityEngine_MonoBehaviour_o *)this->fields.__4__this) == 0LL) )
  {
    sub_B170D4();
  }
  inited = SubmarineMapManager__CoInitRequest(this->fields.__4__this, this->fields.finishCallback, 0LL);
  UnityEngine_MonoBehaviour__StartCoroutine_34804316(v7, inited, 0LL);
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
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v8; // x20
  int32_t eventId; // w0
  __int64 v10; // x1
  TerminalSceneComponent_c *v11; // x0
  struct TerminalSceneComponent_o *mInstance; // x8
  TitleInfoControl_o *mTitleInfo; // x0
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_40F7A6F & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_EventDetailMaster___, method);
    sub_B16FFC(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v3);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    sub_B16FFC(&TerminalSceneComponent_TypeInfo, v5);
    byte_40F7A6F = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !this->fields.__4__this )
    goto LABEL_19;
  v8 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  eventId = SubmarineMapManager__get_eventId(this->fields.__4__this, 0LL);
  if ( !v8 )
    goto LABEL_19;
  if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
         v8,
         &entity,
         eventId,
         (const MethodInfo_266F3E4 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
  {
    if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    }
    if ( !byte_40F6042 )
    {
      sub_B16FFC(&TerminalSceneComponent_TypeInfo, v10);
      byte_40F6042 = 1;
    }
    v11 = TerminalSceneComponent_TypeInfo;
    if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      v11 = TerminalSceneComponent_TypeInfo;
    }
    mInstance = v11->static_fields->mInstance;
    if ( mInstance )
    {
      mTitleInfo = mInstance->fields.mTitleInfo;
      if ( mTitleInfo )
      {
        TitleInfoControl__CheckEventPointReward(
          mTitleInfo,
          (EventDetailEntity_o *)entity,
          this->fields.finishCallback,
          0,
          0LL);
        return;
      }
    }
LABEL_19:
    sub_B170D4();
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
    sub_B170D4();
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
  __int64 v8; // x3
  __int64 v9; // x4
  System_Action_int__o *_9__1; // x22
  SubmarineMapManager_o *v11; // x20
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7

  if ( (byte_40F7A70 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_int___ctor__, method);
    sub_B16FFC(&System_Action_int__TypeInfo, v3);
    sub_B16FFC(&Method_SubmarineMapManager___c__DisplayClass36_0__ClickPanel_b__1__, v4);
    byte_40F7A70 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_8;
  SubmarineMapManager__HideScannableEffect(_4__this, 0LL);
  _9__1 = this->fields.__9__1;
  v11 = this->fields.__4__this;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_int__o *)sub_B170CC(System_Action_int__TypeInfo, v6, v7, v8, v9);
    System_Action_int____ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_SubmarineMapManager___c__DisplayClass36_0__ClickPanel_b__1__,
      (const MethodInfo_24B5D80 *)Method_System_Action_int___ctor__);
    this->fields.__9__1 = _9__1;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.__9__1,
      (System_Int32_array **)_9__1,
      v12,
      v13,
      v14,
      v15,
      v16,
      v17);
  }
  if ( !v11 )
LABEL_8:
    sub_B170D4();
  SubmarineMapManager__OpenSelectScannerDialog(v11, _9__1, 0LL);
}


void __fastcall SubmarineMapManager___c__DisplayClass36_0___ClickPanel_b__1(
        SubmarineMapManager___c__DisplayClass36_0_o *this,
        int32_t scanId,
        const MethodInfo *method)
{
  SubmarineMapManager_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B170D4();
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
  struct SubmarineMapManager_o *_4__this; // x0
  SubmarineMapManager_o *v6; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x3
  __int64 v10; // x4
  System_Action_bool__o *_9__1; // x22
  int32_t scanId; // w20
  SubmarineMapManager_o *v13; // x21
  _BOOL4 isShowDialogUpper; // w24
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7

  if ( (byte_40F7A71 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_bool___ctor__, method);
    sub_B16FFC(&System_Action_bool__TypeInfo, v3);
    sub_B16FFC(&Method_SubmarineMapManager___c__DisplayClass37_0__OnScannerSelected_b__1__, v4);
    byte_40F7A71 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_9;
  ((void (__fastcall *)(struct SubmarineMapManager_o *, _QWORD, Il2CppMethodPointer))_4__this->klass->vtable._30_SetAllTouchBlock.method)(
    _4__this,
    0LL,
    _4__this->klass->vtable._31_SetCameraWorkBlock.methodPtr);
  v6 = this->fields.__4__this;
  if ( !v6 )
    goto LABEL_9;
  SubmarineMapManager__ShowScanRange(v6, this->fields.scanId, this->fields.panelData, 0LL);
  _9__1 = this->fields.__9__1;
  scanId = this->fields.scanId;
  v13 = this->fields.__4__this;
  isShowDialogUpper = this->fields.isShowDialogUpper;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_bool__o *)sub_B170CC(System_Action_bool__TypeInfo, v7, v8, v9, v10);
    System_Action_bool____ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_SubmarineMapManager___c__DisplayClass37_0__OnScannerSelected_b__1__,
      (const MethodInfo_24B33C8 *)Method_System_Action_bool___ctor__);
    this->fields.__9__1 = _9__1;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.__9__1,
      (System_Int32_array **)_9__1,
      v15,
      v16,
      v17,
      v18,
      v19,
      v20);
  }
  if ( !v13 )
LABEL_9:
    sub_B170D4();
  SubmarineMapManager__OpenScanConfirmDialog(v13, scanId, isShowDialogUpper, _9__1, 0LL);
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
  __int64 v10; // x3
  __int64 v11; // x4
  SubmarineMapManager_o *v12; // x20
  System_Action_int__o *_9__2; // x22
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7

  if ( (byte_40F7A72 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_int___ctor__, yes);
    sub_B16FFC(&System_Action_int__TypeInfo, v5);
    sub_B16FFC(&Method_SubmarineMapManager___c__DisplayClass37_0__OnScannerSelected_b__2__, v6);
    byte_40F7A72 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_11;
  SubmarineMapManager__HideScanRange(_4__this, 0LL);
  v12 = this->fields.__4__this;
  if ( yes )
  {
    if ( v12 )
    {
      SubmarineMapManager__OnScanDecided(this->fields.__4__this, this->fields.scanId, this->fields.panelData, 0LL);
      return;
    }
LABEL_11:
    sub_B170D4();
  }
  _9__2 = this->fields.__9__2;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_int__o *)sub_B170CC(System_Action_int__TypeInfo, v8, v9, v10, v11);
    System_Action_int____ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_SubmarineMapManager___c__DisplayClass37_0__OnScannerSelected_b__2__,
      (const MethodInfo_24B5D80 *)Method_System_Action_int___ctor__);
    this->fields.__9__2 = _9__2;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.__9__2,
      (System_Int32_array **)_9__2,
      v14,
      v15,
      v16,
      v17,
      v18,
      v19);
  }
  if ( !v12 )
    goto LABEL_11;
  SubmarineMapManager__OpenSelectScannerDialog(v12, _9__2, 0LL);
}


void __fastcall SubmarineMapManager___c__DisplayClass37_0___OnScannerSelected_b__2(
        SubmarineMapManager___c__DisplayClass37_0_o *this,
        int32_t lscanId,
        const MethodInfo *method)
{
  SubmarineMapManager_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B170D4();
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
    sub_B170D4();
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
  SubmarineMapManager_o *_4__this; // x0
  __int64 v6; // x1
  TerminalSceneComponent_c *v7; // x0
  struct TerminalSceneComponent_o *mInstance; // x8
  TitleInfoControl_o *mTitleInfo; // x0
  __int64 v10; // x1
  TerminalSceneComponent_c *v11; // x0
  struct TerminalSceneComponent_o *v12; // x8
  ScrTerminalMap_o *mTerminalMap; // x0
  SubmarineMapManager_o *v14; // x0
  SubmarineMapManager_o *v15; // x0

  if ( (byte_40F7A73 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    sub_B16FFC(&TerminalSceneComponent_TypeInfo, v3);
    byte_40F7A73 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_25;
  CommonUI__SetSkipAnimation(Instance, 0, 0LL);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_25;
  SubmarineMapManager__ResetTimeAcceleration(_4__this, 0LL);
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  }
  if ( !byte_40F6042 )
  {
    sub_B16FFC(&TerminalSceneComponent_TypeInfo, v6);
    byte_40F6042 = 1;
  }
  v7 = TerminalSceneComponent_TypeInfo;
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v7 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = v7->static_fields->mInstance;
  if ( !mInstance )
    goto LABEL_25;
  mTitleInfo = mInstance->fields.mTitleInfo;
  if ( !mTitleInfo )
    goto LABEL_25;
  TitleInfoControl__CheckEventPointReward(
    mTitleInfo,
    this->fields.eventDetailEntity,
    0LL,
    this->fields.beforePoint,
    0LL);
  if ( !byte_40F6042 )
  {
    sub_B16FFC(&TerminalSceneComponent_TypeInfo, v10);
    byte_40F6042 = 1;
  }
  v11 = TerminalSceneComponent_TypeInfo;
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v11 = TerminalSceneComponent_TypeInfo;
  }
  v12 = v11->static_fields->mInstance;
  if ( !v12
    || (mTerminalMap = v12->fields.mTerminalMap) == 0LL
    || (ScrTerminalMap__UpdateAllSpotGameObject(mTerminalMap, 0LL), (v14 = this->fields.__4__this) == 0LL)
    || (SubmarineMapManager__CheckNewPlayableEventQuest(v14, 0LL), (v15 = this->fields.__4__this) == 0LL) )
  {
LABEL_25:
    sub_B170D4();
  }
  SubmarineMapManager__UserControllable(v15, 1, 0LL);
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
    sub_B170D4();
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

  if ( (byte_40F7A74 & 1) == 0 )
  {
    sub_B16FFC(&Method_ActionExtensions_Call_int___, *(_QWORD *)&scanId);
    byte_40F7A74 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B170D4();
  ((void (__fastcall *)(struct SubmarineMapManager_o *, _QWORD, Il2CppMethodPointer))_4__this->klass->vtable._31_SetCameraWorkBlock.method)(
    _4__this,
    0LL,
    _4__this->klass->vtable._32_AllTouchBlockForceFalse.methodPtr);
  ActionExtensions__Call_int_(
    (System_Action_T__o *)this->fields.callback,
    scanId,
    (const MethodInfo_2D39F14 *)Method_ActionExtensions_Call_int___);
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

  if ( (byte_40F7A75 & 1) == 0 )
  {
    sub_B16FFC(&Method_ActionExtensions_Call_bool___, yes);
    byte_40F7A75 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B170D4();
  ((void (__fastcall *)(struct SubmarineMapManager_o *, _QWORD, Il2CppMethodPointer))_4__this->klass->vtable._31_SetCameraWorkBlock.method)(
    _4__this,
    0LL,
    _4__this->klass->vtable._32_AllTouchBlockForceFalse.methodPtr);
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)this->fields.callback,
    yes,
    (const MethodInfo_2D39EF8 *)Method_ActionExtensions_Call_bool___);
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
    sub_B170D4();
  UnityEngine_GameObject__SetActive(scanAnimObj, 1, 0LL);
}


void __fastcall SubmarineMapManager___c__DisplayClass94_0___CreateScanTask_b__1(
        SubmarineMapManager___c__DisplayClass94_0_o *this,
        const MethodInfo *method)
{
  SubmarineScanVoiceComponent_o *svtScanVoice; // x0

  svtScanVoice = this->fields.svtScanVoice;
  if ( !svtScanVoice )
    sub_B170D4();
  SubmarineScanVoiceComponent__PlayScanVoice(svtScanVoice, 0LL);
}


void __fastcall SubmarineMapManager___c__DisplayClass94_0___CreateScanTask_b__2(
        SubmarineMapManager___c__DisplayClass94_0_o *this,
        const MethodInfo *method)
{
  SubmarineMapManager_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B170D4();
  SubmarineMapManager__HideSelectedPanelEffect(_4__this, 0LL);
}


void __fastcall SubmarineMapManager___c__DisplayClass94_0___CreateScanTask_b__3(
        SubmarineMapManager___c__DisplayClass94_0_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *scanAnimObj; // x19

  if ( (byte_40F7A76 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40F7A76 = 1;
  }
  scanAnimObj = (UnityEngine_Object_o *)this->fields.scanAnimObj;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__Destroy_34809464(scanAnimObj, 0LL);
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
    sub_B170D4();
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
    sub_B170D4();
  return x->fields._Chain_k__BackingField == this->fields.i;
}