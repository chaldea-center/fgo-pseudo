void __fastcall ScrollArrowComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x1
  struct ScrollArrowComponent_StaticFields *static_fields; // x8
  System_Collections_Generic_List_object__o *v6; // x19
  struct ScrollArrowComponent_StaticFields *v7; // x0
  int32_t v8; // w2
  int32_t v9; // w3

  if ( (byte_49F91EC & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_ScrollArrowComponent___ctor__, v1);
    sub_1B640C8(&System_Collections_Generic_List_ScrollArrowComponent__TypeInfo, v3);
    sub_1B640C8(&ScrollArrowComponent_TypeInfo, v4);
    byte_49F91EC = 1;
  }
  static_fields = ScrollArrowComponent_TypeInfo->static_fields;
  static_fields->MOVE_RANGE = 20;
  *(_QWORD *)&static_fields->MOVE_TIME = 0x3E80000040200000LL;
  static_fields->ALPHA_FADE_FRAME_NUM = 16;
  v6 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                      System_Collections_Generic_List_ScrollArrowComponent__TypeInfo,
                                                      v1,
                                                      v2);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_ScrollArrowComponent___ctor__);
  v7 = ScrollArrowComponent_TypeInfo->static_fields;
  v7->_arrowList = (struct System_Collections_Generic_List_ScrollArrowComponent__o *)v6;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v7->_arrowList, (int32_t)v6, v8, v9);
}


void __fastcall ScrollArrowComponent___ctor(ScrollArrowComponent_o *this, const MethodInfo *method)
{
  ScrollArrowComponent_c *v3; // x0
  struct ScrollArrowComponent_StaticFields *static_fields; // x8

  if ( (byte_49F91EB & 1) == 0 )
  {
    sub_1B640C8(&ScrollArrowComponent_TypeInfo, method);
    byte_49F91EB = 1;
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
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall ScrollArrowComponent__Awake(ScrollArrowComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  UnityEngine_Object_o *mWidget; // x21
  __int64 gameObject; // x0
  Il2CppObject *Component_object; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  ScrollArrowComponent_c *v13; // x0
  int32_t v14; // w2
  int32_t v15; // w3
  ScrollArrowComponent_c *v16; // x0
  __int64 v17; // x8
  _QWORD *v18; // x9
  __int64 v19; // x10
  __int64 v20; // x8
  Il2CppObject *v21; // x20
  __int64 v22; // x1
  struct UnityEngine_Vector3_StaticFields *static_fields; // x9
  float y; // s9
  float x; // s10
  float z; // s8
  UnityEngine_GameObject_o *v27; // x0
  const MethodInfo *v28; // x1
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_49F91E4 & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_TweenPosition___, method);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_UIWidget___, v3);
    sub_1B640C8(&Method_System_Collections_Generic_List_ScrollArrowComponent__Add__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_ScrollArrowComponent__Contains__, v5);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v6);
    sub_1B640C8(&ScrollArrowComponent_TypeInfo, v7);
    byte_49F91E4 = 1;
  }
  mWidget = (UnityEngine_Object_o *)this->fields.mWidget;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(mWidget, 0LL, 0LL) )
  {
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_33;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)gameObject,
                         (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    this->fields.mWidget = (struct UIWidget_o *)Component_object;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.mWidget, (int32_t)Component_object, v11, v12);
  }
  v13 = ScrollArrowComponent_TypeInfo;
  if ( !ScrollArrowComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScrollArrowComponent_TypeInfo);
    v13 = ScrollArrowComponent_TypeInfo;
  }
  gameObject = (__int64)v13->static_fields->_arrowList;
  if ( !gameObject )
