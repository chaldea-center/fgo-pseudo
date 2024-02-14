void __fastcall ScrollArrowComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x1
  ScrollArrowComponent_c *v5; // x8
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v6; // x19
  struct ScrollArrowComponent_StaticFields *static_fields; // x0
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_4219DCE & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_ScrollArrowComponent___ctor__, v1);
    sub_B0D8A4(&System_Collections_Generic_List_ScrollArrowComponent__TypeInfo, v3);
    sub_B0D8A4(&ScrollArrowComponent_TypeInfo, v4);
    byte_4219DCE = 1;
  }
  ScrollArrowComponent_TypeInfo->static_fields->MOVE_RANGE = 20;
  ScrollArrowComponent_TypeInfo->static_fields->MOVE_TIME = 2.5;
  v5 = ScrollArrowComponent_TypeInfo;
  ScrollArrowComponent_TypeInfo->static_fields->TGT_ALP_SPD_RATE = 0.25;
  v5->static_fields->ALPHA_FADE_FRAME_NUM = 16;
  v6 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                 System_Collections_Generic_List_ScrollArrowComponent__TypeInfo,
                                                                                                 v1,
                                                                                                 v2);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v6,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_ScrollArrowComponent___ctor__);
  static_fields = ScrollArrowComponent_TypeInfo->static_fields;
  static_fields->_arrowList = (struct System_Collections_Generic_List_ScrollArrowComponent__o *)v6;
  sub_B0D840(
    (BattleServantConfConponent_o *)&static_fields->_arrowList,
    (System_Int32_array **)v6,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
}


void __fastcall ScrollArrowComponent___ctor(ScrollArrowComponent_o *this, const MethodInfo *method)
{
  ScrollArrowComponent_c *v3; // x0

  if ( (byte_4219DCD & 1) == 0 )
  {
    sub_B0D8A4(&ScrollArrowComponent_TypeInfo, method);
    byte_4219DCD = 1;
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
  ScrollArrowComponent_c *v18; // x0
  srcLineSprite_o *v19; // x20
  float x; // s9
  float y; // s8
  float z; // s10
  UnityEngine_GameObject_o *v23; // x0
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4219DC6 & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_TweenPosition___, method);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_UIWidget___, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ScrollArrowComponent__Add__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ScrollArrowComponent__Contains__, v5);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v6);
    sub_B0D8A4(&ScrollArrowComponent_TypeInfo, v7);
    byte_4219DC6 = 1;
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
                                                                      (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    this->fields.widgetAlphaCalculator = Component_srcLineSprite;
    sub_B0D840(
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
  gameObject = (UnityEngine_GameObject_o *)v17->static_fields->_arrowList;
  if ( !gameObject )
    goto LABEL_35;
  if ( System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
         (System_Collections_Generic_List_WarBoardManager_TaskList__o *)gameObject,
         (WarBoardManager_TaskList_o *)this,
         (const MethodInfo_2FC5B38 *)Method_System_Collections_Generic_List_ScrollArrowComponent__Contains__) )
  {
    goto LABEL_19;
  }
  v18 = ScrollArrowComponent_TypeInfo;
  if ( (BYTE3(ScrollArrowComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScrollArrowComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScrollArrowComponent_TypeInfo);
    v18 = ScrollArrowComponent_TypeInfo;
  }
  gameObject = (UnityEngine_GameObject_o *)v18->static_fields->_arrowList;
  if ( !gameObject )
LABEL_35:
    sub_B0D97C(gameObject);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)gameObject,
    (EventMissionProgressRequest_Argument_ProgressData_o *)this,
    (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_ScrollArrowComponent__Add__);
LABEL_19:
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_35;
  v19 = UnityEngine_GameObject__GetComponent_srcLineSprite_(
          gameObject,
          (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v19, 0LL, 0LL) )
  {
    zero = UnityEngine_Vector3__get_zero(0LL);
    x = zero.fields.x;
    y = zero.fields.y;
    z = zero.fields.z;
    switch ( this->fields.moveRange )
    {
      case 0:
        x = (float)-LODWORD(this->fields.moveTime);
        if ( !v19 )
          goto LABEL_35;
        goto LABEL_33;
      case 1:
        x = (float)SLODWORD(this->fields.moveTime);
        if ( !v19 )
          goto LABEL_35;
        goto LABEL_33;
      case 2:
        y = (float)SLODWORD(this->fields.moveTime);
        if ( !v19 )
          goto LABEL_35;
        goto LABEL_33;
      case 3:
        y = (float)-LODWORD(this->fields.moveTime);
        goto LABEL_32;
      default:
LABEL_32:
        if ( !v19 )
          goto LABEL_35;
LABEL_33:
        LODWORD(v19->fields.mcLineSprite) = this->fields.mWidget;
        v23 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        LocalPosition = GameObjectExtensions__GetLocalPosition(v23, 0LL);
        *(UnityEngine_Vector3_o *)&v19->fields.mMapCtrl_SpotRoadInfo = LocalPosition;
        *((float *)&v19->fields.mStateEndAct + 1) = x + LocalPosition.fields.x;
        *(float *)&v19[1].klass = y + LocalPosition.fields.y;
        *((float *)&v19[1].klass + 1) = z + LocalPosition.fields.z;
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
  AlphaTransitionCalculator_o *v8; // x20

  if ( (byte_4219DCC & 1) == 0 )
  {
    sub_B0D8A4(&AlphaTransitionCalculator_TypeInfo, method);
    sub_B0D8A4(&ScrollArrowComponent_TypeInfo, v2);
    byte_4219DCC = 1;
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
  v8 = (AlphaTransitionCalculator_o *)sub_B0D974(AlphaTransitionCalculator_TypeInfo, v6, v7);
  AlphaTransitionCalculator___ctor(v8, v4, v5, 0LL);
  return v8;
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
  _BOOL8 v11; // x0
  char v12; // w19
  System_Collections_Generic_List_Enumerator_T__o v14; // [xsp+8h] [xbp-58h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v15; // [xsp+20h] [xbp-40h] BYREF

  if ( (byte_4219DCA & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ScrollArrowComponent__Dispose__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ScrollArrowComponent__MoveNext__, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ScrollArrowComponent__get_Current__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ScrollArrowComponent__GetEnumerator__, v5);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v6);
    sub_B0D8A4(&ScrollArrowComponent_TypeInfo, v7);
    byte_4219DCA = 1;
  }
  memset(&v15, 0, sizeof(v15));
  v8 = ScrollArrowComponent_TypeInfo;
  if ( (BYTE3(ScrollArrowComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScrollArrowComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScrollArrowComponent_TypeInfo);
    v8 = ScrollArrowComponent_TypeInfo;
  }
  arrowList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v8->static_fields->_arrowList;
  if ( !arrowList )
    sub_B0D97C(0LL);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v14,
    arrowList,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_ScrollArrowComponent__GetEnumerator__);
  v15 = v14;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v15,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_ScrollArrowComponent__MoveNext__) )
  {
    current = v15.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v11 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v11 )
    {
      if ( !current )
        sub_B0D97C(v11);
      if ( UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)current, 0LL) )
      {
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, (UnityEngine_Object_o *)this, 0LL) )
        {
          v12 = 2;
          goto LABEL_21;
        }
      }
    }
  }
  v12 = 0;
  current = 0LL;
