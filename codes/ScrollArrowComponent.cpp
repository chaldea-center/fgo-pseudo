void ScrollArrowComponent___cctor(const MethodInfo *method)
{
  struct ScrollArrowComponent_StaticFields *static_fields; // x8
  System_Collections_Generic_List_object__o *v2; // x19
  struct ScrollArrowComponent_StaticFields *v3; // x0
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4CB2D1F & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_ScrollArrowComponent___ctor__);
    sub_1C6BA08(&System_Collections_Generic_List_ScrollArrowComponent__TypeInfo);
    sub_1C6BA08(&ScrollArrowComponent_TypeInfo);
    byte_4CB2D1F = 1;
  }
  static_fields = ScrollArrowComponent_TypeInfo->static_fields;
  static_fields->MOVE_RANGE = 20;
  *(_QWORD *)&static_fields->MOVE_TIME = 0x3E80000040200000LL;
  static_fields->ALPHA_FADE_FRAME_NUM = 16;
  v2 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_ScrollArrowComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v2,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_ScrollArrowComponent___ctor__);
  v3 = ScrollArrowComponent_TypeInfo->static_fields;
  v3->_arrowList = (struct System_Collections_Generic_List_ScrollArrowComponent__o *)v2;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v3->_arrowList, (int32_t)v2, v4, v5);
}


void ScrollArrowComponent___ctor(ScrollArrowComponent_o *this, const MethodInfo *method)
{
  ScrollArrowComponent_c *v3; // x0
  struct ScrollArrowComponent_StaticFields *static_fields; // x8

  if ( (byte_4CB2D1E & 1) == 0 )
  {
    sub_1C6BA08(&ScrollArrowComponent_TypeInfo);
    byte_4CB2D1E = 1;
  }
  v3 = ScrollArrowComponent_TypeInfo;
  if ( !ScrollArrowComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScrollArrowComponent_TypeInfo);
    v3 = ScrollArrowComponent_TypeInfo;
  }
  static_fields = v3->static_fields;
  this->fields.moveRange = static_fields->MOVE_RANGE;
  this->fields.moveTime = static_fields->MOVE_TIME;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void ScrollArrowComponent__Awake(ScrollArrowComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *mWidget; // x21
  __int64 v4; // x1
  __int64 gameObject; // x0
  Il2CppObject *Component_object; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  ScrollArrowComponent_c *v9; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  ScrollArrowComponent_c *v12; // x0
  __int64 v13; // x8
  _QWORD *v14; // x9
  __int64 v15; // x10
  __int64 v16; // x8
  Il2CppObject *v17; // x20
  struct UnityEngine_Vector3_StaticFields *static_fields; // x9
  float y; // s9
  float x; // s10
  float z; // s8
  UnityEngine_GameObject_o *v22; // x0
  const MethodInfo *v23; // x1
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4CB2D17 & 1) == 0 )
  {
    sub_1C6BA08(&Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
    sub_1C6BA08(&Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ScrollArrowComponent__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ScrollArrowComponent__Contains__);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&ScrollArrowComponent_TypeInfo);
    byte_4CB2D17 = 1;
  }
  mWidget = (UnityEngine_Object_o *)this->fields.mWidget;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(mWidget, 0, 0) )
  {
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !gameObject )
      goto LABEL_33;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)gameObject,
                         (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    this->fields.mWidget = (struct UIWidget_o *)Component_object;
    sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.mWidget, (int32_t)Component_object, v7, v8);
  }
  v9 = ScrollArrowComponent_TypeInfo;
  if ( !ScrollArrowComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScrollArrowComponent_TypeInfo);
    v9 = ScrollArrowComponent_TypeInfo;
  }
  gameObject = (__int64)v9->static_fields->_arrowList;
  if ( !gameObject )
