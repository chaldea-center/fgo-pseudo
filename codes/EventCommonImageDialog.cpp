void __fastcall EventCommonImageDialog___ctor(EventCommonImageDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4C226EF & 1) == 0 )
  {
    sub_1C3B764(&BaseDialog_TypeInfo, method);
    byte_4C226EF = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall EventCommonImageDialog__Init(EventCommonImageDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Transform_o *transform; // x0
  __int64 v5; // x1
  Il2CppObject *Component_object; // x0
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7

  if ( (byte_4C226EB & 1) == 0 )
  {
    sub_1C3B764(&Method_UnityEngine_Component_GetComponent_UIPanel___, method);
    sub_1C3B764(&string_TypeInfo, v3);
    byte_4C226EB = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform
    || (transform = UnityEngine_Transform__get_parent(transform, 0LL)) == 0LL
    || (Component_object = UnityEngine_Component__GetComponent_object_(
                             (UnityEngine_Component_o *)transform,
                             (const MethodInfo_2FE6C0C *)Method_UnityEngine_Component_GetComponent_UIPanel___),
        this->fields.basePanel = (struct UIPanel_o *)Component_object,
        sub_1C3B708(
          (PartyOrganizationUtility_o *)&this->fields.basePanel,
          (int64_t)Component_object,
          v7,
          v8,
          v9,
          v10,
          v11,
          v12),
        (transform = (UnityEngine_Transform_o *)this->fields.closeLabel) == 0LL) )
  {
    sub_1C3B9C0(transform, v5);
  }
  UILabel__set_text((UILabel_o *)transform, string_TypeInfo->static_fields->Empty, 0LL);
  this->fields.isButtonEnable = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall EventCommonImageDialog__OnClose(EventCommonImageDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  __int64 v7; // x0
  __int64 v8; // x1
  struct System_Action_o *closeCallback; // x8
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  System_Action_o *v16; // x20

  if ( (byte_4C226ED & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, method);
    sub_1C3B764(&Method_EventCommonImageDialog_OnClose__, v3);
    sub_1C3B764(&Method_EventCommonImageDialog__OnClose_b__6_0__, v4);
    byte_4C226ED = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    this->fields.isButtonEnable = 0;
    v5 = Method_EventCommonImageDialog_OnClose__;
    if ( (*((_BYTE *)Method_EventCommonImageDialog_OnClose__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1C3B77C(Method_EventCommonImageDialog_OnClose__);
    v6 = (System_Reflection_MethodBase_o *)sub_1C3B748(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0LL);
    closeCallback = this->fields.closeCallback;
    if ( !closeCallback )
      sub_1C3B9C0(v7, v8);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))closeCallback->fields.m_target)(
      closeCallback->fields.original_method_info,
      *(_QWORD *)&closeCallback->fields.extra_arg);
    this->fields.closeCallback = 0LL;
    sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.closeCallback, 0LL, v10, v11, v12, v13, v14, v15);
    v16 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
    System_Action___ctor(v16, (Il2CppObject *)this, Method_EventCommonImageDialog__OnClose_b__6_0__, 0LL);
    BaseDialog__Close((BaseDialog_o *)this, v16, 0LL);
  }
}


void __fastcall EventCommonImageDialog__Open(
        EventCommonImageDialog_o *this,
        System_Action_o *callBack,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  UILabel_o *closeLabel; // x20
  System_String_o *v15; // x0
  __int64 v16; // x1
  System_Action_o *v17; // x20

  if ( (byte_4C226EC & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, callBack);
    sub_1C3B764(&Method_EventCommonImageDialog__Open_b__5_0__, v5);
    sub_1C3B764(&LocalizationManager_TypeInfo, v6);
    sub_1C3B764(&StringLiteral_3799/*"COSTUME_SELECT_SERVANT_EVENT_END_ITEM_COSTUME_MSG"*/, v7);
    byte_4C226EC = 1;
  }
  EventCommonImageDialog__Init(this, (const MethodInfo *)callBack);
  this->fields.closeCallback = callBack;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.closeCallback, (int64_t)callBack, v8, v9, v10, v11, v12, v13);
  closeLabel = this->fields.closeLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v15 = LocalizationManager__Get((System_String_o *)StringLiteral_3799/*"COSTUME_SELECT_SERVANT_EVENT_END_ITEM_COSTUME_MSG"*/, 0LL);
  if ( !closeLabel )
    sub_1C3B9C0(v15, v16);
  UILabel__set_text(closeLabel, v15, 0LL);
  v17 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
  System_Action___ctor(v17, (Il2CppObject *)this, Method_EventCommonImageDialog__Open_b__5_0__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v17, 0, 0LL);
}


void __fastcall EventCommonImageDialog___OnClose_b__6_0(EventCommonImageDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_4C226F0 & 1) == 0 )
  {
    sub_1C3B764(&UnityEngine_Object_TypeInfo, method);
    byte_4C226F0 = 1;
  }
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_71122748(gameObject, 0LL);
}


void __fastcall EventCommonImageDialog___Open_b__5_0(EventCommonImageDialog_o *this, const MethodInfo *method)
{
  this->fields.isButtonEnable = 1;
}


System_String_o *__fastcall EventCommonImageDialog__get_closeBtnPath(
        EventCommonImageDialog_o *this,
        const MethodInfo *method)
{
  if ( (byte_4C226EE & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_15952/*"_Padding"*/, method);
    byte_4C226EE = 1;
  }
  return (System_String_o *)StringLiteral_15952/*"_Padding"*/;
}