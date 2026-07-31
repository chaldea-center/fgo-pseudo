void ScrollArrowComponent___cctor(const MethodInfo *method)
{
  System_Collections_Generic_List_ScrollArrowComponent__c *v1; // x0
  struct ScrollArrowComponent_StaticFields *static_fields; // x8
  System_Collections_Generic_List_object__o *v3; // x19
  struct ScrollArrowComponent_StaticFields *v4; // x0
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7

  if ( (byte_5934F22 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_ScrollArrowComponent___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_ScrollArrowComponent__TypeInfo);
    sub_21FFC50(&ScrollArrowComponent_TypeInfo);
    byte_5934F22 = 1;
  }
  v1 = System_Collections_Generic_List_ScrollArrowComponent__TypeInfo;
  static_fields = ScrollArrowComponent_TypeInfo->static_fields;
  static_fields->MOVE_RANGE = 20;
  *(_QWORD *)&static_fields->MOVE_TIME = 0x3E80000040200000LL;
  static_fields->ALPHA_FADE_FRAME_NUM = 16;
  v3 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(v1);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_ScrollArrowComponent___ctor__);
  v4 = ScrollArrowComponent_TypeInfo->static_fields;
  v4->_arrowList = (struct System_Collections_Generic_List_ScrollArrowComponent__o *)v3;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v4->_arrowList, (int32_t)v3, v5, v6, v7, v8, v9, v10);
}


void ScrollArrowComponent___ctor(ScrollArrowComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  ScrollArrowComponent_c *v4; // x0
  int32_t *p_MOVE_RANGE; // x8
  float v6; // s0

  if ( (byte_5934F21 & 1) == 0 )
  {
    sub_21FFC50(&ScrollArrowComponent_TypeInfo);
    byte_5934F21 = 1;
  }
  v4 = ScrollArrowComponent_TypeInfo;
  if ( !*(&ScrollArrowComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ScrollArrowComponent_TypeInfo, method, v2);
    v4 = ScrollArrowComponent_TypeInfo;
  }
  p_MOVE_RANGE = &v4->static_fields->MOVE_RANGE;
  v6 = *((float *)p_MOVE_RANGE + 1);
  this->fields.moveRange = *p_MOVE_RANGE;
  this->fields.moveTime = v6;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void ScrollArrowComponent__Awake(ScrollArrowComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *mWidget; // x21
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 gameObject; // x0
  Il2CppObject *Component_object; // x0
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  ScrollArrowComponent_c *v15; // x0
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  ScrollArrowComponent_c *v22; // x0
  __int64 v23; // x8
  _QWORD *v24; // x9
  __int64 v25; // x10
  __int64 v26; // x8
  __int64 v27; // x1
  __int64 v28; // x2
  Il2CppObject *v29; // x20
  int32_t directionType; // w9
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float y; // s8
  float x; // s9
  float z; // s10
  UnityEngine_GameObject_o *v35; // x0
  const MethodInfo *v36; // x1
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_5934F1A & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    sub_21FFC50(&Method_System_Collections_Generic_List_ScrollArrowComponent__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ScrollArrowComponent__Contains__);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&ScrollArrowComponent_TypeInfo);
    byte_5934F1A = 1;
  }
  mWidget = (UnityEngine_Object_o *)this->fields.mWidget;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Equality(mWidget, 0, 0) )
  {
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !gameObject )
      goto LABEL_37;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)gameObject,
                         (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    this->fields.mWidget = (struct UIWidget_o *)Component_object;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.mWidget,
      (int32_t)Component_object,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14);
  }
  v15 = ScrollArrowComponent_TypeInfo;
  if ( !*(&ScrollArrowComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ScrollArrowComponent_TypeInfo, v5, v6);
    v15 = ScrollArrowComponent_TypeInfo;
  }
  gameObject = (__int64)v15->static_fields->_arrowList;
  if ( !gameObject )
