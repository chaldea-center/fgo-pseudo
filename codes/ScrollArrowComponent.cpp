void __fastcall ScrollArrowComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  struct ScrollArrowComponent_StaticFields *static_fields; // x8
  System_Collections_Generic_List_object__o *v5; // x19
  struct ScrollArrowComponent_StaticFields *v6; // x0
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7

  if ( (byte_4BC4720 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ScrollArrowComponent___ctor__, v1);
    sub_1C1ABD4(&System_Collections_Generic_List_ScrollArrowComponent__TypeInfo, v2);
    sub_1C1ABD4(&ScrollArrowComponent_TypeInfo, v3);
    byte_4BC4720 = 1;
  }
  static_fields = ScrollArrowComponent_TypeInfo->static_fields;
  static_fields->MOVE_RANGE = 20;
  *(_QWORD *)&static_fields->MOVE_TIME = 0x3E80000040200000LL;
  static_fields->ALPHA_FADE_FRAME_NUM = 16;
  v5 = (System_Collections_Generic_List_object__o *)sub_1C1AE20(System_Collections_Generic_List_ScrollArrowComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_363C05C *)Method_System_Collections_Generic_List_ScrollArrowComponent___ctor__);
  v6 = ScrollArrowComponent_TypeInfo->static_fields;
  v6->_arrowList = (struct System_Collections_Generic_List_ScrollArrowComponent__o *)v5;
  sub_1C1AB78((PartyOrganizationUtility_o *)&v6->_arrowList, (int64_t)v5, v7, v8, v9, v10, v11, v12);
}


void __fastcall ScrollArrowComponent___ctor(ScrollArrowComponent_o *this, const MethodInfo *method)
{
  ScrollArrowComponent_c *v3; // x0
  struct ScrollArrowComponent_StaticFields *static_fields; // x8

  if ( (byte_4BC471F & 1) == 0 )
  {
    sub_1C1ABD4(&ScrollArrowComponent_TypeInfo, method);
    byte_4BC471F = 1;
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
  __int64 v9; // x1
  __int64 gameObject; // x0
  Il2CppObject *Component_object; // x0
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  ScrollArrowComponent_c *v18; // x0
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  ScrollArrowComponent_c *v25; // x0
  __int64 v26; // x8
  _QWORD *v27; // x9
  __int64 v28; // x10
  __int64 v29; // x8
  Il2CppObject *v30; // x20
  struct UnityEngine_Vector3_StaticFields *static_fields; // x9
  float y; // s9
  float x; // s10
  float z; // s8
  UnityEngine_GameObject_o *v35; // x0
  const MethodInfo *v36; // x1
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4BC4718 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_UnityEngine_GameObject_GetComponent_TweenPosition___, method);
    sub_1C1ABD4(&Method_UnityEngine_GameObject_GetComponent_UIWidget___, v3);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ScrollArrowComponent__Add__, v4);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ScrollArrowComponent__Contains__, v5);
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, v6);
    sub_1C1ABD4(&ScrollArrowComponent_TypeInfo, v7);
    byte_4BC4718 = 1;
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
                         (const MethodInfo_2FEFBC0 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    this->fields.mWidget = (struct UIWidget_o *)Component_object;
    sub_1C1AB78(
      (PartyOrganizationUtility_o *)&this->fields.mWidget,
      (int64_t)Component_object,
      v12,
      v13,
      v14,
      v15,
      v16,
      v17);
  }
  v18 = ScrollArrowComponent_TypeInfo;
  if ( !ScrollArrowComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScrollArrowComponent_TypeInfo);
    v18 = ScrollArrowComponent_TypeInfo;
  }
  gameObject = (__int64)v18->static_fields->_arrowList;
  if ( !gameObject )
