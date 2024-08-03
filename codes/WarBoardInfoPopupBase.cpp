void __fastcall WarBoardInfoPopupBase___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_49FA385 & 1) == 0 )
  {
    sub_1B640C8(&WarBoardInfoPopupBase_TypeInfo, v1);
    byte_49FA385 = 1;
  }
  *WarBoardInfoPopupBase_TypeInfo->static_fields = (struct WarBoardInfoPopupBase_StaticFields)vdup_n_s32(0x3E088889u).n64_u64[0];
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
  ServantStatusBattleListViewItem_o *p_hideCompleteCallback; // x19
  System_Delegate_o *hideCompleteCallback; // t1
  System_Delegate_o *v7; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  System_Delegate_o *v10; // x8
  System_Action_c *v11; // x1

  if ( (byte_49FA382 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, completeCallback);
    byte_49FA382 = 1;
  }
  hideCompleteCallback = (System_Delegate_o *)this->fields.hideCompleteCallback;
  p_hideCompleteCallback = (ServantStatusBattleListViewItem_o *)&this->fields.hideCompleteCallback;
  v7 = System_Delegate__Combine(hideCompleteCallback, (System_Delegate_o *)completeCallback, 0LL);
  v10 = v7;
  if ( !v7 )
    goto LABEL_7;
  v11 = System_Action_TypeInfo;
  if ( (System_Action_c *)v7->klass != System_Action_TypeInfo
    || (p_hideCompleteCallback->klass = (ServantStatusBattleListViewItem_c *)v7, (System_Action_c *)v7->klass != v11) )
  {
    sub_1B645E4(v7);
LABEL_7:
    p_hideCompleteCallback->klass = (ServantStatusBattleListViewItem_c *)v10;
  }
  sub_1B6406C(p_hideCompleteCallback, (int32_t)v10, v8, v9);
}


void __fastcall WarBoardInfoPopupBase__CleanPopup(WarBoardInfoPopupBase_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall WarBoardInfoPopupBase__Hide(WarBoardInfoPopupBase_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  EventDelegate_Callback_o *v5; // x20

  if ( (byte_49FA381 & 1) == 0 )
  {
    sub_1B640C8(&EventDelegate_Callback_TypeInfo, method);
    sub_1B640C8(&Method_WarBoardInfoPopupBase__Hide_b__18_0__, v4);
    byte_49FA381 = 1;
  }
  this->fields._isHideAnimating_k__BackingField = 1;
  v5 = (EventDelegate_Callback_o *)sub_1B64314(EventDelegate_Callback_TypeInfo, method, v2);
  EventDelegate_Callback___ctor(v5, (Il2CppObject *)this, Method_WarBoardInfoPopupBase__Hide_b__18_0__, 0LL);
  ((void (__fastcall *)(WarBoardInfoPopupBase_o *, EventDelegate_Callback_o *, Il2CppMethodPointer))this->klass->vtable._6_HideAnimation.method)(
    this,
    v5,
    this->klass->vtable._7_OnBeforeShow.methodPtr);
}


void __fastcall WarBoardInfoPopupBase__HideAnimation(
        WarBoardInfoPopupBase_o *this,
        EventDelegate_Callback_o *finishCallback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  WarBoardInfoPopupBase_c *v6; // x0
  UnityEngine_GameObject_o *mainView; // x20
  float POPUP_HIDE_ANIM_DURATION; // s8
  TweenScale_o *v9; // x0
  System_Collections_Generic_List_EventDelegate__o *onFinished; // x20

  if ( (byte_49FA384 & 1) == 0 )
  {
    sub_1B640C8(&EventDelegate_TypeInfo, finishCallback);
    sub_1B640C8(&WarBoardInfoPopupBase_TypeInfo, v5);
    byte_49FA384 = 1;
  }
  v6 = WarBoardInfoPopupBase_TypeInfo;
  mainView = this->fields.mainView;
  if ( !WarBoardInfoPopupBase_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardInfoPopupBase_TypeInfo);
    v6 = WarBoardInfoPopupBase_TypeInfo;
  }
  POPUP_HIDE_ANIM_DURATION = v6->static_fields->POPUP_HIDE_ANIM_DURATION;
  if ( !byte_49F7111 )
  {
    sub_1B640C8(&UnityEngine_Vector3_TypeInfo, finishCallback);
    byte_49F7111 = 1;
  }
  v9 = TweenScale__Begin(
         mainView,
         POPUP_HIDE_ANIM_DURATION,
         UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
         0LL);
  if ( !v9 )
    sub_1B64324(0LL);
  v9->fields.method = 6;
  onFinished = v9->fields.onFinished;
  if ( !EventDelegate_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
  EventDelegate__Set_46493216(onFinished, finishCallback, 0LL);
}


void __fastcall WarBoardInfoPopupBase__Initialize(WarBoardInfoPopupBase_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  UnityEngine_Transform_o *v5; // x20
  struct System_Action_o **p_hideCompleteCallback; // x19
  int32_t v7; // w2
  int32_t v8; // w3

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_7;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  gameObject = this->fields.mainView;
  if ( !gameObject )
    goto LABEL_7;
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(gameObject, 0LL);
  v5 = (UnityEngine_Transform_o *)gameObject;
  if ( !byte_49F7111 )
  {
    gameObject = (UnityEngine_GameObject_o *)sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v4);
    byte_49F7111 = 1;
  }
  if ( !v5 )
LABEL_7:
    sub_1B64324(gameObject);
  UnityEngine_Transform__set_localScale(v5, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  this->fields.hideCompleteCallback = 0LL;
  p_hideCompleteCallback = &this->fields.hideCompleteCallback;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)p_hideCompleteCallback, 0, v7, v8);
  *((_WORD *)p_hideCompleteCallback + 4) = 0;
}


