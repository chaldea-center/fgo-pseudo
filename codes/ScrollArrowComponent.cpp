void __fastcall ScrollArrowComponent___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  ScrollArrowComponent_c *v10; // x8
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v11; // x19
  struct ScrollArrowComponent_StaticFields *static_fields; // x0
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7

  if ( (byte_42EE358 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_ScrollArrowComponent___ctor__, v1, v2, v3);
    sub_B5D5C4(&System_Collections_Generic_List_ScrollArrowComponent__TypeInfo, v4, v5, v6);
    sub_B5D5C4(&ScrollArrowComponent_TypeInfo, v7, v8, v9);
    byte_42EE358 = 1;
  }
  ScrollArrowComponent_TypeInfo->static_fields->MOVE_RANGE = 20;
  ScrollArrowComponent_TypeInfo->static_fields->MOVE_TIME = 2.5;
  v10 = ScrollArrowComponent_TypeInfo;
  ScrollArrowComponent_TypeInfo->static_fields->TGT_ALP_SPD_RATE = 0.25;
  v10->static_fields->ALPHA_FADE_FRAME_NUM = 16;
  v11 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_ScrollArrowComponent__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v11,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_ScrollArrowComponent___ctor__);
  static_fields = ScrollArrowComponent_TypeInfo->static_fields;
  static_fields->_arrowList = (struct System_Collections_Generic_List_ScrollArrowComponent__o *)v11;
  sub_B5D560(
    (BattleServantConfConponent_o *)&static_fields->_arrowList,
    (System_Int32_array **)v11,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
}


void __fastcall ScrollArrowComponent___ctor(ScrollArrowComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  ScrollArrowComponent_c *v5; // x0

  if ( (byte_42EE357 & 1) == 0 )
  {
    sub_B5D5C4(&ScrollArrowComponent_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EE357 = 1;
  }
  v5 = ScrollArrowComponent_TypeInfo;
  if ( (BYTE3(ScrollArrowComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScrollArrowComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScrollArrowComponent_TypeInfo);
    v5 = ScrollArrowComponent_TypeInfo;
  }
  LODWORD(this->fields.moveTime) = v5->static_fields->MOVE_RANGE;
  *(float *)&this->fields.mWidget = v5->static_fields->MOVE_TIME;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall ScrollArrowComponent__Awake(ScrollArrowComponent_o *this, const MethodInfo *method)
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
  UnityEngine_Object_o *widgetAlphaCalculator; // x21
  __int64 v21; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  struct AlphaTransitionCalculator_o *Component_srcLineSprite; // x0
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  ScrollArrowComponent_c *v30; // x0
  ScrollArrowComponent_c *v31; // x0
  srcLineSprite_o *v32; // x20
  float x; // s9
  float y; // s8
  float z; // s10
  UnityEngine_GameObject_o *v36; // x0
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42EE350 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_TweenPosition___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_UIWidget___, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ScrollArrowComponent__Add__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ScrollArrowComponent__Contains__, v11, v12, v13);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&ScrollArrowComponent_TypeInfo, v17, v18, v19);
    byte_42EE350 = 1;
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
                                                                      (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    this->fields.widgetAlphaCalculator = Component_srcLineSprite;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.widgetAlphaCalculator,
      (System_Int32_array **)Component_srcLineSprite,
      v24,
      v25,
      v26,
      v27,
      v28,
      v29);
  }
  v30 = ScrollArrowComponent_TypeInfo;
  if ( (BYTE3(ScrollArrowComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScrollArrowComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScrollArrowComponent_TypeInfo);
    v30 = ScrollArrowComponent_TypeInfo;
  }
  gameObject = (UnityEngine_GameObject_o *)v30->static_fields->_arrowList;
  if ( !gameObject )
    goto LABEL_35;
  if ( System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
         (System_Collections_Generic_List_WarBoardManager_TaskList__o *)gameObject,
         (WarBoardManager_TaskList_o *)this,
         (const MethodInfo_3057410 *)Method_System_Collections_Generic_List_ScrollArrowComponent__Contains__) )
  {
    goto LABEL_19;
  }
  v31 = ScrollArrowComponent_TypeInfo;
  if ( (BYTE3(ScrollArrowComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScrollArrowComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScrollArrowComponent_TypeInfo);
    v31 = ScrollArrowComponent_TypeInfo;
  }
  gameObject = (UnityEngine_GameObject_o *)v31->static_fields->_arrowList;
  if ( !gameObject )
LABEL_35:
    sub_B5D69C(gameObject, v21);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)gameObject,
    (EventMissionProgressRequest_Argument_ProgressData_o *)this,
    (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ScrollArrowComponent__Add__);