LABEL_33:
    sub_1C1AE30(gameObject, v9);
  if ( !System_Collections_Generic_List_object___Contains(
          (System_Collections_Generic_List_object__o *)gameObject,
          (Il2CppObject *)this,
          (const MethodInfo_363CC20 *)Method_System_Collections_Generic_List_ScrollArrowComponent__Contains__) )
  {
    v25 = ScrollArrowComponent_TypeInfo;
    if ( !ScrollArrowComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScrollArrowComponent_TypeInfo);
      v25 = ScrollArrowComponent_TypeInfo;
    }
    gameObject = (__int64)v25->static_fields->_arrowList;
    if ( !gameObject )
      goto LABEL_33;
    v26 = *(_QWORD *)(gameObject + 16);
    v27 = Method_System_Collections_Generic_List_ScrollArrowComponent__Add__;
    ++*(_DWORD *)(gameObject + 28);
    if ( !v26 )
      goto LABEL_33;
    v28 = *(int *)(gameObject + 24);
    if ( (unsigned int)v28 >= *(_DWORD *)(v26 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)gameObject,
        (Il2CppObject *)this,
        *(const MethodInfo_363C890 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
    }
    else
    {
      v29 = v26 + 8 * v28;
      *(_DWORD *)(gameObject + 24) = v28 + 1;
      *(_QWORD *)(v29 + 32) = this;
      sub_1C1AB78((PartyOrganizationUtility_o *)(v29 + 32), (int64_t)this, v19, v20, v21, v22, v23, v24);
    }
  }
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_33;
  v30 = UnityEngine_GameObject__GetComponent_object_(
          (UnityEngine_GameObject_o *)gameObject,
          (const MethodInfo_2FEFBC0 *)Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v30, 0LL, 0LL);
  if ( (gameObject & 1) != 0 )
  {
    if ( !byte_4BC2141 )
    {
      gameObject = sub_1C1ABD4(&UnityEngine_Vector3_TypeInfo, v9);
      byte_4BC2141 = 1;
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
    if ( v30 )
    {
      *(float *)&v30[3].monitor = this->fields.moveTime;
      v35 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      LocalPosition = GameObjectExtensions__GetLocalPosition(v35, v36);
      *(UnityEngine_Vector3_o *)&v30[8].klass = LocalPosition;
      *((float *)&v30[8].monitor + 1) = x + LocalPosition.fields.x;
      *(float *)&v30[9].klass = y + LocalPosition.fields.y;
      *((float *)&v30[9].klass + 1) = z + LocalPosition.fields.z;
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
  AlphaTransitionCalculator_o *v6; // x20
  const MethodInfo *v7; // x2

  if ( (byte_4BC471E & 1) == 0 )
  {
    sub_1C1ABD4(&AlphaTransitionCalculator_TypeInfo, method);
    sub_1C1ABD4(&ScrollArrowComponent_TypeInfo, v2);
    byte_4BC471E = 1;
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
  v6 = (AlphaTransitionCalculator_o *)sub_1C1AE20(AlphaTransitionCalculator_TypeInfo);
  AlphaTransitionCalculator___ctor(v6, v4, v5, v7);
  return v6;
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
  __int64 v12; // x1
  System_Collections_Generic_List_Enumerator_object__o v14; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v15; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4BC471C & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_ScrollArrowComponent__Dispose__, method);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_ScrollArrowComponent__MoveNext__, v3);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_ScrollArrowComponent__get_Current__, v4);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ScrollArrowComponent__GetEnumerator__, v5);
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, v6);
    sub_1C1ABD4(&ScrollArrowComponent_TypeInfo, v7);
    byte_4BC471C = 1;
  }
  v8 = ScrollArrowComponent_TypeInfo;
  memset(&v15, 0, sizeof(v15));
  if ( !ScrollArrowComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScrollArrowComponent_TypeInfo);
    v8 = ScrollArrowComponent_TypeInfo;
  }
  arrowList = (System_Collections_Generic_List_object__o *)v8->static_fields->_arrowList;
  if ( !arrowList )
    sub_1C1AE30(0LL, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v14,
    arrowList,
    (const MethodInfo_363D388 *)Method_System_Collections_Generic_List_ScrollArrowComponent__GetEnumerator__);
  v15 = v14;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v15,
            (const MethodInfo_33CE4F8 *)Method_System_Collections_Generic_List_Enumerator_ScrollArrowComponent__MoveNext__) )
  {
    current = v15.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v11 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v11 )
    {
      if ( !current )
        sub_1C1AE30(v11, v12);
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
    &v15,
    (const MethodInfo_33CE4F4 *)Method_System_Collections_Generic_List_Enumerator_ScrollArrowComponent__Dispose__);
  return (ScrollArrowComponent_o *)current;
}


