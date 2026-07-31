void WarBoardInfoPopupBase___cctor(const MethodInfo *method)
{
  if ( (byte_59362A0 & 1) == 0 )
  {
    sub_21FFC50(&WarBoardInfoPopupBase_TypeInfo);
    byte_59362A0 = 1;
  }
  *WarBoardInfoPopupBase_TypeInfo->static_fields = (struct WarBoardInfoPopupBase_StaticFields)vdup_n_s32(0x3E088889u).n64_u64[0];
}


void WarBoardInfoPopupBase___ctor(WarBoardInfoPopupBase_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void WarBoardInfoPopupBase__AddHideCompleteCallback(
        WarBoardInfoPopupBase_o *this,
        System_Action_o *completeCallback,
        const MethodInfo *method)
{
  MissionNaviTransitionBoardItem_o *p_hideCompleteCallback; // x19
  System_Delegate_o *hideCompleteCallback; // t1
  System_Delegate_o *v7; // x0
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  int32_t v14; // w8
  System_Action_c *v15; // x1

  if ( (byte_593629D & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    byte_593629D = 1;
  }
  hideCompleteCallback = (System_Delegate_o *)this->fields.hideCompleteCallback;
  p_hideCompleteCallback = (MissionNaviTransitionBoardItem_o *)&this->fields.hideCompleteCallback;
  v7 = System_Delegate__Combine(hideCompleteCallback, (System_Delegate_o *)completeCallback, 0);
  v14 = (int)v7;
  if ( !v7 )
    goto LABEL_7;
  v15 = System_Action_TypeInfo;
  if ( (System_Action_c *)v7->klass != System_Action_TypeInfo
    || (p_hideCompleteCallback->klass = (MissionNaviTransitionBoardItem_c *)v7, (System_Action_c *)v7->klass != v15) )
  {
    sub_220024C(v7, v15, v8, v9);
LABEL_7:
    p_hideCompleteCallback->klass = 0;
  }
  sub_21FFBF4(p_hideCompleteCallback, v14, v8, v9, v10, v11, v12, v13);
}


void WarBoardInfoPopupBase__CleanPopup(WarBoardInfoPopupBase_o *this, const MethodInfo *method)
{
  ;
}


void WarBoardInfoPopupBase__Hide(WarBoardInfoPopupBase_o *this, const MethodInfo *method)
{
  EventDelegate_Callback_c *v3; // x0
  EventDelegate_Callback_o *v4; // x20

  if ( (byte_593629C & 1) == 0 )
  {
    sub_21FFC50(&EventDelegate_Callback_TypeInfo);
    sub_21FFC50(&Method_WarBoardInfoPopupBase__Hide_b__18_0__);
    byte_593629C = 1;
  }
  v3 = EventDelegate_Callback_TypeInfo;
  this->fields._isHideAnimating_k__BackingField = 1;
  v4 = (EventDelegate_Callback_o *)sub_21FFEBC(v3);
  EventDelegate_Callback___ctor(v4, (Il2CppObject *)this, Method_WarBoardInfoPopupBase__Hide_b__18_0__, 0);
  ((void (__fastcall *)(WarBoardInfoPopupBase_o *, EventDelegate_Callback_o *, const MethodInfo *))this->klass->vtable._6_HideAnimation.methodPtr)(
    this,
    v4,
    this->klass->vtable._6_HideAnimation.method);
}


void WarBoardInfoPopupBase__HideAnimation(
        WarBoardInfoPopupBase_o *this,
        EventDelegate_Callback_o *finishCallback,
        const MethodInfo *method)
{
  WarBoardInfoPopupBase_c *v5; // x0
  UnityEngine_GameObject_o *mainView; // x20
  float POPUP_HIDE_ANIM_DURATION; // s8
  TweenScale_o *v8; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  System_Collections_Generic_List_EventDelegate__o *onFinished; // x20

  if ( (byte_593629F & 1) == 0 )
  {
    sub_21FFC50(&EventDelegate_TypeInfo);
    sub_21FFC50(&WarBoardInfoPopupBase_TypeInfo);
    byte_593629F = 1;
  }
  v5 = WarBoardInfoPopupBase_TypeInfo;
  mainView = this->fields.mainView;
  if ( !*(&WarBoardInfoPopupBase_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(WarBoardInfoPopupBase_TypeInfo, finishCallback, method);
    v5 = WarBoardInfoPopupBase_TypeInfo;
  }
  POPUP_HIDE_ANIM_DURATION = v5->static_fields->POPUP_HIDE_ANIM_DURATION;
  if ( !byte_5931940 )
  {
    sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
    byte_5931940 = 1;
  }
  v8 = TweenScale__Begin(mainView, POPUP_HIDE_ANIM_DURATION, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
  if ( !v8 )
    sub_21FFECC(0, v9);
  onFinished = v8->fields.onFinished;
  v8->fields.method = 6;
  if ( !*(&EventDelegate_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo, v9, v10);
  EventDelegate__Set_56117672(onFinished, finishCallback, 0);
}


void WarBoardInfoPopupBase__Initialize(WarBoardInfoPopupBase_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  UnityEngine_Transform_o *v5; // x20
  struct System_Action_o **p_hideCompleteCallback; // x19
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_7;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  gameObject = this->fields.mainView;
  if ( !gameObject )
    goto LABEL_7;
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(gameObject, 0);
  v5 = (UnityEngine_Transform_o *)gameObject;
  if ( !byte_5931940 )
  {
    gameObject = (UnityEngine_GameObject_o *)sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
    byte_5931940 = 1;
  }
  if ( !v5 )
LABEL_7:
    sub_21FFECC(gameObject, v4);
  UnityEngine_Transform__set_localScale(v5, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
  this->fields.hideCompleteCallback = 0;
  p_hideCompleteCallback = &this->fields.hideCompleteCallback;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)p_hideCompleteCallback, 0, v7, v8, v9, v10, v11, v12);
  *((_WORD *)p_hideCompleteCallback + 4) = 0;
}


void WarBoardInfoPopupBase__OnAfterHide(WarBoardInfoPopupBase_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  struct System_Action_o *v5; // x8
  MissionNaviTransitionBoardItem_o *p_hideCompleteCallback; // x19
  struct System_Action_o *hideCompleteCallback; // t1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_21FFECC(0, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  ((void (__fastcall *)(WarBoardInfoPopupBase_o *, const MethodInfo *))this->klass->vtable._9_CleanPopup.methodPtr)(
    this,
    this->klass->vtable._9_CleanPopup.method);
  hideCompleteCallback = this->fields.hideCompleteCallback;
  p_hideCompleteCallback = (MissionNaviTransitionBoardItem_o *)&this->fields.hideCompleteCallback;
  v5 = hideCompleteCallback;
  if ( hideCompleteCallback )
  {
    ((void (__fastcall *)(intptr_t, intptr_t))v5->fields.invoke_impl)(v5->fields.method_code, v5->fields.method);
    p_hideCompleteCallback->klass = 0;
    sub_21FFBF4(p_hideCompleteCallback, 0, v8, v9, v10, v11, v12, v13);
  }
}


void WarBoardInfoPopupBase__OnBeforeShow(WarBoardInfoPopupBase_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v3; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_21FFECC(0, v3);
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
}


void WarBoardInfoPopupBase__Show(WarBoardInfoPopupBase_o *this, const MethodInfo *method)
{
  EventDelegate_Callback_c *v3; // x0
  EventDelegate_Callback_o *v4; // x20

  if ( (byte_593629B & 1) == 0 )
  {
    sub_21FFC50(&EventDelegate_Callback_TypeInfo);
    sub_21FFC50(&Method_WarBoardInfoPopupBase__Show_b__17_0__);
    byte_593629B = 1;
  }
  ((void (__fastcall *)(WarBoardInfoPopupBase_o *, const MethodInfo *))this->klass->vtable._7_OnBeforeShow.methodPtr)(
    this,
    this->klass->vtable._7_OnBeforeShow.method);
  v3 = EventDelegate_Callback_TypeInfo;
  this->fields._isShowAnimating_k__BackingField = 1;
  v4 = (EventDelegate_Callback_o *)sub_21FFEBC(v3);
  EventDelegate_Callback___ctor(v4, (Il2CppObject *)this, Method_WarBoardInfoPopupBase__Show_b__17_0__, 0);
  ((void (__fastcall *)(WarBoardInfoPopupBase_o *, EventDelegate_Callback_o *, const MethodInfo *))this->klass->vtable._5_ShowAnimation.methodPtr)(
    this,
    v4,
    this->klass->vtable._5_ShowAnimation.method);
}


void WarBoardInfoPopupBase__ShowAnimation(
        WarBoardInfoPopupBase_o *this,
        EventDelegate_Callback_o *finishCallback,
        const MethodInfo *method)
{
  WarBoardInfoPopupBase_c *v5; // x0
  UnityEngine_GameObject_o *mainView; // x20
  float POPUP_SHOW_ANIM_DURATION; // s8
  TweenScale_o *v8; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  System_Collections_Generic_List_EventDelegate__o *onFinished; // x20

  if ( (byte_593629E & 1) == 0 )
  {
    sub_21FFC50(&EventDelegate_TypeInfo);
    sub_21FFC50(&WarBoardInfoPopupBase_TypeInfo);
    byte_593629E = 1;
  }
  v5 = WarBoardInfoPopupBase_TypeInfo;
  mainView = this->fields.mainView;
  if ( !*(&WarBoardInfoPopupBase_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(WarBoardInfoPopupBase_TypeInfo, finishCallback, method);
    v5 = WarBoardInfoPopupBase_TypeInfo;
  }
  POPUP_SHOW_ANIM_DURATION = v5->static_fields->POPUP_SHOW_ANIM_DURATION;
  if ( !byte_5931945 )
  {
    sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
    byte_5931945 = 1;
  }
  v8 = TweenScale__Begin(mainView, POPUP_SHOW_ANIM_DURATION, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
  if ( !v8 )
    sub_21FFECC(0, v9);
  onFinished = v8->fields.onFinished;
  v8->fields.method = 6;
  if ( !*(&EventDelegate_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo, v9, v10);
  EventDelegate__Set_56117672(onFinished, finishCallback, 0);
}


void WarBoardInfoPopupBase___Hide_b__18_0(WarBoardInfoPopupBase_o *this, const MethodInfo *method)
{
  WarBoardInfoPopupBase_c *klass; // x8

  klass = this->klass;
  *(_WORD *)&this->fields._isShowAnimating_k__BackingField = 0;
  ((void (__fastcall *)(WarBoardInfoPopupBase_o *, const MethodInfo *))klass->vtable._8_OnAfterHide.methodPtr)(
    this,
    klass->vtable._8_OnAfterHide.method);
}


void WarBoardInfoPopupBase___Show_b__17_0(WarBoardInfoPopupBase_o *this, const MethodInfo *method)
{
  *(_WORD *)&this->fields._isShowAnimating_k__BackingField = 0;
}


bool WarBoardInfoPopupBase__get_isAnimating(WarBoardInfoPopupBase_o *this, const MethodInfo *method)
{
  return this->fields._isShowAnimating_k__BackingField || this->fields._isHideAnimating_k__BackingField;
}


bool WarBoardInfoPopupBase__get_isHideAnimating(WarBoardInfoPopupBase_o *this, const MethodInfo *method)
{
  return this->fields._isHideAnimating_k__BackingField;
}


bool WarBoardInfoPopupBase__get_isShowAnimating(WarBoardInfoPopupBase_o *this, const MethodInfo *method)
{
  return this->fields._isShowAnimating_k__BackingField;
}


bool WarBoardInfoPopupBase__get_isShown(WarBoardInfoPopupBase_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v3; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_21FFECC(0, v3);
  return UnityEngine_GameObject__get_activeSelf(gameObject, 0);
}


void WarBoardInfoPopupBase__set_isHideAnimating(WarBoardInfoPopupBase_o *this, bool value, const MethodInfo *method)
{
  this->fields._isHideAnimating_k__BackingField = value;
}


void WarBoardInfoPopupBase__set_isShowAnimating(WarBoardInfoPopupBase_o *this, bool value, const MethodInfo *method)
{
  this->fields._isShowAnimating_k__BackingField = value;
}