LABEL_33:
    sub_1C6BC60(gameObject, v4);
  if ( !System_Collections_Generic_List_object___Contains(
          (System_Collections_Generic_List_object__o *)gameObject,
          (Il2CppObject *)this,
          (const MethodInfo_3800D04 *)Method_System_Collections_Generic_List_ScrollArrowComponent__Contains__) )
  {
    v12 = ScrollArrowComponent_TypeInfo;
    if ( !ScrollArrowComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScrollArrowComponent_TypeInfo);
      v12 = ScrollArrowComponent_TypeInfo;
    }
    gameObject = (__int64)v12->static_fields->_arrowList;
    if ( !gameObject )
      goto LABEL_33;
    v13 = *(_QWORD *)(gameObject + 16);
    v14 = Method_System_Collections_Generic_List_ScrollArrowComponent__Add__;
    ++*(_DWORD *)(gameObject + 28);
    if ( !v13 )
      goto LABEL_33;
    v15 = *(int *)(gameObject + 24);
    if ( (unsigned int)v15 >= *(_DWORD *)(v13 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)gameObject,
        (Il2CppObject *)this,
        *(const MethodInfo_3800974 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
    }
    else
    {
      v16 = v13 + 8 * v15;
      *(_DWORD *)(gameObject + 24) = v15 + 1;
      *(_QWORD *)(v16 + 32) = this;
      sub_1C6B9AC((CGThumbnailListItem_o *)(v16 + 32), (int32_t)this, v10, v11);
    }
  }
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_33;
  v17 = UnityEngine_GameObject__GetComponent_object_(
          (UnityEngine_GameObject_o *)gameObject,
          (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v17, 0, 0);
  if ( (gameObject & 1) != 0 )
  {
    if ( !byte_4CAFC09 )
    {
      gameObject = sub_1C6BA08(&UnityEngine_Vector3_TypeInfo);
      byte_4CAFC09 = 1;
    }
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    x = static_fields->zeroVector.fields.x;
    y = static_fields->zeroVector.fields.y;
    z = static_fields->zeroVector.fields.z;
    switch ( this->fields.directionType )
    {
      case 0:
        x = (float)-this->fields.moveRange;
        break;
      case 1:
        x = (float)this->fields.moveRange;
        break;
      case 2:
        y = (float)this->fields.moveRange;
        break;
      case 3:
        y = (float)-this->fields.moveRange;
        break;
      default:
        break;
    }
    if ( v17 )
    {
      *(float *)&v17[3].monitor = this->fields.moveTime;
      v22 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      LocalPosition = GameObjectExtensions__GetLocalPosition(v22, v23);
      *(UnityEngine_Vector3_o *)&v17[8].klass = LocalPosition;
      *((float *)&v17[8].monitor + 1) = x + LocalPosition.fields.x;
      *(float *)&v17[9].klass = y + LocalPosition.fields.y;
      *((float *)&v17[9].klass + 1) = z + LocalPosition.fields.z;
      return;
    }
    goto LABEL_33;
  }
}


AlphaTransitionCalculator_o *ScrollArrowComponent__CreateWidgetAlphaCalculator(
        ScrollArrowComponent_o *this,
        const MethodInfo *method)
{
  ScrollArrowComponent_c *v2; // x0
  float v3; // s8
  System_Func_float__float__float__float__o *v4; // x19
  AlphaTransitionCalculator_o *v5; // x20
  const MethodInfo *v6; // x2

  if ( (byte_4CB2D1D & 1) == 0 )
  {
    sub_1C6BA08(&AlphaTransitionCalculator_TypeInfo);
    sub_1C6BA08(&ScrollArrowComponent_TypeInfo);
    byte_4CB2D1D = 1;
  }
  v2 = ScrollArrowComponent_TypeInfo;
  if ( !ScrollArrowComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScrollArrowComponent_TypeInfo);
    v2 = ScrollArrowComponent_TypeInfo;
  }
  v3 = ChangedFPSUtil__CovertFrameNumToSecond(v2->static_fields->ALPHA_FADE_FRAME_NUM, 0);
  v4 = ExtraEasing__AsymptoticSeriesFloat(
         ScrollArrowComponent_TypeInfo->static_fields->TGT_ALP_SPD_RATE,
         (float)ScrollArrowComponent_TypeInfo->static_fields->ALPHA_FADE_FRAME_NUM,
         0);
  v5 = (AlphaTransitionCalculator_o *)sub_1C6BC54(AlphaTransitionCalculator_TypeInfo);
  AlphaTransitionCalculator___ctor(v5, v3, v4, v6);
  return v5;
}


