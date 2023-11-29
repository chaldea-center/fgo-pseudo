void __fastcall ScrollArrowComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v5; // x1
  __int64 v6; // x1
  ScrollArrowComponent_c *v7; // x8
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v8; // x19
  struct ScrollArrowComponent_StaticFields *static_fields; // x0
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7

  if ( (byte_40FE143 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_ScrollArrowComponent___ctor__, v1);
    sub_B16FFC(&System_Collections_Generic_List_ScrollArrowComponent__TypeInfo, v5);
    sub_B16FFC(&ScrollArrowComponent_TypeInfo, v6);
    byte_40FE143 = 1;
  }
  ScrollArrowComponent_TypeInfo->static_fields->MOVE_RANGE = 20;
  ScrollArrowComponent_TypeInfo->static_fields->MOVE_TIME = 2.5;
  v7 = ScrollArrowComponent_TypeInfo;
  ScrollArrowComponent_TypeInfo->static_fields->TGT_ALP_SPD_RATE = 0.25;
  v7->static_fields->ALPHA_FADE_FRAME_NUM = 16;
  v8 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                 System_Collections_Generic_List_ScrollArrowComponent__TypeInfo,
                                                                                                 v1,
                                                                                                 v2,
                                                                                                 v3,
                                                                                                 v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v8,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_ScrollArrowComponent___ctor__);
  static_fields = ScrollArrowComponent_TypeInfo->static_fields;
  static_fields->_arrowList = (struct System_Collections_Generic_List_ScrollArrowComponent__o *)v8;
  sub_B16F98(
    (BattleServantConfConponent_o *)&static_fields->_arrowList,
    (System_Int32_array **)v8,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
}


void __fastcall ScrollArrowComponent___ctor(ScrollArrowComponent_o *this, const MethodInfo *method)
{
  ScrollArrowComponent_c *v3; // x0

  if ( (byte_40FE142 & 1) == 0 )
  {
    sub_B16FFC(&ScrollArrowComponent_TypeInfo, method);
    byte_40FE142 = 1;
  }
  v3 = ScrollArrowComponent_TypeInfo;
  if ( (BYTE3(ScrollArrowComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScrollArrowComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScrollArrowComponent_TypeInfo);
    v3 = ScrollArrowComponent_TypeInfo;
  }
  LODWORD(this->fields.moveTime) = v3->static_fields->MOVE_RANGE;
  *(float *)&this->fields.mWidget = v3->static_fields->MOVE_TIME;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall ScrollArrowComponent__Awake(ScrollArrowComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  UnityEngine_Object_o *widgetAlphaCalculator; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  struct AlphaTransitionCalculator_o *Component_srcLineSprite; // x0
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  ScrollArrowComponent_c *v17; // x0
  System_Collections_Generic_List_WarBoardManager_TaskList__o *arrowList; // x0
  ScrollArrowComponent_c *v19; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v20; // x0
  UnityEngine_GameObject_o *v21; // x0
  srcLineSprite_o *v22; // x20
  float x; // s9
  float y; // s8
  float z; // s10
  UnityEngine_GameObject_o *v26; // x0
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40FE13B & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_TweenPosition___, method);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_UIWidget___, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_ScrollArrowComponent__Add__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_ScrollArrowComponent__Contains__, v5);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v6);
    sub_B16FFC(&ScrollArrowComponent_TypeInfo, v7);
    byte_40FE13B = 1;
  }
  widgetAlphaCalculator = (UnityEngine_Object_o *)this->fields.widgetAlphaCalculator;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(widgetAlphaCalculator, 0LL, 0LL) )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_35;
    Component_srcLineSprite = (struct AlphaTransitionCalculator_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                      gameObject,
                                                                      (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    this->fields.widgetAlphaCalculator = Component_srcLineSprite;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.widgetAlphaCalculator,
      (System_Int32_array **)Component_srcLineSprite,
      v11,
      v12,
      v13,
      v14,
      v15,
      v16);
  }
  v17 = ScrollArrowComponent_TypeInfo;
  if ( (BYTE3(ScrollArrowComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScrollArrowComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScrollArrowComponent_TypeInfo);
    v17 = ScrollArrowComponent_TypeInfo;
  }
  arrowList = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v17->static_fields->_arrowList;
  if ( !arrowList )
    goto LABEL_35;
  if ( System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
         arrowList,
         (WarBoardManager_TaskList_o *)this,
         (const MethodInfo_2F26128 *)Method_System_Collections_Generic_List_ScrollArrowComponent__Contains__) )
  {
    goto LABEL_19;
  }
  v19 = ScrollArrowComponent_TypeInfo;
  if ( (BYTE3(ScrollArrowComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScrollArrowComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScrollArrowComponent_TypeInfo);
    v19 = ScrollArrowComponent_TypeInfo;
  }
  v20 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v19->static_fields->_arrowList;
  if ( !v20 )
LABEL_35:
    sub_B170D4();
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v20,
    (EventMissionProgressRequest_Argument_ProgressData_o *)this,
    (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ScrollArrowComponent__Add__);
LABEL_19:
  v21 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !v21 )
    goto LABEL_35;
  v22 = UnityEngine_GameObject__GetComponent_srcLineSprite_(
          v21,
          (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v22, 0LL, 0LL) )
  {
    zero = UnityEngine_Vector3__get_zero(0LL);
    x = zero.fields.x;
    y = zero.fields.y;
    z = zero.fields.z;
    switch ( this->fields.moveRange )
    {
      case 0:
        x = (float)-LODWORD(this->fields.moveTime);
        if ( !v22 )
          goto LABEL_35;
        goto LABEL_33;
      case 1:
        x = (float)SLODWORD(this->fields.moveTime);
        if ( !v22 )
          goto LABEL_35;
        goto LABEL_33;
      case 2:
        y = (float)SLODWORD(this->fields.moveTime);
        if ( !v22 )
          goto LABEL_35;
        goto LABEL_33;
      case 3:
        y = (float)-LODWORD(this->fields.moveTime);
        goto LABEL_32;
      default:
LABEL_32:
        if ( !v22 )
          goto LABEL_35;
LABEL_33:
        LODWORD(v22->fields.mcLineSprite) = this->fields.mWidget;
        v26 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        LocalPosition = GameObjectExtensions__GetLocalPosition(v26, 0LL);
        *(UnityEngine_Vector3_o *)&v22->fields.mMapCtrl_SpotRoadInfo = LocalPosition;
        *((float *)&v22->fields.mStateEndAct + 1) = x + LocalPosition.fields.x;
        *(float *)&v22[1].klass = y + LocalPosition.fields.y;
        *((float *)&v22[1].klass + 1) = z + LocalPosition.fields.z;
        break;
    }
  }
}