LABEL_21:
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v15,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_ScrollArrowComponent__Dispose__);
  if ( ((v12 + 2) & 3) != 0 )
    return 0LL;
  else
    return (ScrollArrowComponent_o *)current;
}


void __fastcall ScrollArrowComponent__OnDestroy(ScrollArrowComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  ScrollArrowComponent_c *v4; // x0
  System_Collections_Generic_List_WarBoardManager_TaskList__o *arrowList; // x0

  if ( (byte_4219DC7 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_ScrollArrowComponent__Remove__, method);
    sub_B0D8A4(&ScrollArrowComponent_TypeInfo, v3);
    byte_4219DC7 = 1;
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
    sub_B0D97C(0LL);
  System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
    arrowList,
    (WarBoardManager_TaskList_o *)this,
    (const MethodInfo_2FC7094 *)Method_System_Collections_Generic_List_ScrollArrowComponent__Remove__);
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
  struct AlphaTransitionCalculator_o *v10; // x20
  const MethodInfo *v11; // x1

  if ( (byte_4219DC9 & 1) == 0 )
  {
    sub_B0D8A4(&Method_TransitionCalculator_float__ToEnd__, is_disp);
    sub_B0D8A4(&Method_TransitionCalculator_float__get_Current__, v7);
    byte_4219DC9 = 1;
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
    WidgetAlphaCalculator = ScrollArrowComponent__get_WidgetAlphaCalculator(this, v9);
    if ( WidgetAlphaCalculator )
    {
      TransitionCalculator_float___ToEnd(
        (TransitionCalculator_float__o *)WidgetAlphaCalculator,
        (const MethodInfo_2686A30 *)Method_TransitionCalculator_float__ToEnd__);
      v10 = this->fields.widgetAlphaCalculator;
      WidgetAlphaCalculator = ScrollArrowComponent__get_WidgetAlphaCalculator(this, v11);
      if ( WidgetAlphaCalculator )
      {
        if ( v10 )
        {
          ((void (__fastcall *)(struct AlphaTransitionCalculator_o *, Il2CppClass *, float))v10->klass[1]._1.castClass)(
            v10,
            v10->klass[1]._1.declaringType,
            WidgetAlphaCalculator->fields._Current_k__BackingField);
          return;
        }
      }
    }
LABEL_12:
    sub_B0D97C(WidgetAlphaCalculator);
  }
}


void __fastcall ScrollArrowComponent__SyncAnimation(ScrollArrowComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_Component_o *ActiveArrow; // x20
  void *gameObject; // x0
  UITweener_o *v7; // x19

  if ( (byte_4219DCB & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponent_TweenPosition___, method);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_TweenPosition___, v3);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v4);
    byte_4219DCB = 1;
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
      || (gameObject = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                         (UnityEngine_GameObject_o *)gameObject,
                         (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_TweenPosition___),
          !ActiveArrow)
      || (v7 = (UITweener_o *)gameObject,
          (gameObject = UnityEngine_Component__GetComponent_WebViewObject_(
                          ActiveArrow,
                          (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_TweenPosition___)) == 0LL)
      || !v7 )
    {
      sub_B0D97C(gameObject);
    }
    UITweener__set_tweenFactor(v7, *((float *)gameObject + 26), 0LL);
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

  if ( (byte_4219DC8 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    sub_B0D8A4(&Method_TransitionCalculator_float__Update__, v3);
    byte_4219DC8 = 1;
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
                 (const MethodInfo_2686910 *)Method_TransitionCalculator_float__Update__),
          !v6) )
    {
      sub_B0D97C(v7);
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
    sub_B0D840(v3, WidgetAlphaCalculator, v5, v6, v7, v8, v9, v10);
    if ( !v3->klass )
      sub_B0D97C(0LL);
    AlphaTransitionCalculator__MakeFadeInFinished((AlphaTransitionCalculator_o *)v3->klass, 0LL);
    return (AlphaTransitionCalculator_o *)v3->klass;
  }
  return result;
}