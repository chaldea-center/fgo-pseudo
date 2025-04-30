void __fastcall EventCommonImageDialog___ctor(EventCommonImageDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4A4EA59 & 1) == 0 )
  {
    sub_1B863B8(&BaseDialog_TypeInfo, method);
    byte_4A4EA59 = 1;
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
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  if ( (byte_4A4EA55 & 1) == 0 )
  {
    sub_1B863B8(&Method_UnityEngine_Component_GetComponent_UIPanel___, method);
    sub_1B863B8(&string_TypeInfo, v3);
    byte_4A4EA55 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform
    || (transform = UnityEngine_Transform__get_parent(transform, 0LL)) == 0LL
    || (Component_object = UnityEngine_Component__GetComponent_object_(
                             (UnityEngine_Component_o *)transform,
                             (const MethodInfo_2F646C0 *)Method_UnityEngine_Component_GetComponent_UIPanel___),
        this->fields.basePanel = (struct UIPanel_o *)Component_object,
        sub_1B8635C((CGThumbnailListItem_o *)&this->fields.basePanel, (int32_t)Component_object, v7, v8),
        (transform = (UnityEngine_Transform_o *)this->fields.closeLabel) == 0LL) )
  {
    sub_1B86614(transform, v5);
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
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  System_Action_o *v12; // x20

  if ( (byte_4A4EA57 & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, method);
    sub_1B863B8(&Method_EventCommonImageDialog_OnClose__, v3);
    sub_1B863B8(&Method_EventCommonImageDialog__OnClose_b__6_0__, v4);
    byte_4A4EA57 = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    this->fields.isButtonEnable = 0;
    v5 = Method_EventCommonImageDialog_OnClose__;
    if ( (*((_BYTE *)Method_EventCommonImageDialog_OnClose__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1B863D0(Method_EventCommonImageDialog_OnClose__);
    v6 = (System_Reflection_MethodBase_o *)sub_1B8639C(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0LL);
    closeCallback = this->fields.closeCallback;
    if ( !closeCallback )
      sub_1B86614(v7, v8);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))closeCallback->fields.m_target)(
      closeCallback->fields.original_method_info,
      *(_QWORD *)&closeCallback->fields.extra_arg);
    this->fields.closeCallback = 0LL;
    sub_1B8635C((CGThumbnailListItem_o *)&this->fields.closeCallback, 0, v10, v11);
    v12 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
    System_Action___ctor(v12, (Il2CppObject *)this, Method_EventCommonImageDialog__OnClose_b__6_0__, 0LL);
    BaseDialog__Close((BaseDialog_o *)this, v12, 0LL);
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
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  UILabel_o *closeLabel; // x20
  System_String_o *v11; // x0
  __int64 v12; // x1
  System_Action_o *v13; // x20

  if ( (byte_4A4EA56 & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, callBack);
    sub_1B863B8(&Method_EventCommonImageDialog__Open_b__5_0__, v5);
    sub_1B863B8(&LocalizationManager_TypeInfo, v6);
    sub_1B863B8(&StringLiteral_3676/*"COMMON_CONFIRM_CLOSE"*/, v7);
    byte_4A4EA56 = 1;
  }
  EventCommonImageDialog__Init(this, (const MethodInfo *)callBack);
  this->fields.closeCallback = callBack;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.closeCallback, (int32_t)callBack, v8, v9);
  closeLabel = this->fields.closeLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v11 = LocalizationManager__Get((System_String_o *)StringLiteral_3676/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
  if ( !closeLabel )
    sub_1B86614(v11, v12);
  UILabel__set_text(closeLabel, v11, 0LL);
  v13 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
  System_Action___ctor(v13, (Il2CppObject *)this, Method_EventCommonImageDialog__Open_b__5_0__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v13, 0, 0LL);
}


void __fastcall EventCommonImageDialog___OnClose_b__6_0(EventCommonImageDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_4A4EA5A & 1) == 0 )
  {
    sub_1B863B8(&UnityEngine_Object_TypeInfo, method);
    byte_4A4EA5A = 1;
  }
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_69356292(gameObject, 0LL);
}


void __fastcall EventCommonImageDialog___Open_b__5_0(EventCommonImageDialog_o *this, const MethodInfo *method)
{
  this->fields.isButtonEnable = 1;
}


System_String_o *__fastcall EventCommonImageDialog__get_closeBtnPath(
        EventCommonImageDialog_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A4EA58 & 1) == 0 )
  {
    sub_1B863B8(&StringLiteral_15416/*"Window/CloseButton"*/, method);
    byte_4A4EA58 = 1;
  }
  return (System_String_o *)StringLiteral_15416/*"Window/CloseButton"*/;
}