AlphaTransitionCalculator_o *__fastcall ScrollArrowComponent__CreateWidgetAlphaCalculator(
        ScrollArrowComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  ScrollArrowComponent_c *v3; // x0
  float v4; // s8
  System_Func_float__float__float__float__o *v5; // x19
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x4
  AlphaTransitionCalculator_o *v10; // x20

  if ( (byte_40FE141 & 1) == 0 )
  {
    sub_B16FFC(&AlphaTransitionCalculator_TypeInfo, method);
    sub_B16FFC(&ScrollArrowComponent_TypeInfo, v2);
    byte_40FE141 = 1;
  }
  v3 = ScrollArrowComponent_TypeInfo;
  if ( (BYTE3(ScrollArrowComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScrollArrowComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScrollArrowComponent_TypeInfo);
    v3 = ScrollArrowComponent_TypeInfo;
  }
  v4 = ChangedFPSUtil__CovertFrameNumToSecond(v3->static_fields->ALPHA_FADE_FRAME_NUM, 0LL);
  v5 = ExtraEasing__AsymptoticSeriesFloat(
         ScrollArrowComponent_TypeInfo->static_fields->TGT_ALP_SPD_RATE,
         (float)ScrollArrowComponent_TypeInfo->static_fields->ALPHA_FADE_FRAME_NUM,
         0LL);
  v10 = (AlphaTransitionCalculator_o *)sub_B170CC(AlphaTransitionCalculator_TypeInfo, v6, v7, v8, v9);
  AlphaTransitionCalculator___ctor(v10, v4, v5, 0LL);
  return v10;
}


ScrollArrowComponent_o *__fastcall ScrollArrowComponent__FetchActiveArrow(
        ScrollArrowComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  ScrollArrowComponent_c *v8; // x0
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *arrowList; // x0
  Il2CppObject *current; // x20
  char v11; // w19
  System_Collections_Generic_List_Enumerator_T__o v13; // [xsp+8h] [xbp-58h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v14; // [xsp+20h] [xbp-40h] BYREF

  if ( (byte_40FE13F & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ScrollArrowComponent__Dispose__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ScrollArrowComponent__MoveNext__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ScrollArrowComponent__get_Current__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_ScrollArrowComponent__GetEnumerator__, v5);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v6);
    sub_B16FFC(&ScrollArrowComponent_TypeInfo, v7);
    byte_40FE13F = 1;
  }
  memset(&v14, 0, sizeof(v14));
  v8 = ScrollArrowComponent_TypeInfo;
  if ( (BYTE3(ScrollArrowComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScrollArrowComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScrollArrowComponent_TypeInfo);
    v8 = ScrollArrowComponent_TypeInfo;
  }
  arrowList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v8->static_fields->_arrowList;
  if ( !arrowList )
    sub_B170D4();
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v13,
    arrowList,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_ScrollArrowComponent__GetEnumerator__);
  v14 = v13;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v14,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_ScrollArrowComponent__MoveNext__) )
  {
    current = v14.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL) )
    {
      if ( !current )
        sub_B170D4();
      if ( UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)current, 0LL) )
      {
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, (UnityEngine_Object_o *)this, 0LL) )
        {
          v11 = 2;
          goto LABEL_21;
        }
      }
    }
  }
  v11 = 0;
  current = 0LL;