void __fastcall ScrollArrowComponent__OnDestroy(ScrollArrowComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  ScrollArrowComponent_c *v4; // x0
  System_Collections_Generic_List_object__o *arrowList; // x0

  if ( (byte_4BC4719 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ScrollArrowComponent__Remove__, method);
    sub_1C1ABD4(&ScrollArrowComponent_TypeInfo, v3);
    byte_4BC4719 = 1;
  }
  v4 = ScrollArrowComponent_TypeInfo;
  if ( !ScrollArrowComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScrollArrowComponent_TypeInfo);
    v4 = ScrollArrowComponent_TypeInfo;
  }
  arrowList = (System_Collections_Generic_List_object__o *)v4->static_fields->_arrowList;
  if ( !arrowList )
    sub_1C1AE30(0LL, method);
  System_Collections_Generic_List_object___Remove(
    arrowList,
    (Il2CppObject *)this,
    (const MethodInfo_363DDB8 *)Method_System_Collections_Generic_List_ScrollArrowComponent__Remove__);
}


// attributes: thunk
void __fastcall ScrollArrowComponent__OnEnable(ScrollArrowComponent_o *this, const MethodInfo *method)
{
  ScrollArrowComponent__SyncAnimation(this, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ScrollArrowComponent__SetDisp(
        ScrollArrowComponent_o *this,
        bool isDisp,
        bool isInstant,
        const MethodInfo *method)
{
  __int64 v7; // x1
  AlphaTransitionCalculator_o *WidgetAlphaCalculator; // x0
  const MethodInfo *v9; // x1
  const MethodInfo *v10; // x1
  struct UIWidget_o *mWidget; // x20
  const MethodInfo *v12; // x1

  if ( (byte_4BC471B & 1) == 0 )
  {
    sub_1C1ABD4(&Method_TransitionCalculator_float__ToEnd__, isDisp);
    sub_1C1ABD4(&Method_TransitionCalculator_float__get_Current__, v7);
    byte_4BC471B = 1;
  }
  WidgetAlphaCalculator = ScrollArrowComponent__get_WidgetAlphaCalculator(this, (const MethodInfo *)isDisp);
  if ( !WidgetAlphaCalculator )
    goto LABEL_12;
  if ( isDisp )
  {
    AlphaTransitionCalculator__SwitchFadeIn(WidgetAlphaCalculator, v9);
    if ( !isInstant )
      return;
    goto LABEL_8;
  }
  AlphaTransitionCalculator__SwitchFadeOut(WidgetAlphaCalculator, v9);
  if ( isInstant )
  {
LABEL_8:
    WidgetAlphaCalculator = ScrollArrowComponent__get_WidgetAlphaCalculator(this, v10);
    if ( WidgetAlphaCalculator )
    {
      TransitionCalculator_float___ToEnd(
        (TransitionCalculator_float__o *)WidgetAlphaCalculator,
        (const MethodInfo_38FC964 *)Method_TransitionCalculator_float__ToEnd__);
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
    sub_1C1AE30(WidgetAlphaCalculator, v9);
  }
}


void __fastcall ScrollArrowComponent__SyncAnimation(ScrollArrowComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_Component_o *ActiveArrow; // x20
  void *gameObject; // x0
  __int64 v7; // x1
  UITweener_o *v8; // x19

  if ( (byte_4BC471D & 1) == 0 )
  {
    sub_1C1ABD4(&Method_UnityEngine_Component_GetComponent_TweenPosition___, method);
    sub_1C1ABD4(&Method_UnityEngine_GameObject_GetComponent_TweenPosition___, v3);
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, v4);
    byte_4BC471D = 1;
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
                         (const MethodInfo_2FEFBC0 *)Method_UnityEngine_GameObject_GetComponent_TweenPosition___),
          !ActiveArrow)
      || (v8 = (UITweener_o *)gameObject,
          (gameObject = UnityEngine_Component__GetComponent_object_(
                          ActiveArrow,
                          (const MethodInfo_2F95F34 *)Method_UnityEngine_Component_GetComponent_TweenPosition___)) == 0LL)
      || !v8 )
    {
      sub_1C1AE30(gameObject, v7);
    }
    UITweener__set_tweenFactor(v8, *((float *)gameObject + 28), 0LL);
  }
}