void __fastcall WarBoardInfoPopupBase__OnAfterHide(WarBoardInfoPopupBase_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  struct System_Action_o *v4; // x8
  ServantStatusBattleListViewItem_o *p_hideCompleteCallback; // x19
  struct System_Action_o *hideCompleteCallback; // t1
  int32_t v7; // w2
  int32_t v8; // w3

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1B64324(0LL);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  ((void (__fastcall *)(WarBoardInfoPopupBase_o *, void *))this->klass->vtable._9_CleanPopup.method)(
    this,
    this->klass[1]._1.image);
  hideCompleteCallback = this->fields.hideCompleteCallback;
  p_hideCompleteCallback = (ServantStatusBattleListViewItem_o *)&this->fields.hideCompleteCallback;
  v4 = hideCompleteCallback;
  if ( hideCompleteCallback )
  {
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v4->fields.m_target)(
      v4->fields.original_method_info,
      *(_QWORD *)&v4->fields.extra_arg);
    p_hideCompleteCallback->klass = 0LL;
    sub_1B6406C(p_hideCompleteCallback, 0, v7, v8);
  }
}


void __fastcall WarBoardInfoPopupBase__OnBeforeShow(WarBoardInfoPopupBase_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1B64324(0LL);
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
}


void __fastcall WarBoardInfoPopupBase__Show(WarBoardInfoPopupBase_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x2
  EventDelegate_Callback_o *v6; // x20

  if ( (byte_49FA380 & 1) == 0 )
  {
    sub_1B640C8(&EventDelegate_Callback_TypeInfo, method);
    sub_1B640C8(&Method_WarBoardInfoPopupBase__Show_b__17_0__, v3);
    byte_49FA380 = 1;
  }
  ((void (__fastcall *)(WarBoardInfoPopupBase_o *, Il2CppMethodPointer))this->klass->vtable._7_OnBeforeShow.method)(
    this,
    this->klass->vtable._8_OnAfterHide.methodPtr);
  this->fields._isShowAnimating_k__BackingField = 1;
  v6 = (EventDelegate_Callback_o *)sub_1B64314(EventDelegate_Callback_TypeInfo, v4, v5);
  EventDelegate_Callback___ctor(v6, (Il2CppObject *)this, Method_WarBoardInfoPopupBase__Show_b__17_0__, 0LL);
  ((void (__fastcall *)(WarBoardInfoPopupBase_o *, EventDelegate_Callback_o *, Il2CppMethodPointer))this->klass->vtable._5_ShowAnimation.method)(
    this,
    v6,
    this->klass->vtable._6_HideAnimation.methodPtr);
}


void __fastcall WarBoardInfoPopupBase__ShowAnimation(
        WarBoardInfoPopupBase_o *this,
        EventDelegate_Callback_o *finishCallback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  WarBoardInfoPopupBase_c *v6; // x0
  UnityEngine_GameObject_o *mainView; // x20
  float POPUP_SHOW_ANIM_DURATION; // s8
  TweenScale_o *v9; // x0
  System_Collections_Generic_List_EventDelegate__o *onFinished; // x20

  if ( (byte_49FA383 & 1) == 0 )
  {
    sub_1B640C8(&EventDelegate_TypeInfo, finishCallback);
    sub_1B640C8(&WarBoardInfoPopupBase_TypeInfo, v5);
    byte_49FA383 = 1;
  }
  v6 = WarBoardInfoPopupBase_TypeInfo;
  mainView = this->fields.mainView;
  if ( !WarBoardInfoPopupBase_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardInfoPopupBase_TypeInfo);
    v6 = WarBoardInfoPopupBase_TypeInfo;
  }
  POPUP_SHOW_ANIM_DURATION = v6->static_fields->POPUP_SHOW_ANIM_DURATION;
  if ( !byte_49F7116 )
  {
    sub_1B640C8(&UnityEngine_Vector3_TypeInfo, finishCallback);
    byte_49F7116 = 1;
  }
  v9 = TweenScale__Begin(
         mainView,
         POPUP_SHOW_ANIM_DURATION,
         UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
         0LL);
  if ( !v9 )
    sub_1B64324(0LL);
  v9->fields.method = 6;
  onFinished = v9->fields.onFinished;
  if ( !EventDelegate_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
  EventDelegate__Set_46493216(onFinished, finishCallback, 0LL);
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
    sub_1B64324(0LL);
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