LABEL_21:
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v14,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_ScrollArrowComponent__Dispose__);
  if ( ((v11 + 2) & 3) != 0 )
    return 0LL;
  else
    return (ScrollArrowComponent_o *)current;
}


void __fastcall ScrollArrowComponent__OnDestroy(ScrollArrowComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  ScrollArrowComponent_c *v4; // x0
  System_Collections_Generic_List_WarBoardManager_TaskList__o *arrowList; // x0

  if ( (byte_40FE13C & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_ScrollArrowComponent__Remove__, method);
    sub_B16FFC(&ScrollArrowComponent_TypeInfo, v3);
    byte_40FE13C = 1;
  }
  v4 = ScrollArrowComponent_TypeInfo;
  if ( (BYTE3(ScrollArrowComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScrollArrowComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScrollArrowComponent_TypeInfo);
    v4 = ScrollArrowComponent_TypeInfo;
  }
  arrowList = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v4->static_fields->_arrowList;
  if ( !arrowList )
    sub_B170D4();
  System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
    arrowList,
    (WarBoardManager_TaskList_o *)this,
    (const MethodInfo_2F27684 *)Method_System_Collections_Generic_List_ScrollArrowComponent__Remove__);
}


// attributes: thunk
void __fastcall ScrollArrowComponent__OnEnable(ScrollArrowComponent_o *this, const MethodInfo *method)
{
  ScrollArrowComponent__SyncAnimation(this, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ScrollArrowComponent__SetDisp(
        ScrollArrowComponent_o *this,
        bool is_disp,
        bool is_force,
        const MethodInfo *method)
{
  __int64 v7; // x1
  AlphaTransitionCalculator_o *WidgetAlphaCalculator; // x0
  const MethodInfo *v9; // x1
  TransitionCalculator_float__o *v10; // x0
  struct AlphaTransitionCalculator_o *v11; // x20
  const MethodInfo *v12; // x1
  AlphaTransitionCalculator_o *v13; // x0

  if ( (byte_40FE13E & 1) == 0 )
  {
    sub_B16FFC(&Method_TransitionCalculator_float__ToEnd__, is_disp);
    sub_B16FFC(&Method_TransitionCalculator_float__get_Current__, v7);
    byte_40FE13E = 1;
  }
  WidgetAlphaCalculator = ScrollArrowComponent__get_WidgetAlphaCalculator(this, (const MethodInfo *)is_disp);
  if ( !WidgetAlphaCalculator )
    goto LABEL_12;
  if ( is_disp )
  {
    AlphaTransitionCalculator__StartFadeIn(WidgetAlphaCalculator, 0LL);
    if ( !is_force )
      return;
    goto LABEL_8;
  }
  AlphaTransitionCalculator__StartFadeOut(WidgetAlphaCalculator, 0LL);
  if ( is_force )
  {
LABEL_8:
    v10 = (TransitionCalculator_float__o *)ScrollArrowComponent__get_WidgetAlphaCalculator(this, v9);
    if ( v10 )
    {
      TransitionCalculator_float___ToEnd(v10, (const MethodInfo_25330C0 *)Method_TransitionCalculator_float__ToEnd__);
      v11 = this->fields.widgetAlphaCalculator;
      v13 = ScrollArrowComponent__get_WidgetAlphaCalculator(this, v12);
      if ( v13 )
      {
        if ( v11 )
        {
          ((void (__fastcall *)(struct AlphaTransitionCalculator_o *, Il2CppClass *, float))v11->klass[1]._1.castClass)(
            v11,
            v11->klass[1]._1.declaringType,
            v13->fields._Current_k__BackingField);
          return;
        }
      }
    }
LABEL_12:
    sub_B170D4();
  }
}


void __fastcall ScrollArrowComponent__SyncAnimation(ScrollArrowComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_Component_o *ActiveArrow; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  srcLineSprite_o *Component_srcLineSprite; // x0
  UITweener_o *v8; // x19
  WebViewObject_o *Component_WebViewObject; // x0

  if ( (byte_40FE140 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_TweenPosition___, method);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_TweenPosition___, v3);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v4);
    byte_40FE140 = 1;
  }
  ActiveArrow = (UnityEngine_Component_o *)ScrollArrowComponent__FetchActiveArrow(this, method);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)ActiveArrow, 0LL, 0LL) )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject
      || (Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                      gameObject,
                                      (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_TweenPosition___),
          !ActiveArrow)
      || (v8 = (UITweener_o *)Component_srcLineSprite,
          (Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                                       ActiveArrow,
                                       (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_TweenPosition___)) == 0LL)
      || !v8 )
    {
      sub_B170D4();
    }
    UITweener__set_tweenFactor(v8, *(float *)&Component_WebViewObject->fields.mVisibility, 0LL);
  }
}