ScrollArrowComponent_o *ScrollArrowComponent__FetchActiveArrow(ScrollArrowComponent_o *this, const MethodInfo *method)
{
  ScrollArrowComponent_c *v3; // x0
  System_Collections_Generic_List_object__o *arrowList; // x0
  Il2CppObject *current; // x20
  _BOOL8 v6; // x0
  __int64 v7; // x1
  System_Collections_Generic_List_Enumerator_object__o v9; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v10; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4CB2D1B & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_ScrollArrowComponent__Dispose__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_ScrollArrowComponent__MoveNext__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_ScrollArrowComponent__get_Current__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ScrollArrowComponent__GetEnumerator__);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&ScrollArrowComponent_TypeInfo);
    byte_4CB2D1B = 1;
  }
  v3 = ScrollArrowComponent_TypeInfo;
  memset(&v10, 0, sizeof(v10));
  if ( !ScrollArrowComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScrollArrowComponent_TypeInfo);
    v3 = ScrollArrowComponent_TypeInfo;
  }
  arrowList = (System_Collections_Generic_List_object__o *)v3->static_fields->_arrowList;
  if ( !arrowList )
    sub_1C6BC60(0, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v9,
    arrowList,
    (const MethodInfo_380146C *)Method_System_Collections_Generic_List_ScrollArrowComponent__GetEnumerator__);
  v10 = v9;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v10,
            (const MethodInfo_3586524 *)Method_System_Collections_Generic_List_Enumerator_ScrollArrowComponent__MoveNext__) )
  {
    current = v10.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v6 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v6 )
    {
      if ( !current )
        sub_1C6BC60(v6, v7);
      if ( UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)current, 0) )
      {
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, (UnityEngine_Object_o *)this, 0) )
          goto LABEL_18;
      }
    }
  }
  current = 0;
LABEL_18:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v10,
    (const MethodInfo_3586520 *)Method_System_Collections_Generic_List_Enumerator_ScrollArrowComponent__Dispose__);
  return (ScrollArrowComponent_o *)current;
}


void ScrollArrowComponent__OnDestroy(ScrollArrowComponent_o *this, const MethodInfo *method)
{
  ScrollArrowComponent_c *v3; // x0
  System_Collections_Generic_List_object__o *arrowList; // x0

  if ( (byte_4CB2D18 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_ScrollArrowComponent__Remove__);
    sub_1C6BA08(&ScrollArrowComponent_TypeInfo);
    byte_4CB2D18 = 1;
  }
  v3 = ScrollArrowComponent_TypeInfo;
  if ( !ScrollArrowComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScrollArrowComponent_TypeInfo);
    v3 = ScrollArrowComponent_TypeInfo;
  }
  arrowList = (System_Collections_Generic_List_object__o *)v3->static_fields->_arrowList;
  if ( !arrowList )
    sub_1C6BC60(0, method);
  System_Collections_Generic_List_object___Remove(
    arrowList,
    (Il2CppObject *)this,
    (const MethodInfo_3801E9C *)Method_System_Collections_Generic_List_ScrollArrowComponent__Remove__);
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

  if ( (byte_4CB2D1A & 1) == 0 )
  {
    sub_1C6BA08(&Method_TransitionCalculator_float__ToEnd__);
    sub_1C6BA08(&Method_TransitionCalculator_float__get_Current__);
    byte_4CB2D1A = 1;
  }
  WidgetAlphaCalculator = ScrollArrowComponent__get_WidgetAlphaCalculator(this, (const MethodInfo *)isDisp);
  if ( !WidgetAlphaCalculator )
    goto LABEL_12;
  if ( isDisp )
  {
    AlphaTransitionCalculator__SwitchFadeIn(WidgetAlphaCalculator, v8);
    if ( !isInstant )
      return;
    goto LABEL_8;
  }
  AlphaTransitionCalculator__SwitchFadeOut(WidgetAlphaCalculator, v8);
  if ( isInstant )
  {
LABEL_8:
    WidgetAlphaCalculator = ScrollArrowComponent__get_WidgetAlphaCalculator(this, v9);
    if ( WidgetAlphaCalculator )
    {
      TransitionCalculator_float___ToEnd(
        (TransitionCalculator_float__o *)WidgetAlphaCalculator,
        (const MethodInfo_3AF135C *)Method_TransitionCalculator_float__ToEnd__);
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
LABEL_12:
    sub_1C6BC60(WidgetAlphaCalculator, v8);
  }
}