LABEL_37:
    sub_21FFECC(gameObject, v5);
  if ( !System_Collections_Generic_List_object___Contains(
          (System_Collections_Generic_List_object__o *)gameObject,
          (Il2CppObject *)this,
          (const MethodInfo_444FEC8 *)Method_System_Collections_Generic_List_ScrollArrowComponent__Contains__) )
  {
    v22 = ScrollArrowComponent_TypeInfo;
    if ( !*(&ScrollArrowComponent_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(ScrollArrowComponent_TypeInfo, v5, v16);
      v22 = ScrollArrowComponent_TypeInfo;
    }
    gameObject = (__int64)v22->static_fields->_arrowList;
    if ( !gameObject )
      goto LABEL_37;
    v23 = *(_QWORD *)(gameObject + 16);
    v24 = Method_System_Collections_Generic_List_ScrollArrowComponent__Add__;
    ++*(_DWORD *)(gameObject + 28);
    if ( !v23 )
      goto LABEL_37;
    v25 = *(int *)(gameObject + 24);
    if ( (unsigned int)v25 >= *(_DWORD *)(v23 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)gameObject,
        (Il2CppObject *)this,
        *(const MethodInfo_444FB2C **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
    }
    else
    {
      v26 = v23 + 8 * v25;
      *(_DWORD *)(gameObject + 24) = v25 + 1;
      *(_QWORD *)(v26 + 32) = this;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v26 + 32), (int32_t)this, v16, v17, v18, v19, v20, v21);
    }
  }
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_37;
  v29 = UnityEngine_GameObject__GetComponent_object_(
          (UnityEngine_GameObject_o *)gameObject,
          (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v27, v28);
  gameObject = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v29, 0, 0);
  if ( (gameObject & 1) != 0 )
  {
    if ( !byte_5931940 )
    {
      gameObject = sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
      byte_5931940 = 1;
    }
    directionType = this->fields.directionType;
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    x = static_fields->zeroVector.fields.x;
    y = static_fields->zeroVector.fields.y;
    if ( directionType > 1 )
    {
      if ( directionType == 2 )
      {
        y = (float)this->fields.moveRange;
      }
      else if ( directionType == 3 )
      {
        y = (float)-this->fields.moveRange;
      }
    }
    else if ( directionType )
    {
      if ( directionType == 1 )
        x = (float)this->fields.moveRange;
    }
    else
    {
      x = (float)-this->fields.moveRange;
    }
    if ( v29 )
    {
      z = static_fields->zeroVector.fields.z;
      *(float *)&v29[3].monitor = this->fields.moveTime;
      v35 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      LocalPosition = GameObjectExtensions__GetLocalPosition(v35, v36);
      *(UnityEngine_Vector3_o *)&v29[8].klass = LocalPosition;
      *((float *)&v29[8].monitor + 1) = x + LocalPosition.fields.x;
      *(float *)&v29[9].klass = y + LocalPosition.fields.y;
      *((float *)&v29[9].klass + 1) = z + LocalPosition.fields.z;
      return;
    }
    goto LABEL_37;
  }
}


AlphaTransitionCalculator_o *ScrollArrowComponent__CreateWidgetAlphaCalculator(
        ScrollArrowComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  ScrollArrowComponent_c *v3; // x0
  float v4; // s8
  System_Func_float__float__float__float__o *v5; // x19
  AlphaTransitionCalculator_o *v6; // x20
  const MethodInfo *v7; // x2

  if ( (byte_5934F20 & 1) == 0 )
  {
    sub_21FFC50(&AlphaTransitionCalculator_TypeInfo);
    sub_21FFC50(&ScrollArrowComponent_TypeInfo);
    byte_5934F20 = 1;
  }
  v3 = ScrollArrowComponent_TypeInfo;
  if ( !*(&ScrollArrowComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ScrollArrowComponent_TypeInfo, method, v2);
    v3 = ScrollArrowComponent_TypeInfo;
  }
  v4 = ChangedFPSUtil__CovertFrameNumToSecond(v3->static_fields->ALPHA_FADE_FRAME_NUM, 0);
  v5 = ExtraEasing__AsymptoticSeriesFloat(
         ScrollArrowComponent_TypeInfo->static_fields->TGT_ALP_SPD_RATE,
         (float)ScrollArrowComponent_TypeInfo->static_fields->ALPHA_FADE_FRAME_NUM,
         0);
  v6 = (AlphaTransitionCalculator_o *)sub_21FFEBC(AlphaTransitionCalculator_TypeInfo);
  AlphaTransitionCalculator___ctor(v6, v4, v5, v7);
  return v6;
}


