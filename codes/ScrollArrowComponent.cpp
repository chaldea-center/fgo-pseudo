void __fastcall ScrollArrowComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  struct ScrollArrowComponent_StaticFields *static_fields; // x8
  System_Collections_Generic_List_object__o *v9; // x19
  struct ScrollArrowComponent_StaticFields *v10; // x0
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7

  if ( (byte_4B12EDD & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ScrollArrowComponent___ctor__, v1, v2);
    sub_1BCA7E0(&System_Collections_Generic_List_ScrollArrowComponent__TypeInfo, v4, v5);
    sub_1BCA7E0(&ScrollArrowComponent_TypeInfo, v6, v7);
    byte_4B12EDD = 1;
  }
  static_fields = ScrollArrowComponent_TypeInfo->static_fields;
  static_fields->MOVE_RANGE = 20;
  *(_QWORD *)&static_fields->MOVE_TIME = 0x3E80000040200000LL;
  static_fields->ALPHA_FADE_FRAME_NUM = 16;
  v9 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                      System_Collections_Generic_List_ScrollArrowComponent__TypeInfo,
                                                      v1,
                                                      v2,
                                                      v3);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_ScrollArrowComponent___ctor__);
  v10 = ScrollArrowComponent_TypeInfo->static_fields;
  v10->_arrowList = (struct System_Collections_Generic_List_ScrollArrowComponent__o *)v9;
  sub_1BCA784((PartyOrganizationUtility_o *)&v10->_arrowList, (int64_t)v9, v11, v12, v13, v14, v15, v16);
}


void __fastcall ScrollArrowComponent___ctor(ScrollArrowComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  ScrollArrowComponent_c *v4; // x0
  struct ScrollArrowComponent_StaticFields *static_fields; // x8

  if ( (byte_4B12EDC & 1) == 0 )
  {
    sub_1BCA7E0(&ScrollArrowComponent_TypeInfo, method, v2);
    byte_4B12EDC = 1;
  }
  v4 = ScrollArrowComponent_TypeInfo;
  if ( !ScrollArrowComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScrollArrowComponent_TypeInfo, method);
    v4 = ScrollArrowComponent_TypeInfo;
  }
  static_fields = v4->static_fields;
  this->fields.moveRange = static_fields->MOVE_RANGE;
  this->fields.moveTime = static_fields->MOVE_TIME;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall ScrollArrowComponent__Awake(ScrollArrowComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  UnityEngine_Object_o *mWidget; // x21
  __int64 v15; // x1
  __int64 gameObject; // x0
  Il2CppObject *Component_object; // x0
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  ScrollArrowComponent_c *v24; // x0
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  ScrollArrowComponent_c *v31; // x0
  __int64 v32; // x8
  _QWORD *v33; // x9
  __int64 v34; // x10
  __int64 v35; // x8
  __int64 v36; // x1
  Il2CppObject *v37; // x20
  __int64 v38; // x2
  struct UnityEngine_Vector3_StaticFields *static_fields; // x9
  float y; // s9
  float x; // s10
  float z; // s8
  UnityEngine_GameObject_o *v43; // x0
  const MethodInfo *v44; // x1
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B12ED5 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_TweenPosition___, method, v2);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_UIWidget___, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ScrollArrowComponent__Add__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ScrollArrowComponent__Contains__, v8, v9);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v10, v11);
    sub_1BCA7E0(&ScrollArrowComponent_TypeInfo, v12, v13);
    byte_4B12ED5 = 1;
  }
  mWidget = (UnityEngine_Object_o *)this->fields.mWidget;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Equality(mWidget, 0LL, 0LL) )
  {
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_33;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)gameObject,
                         (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    this->fields.mWidget = (struct UIWidget_o *)Component_object;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.mWidget,
      (int64_t)Component_object,
      v18,
      v19,
      v20,
      v21,
      v22,
      v23);
  }
  v24 = ScrollArrowComponent_TypeInfo;
  if ( !ScrollArrowComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScrollArrowComponent_TypeInfo, v15);
    v24 = ScrollArrowComponent_TypeInfo;
  }
  gameObject = (__int64)v24->static_fields->_arrowList;
  if ( !gameObject )
