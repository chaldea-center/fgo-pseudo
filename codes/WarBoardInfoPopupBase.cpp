void __fastcall WarBoardInfoPopupBase___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_40F641F & 1) == 0 )
  {
    sub_B16FFC(&WarBoardInfoPopupBase_TypeInfo, v1);
    byte_40F641F = 1;
  }
  WarBoardInfoPopupBase_TypeInfo->static_fields->POPUP_SHOW_ANIM_DURATION = 0.13333;
  WarBoardInfoPopupBase_TypeInfo->static_fields->POPUP_HIDE_ANIM_DURATION = 0.13333;
}


void __fastcall WarBoardInfoPopupBase___ctor(WarBoardInfoPopupBase_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall WarBoardInfoPopupBase__AddHideCompleteCallback(
        WarBoardInfoPopupBase_o *this,
        System_Action_o *completeCallback,
        const MethodInfo *method)
{
  BattleServantConfConponent_o *p_hideCompleteCallback; // x19
  System_Delegate_o *hideCompleteCallback; // t1
  System_Int32_array **v7; // x0
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  WarBoardInfoPopupBase_o *v14; // x0
  EventDelegate_Callback_o *v15; // x1
  const MethodInfo *v16; // x2

  if ( (byte_40F641C & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, completeCallback);
    byte_40F641C = 1;
  }
  hideCompleteCallback = (System_Delegate_o *)this->fields.hideCompleteCallback;
  p_hideCompleteCallback = (BattleServantConfConponent_o *)&this->fields.hideCompleteCallback;
  v7 = (System_Int32_array **)System_Delegate__Combine(hideCompleteCallback, (System_Delegate_o *)completeCallback, 0LL);
  if ( v7 && *v7 != (System_Int32_array *)System_Action_TypeInfo )
  {
    v14 = (WarBoardInfoPopupBase_o *)sub_B173C8(v7);
    WarBoardInfoPopupBase__ShowAnimation(v14, v15, v16);
  }
  else
  {
    p_hideCompleteCallback->klass = (BattleServantConfConponent_c *)v7;
    sub_B16F98(p_hideCompleteCallback, v7, v8, v9, v10, v11, v12, v13);
  }
}


void __fastcall WarBoardInfoPopupBase__CleanPopup(WarBoardInfoPopupBase_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall WarBoardInfoPopupBase__Hide(WarBoardInfoPopupBase_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  EventDelegate_Callback_o *v7; // x20

  if ( (byte_40F641B & 1) == 0 )
  {
    sub_B16FFC(&EventDelegate_Callback_TypeInfo, method);
    sub_B16FFC(&Method_WarBoardInfoPopupBase__Hide_b__18_0__, v6);
    byte_40F641B = 1;
  }
  this->fields._isHideAnimating_k__BackingField = 1;
  v7 = (EventDelegate_Callback_o *)sub_B170CC(EventDelegate_Callback_TypeInfo, method, v2, v3, v4);
  EventDelegate_Callback___ctor(v7, (Il2CppObject *)this, Method_WarBoardInfoPopupBase__Hide_b__18_0__, 0LL);
  ((void (__fastcall *)(WarBoardInfoPopupBase_o *, EventDelegate_Callback_o *, Il2CppMethodPointer))this->klass->vtable._6_HideAnimation.method)(
    this,
    v7,
    this->klass->vtable._7_OnBeforeShow.methodPtr);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardInfoPopupBase__HideAnimation(
        WarBoardInfoPopupBase_o *this,
        EventDelegate_Callback_o *finishCallback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_GameObject_o *mainView; // x20
  WarBoardInfoPopupBase_c *v7; // x0
  float POPUP_HIDE_ANIM_DURATION; // s8
  float y; // s4
  float z; // s5
  float v11; // s3
  TweenScale_o *v12; // x0
  System_Collections_Generic_List_EventDelegate__o *onFinished; // x20
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_40F641E & 1) == 0 )
  {
    sub_B16FFC(&EventDelegate_TypeInfo, finishCallback);
    sub_B16FFC(&WarBoardInfoPopupBase_TypeInfo, v5);
    byte_40F641E = 1;
  }
  mainView = this->fields.mainView;
  v7 = WarBoardInfoPopupBase_TypeInfo;
  if ( (BYTE3(WarBoardInfoPopupBase_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardInfoPopupBase_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardInfoPopupBase_TypeInfo);
    v7 = WarBoardInfoPopupBase_TypeInfo;
  }
  POPUP_HIDE_ANIM_DURATION = v7->static_fields->POPUP_HIDE_ANIM_DURATION;
  zero = UnityEngine_Vector3__get_zero(0LL);
  y = zero.fields.y;
  z = zero.fields.z;
  zero.fields.y = zero.fields.x;
  zero.fields.z = y;
  v11 = z;
  v12 = TweenScale__Begin(mainView, POPUP_HIDE_ANIM_DURATION, *(UnityEngine_Vector3_o *)&zero.fields.y, 0LL);
  if ( !v12 )
    sub_B170D4();
  v12->fields.style = 6;
  onFinished = v12->fields.onFinished;
  if ( (BYTE3(EventDelegate_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventDelegate_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
  }
  EventDelegate__Set_29416612(onFinished, finishCallback, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardInfoPopupBase__Initialize(WarBoardInfoPopupBase_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *mainView; // x0
  UnityEngine_Transform_o *transform; // x20
  int v6; // s0
  struct System_Action_o **p_hideCompleteCallback; // x19
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 0, 0LL), (mainView = this->fields.mainView) == 0LL)
    || (transform = UnityEngine_GameObject__get_transform(mainView, 0LL),
        *(UnityEngine_Vector3_o *)&v6 = UnityEngine_Vector3__get_zero(0LL),
        !transform) )
  {
    sub_B170D4();
  }
  UnityEngine_Transform__set_localScale(transform, *(UnityEngine_Vector3_o *)&v6, 0LL);
  this->fields.hideCompleteCallback = 0LL;
  p_hideCompleteCallback = &this->fields.hideCompleteCallback;
  sub_B16F98((BattleServantConfConponent_o *)p_hideCompleteCallback, 0LL, v10, v11, v12, v13, v14, v15);
  *((_WORD *)p_hideCompleteCallback + 4) = 0;
}


void __fastcall WarBoardInfoPopupBase__OnAfterHide(WarBoardInfoPopupBase_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  System_Action_o *v4; // x0
  BattleServantConfConponent_o *p_hideCompleteCallback; // x19
  struct System_Action_o *hideCompleteCallback; // t1
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B170D4();
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  ((void (__fastcall *)(WarBoardInfoPopupBase_o *, void *))this->klass->vtable._9_CleanPopup.method)(
    this,
    this->klass[1]._1.image);
  hideCompleteCallback = this->fields.hideCompleteCallback;
  p_hideCompleteCallback = (BattleServantConfConponent_o *)&this->fields.hideCompleteCallback;
  v4 = hideCompleteCallback;
  if ( hideCompleteCallback )
  {
    System_Action__Invoke(v4, 0LL);
    p_hideCompleteCallback->klass = 0LL;
    sub_B16F98(p_hideCompleteCallback, 0LL, v7, v8, v9, v10, v11, v12);
  }
}


void __fastcall WarBoardInfoPopupBase__OnBeforeShow(WarBoardInfoPopupBase_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B170D4();
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
}


void __fastcall WarBoardInfoPopupBase__Show(WarBoardInfoPopupBase_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x3
  __int64 v7; // x4
  EventDelegate_Callback_o *v8; // x20

  if ( (byte_40F641A & 1) == 0 )
  {
    sub_B16FFC(&EventDelegate_Callback_TypeInfo, method);
    sub_B16FFC(&Method_WarBoardInfoPopupBase__Show_b__17_0__, v3);
    byte_40F641A = 1;
  }
  ((void (__fastcall *)(WarBoardInfoPopupBase_o *, Il2CppMethodPointer))this->klass->vtable._7_OnBeforeShow.method)(
    this,
    this->klass->vtable._8_OnAfterHide.methodPtr);
  this->fields._isShowAnimating_k__BackingField = 1;
  v8 = (EventDelegate_Callback_o *)sub_B170CC(EventDelegate_Callback_TypeInfo, v4, v5, v6, v7);
  EventDelegate_Callback___ctor(v8, (Il2CppObject *)this, Method_WarBoardInfoPopupBase__Show_b__17_0__, 0LL);
  ((void (__fastcall *)(WarBoardInfoPopupBase_o *, EventDelegate_Callback_o *, Il2CppMethodPointer))this->klass->vtable._5_ShowAnimation.method)(
    this,
    v8,
    this->klass->vtable._6_HideAnimation.methodPtr);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardInfoPopupBase__ShowAnimation(
        WarBoardInfoPopupBase_o *this,
        EventDelegate_Callback_o *finishCallback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_GameObject_o *mainView; // x20
  WarBoardInfoPopupBase_c *v7; // x0
  float POPUP_SHOW_ANIM_DURATION; // s8
  float y; // s4
  float z; // s5
  float v11; // s3
  TweenScale_o *v12; // x0
  System_Collections_Generic_List_EventDelegate__o *onFinished; // x20
  UnityEngine_Vector3_o one; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_40F641D & 1) == 0 )
  {
    sub_B16FFC(&EventDelegate_TypeInfo, finishCallback);
    sub_B16FFC(&WarBoardInfoPopupBase_TypeInfo, v5);
    byte_40F641D = 1;
  }
  mainView = this->fields.mainView;
  v7 = WarBoardInfoPopupBase_TypeInfo;
  if ( (BYTE3(WarBoardInfoPopupBase_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardInfoPopupBase_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardInfoPopupBase_TypeInfo);
    v7 = WarBoardInfoPopupBase_TypeInfo;
  }
  POPUP_SHOW_ANIM_DURATION = v7->static_fields->POPUP_SHOW_ANIM_DURATION;
  one = UnityEngine_Vector3__get_one(0LL);
  y = one.fields.y;
  z = one.fields.z;
  one.fields.y = one.fields.x;
  one.fields.z = y;
  v11 = z;
  v12 = TweenScale__Begin(mainView, POPUP_SHOW_ANIM_DURATION, *(UnityEngine_Vector3_o *)&one.fields.y, 0LL);
  if ( !v12 )
    sub_B170D4();
  v12->fields.style = 6;
  onFinished = v12->fields.onFinished;
  if ( (BYTE3(EventDelegate_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventDelegate_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
  }
  EventDelegate__Set_29416612(onFinished, finishCallback, 0LL);
}


void __fastcall WarBoardInfoPopupBase___Hide_b__18_0(WarBoardInfoPopupBase_o *this, const MethodInfo *method)
{
  WarBoardInfoPopupBase_c *klass; // x8

  klass = this->klass;
  *(_WORD *)&this->fields._isShowAnimating_k__BackingField = 0;
  ((void (__fastcall *)(WarBoardInfoPopupBase_o *, Il2CppMethodPointer))klass->vtable._8_OnAfterHide.method)(
    this,
    klass->vtable._9_CleanPopup.methodPtr);
}


void __fastcall WarBoardInfoPopupBase___Show_b__17_0(WarBoardInfoPopupBase_o *this, const MethodInfo *method)
{
  *(_WORD *)&this->fields._isShowAnimating_k__BackingField = 0;
}


bool __fastcall WarBoardInfoPopupBase__get_isAnimating(WarBoardInfoPopupBase_o *this, const MethodInfo *method)
{
  return this->fields._isShowAnimating_k__BackingField || this->fields._isHideAnimating_k__BackingField;
}


bool __fastcall WarBoardInfoPopupBase__get_isHideAnimating(WarBoardInfoPopupBase_o *this, const MethodInfo *method)
{
  return this->fields._isHideAnimating_k__BackingField;
}


bool __fastcall WarBoardInfoPopupBase__get_isShowAnimating(WarBoardInfoPopupBase_o *this, const MethodInfo *method)
{
  return this->fields._isShowAnimating_k__BackingField;
}


bool __fastcall WarBoardInfoPopupBase__get_isShown(WarBoardInfoPopupBase_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B170D4();
  return UnityEngine_GameObject__get_activeSelf(gameObject, 0LL);
}


void __fastcall WarBoardInfoPopupBase__set_isHideAnimating(
        WarBoardInfoPopupBase_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._isHideAnimating_k__BackingField = value;
}


void __fastcall WarBoardInfoPopupBase__set_isShowAnimating(
        WarBoardInfoPopupBase_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._isShowAnimating_k__BackingField = value;
}