ScrollArrowComponent_o *ScrollArrowComponent__FetchActiveArrow(ScrollArrowComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  ScrollArrowComponent_c *v4; // x0
  System_Collections_Generic_List_object__o *arrowList; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *current; // x20
  _BOOL8 v9; // x0
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x2
  System_Collections_Generic_List_Enumerator_object__o v14; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v15; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_5934F1E & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ScrollArrowComponent__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ScrollArrowComponent__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ScrollArrowComponent__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ScrollArrowComponent__GetEnumerator__);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&ScrollArrowComponent_TypeInfo);
    byte_5934F1E = 1;
  }
  v4 = ScrollArrowComponent_TypeInfo;
  memset(&v15, 0, sizeof(v15));
  if ( !*(&ScrollArrowComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ScrollArrowComponent_TypeInfo, method, v2);
    v4 = ScrollArrowComponent_TypeInfo;
  }
  arrowList = (System_Collections_Generic_List_object__o *)v4->static_fields->_arrowList;
  if ( !arrowList )
    sub_21FFECC(0, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v14,
    arrowList,
    (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_ScrollArrowComponent__GetEnumerator__);
  v15 = v14;
  v14.fields._list = 0;
  *(_QWORD *)&v14.fields._index = &v15;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v15,
            (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_ScrollArrowComponent__MoveNext__) )
  {
    current = v15.fields._current;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v7);
    v9 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v9 )
    {
      if ( !current )
        sub_21FFECC(v9, v10);
      if ( UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)current, 0) )
      {
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11, v12);
        if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, (UnityEngine_Object_o *)this, 0) )
          goto LABEL_18;
      }
    }
  }
  current = 0;
LABEL_18:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v15,
    (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_ScrollArrowComponent__Dispose__);
  return (ScrollArrowComponent_o *)current;
}


void ScrollArrowComponent__OnDestroy(ScrollArrowComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  ScrollArrowComponent_c *v4; // x0
  System_Collections_Generic_List_object__o *arrowList; // x0

  if ( (byte_5934F1B & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_ScrollArrowComponent__Remove__);
    sub_21FFC50(&ScrollArrowComponent_TypeInfo);
    byte_5934F1B = 1;
  }
  v4 = ScrollArrowComponent_TypeInfo;
  if ( !*(&ScrollArrowComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ScrollArrowComponent_TypeInfo, method, v2);
    v4 = ScrollArrowComponent_TypeInfo;
  }
  arrowList = (System_Collections_Generic_List_object__o *)v4->static_fields->_arrowList;
  if ( !arrowList )
    sub_21FFECC(0, method);
  System_Collections_Generic_List_object___Remove(
    arrowList,
    (Il2CppObject *)this,
    (const MethodInfo_445101C *)Method_System_Collections_Generic_List_ScrollArrowComponent__Remove__);
}


// attributes: thunk
void ScrollArrowComponent__OnEnable(ScrollArrowComponent_o *this, const MethodInfo *method)
{
  ScrollArrowComponent__SyncAnimation(this, method);
}


// local variable allocation has failed, the output may be wrong!
void ScrollArrowComponent__SetDisp(ScrollArrowComponent_o *this, bool isDisp, bool isInstant, const MethodInfo *method)
{
  AlphaTransitionCalculator_o *WidgetAlphaCalculator; // x0
  const MethodInfo *v8; // x1
  const MethodInfo *v9; // x1
  struct UIWidget_o *mWidget; // x20
  const MethodInfo *v11; // x1

  if ( (byte_5934F1D & 1) == 0 )
  {
    sub_21FFC50(&Method_TransitionCalculator_float__ToEnd__);
    sub_21FFC50(&Method_TransitionCalculator_float__get_Current__);
    byte_5934F1D = 1;
  }
  WidgetAlphaCalculator = ScrollArrowComponent__get_WidgetAlphaCalculator(this, (const MethodInfo *)isDisp);
  if ( isDisp )
  {
    if ( !WidgetAlphaCalculator )
      goto LABEL_13;
    AlphaTransitionCalculator__SwitchFadeIn(WidgetAlphaCalculator, v8);
    if ( !isInstant )
      return;
    goto LABEL_9;
  }
  if ( !WidgetAlphaCalculator )
    goto LABEL_13;
  AlphaTransitionCalculator__SwitchFadeOut(WidgetAlphaCalculator, v8);
  if ( isInstant )
  {
LABEL_9:
    WidgetAlphaCalculator = ScrollArrowComponent__get_WidgetAlphaCalculator(this, v9);
    if ( WidgetAlphaCalculator )
    {
      TransitionCalculator_float___ToEnd(
        (TransitionCalculator_float__o *)WidgetAlphaCalculator,
        (const MethodInfo_3BB5D08 *)Method_TransitionCalculator_float__ToEnd__);
      mWidget = this->fields.mWidget;
      WidgetAlphaCalculator = ScrollArrowComponent__get_WidgetAlphaCalculator(this, v11);
      if ( WidgetAlphaCalculator )
      {
        if ( mWidget )
        {
          ((void (__fastcall *)(struct UIWidget_o *, const MethodInfo *, float))mWidget->klass->vtable._8_set_alpha.methodPtr)(
            mWidget,
            mWidget->klass->vtable._8_set_alpha.method,
            WidgetAlphaCalculator->fields._Current_k__BackingField);
          return;
        }
      }
    }
LABEL_13:
    sub_21FFECC(WidgetAlphaCalculator, v8);
  }
}