LABEL_19:
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_35;
  v32 = UnityEngine_GameObject__GetComponent_srcLineSprite_(
          gameObject,
          (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v32, 0LL, 0LL) )
  {
    zero = UnityEngine_Vector3__get_zero(0LL);
    x = zero.fields.x;
    y = zero.fields.y;
    z = zero.fields.z;
    switch ( this->fields.moveRange )
    {
      case 0:
        x = (float)-LODWORD(this->fields.moveTime);
        if ( !v32 )
          goto LABEL_35;
        goto LABEL_33;
      case 1:
        x = (float)SLODWORD(this->fields.moveTime);
        if ( !v32 )
          goto LABEL_35;
        goto LABEL_33;
      case 2:
        y = (float)SLODWORD(this->fields.moveTime);
        if ( !v32 )
          goto LABEL_35;
        goto LABEL_33;
      case 3:
        y = (float)-LODWORD(this->fields.moveTime);
        goto LABEL_32;
      default:
LABEL_32:
        if ( !v32 )
          goto LABEL_35;
LABEL_33:
        LODWORD(v32->fields.mcLineSprite) = this->fields.mWidget;
        v36 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        LocalPosition = GameObjectExtensions__GetLocalPosition(v36, 0LL);
        *(UnityEngine_Vector3_o *)&v32->fields.mMapCtrl_SpotRoadInfo = LocalPosition;
        *((float *)&v32->fields.mStateEndAct + 1) = x + LocalPosition.fields.x;
        *(float *)&v32[1].klass = y + LocalPosition.fields.y;
        *((float *)&v32[1].klass + 1) = z + LocalPosition.fields.z;
        break;
    }
  }
}


