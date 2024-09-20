void __fastcall ScrollArrowComponent___cctor(const MethodInfo *method)
{
  struct ScrollArrowComponent_StaticFields *static_fields; // x8
  System_Collections_Generic_List_object__o *v2; // x19
  struct ScrollArrowComponent_StaticFields *v3; // x0
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_4A57F2B & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_ScrollArrowComponent___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_ScrollArrowComponent__TypeInfo);
    sub_1B885B0(&ScrollArrowComponent_TypeInfo);
    byte_4A57F2B = 1;
  }
  static_fields = ScrollArrowComponent_TypeInfo->static_fields;
  static_fields->MOVE_RANGE = 20;
  *(_QWORD *)&static_fields->MOVE_TIME = 0x3E80000040200000LL;
  static_fields->ALPHA_FADE_FRAME_NUM = 16;
  v2 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_ScrollArrowComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v2,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_ScrollArrowComponent___ctor__);
  v3 = ScrollArrowComponent_TypeInfo->static_fields;
  v3->_arrowList = (struct System_Collections_Generic_List_ScrollArrowComponent__o *)v2;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v3->_arrowList, (int32_t)v2, v4, v5);
}


void __fastcall ScrollArrowComponent___ctor(ScrollArrowComponent_o *this, const MethodInfo *method)
{
  ScrollArrowComponent_c *v3; // x0
  struct ScrollArrowComponent_StaticFields *static_fields; // x8

  if ( (byte_4A57F2A & 1) == 0 )
  {
    sub_1B885B0(&ScrollArrowComponent_TypeInfo);
    byte_4A57F2A = 1;
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
  UnityEngine_Object_o *mWidget; // x21
  __int64 v4; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *Component_object; // x0
  int32_t v7; // w2
  int32_t v8; // w3
  ScrollArrowComponent_c *v9; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  ScrollArrowComponent_c *v12; // x0
  __int64 v13; // x8
  _QWORD *v14; // x9
  __int64 klass_low; // x10
  __int64 v16; // x8
  Il2CppObject *v17; // x20
  struct UnityEngine_Vector3_StaticFields *static_fields; // x9
  float y; // s9
  float x; // s10
  float z; // s8
  UnityEngine_GameObject_o *v22; // x0
  const MethodInfo *v23; // x1
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A57F23 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    sub_1B885B0(&Method_System_Collections_Generic_List_ScrollArrowComponent__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ScrollArrowComponent__Contains__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&ScrollArrowComponent_TypeInfo);
    byte_4A57F23 = 1;
  }
  mWidget = (UnityEngine_Object_o *)this->fields.mWidget;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(mWidget, 0LL, 0LL) )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_33;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         gameObject,
                         (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    this->fields.mWidget = (struct UIWidget_o *)Component_object;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.mWidget, (int32_t)Component_object, v7, v8);
  }
  v9 = ScrollArrowComponent_TypeInfo;
  if ( !ScrollArrowComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScrollArrowComponent_TypeInfo);
    v9 = ScrollArrowComponent_TypeInfo;
  }
  gameObject = (UnityEngine_GameObject_o *)v9->static_fields->_arrowList;
  if ( !gameObject )
