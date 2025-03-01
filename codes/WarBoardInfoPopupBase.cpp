void __fastcall WarBoardInfoPopupBase___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4BFB5AF & 1) == 0 )
  {
    sub_1C2E12C(&WarBoardInfoPopupBase_TypeInfo, v1);
    byte_4BFB5AF = 1;
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
  PartyOrganizationUtility_o *p_hideCompleteCallback; // x19
  System_Delegate_o *hideCompleteCallback; // t1
  System_Delegate_o *v7; // x0
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  int64_t v14; // x8
  System_Action_c *v15; // x1

  if ( (byte_4BFB5AC & 1) == 0 )
  {
    sub_1C2E12C(&System_Action_TypeInfo, completeCallback);
    byte_4BFB5AC = 1;
  }
  hideCompleteCallback = (System_Delegate_o *)this->fields.hideCompleteCallback;
  p_hideCompleteCallback = (PartyOrganizationUtility_o *)&this->fields.hideCompleteCallback;
  v7 = System_Delegate__Combine(hideCompleteCallback, (System_Delegate_o *)completeCallback, 0LL);
  v14 = (int64_t)v7;
  if ( !v7 )
    goto LABEL_7;
  v15 = System_Action_TypeInfo;
  if ( (System_Action_c *)v7->klass != System_Action_TypeInfo
    || (p_hideCompleteCallback->klass = (PartyOrganizationUtility_c *)v7, (System_Action_c *)v7->klass != v15) )
  {
    sub_1C2E648(v7);
LABEL_7:
    p_hideCompleteCallback->klass = (PartyOrganizationUtility_c *)v14;
  }
  sub_1C2E0D0(p_hideCompleteCallback, v14, v8, v9, v10, v11, v12, v13);
}