LABEL_33:
    sub_1BCAA3C(gameObject, v15);
  if ( !System_Collections_Generic_List_object___Contains(
          (System_Collections_Generic_List_object__o *)gameObject,
          (Il2CppObject *)this,
          (const MethodInfo_35A1FEC *)Method_System_Collections_Generic_List_ScrollArrowComponent__Contains__) )
  {
    v31 = ScrollArrowComponent_TypeInfo;
    if ( !ScrollArrowComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScrollArrowComponent_TypeInfo, v15);
      v31 = ScrollArrowComponent_TypeInfo;
    }
    gameObject = (__int64)v31->static_fields->_arrowList;
    if ( !gameObject )
      goto LABEL_33;
    v32 = *(_QWORD *)(gameObject + 16);
    v33 = Method_System_Collections_Generic_List_ScrollArrowComponent__Add__;
    ++*(_DWORD *)(gameObject + 28);
    if ( !v32 )
      goto LABEL_33;
    v34 = *(int *)(gameObject + 24);
    if ( (unsigned int)v34 >= *(_DWORD *)(v32 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)gameObject,
        (Il2CppObject *)this,
        *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
    }
    else
    {
      v35 = v32 + 8 * v34;
      *(_DWORD *)(gameObject + 24) = v34 + 1;
      *(_QWORD *)(v35 + 32) = this;
      sub_1BCA784((PartyOrganizationUtility_o *)(v35 + 32), (int64_t)this, v25, v26, v27, v28, v29, v30);
    }
  }
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_33;
  v37 = UnityEngine_GameObject__GetComponent_object_(
          (UnityEngine_GameObject_o *)gameObject,
          (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v36);
  gameObject = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v37, 0LL, 0LL);
  if ( (gameObject & 1) != 0 )
  {
    if ( !byte_4B109C1 )
    {
      gameObject = sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v15, v38);
      byte_4B109C1 = 1;
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
    if ( v37 )
    {
      *(float *)&v37[3].monitor = this->fields.moveTime;
      v43 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      LocalPosition = GameObjectExtensions__GetLocalPosition(v43, v44);
      *(UnityEngine_Vector3_o *)&v37[8].klass = LocalPosition;
      *((float *)&v37[8].monitor + 1) = x + LocalPosition.fields.x;
      *(float *)&v37[9].klass = y + LocalPosition.fields.y;
      *((float *)&v37[9].klass + 1) = z + LocalPosition.fields.z;
      return;
    }
    goto LABEL_33;
  }
}


AlphaTransitionCalculator_o *__fastcall ScrollArrowComponent__CreateWidgetAlphaCalculator(
        ScrollArrowComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  ScrollArrowComponent_c *v5; // x0
  float v6; // s8
  System_Func_float__float__float__float__o *v7; // x19
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x3
  AlphaTransitionCalculator_o *v11; // x20
  const MethodInfo *v12; // x2

  if ( (byte_4B12EDB & 1) == 0 )
  {
    sub_1BCA7E0(&AlphaTransitionCalculator_TypeInfo, method, v2);
    sub_1BCA7E0(&ScrollArrowComponent_TypeInfo, v3, v4);
    byte_4B12EDB = 1;
  }
  v5 = ScrollArrowComponent_TypeInfo;
  if ( !ScrollArrowComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScrollArrowComponent_TypeInfo, method);
    v5 = ScrollArrowComponent_TypeInfo;
  }
  v6 = ChangedFPSUtil__CovertFrameNumToSecond(v5->static_fields->ALPHA_FADE_FRAME_NUM, 0LL);
  v7 = ExtraEasing__AsymptoticSeriesFloat(
         ScrollArrowComponent_TypeInfo->static_fields->TGT_ALP_SPD_RATE,
         (float)ScrollArrowComponent_TypeInfo->static_fields->ALPHA_FADE_FRAME_NUM,
         0LL);
  v11 = (AlphaTransitionCalculator_o *)sub_1BCAA2C(AlphaTransitionCalculator_TypeInfo, v8, v9, v10);
  AlphaTransitionCalculator___ctor(v11, v6, v7, v12);
  return v11;
}