AlphaTransitionCalculator_o *__fastcall ScrollArrowComponent__CreateWidgetAlphaCalculator(
        ScrollArrowComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  ScrollArrowComponent_c *v7; // x0
  float v8; // s8
  System_Func_float__float__float__float__o *v9; // x19
  AlphaTransitionCalculator_o *v10; // x20

  if ( (byte_42EE356 & 1) == 0 )
  {
    sub_B5D5C4(&AlphaTransitionCalculator_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&ScrollArrowComponent_TypeInfo, v4, v5, v6);
    byte_42EE356 = 1;
  }
  v7 = ScrollArrowComponent_TypeInfo;
  if ( (BYTE3(ScrollArrowComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScrollArrowComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScrollArrowComponent_TypeInfo);
    v7 = ScrollArrowComponent_TypeInfo;
  }
  v8 = ChangedFPSUtil__CovertFrameNumToSecond(v7->static_fields->ALPHA_FADE_FRAME_NUM, 0LL);
  v9 = ExtraEasing__AsymptoticSeriesFloat(
         ScrollArrowComponent_TypeInfo->static_fields->TGT_ALP_SPD_RATE,
         (float)ScrollArrowComponent_TypeInfo->static_fields->ALPHA_FADE_FRAME_NUM,
         0LL);
  v10 = (AlphaTransitionCalculator_o *)sub_B5D694(AlphaTransitionCalculator_TypeInfo);
  AlphaTransitionCalculator___ctor(v10, v8, v9, 0LL);
  return v10;
}


ScrollArrowComponent_o *__fastcall ScrollArrowComponent__FetchActiveArrow(
        ScrollArrowComponent_o *this,
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
  ScrollArrowComponent_c *v20; // x0
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *arrowList; // x0
  Il2CppObject *current; // x20
  _BOOL8 v23; // x0
  __int64 v24; // x1
  char v25; // w19
  System_Collections_Generic_List_Enumerator_T__o v27; // [xsp+8h] [xbp-58h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v28; // [xsp+20h] [xbp-40h] BYREF

  if ( (byte_42EE354 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_ScrollArrowComponent__Dispose__,
      (_DWORD)method,
      v2,
      v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ScrollArrowComponent__MoveNext__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ScrollArrowComponent__get_Current__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ScrollArrowComponent__GetEnumerator__, v11, v12, v13);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&ScrollArrowComponent_TypeInfo, v17, v18, v19);
    byte_42EE354 = 1;
  }
  memset(&v28, 0, sizeof(v28));
  v20 = ScrollArrowComponent_TypeInfo;
  if ( (BYTE3(ScrollArrowComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScrollArrowComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScrollArrowComponent_TypeInfo);
    v20 = ScrollArrowComponent_TypeInfo;
  }
  arrowList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v20->static_fields->_arrowList;
  if ( !arrowList )
    sub_B5D69C(0LL, method);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v27,
    arrowList,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_ScrollArrowComponent__GetEnumerator__);
  v28 = v27;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v28,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_ScrollArrowComponent__MoveNext__) )
  {
    current = v28.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v23 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v23 )
    {
      if ( !current )
        sub_B5D69C(v23, v24);
      if ( UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)current, 0LL) )
      {
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, (UnityEngine_Object_o *)this, 0LL) )
        {
          v25 = 2;
          goto LABEL_21;
        }
      }
    }
  }
  v25 = 0;
  current = 0LL;
LABEL_21:
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v28,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_ScrollArrowComponent__Dispose__);
  if ( ((v25 + 2) & 3) != 0 )
    return 0LL;
  else
    return (ScrollArrowComponent_o *)current;
}


void __fastcall ScrollArrowComponent__OnDestroy(ScrollArrowComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  ScrollArrowComponent_c *v8; // x0
  System_Collections_Generic_List_WarBoardManager_TaskList__o *arrowList; // x0

  if ( (byte_42EE351 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_ScrollArrowComponent__Remove__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&ScrollArrowComponent_TypeInfo, v5, v6, v7);
    byte_42EE351 = 1;
  }
  v8 = ScrollArrowComponent_TypeInfo;
  if ( (BYTE3(ScrollArrowComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScrollArrowComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScrollArrowComponent_TypeInfo);
    v8 = ScrollArrowComponent_TypeInfo;
  }
  arrowList = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v8->static_fields->_arrowList;
  if ( !arrowList )
    sub_B5D69C(0LL, method);
  System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
    arrowList,
    (WarBoardManager_TaskList_o *)this,
    (const MethodInfo_305896C *)Method_System_Collections_Generic_List_ScrollArrowComponent__Remove__);
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
  int v7; // w1
  char v8; // w2
  __int64 v9; // x3
  AlphaTransitionCalculator_o *WidgetAlphaCalculator; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x1
  struct AlphaTransitionCalculator_o *v13; // x20
  const MethodInfo *v14; // x1

  if ( (byte_42EE353 & 1) == 0 )
  {
    sub_B5D5C4(&Method_TransitionCalculator_float__ToEnd__, is_disp, is_force, method);
    sub_B5D5C4(&Method_TransitionCalculator_float__get_Current__, v7, v8, v9);
    byte_42EE353 = 1;
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
    WidgetAlphaCalculator = ScrollArrowComponent__get_WidgetAlphaCalculator(this, v12);
    if ( WidgetAlphaCalculator )
    {
      TransitionCalculator_float___ToEnd(
        (TransitionCalculator_float__o *)WidgetAlphaCalculator,
        (const MethodInfo_264E4F0 *)Method_TransitionCalculator_float__ToEnd__);
      v13 = this->fields.widgetAlphaCalculator;
      WidgetAlphaCalculator = ScrollArrowComponent__get_WidgetAlphaCalculator(this, v14);
      if ( WidgetAlphaCalculator )
      {
        if ( v13 )
        {
          ((void (__fastcall *)(struct AlphaTransitionCalculator_o *, Il2CppClass *, float))v13->klass[1]._1.castClass)(
            v13,
            v13->klass[1]._1.declaringType,
            WidgetAlphaCalculator->fields._Current_k__BackingField);
          return;
        }
      }
    }
LABEL_12:
    sub_B5D69C(WidgetAlphaCalculator, v11);
  }
}