LABEL_33:
    sub_1B64324(gameObject);
  if ( !System_Collections_Generic_List_object___Contains(
          (System_Collections_Generic_List_object__o *)gameObject,
          (Il2CppObject *)this,
          (const MethodInfo_34ADA64 *)Method_System_Collections_Generic_List_ScrollArrowComponent__Contains__) )
  {
    v16 = ScrollArrowComponent_TypeInfo;
    if ( !ScrollArrowComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScrollArrowComponent_TypeInfo);
      v16 = ScrollArrowComponent_TypeInfo;
    }
    gameObject = (__int64)v16->static_fields->_arrowList;
    if ( !gameObject )
      goto LABEL_33;
    v17 = *(_QWORD *)(gameObject + 16);
    v18 = Method_System_Collections_Generic_List_ScrollArrowComponent__Add__;
    ++*(_DWORD *)(gameObject + 28);
    if ( !v17 )
      goto LABEL_33;
    v19 = *(int *)(gameObject + 24);
    if ( (unsigned int)v19 >= *(_DWORD *)(v17 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)gameObject,
        (Il2CppObject *)this,
        *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
    }
    else
    {
      v20 = v17 + 8 * v19;
      *(_DWORD *)(gameObject + 24) = v19 + 1;
      *(_QWORD *)(v20 + 32) = this;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v20 + 32), (int32_t)this, v14, v15);
    }
  }
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_33;
  v21 = UnityEngine_GameObject__GetComponent_object_(
          (UnityEngine_GameObject_o *)gameObject,
          (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v21, 0LL, 0LL);
  if ( (gameObject & 1) != 0 )
  {
    if ( !byte_49F7111 )
    {
      gameObject = sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v22);
      byte_49F7111 = 1;
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
    if ( v21 )
    {
      *(float *)&v21[3].monitor = this->fields.moveTime;
      v27 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      LocalPosition = GameObjectExtensions__GetLocalPosition(v27, v28);
      *(UnityEngine_Vector3_o *)&v21[8].klass = LocalPosition;
      *((float *)&v21[8].monitor + 1) = x + LocalPosition.fields.x;
      *(float *)&v21[9].klass = y + LocalPosition.fields.y;
      *((float *)&v21[9].klass + 1) = z + LocalPosition.fields.z;
      return;
    }
    goto LABEL_33;
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
  const MethodInfo *v9; // x2

  if ( (byte_49F91EA & 1) == 0 )
  {
    sub_1B640C8(&AlphaTransitionCalculator_TypeInfo, method);
    sub_1B640C8(&ScrollArrowComponent_TypeInfo, v2);
    byte_49F91EA = 1;
  }
  v3 = ScrollArrowComponent_TypeInfo;
  if ( !ScrollArrowComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScrollArrowComponent_TypeInfo);
    v3 = ScrollArrowComponent_TypeInfo;
  }
  v4 = ChangedFPSUtil__CovertFrameNumToSecond(v3->static_fields->ALPHA_FADE_FRAME_NUM, 0LL);
  v5 = ExtraEasing__AsymptoticSeriesFloat(
         ScrollArrowComponent_TypeInfo->static_fields->TGT_ALP_SPD_RATE,
         (float)ScrollArrowComponent_TypeInfo->static_fields->ALPHA_FADE_FRAME_NUM,
         0LL);
  v8 = (AlphaTransitionCalculator_o *)sub_1B64314(AlphaTransitionCalculator_TypeInfo, v6, v7);
  AlphaTransitionCalculator___ctor(v8, v4, v5, v9);
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
  System_Collections_Generic_List_object__o *arrowList; // x0
  Il2CppObject *current; // x20
  _BOOL8 v11; // x0
  System_Collections_Generic_List_Enumerator_object__o v13; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v14; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_49F91E8 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ScrollArrowComponent__Dispose__, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ScrollArrowComponent__MoveNext__, v3);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ScrollArrowComponent__get_Current__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_ScrollArrowComponent__GetEnumerator__, v5);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v6);
    sub_1B640C8(&ScrollArrowComponent_TypeInfo, v7);
    byte_49F91E8 = 1;
  }
  v8 = ScrollArrowComponent_TypeInfo;
  memset(&v14, 0, sizeof(v14));
  if ( !ScrollArrowComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScrollArrowComponent_TypeInfo);
    v8 = ScrollArrowComponent_TypeInfo;
  }
  arrowList = (System_Collections_Generic_List_object__o *)v8->static_fields->_arrowList;
  if ( !arrowList )
    sub_1B64324(0LL);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v13,
    arrowList,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_ScrollArrowComponent__GetEnumerator__);
  v14 = v13;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v14,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_ScrollArrowComponent__MoveNext__) )
  {
    current = v14.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v11 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v11 )
    {
      if ( !current )
        sub_1B64324(v11);
      if ( UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)current, 0LL) )
      {
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, (UnityEngine_Object_o *)this, 0LL) )
          goto LABEL_18;
      }
    }
  }
  current = 0LL;