ScrollArrowComponent_o *__fastcall ScrollArrowComponent__FetchActiveArrow(
        ScrollArrowComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  ScrollArrowComponent_c *v14; // x0
  System_Collections_Generic_List_object__o *arrowList; // x0
  __int64 v16; // x1
  Il2CppObject *current; // x20
  _BOOL8 v18; // x0
  __int64 v19; // x1
  __int64 v20; // x1
  System_Collections_Generic_List_Enumerator_object__o v22; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v23; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4B12ED9 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ScrollArrowComponent__Dispose__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ScrollArrowComponent__MoveNext__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ScrollArrowComponent__get_Current__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ScrollArrowComponent__GetEnumerator__, v8, v9);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v10, v11);
    sub_1BCA7E0(&ScrollArrowComponent_TypeInfo, v12, v13);
    byte_4B12ED9 = 1;
  }
  v14 = ScrollArrowComponent_TypeInfo;
  memset(&v23, 0, sizeof(v23));
  if ( !ScrollArrowComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScrollArrowComponent_TypeInfo, method);
    v14 = ScrollArrowComponent_TypeInfo;
  }
  arrowList = (System_Collections_Generic_List_object__o *)v14->static_fields->_arrowList;
  if ( !arrowList )
    sub_1BCAA3C(0LL, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v22,
    arrowList,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_ScrollArrowComponent__GetEnumerator__);
  v23 = v22;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v23,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_ScrollArrowComponent__MoveNext__) )
  {
    current = v23.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v16);
    v18 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v18 )
    {
      if ( !current )
        sub_1BCAA3C(v18, v19);
      if ( UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)current, 0LL) )
      {
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v20);
        if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, (UnityEngine_Object_o *)this, 0LL) )
          goto LABEL_18;
      }
    }
  }
  current = 0LL;
LABEL_18:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v23,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_ScrollArrowComponent__Dispose__);
  return (ScrollArrowComponent_o *)current;
}


void __fastcall ScrollArrowComponent__OnDestroy(ScrollArrowComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  ScrollArrowComponent_c *v6; // x0
  System_Collections_Generic_List_object__o *arrowList; // x0

  if ( (byte_4B12ED6 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ScrollArrowComponent__Remove__, method, v2);
    sub_1BCA7E0(&ScrollArrowComponent_TypeInfo, v4, v5);
    byte_4B12ED6 = 1;
  }
  v6 = ScrollArrowComponent_TypeInfo;
  if ( !ScrollArrowComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScrollArrowComponent_TypeInfo, method);
    v6 = ScrollArrowComponent_TypeInfo;
  }
  arrowList = (System_Collections_Generic_List_object__o *)v6->static_fields->_arrowList;
  if ( !arrowList )
    sub_1BCAA3C(0LL, method);
  System_Collections_Generic_List_object___Remove(
    arrowList,
    (Il2CppObject *)this,
    (const MethodInfo_35A3184 *)Method_System_Collections_Generic_List_ScrollArrowComponent__Remove__);
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
  __int64 v8; // x2
  AlphaTransitionCalculator_o *WidgetAlphaCalculator; // x0
  const MethodInfo *v10; // x1
  const MethodInfo *v11; // x1
  struct UIWidget_o *mWidget; // x20
  const MethodInfo *v13; // x1

  if ( (byte_4B12ED8 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_TransitionCalculator_float__ToEnd__, is_disp, is_force);
    sub_1BCA7E0(&Method_TransitionCalculator_float__get_Current__, v7, v8);
    byte_4B12ED8 = 1;
  }
  WidgetAlphaCalculator = ScrollArrowComponent__get_WidgetAlphaCalculator(this, (const MethodInfo *)is_disp);
  if ( !WidgetAlphaCalculator )
    goto LABEL_12;
  if ( is_disp )
  {
    AlphaTransitionCalculator__SwitchFadeIn(WidgetAlphaCalculator, v10);
    if ( !is_force )
      return;
    goto LABEL_8;
  }
  AlphaTransitionCalculator__SwitchFadeOut(WidgetAlphaCalculator, v10);
  if ( is_force )
  {
LABEL_8:
    WidgetAlphaCalculator = ScrollArrowComponent__get_WidgetAlphaCalculator(this, v11);
    if ( WidgetAlphaCalculator )
    {
      TransitionCalculator_float___ToEnd(
        (TransitionCalculator_float__o *)WidgetAlphaCalculator,
        (const MethodInfo_386044C *)Method_TransitionCalculator_float__ToEnd__);
      mWidget = this->fields.mWidget;
      WidgetAlphaCalculator = ScrollArrowComponent__get_WidgetAlphaCalculator(this, v13);
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
    sub_1BCAA3C(WidgetAlphaCalculator, v10);
  }
}