LABEL_33:
    sub_1B8880C(gameObject, v4);
  if ( !System_Collections_Generic_List_object___Contains(
          (System_Collections_Generic_List_object__o *)gameObject,
          (Il2CppObject *)this,
          (const MethodInfo_34FDBC4 *)Method_System_Collections_Generic_List_ScrollArrowComponent__Contains__) )
  {
    v12 = ScrollArrowComponent_TypeInfo;
    if ( !ScrollArrowComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScrollArrowComponent_TypeInfo);
      v12 = ScrollArrowComponent_TypeInfo;
    }
    gameObject = (UnityEngine_GameObject_o *)v12->static_fields->_arrowList;
    if ( !gameObject )
      goto LABEL_33;
    v13 = *(_QWORD *)&gameObject->fields.m_CachedPtr;
    v14 = Method_System_Collections_Generic_List_ScrollArrowComponent__Add__;
    ++HIDWORD(gameObject[1].klass);
    if ( !v13 )
      goto LABEL_33;
    klass_low = SLODWORD(gameObject[1].klass);
    if ( (unsigned int)klass_low >= *(_DWORD *)(v13 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)gameObject,
        (Il2CppObject *)this,
        *(const MethodInfo_34FD834 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
    }
    else
    {
      v16 = v13 + 8 * klass_low;
      LODWORD(gameObject[1].klass) = klass_low + 1;
      *(_QWORD *)(v16 + 32) = this;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v16 + 32), (int32_t)this, v10, v11);
    }
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_33;
  v17 = UnityEngine_GameObject__GetComponent_object_(
          gameObject,
          (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v17, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    if ( !byte_4A55CE1 )
    {
      gameObject = (UnityEngine_GameObject_o *)sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
      byte_4A55CE1 = 1;
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
      v22 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
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


AlphaTransitionCalculator_o *__fastcall ScrollArrowComponent__CreateWidgetAlphaCalculator(
        ScrollArrowComponent_o *this,
        const MethodInfo *method)
{
  ScrollArrowComponent_c *v2; // x0
  float v3; // s8
  System_Func_float__float__float__float__o *v4; // x19
  AlphaTransitionCalculator_o *v5; // x20
  const MethodInfo *v6; // x2

  if ( (byte_4A57F29 & 1) == 0 )
  {
    sub_1B885B0(&AlphaTransitionCalculator_TypeInfo);
    sub_1B885B0(&ScrollArrowComponent_TypeInfo);
    byte_4A57F29 = 1;
  }
  v2 = ScrollArrowComponent_TypeInfo;
  if ( !ScrollArrowComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScrollArrowComponent_TypeInfo);
    v2 = ScrollArrowComponent_TypeInfo;
  }
  v3 = ChangedFPSUtil__CovertFrameNumToSecond(v2->static_fields->ALPHA_FADE_FRAME_NUM, 0LL);
  v4 = ExtraEasing__AsymptoticSeriesFloat(
         ScrollArrowComponent_TypeInfo->static_fields->TGT_ALP_SPD_RATE,
         (float)ScrollArrowComponent_TypeInfo->static_fields->ALPHA_FADE_FRAME_NUM,
         0LL);
  v5 = (AlphaTransitionCalculator_o *)sub_1B887FC(AlphaTransitionCalculator_TypeInfo);
  AlphaTransitionCalculator___ctor(v5, v3, v4, v6);
  return v5;
}


ScrollArrowComponent_o *__fastcall ScrollArrowComponent__FetchActiveArrow(
        ScrollArrowComponent_o *this,
        const MethodInfo *method)
{
  ScrollArrowComponent_c *v3; // x0
  System_Collections_Generic_List_object__o *arrowList; // x0
  Il2CppObject *current; // x20
  _BOOL8 v6; // x0
  __int64 v7; // x1
  System_Collections_Generic_List_Enumerator_object__o v9; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v10; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4A57F27 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ScrollArrowComponent__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ScrollArrowComponent__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ScrollArrowComponent__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ScrollArrowComponent__GetEnumerator__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&ScrollArrowComponent_TypeInfo);
    byte_4A57F27 = 1;
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
    sub_1B8880C(0LL, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v9,
    arrowList,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_ScrollArrowComponent__GetEnumerator__);
  v10 = v9;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v10,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_ScrollArrowComponent__MoveNext__) )
  {
    current = v10.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v6 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v6 )
    {
      if ( !current )
        sub_1B8880C(v6, v7);
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
    &v10,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_ScrollArrowComponent__Dispose__);
  return (ScrollArrowComponent_o *)current;
}