void ScrollArrowComponent__SyncAnimation(ScrollArrowComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *ActiveArrow; // x20
  void *gameObject; // x0
  __int64 v5; // x1
  UITweener_o *v6; // x19

  if ( (byte_4CB2D1C & 1) == 0 )
  {
    sub_1C6BA08(&Method_UnityEngine_Component_GetComponent_TweenPosition___);
    sub_1C6BA08(&Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB2D1C = 1;
  }
  ActiveArrow = (UnityEngine_Component_o *)ScrollArrowComponent__FetchActiveArrow(this, method);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)ActiveArrow, 0, 0) )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !gameObject
      || (gameObject = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)gameObject,
                         (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_TweenPosition___),
          !ActiveArrow)
      || (v6 = (UITweener_o *)gameObject,
          (gameObject = UnityEngine_Component__GetComponent_object_(
                          ActiveArrow,
                          (const MethodInfo_3131B38 *)Method_UnityEngine_Component_GetComponent_TweenPosition___)) == 0)
      || !v6 )
    {
      sub_1C6BC60(gameObject, v5);
    }
    UITweener__set_tweenFactor(v6, *((float *)gameObject + 28), 0);
  }
}


void ScrollArrowComponent__Update(ScrollArrowComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *mWidget; // x20
  const MethodInfo *v4; // x1
  struct UIWidget_o *v5; // x20
  TransitionCalculator_float__o *WidgetAlphaCalculator; // x0
  __int64 v7; // x1
  float v8; // s0

  if ( (byte_4CB2D19 & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&Method_TransitionCalculator_float__Update__);
    byte_4CB2D19 = 1;
  }
  mWidget = (UnityEngine_Object_o *)this->fields.mWidget;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mWidget, 0, 0) )
  {
    v5 = this->fields.mWidget;
    WidgetAlphaCalculator = (TransitionCalculator_float__o *)ScrollArrowComponent__get_WidgetAlphaCalculator(this, v4);
    if ( !WidgetAlphaCalculator
      || (v8 = TransitionCalculator_float___Update(
                 WidgetAlphaCalculator,
                 (const MethodInfo_3AF12A0 *)Method_TransitionCalculator_float__Update__),
          !v5) )
    {
      sub_1C6BC60(WidgetAlphaCalculator, v7);
    }
    ((void (__fastcall *)(struct UIWidget_o *, const MethodInfo *, float))v5->klass->vtable._8_set_alpha.methodPtr)(
      v5,
      v5->klass->vtable._8_set_alpha.method,
      v8);
  }
}


AlphaTransitionCalculator_o *ScrollArrowComponent__get_WidgetAlphaCalculator(
        ScrollArrowComponent_o *this,
        const MethodInfo *method)
{
  AlphaTransitionCalculator_o *result; // x0
  CGThumbnailListItem_o *p_widgetAlphaCalculator; // x19
  AlphaTransitionCalculator_o *WidgetAlphaCalculator; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  const MethodInfo *v7; // x1

  p_widgetAlphaCalculator = (CGThumbnailListItem_o *)&this->fields.widgetAlphaCalculator;
  result = this->fields.widgetAlphaCalculator;
  if ( !result )
  {
    WidgetAlphaCalculator = ScrollArrowComponent__CreateWidgetAlphaCalculator(0, method);
    p_widgetAlphaCalculator->klass = (CGThumbnailListItem_c *)WidgetAlphaCalculator;
    sub_1C6B9AC(p_widgetAlphaCalculator, (int32_t)WidgetAlphaCalculator, v5, v6);
    if ( !p_widgetAlphaCalculator->klass )
      sub_1C6BC60(0, v7);
    AlphaTransitionCalculator__MakeFadeInFinished((AlphaTransitionCalculator_o *)p_widgetAlphaCalculator->klass, v7);
    return (AlphaTransitionCalculator_o *)p_widgetAlphaCalculator->klass;
  }
  return result;
}