void __fastcall ScrollArrowComponent__SyncAnimation(ScrollArrowComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  UnityEngine_Component_o *ActiveArrow; // x20
  void *gameObject; // x0
  __int64 v11; // x1
  UITweener_o *v12; // x19

  if ( (byte_4B12EDA & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_TweenPosition___, method, v2);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_TweenPosition___, v4, v5);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v6, v7);
    byte_4B12EDA = 1;
  }
  ActiveArrow = (UnityEngine_Component_o *)ScrollArrowComponent__FetchActiveArrow(this, method);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)ActiveArrow, 0LL, 0LL) )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject
      || (gameObject = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)gameObject,
                         (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_TweenPosition___),
          !ActiveArrow)
      || (v12 = (UITweener_o *)gameObject,
          (gameObject = UnityEngine_Component__GetComponent_object_(
                          ActiveArrow,
                          (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_TweenPosition___)) == 0LL)
      || !v12 )
    {
      sub_1BCAA3C(gameObject, v11);
    }
    UITweener__set_tweenFactor(v12, *((float *)gameObject + 28), 0LL);
  }
}


void __fastcall ScrollArrowComponent__Update(ScrollArrowComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  UnityEngine_Object_o *mWidget; // x20
  const MethodInfo *v7; // x1
  struct UIWidget_o *v8; // x20
  TransitionCalculator_float__o *WidgetAlphaCalculator; // x0
  __int64 v10; // x1
  float v11; // s0

  if ( (byte_4B12ED7 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_TransitionCalculator_float__Update__, v4, v5);
    byte_4B12ED7 = 1;
  }
  mWidget = (UnityEngine_Object_o *)this->fields.mWidget;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(mWidget, 0LL, 0LL) )
  {
    v8 = this->fields.mWidget;
    WidgetAlphaCalculator = (TransitionCalculator_float__o *)ScrollArrowComponent__get_WidgetAlphaCalculator(this, v7);
    if ( !WidgetAlphaCalculator
      || (v11 = TransitionCalculator_float___Update(
                  WidgetAlphaCalculator,
                  (const MethodInfo_3860390 *)Method_TransitionCalculator_float__Update__),
          !v8) )
    {
      sub_1BCAA3C(WidgetAlphaCalculator, v10);
    }
    ((void (__fastcall *)(struct UIWidget_o *, Il2CppMethodPointer, float))v8->klass->vtable._8_set_alpha.method)(
      v8,
      v8->klass->vtable._9_CalculateFinalAlpha.methodPtr,
      v11);
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
    sub_1BCA784(p_widgetAlphaCalculator, (int64_t)WidgetAlphaCalculator, v5, v6, v7, v8, v9, v10);
    if ( !p_widgetAlphaCalculator->klass )
      sub_1BCAA3C(0LL, v11);
    AlphaTransitionCalculator__MakeFadeInFinished((AlphaTransitionCalculator_o *)p_widgetAlphaCalculator->klass, v11);
    return (AlphaTransitionCalculator_o *)p_widgetAlphaCalculator->klass;
  }
  return result;
}