void __fastcall ScrollArrowComponent__Update(ScrollArrowComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *mWidget; // x20
  const MethodInfo *v5; // x1
  struct UIWidget_o *v6; // x20
  TransitionCalculator_float__o *WidgetAlphaCalculator; // x0
  __int64 v8; // x1
  float v9; // s0

  if ( (byte_4BC471A & 1) == 0 )
  {
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, method);
    sub_1C1ABD4(&Method_TransitionCalculator_float__Update__, v3);
    byte_4BC471A = 1;
  }
  mWidget = (UnityEngine_Object_o *)this->fields.mWidget;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mWidget, 0LL, 0LL) )
  {
    v6 = this->fields.mWidget;
    WidgetAlphaCalculator = (TransitionCalculator_float__o *)ScrollArrowComponent__get_WidgetAlphaCalculator(this, v5);
    if ( !WidgetAlphaCalculator
      || (v9 = TransitionCalculator_float___Update(
                 WidgetAlphaCalculator,
                 (const MethodInfo_38FC8A8 *)Method_TransitionCalculator_float__Update__),
          !v6) )
    {
      sub_1C1AE30(WidgetAlphaCalculator, v8);
    }
    ((void (__fastcall *)(struct UIWidget_o *, Il2CppMethodPointer, float))v6->klass->vtable._8_set_alpha.method)(
      v6,
      v6->klass->vtable._9_CalculateFinalAlpha.methodPtr,
      v9);
  }
}


AlphaTransitionCalculator_o *__fastcall ScrollArrowComponent__get_WidgetAlphaCalculator(
        ScrollArrowComponent_o *this,
        const MethodInfo *method)
{
  AlphaTransitionCalculator_o *result; // x0
  PartyOrganizationUtility_o *p_widgetAlphaCalculator; // x19
  AlphaTransitionCalculator_o *WidgetAlphaCalculator; // x0
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7
  const MethodInfo *v11; // x1

  p_widgetAlphaCalculator = (PartyOrganizationUtility_o *)&this->fields.widgetAlphaCalculator;
  result = this->fields.widgetAlphaCalculator;
  if ( !result )
  {
    WidgetAlphaCalculator = ScrollArrowComponent__CreateWidgetAlphaCalculator(0LL, method);
    p_widgetAlphaCalculator->klass = (PartyOrganizationUtility_c *)WidgetAlphaCalculator;
    sub_1C1AB78(p_widgetAlphaCalculator, (int64_t)WidgetAlphaCalculator, v5, v6, v7, v8, v9, v10);
    if ( !p_widgetAlphaCalculator->klass )
      sub_1C1AE30(0LL, v11);
    AlphaTransitionCalculator__MakeFadeInFinished((AlphaTransitionCalculator_o *)p_widgetAlphaCalculator->klass, v11);
    return (AlphaTransitionCalculator_o *)p_widgetAlphaCalculator->klass;
  }
  return result;
}