void __fastcall WarBoardInfoPopupBase___cctor(const MethodInfo *method)
{
  if ( (byte_42AC83B & 1) == 0 )
  {
    sub_B52984(&WarBoardInfoPopupBase_TypeInfo);
    byte_42AC83B = 1;
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
  struct System_Action_o **p_hideCompleteCallback; // x19
  System_Delegate_o *hideCompleteCallback; // t1
  System_Delegate_o *v7; // x0
  WarBoardInfoPopupBase_o *v8; // x0
  EventDelegate_Callback_o *v9; // x1
  const MethodInfo *v10; // x2

  if ( (byte_42AC838 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    byte_42AC838 = 1;
  }
  hideCompleteCallback = (System_Delegate_o *)this->fields.hideCompleteCallback;
  p_hideCompleteCallback = &this->fields.hideCompleteCallback;
  v7 = System_Delegate__Combine(hideCompleteCallback, (System_Delegate_o *)completeCallback, 0LL);
  if ( v7 && (System_Action_c *)v7->klass != System_Action_TypeInfo )
  {
    v8 = (WarBoardInfoPopupBase_o *)sub_B52D50(v7);
    WarBoardInfoPopupBase__ShowAnimation(v8, v9, v10);
  }
  else
  {
    *p_hideCompleteCallback = (struct System_Action_o *)v7;
    sub_B52920(p_hideCompleteCallback);
  }
}


void __fastcall WarBoardInfoPopupBase__CleanPopup(WarBoardInfoPopupBase_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall WarBoardInfoPopupBase__Hide(WarBoardInfoPopupBase_o *this, const MethodInfo *method)
{
  EventDelegate_Callback_o *v3; // x20

  if ( (byte_42AC837 & 1) == 0 )
  {
    sub_B52984(&EventDelegate_Callback_TypeInfo);
    sub_B52984(&Method_WarBoardInfoPopupBase__Hide_b__18_0__);
    byte_42AC837 = 1;
  }
  this->fields._isHideAnimating_k__BackingField = 1;
  v3 = (EventDelegate_Callback_o *)sub_B52A54(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(v3, (Il2CppObject *)this, Method_WarBoardInfoPopupBase__Hide_b__18_0__, 0LL);
  ((void (__fastcall *)(WarBoardInfoPopupBase_o *, EventDelegate_Callback_o *, Il2CppMethodPointer))this->klass->vtable._6_HideAnimation.method)(
    this,
    v3,
    this->klass->vtable._7_OnBeforeShow.methodPtr);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardInfoPopupBase__HideAnimation(
        WarBoardInfoPopupBase_o *this,
        EventDelegate_Callback_o *finishCallback,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *mainView; // x20
  WarBoardInfoPopupBase_c *v6; // x0
  float POPUP_HIDE_ANIM_DURATION; // s8
  float y; // s4
  float z; // s5
  float v10; // s3
  TweenScale_o *v11; // x0
  __int64 v12; // x1
  System_Collections_Generic_List_EventDelegate__o *onFinished; // x20
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_42AC83A & 1) == 0 )
  {
    sub_B52984(&EventDelegate_TypeInfo);
    sub_B52984(&WarBoardInfoPopupBase_TypeInfo);
    byte_42AC83A = 1;
  }
  mainView = this->fields.mainView;
  v6 = WarBoardInfoPopupBase_TypeInfo;
  if ( (BYTE3(WarBoardInfoPopupBase_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardInfoPopupBase_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardInfoPopupBase_TypeInfo);
    v6 = WarBoardInfoPopupBase_TypeInfo;
  }
  POPUP_HIDE_ANIM_DURATION = v6->static_fields->POPUP_HIDE_ANIM_DURATION;
  zero = UnityEngine_Vector3__get_zero(0LL);
  y = zero.fields.y;
  z = zero.fields.z;
  zero.fields.y = zero.fields.x;
  zero.fields.z = y;
  v10 = z;
  v11 = TweenScale__Begin(mainView, POPUP_HIDE_ANIM_DURATION, *(UnityEngine_Vector3_o *)&zero.fields.y, 0LL);
  if ( !v11 )
    sub_B52A5C(0LL, v12);
  v11->fields.style = 6;
  onFinished = v11->fields.onFinished;
  if ( (BYTE3(EventDelegate_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventDelegate_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
  }
  EventDelegate__Set_29653788(onFinished, finishCallback, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardInfoPopupBase__Initialize(WarBoardInfoPopupBase_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  UnityEngine_Transform_o *transform; // x20
  int v6; // s0
  struct System_Action_o **p_hideCompleteCallback; // x19

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 0, 0LL), (gameObject = this->fields.mainView) == 0LL)
    || (transform = UnityEngine_GameObject__get_transform(gameObject, 0LL),
        *(UnityEngine_Vector3_o *)&v6 = UnityEngine_Vector3__get_zero(0LL),
        !transform) )
  {
    sub_B52A5C(gameObject, v4);
  }
  UnityEngine_Transform__set_localScale(transform, *(UnityEngine_Vector3_o *)&v6, 0LL);
  this->fields.hideCompleteCallback = 0LL;
  p_hideCompleteCallback = &this->fields.hideCompleteCallback;
  sub_B52920(p_hideCompleteCallback);
  *((_WORD *)p_hideCompleteCallback + 4) = 0;
}


void __fastcall WarBoardInfoPopupBase__OnAfterHide(WarBoardInfoPopupBase_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  System_Action_o *v5; // x0
  struct System_Action_o **p_hideCompleteCallback; // x19
  struct System_Action_o *hideCompleteCallback; // t1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B52A5C(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  ((void (__fastcall *)(WarBoardInfoPopupBase_o *, void *))this->klass->vtable._9_CleanPopup.method)(
    this,
    this->klass[1]._1.image);
  hideCompleteCallback = this->fields.hideCompleteCallback;
  p_hideCompleteCallback = &this->fields.hideCompleteCallback;
  v5 = hideCompleteCallback;
  if ( hideCompleteCallback )
  {
    System_Action__Invoke(v5, 0LL);
    *p_hideCompleteCallback = 0LL;
    sub_B52920(p_hideCompleteCallback);
  }
}


void __fastcall WarBoardInfoPopupBase__OnBeforeShow(WarBoardInfoPopupBase_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v3; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B52A5C(0LL, v3);
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
}


void __fastcall WarBoardInfoPopupBase__Show(WarBoardInfoPopupBase_o *this, const MethodInfo *method)
{
  EventDelegate_Callback_o *v3; // x20

  if ( (byte_42AC836 & 1) == 0 )
  {
    sub_B52984(&EventDelegate_Callback_TypeInfo);
    sub_B52984(&Method_WarBoardInfoPopupBase__Show_b__17_0__);
    byte_42AC836 = 1;
  }
  ((void (__fastcall *)(WarBoardInfoPopupBase_o *, Il2CppMethodPointer))this->klass->vtable._7_OnBeforeShow.method)(
    this,
    this->klass->vtable._8_OnAfterHide.methodPtr);
  this->fields._isShowAnimating_k__BackingField = 1;
  v3 = (EventDelegate_Callback_o *)sub_B52A54(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(v3, (Il2CppObject *)this, Method_WarBoardInfoPopupBase__Show_b__17_0__, 0LL);
  ((void (__fastcall *)(WarBoardInfoPopupBase_o *, EventDelegate_Callback_o *, Il2CppMethodPointer))this->klass->vtable._5_ShowAnimation.method)(
    this,
    v3,
    this->klass->vtable._6_HideAnimation.methodPtr);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardInfoPopupBase__ShowAnimation(
        WarBoardInfoPopupBase_o *this,
        EventDelegate_Callback_o *finishCallback,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *mainView; // x20
  WarBoardInfoPopupBase_c *v6; // x0
  float POPUP_SHOW_ANIM_DURATION; // s8
  float y; // s4
  float z; // s5
  float v10; // s3
  TweenScale_o *v11; // x0
  __int64 v12; // x1
  System_Collections_Generic_List_EventDelegate__o *onFinished; // x20
  UnityEngine_Vector3_o one; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_42AC839 & 1) == 0 )
  {
    sub_B52984(&EventDelegate_TypeInfo);
    sub_B52984(&WarBoardInfoPopupBase_TypeInfo);
    byte_42AC839 = 1;
  }
  mainView = this->fields.mainView;
  v6 = WarBoardInfoPopupBase_TypeInfo;
  if ( (BYTE3(WarBoardInfoPopupBase_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardInfoPopupBase_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardInfoPopupBase_TypeInfo);
    v6 = WarBoardInfoPopupBase_TypeInfo;
  }
  POPUP_SHOW_ANIM_DURATION = v6->static_fields->POPUP_SHOW_ANIM_DURATION;
  one = UnityEngine_Vector3__get_one(0LL);
  y = one.fields.y;
  z = one.fields.z;
  one.fields.y = one.fields.x;
  one.fields.z = y;
  v10 = z;
  v11 = TweenScale__Begin(mainView, POPUP_SHOW_ANIM_DURATION, *(UnityEngine_Vector3_o *)&one.fields.y, 0LL);
  if ( !v11 )
    sub_B52A5C(0LL, v12);
  v11->fields.style = 6;
  onFinished = v11->fields.onFinished;
  if ( (BYTE3(EventDelegate_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventDelegate_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
  }
  EventDelegate__Set_29653788(onFinished, finishCallback, 0LL);
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
  __int64 v3; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B52A5C(0LL, v3);
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