LABEL_18:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v14,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_ScrollArrowComponent__Dispose__);
  return (ScrollArrowComponent_o *)current;
}


void __fastcall ScrollArrowComponent__OnDestroy(ScrollArrowComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  ScrollArrowComponent_c *v4; // x0
  System_Collections_Generic_List_object__o *arrowList; // x0

  if ( (byte_49F91E5 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_ScrollArrowComponent__Remove__, method);
    sub_1B640C8(&ScrollArrowComponent_TypeInfo, v3);
    byte_49F91E5 = 1;
  }
  v4 = ScrollArrowComponent_TypeInfo;
  if ( !ScrollArrowComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScrollArrowComponent_TypeInfo);
    v4 = ScrollArrowComponent_TypeInfo;
  }
  arrowList = (System_Collections_Generic_List_object__o *)v4->static_fields->_arrowList;
  if ( !arrowList )
    sub_1B64324(0LL);
  System_Collections_Generic_List_object___Remove(
    arrowList,
    (Il2CppObject *)this,
    (const MethodInfo_34AEC9C *)Method_System_Collections_Generic_List_ScrollArrowComponent__Remove__);
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
  const MethodInfo *v10; // x1
  struct UIWidget_o *mWidget; // x20
  const MethodInfo *v12; // x1

  if ( (byte_49F91E7 & 1) == 0 )
  {
    sub_1B640C8(&Method_TransitionCalculator_float__ToEnd__, is_disp);
    sub_1B640C8(&Method_TransitionCalculator_float__get_Current__, v7);
    byte_49F91E7 = 1;
  }
  WidgetAlphaCalculator = ScrollArrowComponent__get_WidgetAlphaCalculator(this, (const MethodInfo *)is_disp);
  if ( !WidgetAlphaCalculator )
    goto LABEL_12;
  if ( is_disp )
  {
    AlphaTransitionCalculator__SwitchFadeIn(WidgetAlphaCalculator, v9);
    if ( !is_force )
      return;
    goto LABEL_8;
  }
  AlphaTransitionCalculator__SwitchFadeOut(WidgetAlphaCalculator, v9);
  if ( is_force )
  {
LABEL_8:
    WidgetAlphaCalculator = ScrollArrowComponent__get_WidgetAlphaCalculator(this, v10);
    if ( WidgetAlphaCalculator )
    {
      TransitionCalculator_float___ToEnd(
        (TransitionCalculator_float__o *)WidgetAlphaCalculator,
        (const MethodInfo_376C15C *)Method_TransitionCalculator_float__ToEnd__);
      mWidget = this->fields.mWidget;
      WidgetAlphaCalculator = ScrollArrowComponent__get_WidgetAlphaCalculator(this, v12);
      if ( WidgetAlphaCalculator )
      {
        if ( mWidget )
        {
          ((void (__fastcall *)(struct UIWidget_o *, Il2CppMethodPointer, float))mWidget->klass->vtable._8_set_alpha.method)(
            mWidget,
            mWidget->klass->vtable._9_CalculateFinalAlpha.methodPtr,
            WidgetAlphaCalculator->fields._Current_k__BackingField);
          return;
        }
      }
    }
LABEL_12:
    sub_1B64324(WidgetAlphaCalculator);
  }
}