void __fastcall ScrollArrowComponent__Update(ScrollArrowComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *widgetAlphaCalculator; // x20
  const MethodInfo *v5; // x1
  struct AlphaTransitionCalculator_o *v6; // x20
  TransitionCalculator_float__o *v7; // x0
  float v8; // s0

  if ( (byte_40FE13D & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    sub_B16FFC(&Method_TransitionCalculator_float__Update__, v3);
    byte_40FE13D = 1;
  }
  widgetAlphaCalculator = (UnityEngine_Object_o *)this->fields.widgetAlphaCalculator;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(widgetAlphaCalculator, 0LL, 0LL) )
  {
    v6 = this->fields.widgetAlphaCalculator;
    v7 = (TransitionCalculator_float__o *)ScrollArrowComponent__get_WidgetAlphaCalculator(this, v5);
    if ( !v7
      || (v8 = TransitionCalculator_float___Update(
                 v7,
                 (const MethodInfo_2532FA0 *)Method_TransitionCalculator_float__Update__),
          !v6) )
    {
      sub_B170D4();
    }
    ((void (__fastcall *)(struct AlphaTransitionCalculator_o *, Il2CppClass *, float))v6->klass[1]._1.castClass)(
      v6,
      v6->klass[1]._1.declaringType,
      v8);
  }
}


AlphaTransitionCalculator_o *__fastcall ScrollArrowComponent__get_WidgetAlphaCalculator(
        ScrollArrowComponent_o *this,
        const MethodInfo *method)
{
  AlphaTransitionCalculator_o *result; // x0
  BattleServantConfConponent_o *v3; // x19
  System_Int32_array **WidgetAlphaCalculator; // x0
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  v3 = (BattleServantConfConponent_o *)&this[1];
  result = (AlphaTransitionCalculator_o *)this[1].klass;
  if ( !result )
  {
    WidgetAlphaCalculator = (System_Int32_array **)ScrollArrowComponent__CreateWidgetAlphaCalculator(0LL, method);
    v3->klass = (BattleServantConfConponent_c *)WidgetAlphaCalculator;
    sub_B16F98(v3, WidgetAlphaCalculator, v5, v6, v7, v8, v9, v10);
    if ( !v3->klass )
      sub_B170D4();
    AlphaTransitionCalculator__MakeFadeInFinished((AlphaTransitionCalculator_o *)v3->klass, 0LL);
    return (AlphaTransitionCalculator_o *)v3->klass;
  }
  return result;
}