void ScrollArrowComponent__SyncAnimation(ScrollArrowComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x2
  UnityEngine_Component_o *ActiveArrow; // x20
  void *gameObject; // x0
  __int64 v7; // x1
  UITweener_o *v8; // x19

  if ( (byte_5934F1F & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_Component_GetComponent_TweenPosition___);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5934F1F = 1;
  }
  ActiveArrow = (UnityEngine_Component_o *)ScrollArrowComponent__FetchActiveArrow(this, method);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v3, v4);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)ActiveArrow, 0, 0) )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !gameObject
      || (gameObject = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)gameObject,
                         (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_TweenPosition___),
          !ActiveArrow)
      || (v8 = (UITweener_o *)gameObject,
          (gameObject = UnityEngine_Component__GetComponent_object_(
                          ActiveArrow,
                          (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_TweenPosition___)) == 0)
      || !v8 )
    {
      sub_21FFECC(gameObject, v7);
    }
    UITweener__set_tweenFactor(v8, *((float *)gameObject + 28), 0);
  }
}


void ScrollArrowComponent__Update(ScrollArrowComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *mWidget; // x20
  const MethodInfo *v5; // x1
  struct UIWidget_o *v6; // x20
  TransitionCalculator_float__o *WidgetAlphaCalculator; // x0
  __int64 v8; // x1
  float v9; // s0

  if ( (byte_5934F1C & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_TransitionCalculator_float__Update__);
    byte_5934F1C = 1;
  }
  mWidget = (UnityEngine_Object_o *)this->fields.mWidget;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Inequality(mWidget, 0, 0) )
  {
    v6 = this->fields.mWidget;
    WidgetAlphaCalculator = (TransitionCalculator_float__o *)ScrollArrowComponent__get_WidgetAlphaCalculator(this, v5);
    if ( !WidgetAlphaCalculator
      || (v9 = TransitionCalculator_float___Update(
                 WidgetAlphaCalculator,
                 (const MethodInfo_3BB5C64 *)Method_TransitionCalculator_float__Update__),
          !v6) )
    {
      sub_21FFECC(WidgetAlphaCalculator, v8);
    }
    ((void (__fastcall *)(struct UIWidget_o *, const MethodInfo *, float))v6->klass->vtable._8_set_alpha.methodPtr)(
      v6,
      v6->klass->vtable._8_set_alpha.method,
      v9);
  }
}


AlphaTransitionCalculator_o *ScrollArrowComponent__get_WidgetAlphaCalculator(
        ScrollArrowComponent_o *this,
        const MethodInfo *method)
{
  AlphaTransitionCalculator_o *result; // x0
  MissionNaviTransitionBoardItem_o *p_widgetAlphaCalculator; // x19
  AlphaTransitionCalculator_o *WidgetAlphaCalculator; // x0
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  const MethodInfo *v11; // x1

  p_widgetAlphaCalculator = (MissionNaviTransitionBoardItem_o *)&this->fields.widgetAlphaCalculator;
  result = this->fields.widgetAlphaCalculator;
  if ( !result )
  {
    WidgetAlphaCalculator = ScrollArrowComponent__CreateWidgetAlphaCalculator(0, method);
    p_widgetAlphaCalculator->klass = (MissionNaviTransitionBoardItem_c *)WidgetAlphaCalculator;
    sub_21FFBF4(p_widgetAlphaCalculator, (int32_t)WidgetAlphaCalculator, v5, v6, v7, v8, v9, v10);
    if ( !p_widgetAlphaCalculator->klass )
      sub_21FFECC(0, v11);
    AlphaTransitionCalculator__MakeFadeInFinished((AlphaTransitionCalculator_o *)p_widgetAlphaCalculator->klass, v11);
    return (AlphaTransitionCalculator_o *)p_widgetAlphaCalculator->klass;
  }
  return result;
}