void __fastcall ScrollArrowComponent__SyncAnimation(ScrollArrowComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_Component_o *ActiveArrow; // x20
  void *gameObject; // x0
  UITweener_o *v7; // x19

  if ( (byte_49F91E9 & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_Component_GetComponent_TweenPosition___, method);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_TweenPosition___, v3);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v4);
    byte_49F91E9 = 1;
  }
  ActiveArrow = (UnityEngine_Component_o *)ScrollArrowComponent__FetchActiveArrow(this, method);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)ActiveArrow, 0LL, 0LL) )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject
      || (gameObject = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)gameObject,
                         (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_TweenPosition___),
          !ActiveArrow)
      || (v7 = (UITweener_o *)gameObject,
          (gameObject = UnityEngine_Component__GetComponent_object_(
                          ActiveArrow,
                          (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_TweenPosition___)) == 0LL)
      || !v7 )
    {
      sub_1B64324(gameObject);
    }
    UITweener__set_tweenFactor(v7, *((float *)gameObject + 28), 0LL);
  }
}


void __fastcall ScrollArrowComponent__Update(ScrollArrowComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *mWidget; // x20
  const MethodInfo *v5; // x1
  struct UIWidget_o *v6; // x20
  TransitionCalculator_float__o *WidgetAlphaCalculator; // x0
  float v8; // s0

  if ( (byte_49F91E6 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    sub_1B640C8(&Method_TransitionCalculator_float__Update__, v3);
    byte_49F91E6 = 1;
  }
  mWidget = (UnityEngine_Object_o *)this->fields.mWidget;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mWidget, 0LL, 0LL) )
  {
    v6 = this->fields.mWidget;
    WidgetAlphaCalculator = (TransitionCalculator_float__o *)ScrollArrowComponent__get_WidgetAlphaCalculator(this, v5);
    if ( !WidgetAlphaCalculator
      || (v8 = TransitionCalculator_float___Update(
                 WidgetAlphaCalculator,
                 (const MethodInfo_376C0A0 *)Method_TransitionCalculator_float__Update__),
          !v6) )
    {
      sub_1B64324(WidgetAlphaCalculator);
    }
    ((void (__fastcall *)(struct UIWidget_o *, Il2CppMethodPointer, float))v6->klass->vtable._8_set_alpha.method)(
      v6,
      v6->klass->vtable._9_CalculateFinalAlpha.methodPtr,
      v8);
  }
}


AlphaTransitionCalculator_o *__fastcall ScrollArrowComponent__get_WidgetAlphaCalculator(
        ScrollArrowComponent_o *this,
        const MethodInfo *method)
{
  AlphaTransitionCalculator_o *result; // x0
  ServantStatusBattleListViewItem_o *p_widgetAlphaCalculator; // x19
  AlphaTransitionCalculator_o *WidgetAlphaCalculator; // x0
  int32_t v5; // w2
  int32_t v6; // w3
  const MethodInfo *v7; // x1

  p_widgetAlphaCalculator = (ServantStatusBattleListViewItem_o *)&this->fields.widgetAlphaCalculator;
  result = this->fields.widgetAlphaCalculator;
  if ( !result )
  {
    WidgetAlphaCalculator = ScrollArrowComponent__CreateWidgetAlphaCalculator(0LL, method);
    p_widgetAlphaCalculator->klass = (ServantStatusBattleListViewItem_c *)WidgetAlphaCalculator;
    sub_1B6406C(p_widgetAlphaCalculator, (int32_t)WidgetAlphaCalculator, v5, v6);
    if ( !p_widgetAlphaCalculator->klass )
      sub_1B64324(0LL);
    AlphaTransitionCalculator__MakeFadeInFinished((AlphaTransitionCalculator_o *)p_widgetAlphaCalculator->klass, v7);
    return (AlphaTransitionCalculator_o *)p_widgetAlphaCalculator->klass;
  }
  return result;
}