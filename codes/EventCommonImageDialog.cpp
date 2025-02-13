void __fastcall EventCommonImageDialog___ctor(EventCommonImageDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4BDCCD2 & 1) == 0 )
  {
    sub_1C21E38(&BaseDialog_TypeInfo);
    byte_4BDCCD2 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall EventCommonImageDialog__Init(EventCommonImageDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  __int64 v4; // x1
  Il2CppObject *Component_object; // x0
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7

  if ( (byte_4BDCCCE & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_Component_GetComponent_UIPanel___);
    sub_1C21E38(&string_TypeInfo);
    byte_4BDCCCE = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform
    || (transform = UnityEngine_Transform__get_parent(transform, 0LL)) == 0LL
    || (Component_object = UnityEngine_Component__GetComponent_object_(
                             (UnityEngine_Component_o *)transform,
                             (const MethodInfo_2FA68A8 *)Method_UnityEngine_Component_GetComponent_UIPanel___),
        this->fields.basePanel = (struct UIPanel_o *)Component_object,
        sub_1C21DDC(
          (PartyOrganizationUtility_o *)&this->fields.basePanel,
          (int64_t)Component_object,
          v6,
          v7,
          v8,
          v9,
          v10,
          v11),
        (transform = (UnityEngine_Transform_o *)this->fields.closeLabel) == 0LL) )
  {
    sub_1C22094(transform, v4);
  }
  UILabel__set_text((UILabel_o *)transform, string_TypeInfo->static_fields->Empty, 0LL);
  this->fields.isButtonEnable = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall EventCommonImageDialog__OnClose(EventCommonImageDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x0
  __int64 v6; // x1
  struct System_Action_o *closeCallback; // x8
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  System_Action_o *v14; // x20

  if ( (byte_4BDCCD0 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_EventCommonImageDialog_OnClose__);
    sub_1C21E38(&Method_EventCommonImageDialog__OnClose_b__6_0__);
    byte_4BDCCD0 = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    this->fields.isButtonEnable = 0;
    v3 = Method_EventCommonImageDialog_OnClose__;
    if ( (*((_BYTE *)Method_EventCommonImageDialog_OnClose__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C21E50(Method_EventCommonImageDialog_OnClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
    closeCallback = this->fields.closeCallback;
    if ( !closeCallback )
      sub_1C22094(v5, v6);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))closeCallback->fields.m_target)(
      closeCallback->fields.original_method_info,
      *(_QWORD *)&closeCallback->fields.extra_arg);
    this->fields.closeCallback = 0LL;
    sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.closeCallback, 0LL, v8, v9, v10, v11, v12, v13);
    v14 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
    System_Action___ctor(v14, (Il2CppObject *)this, Method_EventCommonImageDialog__OnClose_b__6_0__, 0LL);
    BaseDialog__Close((BaseDialog_o *)this, v14, 0LL);
  }
}


void __fastcall EventCommonImageDialog__Open(
        EventCommonImageDialog_o *this,
        System_Action_o *callBack,
        const MethodInfo *method)
{
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7
  UILabel_o *closeLabel; // x20
  System_String_o *v12; // x0
  __int64 v13; // x1
  System_Action_o *v14; // x20

  if ( (byte_4BDCCCF & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_EventCommonImageDialog__Open_b__5_0__);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&StringLiteral_3811/*"COMMON_CONFIRM_CLOSE"*/);
    byte_4BDCCCF = 1;
  }
  EventCommonImageDialog__Init(this, (const MethodInfo *)callBack);
  this->fields.closeCallback = callBack;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.closeCallback, (int64_t)callBack, v5, v6, v7, v8, v9, v10);
  closeLabel = this->fields.closeLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v12 = LocalizationManager__Get((System_String_o *)StringLiteral_3811/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
  if ( !closeLabel )
    sub_1C22094(v12, v13);
  UILabel__set_text(closeLabel, v12, 0LL);
  v14 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
  System_Action___ctor(v14, (Il2CppObject *)this, Method_EventCommonImageDialog__Open_b__5_0__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v14, 0, 0LL);
}


void __fastcall EventCommonImageDialog___OnClose_b__6_0(EventCommonImageDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_4BDCCD3 & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDCCD3 = 1;
  }
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_70869612(gameObject, 0LL);
}


void __fastcall EventCommonImageDialog___Open_b__5_0(EventCommonImageDialog_o *this, const MethodInfo *method)
{
  this->fields.isButtonEnable = 1;
}


System_String_o *__fastcall EventCommonImageDialog__get_closeBtnPath(
        EventCommonImageDialog_o *this,
        const MethodInfo *method)
{
  if ( (byte_4BDCCD1 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_15911/*"Window/CloseButton"*/);
    byte_4BDCCD1 = 1;
  }
  return (System_String_o *)StringLiteral_15911/*"Window/CloseButton"*/;
}