void __fastcall ScrollArrowComponent__OnDestroy(ScrollArrowComponent_o *this, const MethodInfo *method)
{
  ScrollArrowComponent_c *v3; // x0
  System_Collections_Generic_List_object__o *arrowList; // x0

  if ( (byte_4A57F24 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_ScrollArrowComponent__Remove__);
    sub_1B885B0(&ScrollArrowComponent_TypeInfo);
    byte_4A57F24 = 1;
  }
  v3 = ScrollArrowComponent_TypeInfo;
  if ( !ScrollArrowComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScrollArrowComponent_TypeInfo);
    v3 = ScrollArrowComponent_TypeInfo;
  }
  arrowList = (System_Collections_Generic_List_object__o *)v3->static_fields->_arrowList;
  if ( !arrowList )
    sub_1B8880C(0LL, method);
  System_Collections_Generic_List_object___Remove(
    arrowList,
    (Il2CppObject *)this,
    (const MethodInfo_34FED5C *)Method_System_Collections_Generic_List_ScrollArrowComponent__Remove__);
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
  AlphaTransitionCalculator_o *WidgetAlphaCalculator; // x0
  const MethodInfo *v8; // x1
  const MethodInfo *v9; // x1
  struct UIWidget_o *mWidget; // x20
  const MethodInfo *v11; // x1

  if ( (byte_4A57F26 & 1) == 0 )
  {
    sub_1B885B0(&Method_TransitionCalculator_float__ToEnd__);
    sub_1B885B0(&Method_TransitionCalculator_float__get_Current__);
    byte_4A57F26 = 1;
  }
  WidgetAlphaCalculator = ScrollArrowComponent__get_WidgetAlphaCalculator(this, (const MethodInfo *)is_disp);
  if ( !WidgetAlphaCalculator )
    goto LABEL_12;
  if ( is_disp )
  {
    AlphaTransitionCalculator__SwitchFadeIn(WidgetAlphaCalculator, v8);
    if ( !is_force )
      return;
    goto LABEL_8;
  }
  AlphaTransitionCalculator__SwitchFadeOut(WidgetAlphaCalculator, v8);
  if ( is_force )
  {
LABEL_8:
    WidgetAlphaCalculator = ScrollArrowComponent__get_WidgetAlphaCalculator(this, v9);
    if ( WidgetAlphaCalculator )
    {
      TransitionCalculator_float___ToEnd(
        (TransitionCalculator_float__o *)WidgetAlphaCalculator,
        (const MethodInfo_37B9E7C *)Method_TransitionCalculator_float__ToEnd__);
      mWidget = this->fields.mWidget;
      WidgetAlphaCalculator = ScrollArrowComponent__get_WidgetAlphaCalculator(this, v11);
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
    sub_1B8880C(WidgetAlphaCalculator, v8);
  }
}


void __fastcall ScrollArrowComponent__SyncAnimation(ScrollArrowComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *ActiveArrow; // x20
  void *gameObject; // x0
  __int64 v5; // x1
  UITweener_o *v6; // x19

  if ( (byte_4A57F28 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_Component_GetComponent_TweenPosition___);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A57F28 = 1;
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
                         (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_TweenPosition___),
          !ActiveArrow)
      || (v6 = (UITweener_o *)gameObject,
          (gameObject = UnityEngine_Component__GetComponent_object_(
                          ActiveArrow,
                          (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_TweenPosition___)) == 0LL)
      || !v6 )
    {
      sub_1B8880C(gameObject, v5);
    }
    UITweener__set_tweenFactor(v6, *((float *)gameObject + 28), 0LL);
  }
}


void __fastcall ScrollArrowComponent__Update(ScrollArrowComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *mWidget; // x20
  const MethodInfo *v4; // x1
  struct UIWidget_o *v5; // x20
  TransitionCalculator_float__o *WidgetAlphaCalculator; // x0
  __int64 v7; // x1
  float v8; // s0

  if ( (byte_4A57F25 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_TransitionCalculator_float__Update__);
    byte_4A57F25 = 1;
  }
  mWidget = (UnityEngine_Object_o *)this->fields.mWidget;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mWidget, 0LL, 0LL) )
  {
    v5 = this->fields.mWidget;
    WidgetAlphaCalculator = (TransitionCalculator_float__o *)ScrollArrowComponent__get_WidgetAlphaCalculator(this, v4);
    if ( !WidgetAlphaCalculator
      || (v8 = TransitionCalculator_float___Update(
                 WidgetAlphaCalculator,
                 (const MethodInfo_37B9DC0 *)Method_TransitionCalculator_float__Update__),
          !v5) )
    {
      sub_1B8880C(WidgetAlphaCalculator, v7);
    }
    ((void (__fastcall *)(struct UIWidget_o *, Il2CppMethodPointer, float))v5->klass->vtable._8_set_alpha.method)(
      v5,
      v5->klass->vtable._9_CalculateFinalAlpha.methodPtr,
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
    sub_1B88554(p_widgetAlphaCalculator, (int32_t)WidgetAlphaCalculator, v5, v6);
    if ( !p_widgetAlphaCalculator->klass )
      sub_1B8880C(0LL, v7);
    AlphaTransitionCalculator__MakeFadeInFinished((AlphaTransitionCalculator_o *)p_widgetAlphaCalculator->klass, v7);
    return (AlphaTransitionCalculator_o *)p_widgetAlphaCalculator->klass;
  }
  return result;
}