void __fastcall WarBoardInfoPopupBase__CleanPopup(WarBoardInfoPopupBase_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall WarBoardInfoPopupBase__Hide(WarBoardInfoPopupBase_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  EventDelegate_Callback_o *v4; // x20

  if ( (byte_4BFB5AB & 1) == 0 )
  {
    sub_1C2E12C(&EventDelegate_Callback_TypeInfo, method);
    sub_1C2E12C(&Method_WarBoardInfoPopupBase__Hide_b__18_0__, v3);
    byte_4BFB5AB = 1;
  }
  this->fields._isHideAnimating_k__BackingField = 1;
  v4 = (EventDelegate_Callback_o *)sub_1C2E378(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(v4, (Il2CppObject *)this, Method_WarBoardInfoPopupBase__Hide_b__18_0__, 0LL);
  ((void (__fastcall *)(WarBoardInfoPopupBase_o *, EventDelegate_Callback_o *, Il2CppMethodPointer))this->klass->vtable._6_HideAnimation.method)(
    this,
    v4,
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
  __int64 v10; // x1
  System_Collections_Generic_List_EventDelegate__o *onFinished; // x20

  if ( (byte_4BFB5AE & 1) == 0 )
  {
    sub_1C2E12C(&EventDelegate_TypeInfo, finishCallback);
    sub_1C2E12C(&WarBoardInfoPopupBase_TypeInfo, v5);
    byte_4BFB5AE = 1;
  }
  v6 = WarBoardInfoPopupBase_TypeInfo;
  mainView = this->fields.mainView;
  if ( !WarBoardInfoPopupBase_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardInfoPopupBase_TypeInfo);
    v6 = WarBoardInfoPopupBase_TypeInfo;
  }
  POPUP_HIDE_ANIM_DURATION = v6->static_fields->POPUP_HIDE_ANIM_DURATION;
  if ( !byte_4BF7D91 )
  {
    sub_1C2E12C(&UnityEngine_Vector3_TypeInfo, finishCallback);
    byte_4BF7D91 = 1;
  }
  v9 = TweenScale__Begin(
         mainView,
         POPUP_HIDE_ANIM_DURATION,
         UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
         0LL);
  if ( !v9 )
    sub_1C2E388(0LL, v10);
  v9->fields.method = 6;
  onFinished = v9->fields.onFinished;
  if ( !EventDelegate_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
  EventDelegate__Set_48083504(onFinished, finishCallback, 0LL);
}


void __fastcall WarBoardInfoPopupBase__Initialize(WarBoardInfoPopupBase_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  UnityEngine_Transform_o *v5; // x20
  struct System_Action_o **p_hideCompleteCallback; // x19
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_7;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  gameObject = this->fields.mainView;
  if ( !gameObject )
    goto LABEL_7;
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(gameObject, 0LL);
  v5 = (UnityEngine_Transform_o *)gameObject;
  if ( !byte_4BF7D91 )
  {
    gameObject = (UnityEngine_GameObject_o *)sub_1C2E12C(&UnityEngine_Vector3_TypeInfo, v4);
    byte_4BF7D91 = 1;
  }
  if ( !v5 )
LABEL_7:
    sub_1C2E388(gameObject, v4);
  UnityEngine_Transform__set_localScale(v5, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  this->fields.hideCompleteCallback = 0LL;
  p_hideCompleteCallback = &this->fields.hideCompleteCallback;
  sub_1C2E0D0((PartyOrganizationUtility_o *)p_hideCompleteCallback, 0LL, v7, v8, v9, v10, v11, v12);
  *((_WORD *)p_hideCompleteCallback + 4) = 0;
}


void __fastcall WarBoardInfoPopupBase__OnAfterHide(WarBoardInfoPopupBase_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  struct System_Action_o *v5; // x8
  PartyOrganizationUtility_o *p_hideCompleteCallback; // x19
  struct System_Action_o *hideCompleteCallback; // t1
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1C2E388(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  ((void (__fastcall *)(WarBoardInfoPopupBase_o *, void *))this->klass->vtable._9_CleanPopup.method)(
    this,
    this->klass[1]._1.image);
  hideCompleteCallback = this->fields.hideCompleteCallback;
  p_hideCompleteCallback = (PartyOrganizationUtility_o *)&this->fields.hideCompleteCallback;
  v5 = hideCompleteCallback;
  if ( hideCompleteCallback )
  {
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v5->fields.m_target)(
      v5->fields.original_method_info,
      *(_QWORD *)&v5->fields.extra_arg);
    p_hideCompleteCallback->klass = 0LL;
    sub_1C2E0D0(p_hideCompleteCallback, 0LL, v8, v9, v10, v11, v12, v13);
  }
}


void __fastcall WarBoardInfoPopupBase__OnBeforeShow(WarBoardInfoPopupBase_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v3; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1C2E388(0LL, v3);
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
}


void __fastcall WarBoardInfoPopupBase__Show(WarBoardInfoPopupBase_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  EventDelegate_Callback_o *v4; // x20

  if ( (byte_4BFB5AA & 1) == 0 )
  {
    sub_1C2E12C(&EventDelegate_Callback_TypeInfo, method);
    sub_1C2E12C(&Method_WarBoardInfoPopupBase__Show_b__17_0__, v3);
    byte_4BFB5AA = 1;
  }
  ((void (__fastcall *)(WarBoardInfoPopupBase_o *, Il2CppMethodPointer))this->klass->vtable._7_OnBeforeShow.method)(
    this,
    this->klass->vtable._8_OnAfterHide.methodPtr);
  this->fields._isShowAnimating_k__BackingField = 1;
  v4 = (EventDelegate_Callback_o *)sub_1C2E378(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(v4, (Il2CppObject *)this, Method_WarBoardInfoPopupBase__Show_b__17_0__, 0LL);
  ((void (__fastcall *)(WarBoardInfoPopupBase_o *, EventDelegate_Callback_o *, Il2CppMethodPointer))this->klass->vtable._5_ShowAnimation.method)(
    this,
    v4,
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
  __int64 v10; // x1
  System_Collections_Generic_List_EventDelegate__o *onFinished; // x20

  if ( (byte_4BFB5AD & 1) == 0 )
  {
    sub_1C2E12C(&EventDelegate_TypeInfo, finishCallback);
    sub_1C2E12C(&WarBoardInfoPopupBase_TypeInfo, v5);
    byte_4BFB5AD = 1;
  }
  v6 = WarBoardInfoPopupBase_TypeInfo;
  mainView = this->fields.mainView;
  if ( !WarBoardInfoPopupBase_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardInfoPopupBase_TypeInfo);
    v6 = WarBoardInfoPopupBase_TypeInfo;
  }
  POPUP_SHOW_ANIM_DURATION = v6->static_fields->POPUP_SHOW_ANIM_DURATION;
  if ( !byte_4BF7D96 )
  {
    sub_1C2E12C(&UnityEngine_Vector3_TypeInfo, finishCallback);
    byte_4BF7D96 = 1;
  }
  v9 = TweenScale__Begin(
         mainView,
         POPUP_SHOW_ANIM_DURATION,
         UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
         0LL);
  if ( !v9 )
    sub_1C2E388(0LL, v10);
  v9->fields.method = 6;
  onFinished = v9->fields.onFinished;
  if ( !EventDelegate_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
  EventDelegate__Set_48083504(onFinished, finishCallback, 0LL);
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
    sub_1C2E388(0LL, v3);
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