void __fastcall ScrollArrowComponent__SyncAnimation(ScrollArrowComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  UnityEngine_Component_o *ActiveArrow; // x20
  void *gameObject; // x0
  __int64 v13; // x1
  UITweener_o *v14; // x19

  if ( (byte_42EE355 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_TweenPosition___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_TweenPosition___, v5, v6, v7);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v8, v9, v10);
    byte_42EE355 = 1;
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
                         (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_TweenPosition___),
          !ActiveArrow)
      || (v14 = (UITweener_o *)gameObject,
          (gameObject = UnityEngine_Component__GetComponent_WebViewObject_(
                          ActiveArrow,
                          (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_TweenPosition___)) == 0LL)
      || !v14 )
    {
      sub_B5D69C(gameObject, v13);
    }
    UITweener__set_tweenFactor(v14, *((float *)gameObject + 26), 0LL);
  }
}


void __fastcall ScrollArrowComponent__Update(ScrollArrowComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UnityEngine_Object_o *widgetAlphaCalculator; // x20
  const MethodInfo *v9; // x1
  struct AlphaTransitionCalculator_o *v10; // x20
  TransitionCalculator_float__o *v11; // x0
  __int64 v12; // x1
  float v13; // s0

  if ( (byte_42EE352 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_TransitionCalculator_float__Update__, v5, v6, v7);
    byte_42EE352 = 1;
  }
  widgetAlphaCalculator = (UnityEngine_Object_o *)this->fields.widgetAlphaCalculator;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(widgetAlphaCalculator, 0LL, 0LL) )
  {
    v10 = this->fields.widgetAlphaCalculator;
    v11 = (TransitionCalculator_float__o *)ScrollArrowComponent__get_WidgetAlphaCalculator(this, v9);
    if ( !v11
      || (v13 = TransitionCalculator_float___Update(
                  v11,
                  (const MethodInfo_264E3D0 *)Method_TransitionCalculator_float__Update__),
          !v10) )
    {
      sub_B5D69C(v11, v12);
    }
    ((void (__fastcall *)(struct AlphaTransitionCalculator_o *, Il2CppClass *, float))v10->klass[1]._1.castClass)(
      v10,
      v10->klass[1]._1.declaringType,
      v13);
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
  __int64 v11; // x1

  v3 = (BattleServantConfConponent_o *)&this[1];
  result = (AlphaTransitionCalculator_o *)this[1].klass;
  if ( !result )
  {
    WidgetAlphaCalculator = (System_Int32_array **)ScrollArrowComponent__CreateWidgetAlphaCalculator(0LL, method);
    v3->klass = (BattleServantConfConponent_c *)WidgetAlphaCalculator;
    sub_B5D560(v3, WidgetAlphaCalculator, v5, v6, v7, v8, v9, v10);
    if ( !v3->klass )
      sub_B5D69C(0LL, v11);
    AlphaTransitionCalculator__MakeFadeInFinished((AlphaTransitionCalculator_o *)v3->klass, 0LL);
    return (AlphaTransitionCalculator_o *)v3->klass;
  }
  return result;
}