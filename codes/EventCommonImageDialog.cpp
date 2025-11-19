void EventCommonImageDialog___ctor(EventCommonImageDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4CB6635 & 1) == 0 )
  {
    sub_1C6BA08(&BaseDialog_TypeInfo);
    byte_4CB6635 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void EventCommonImageDialog__Init(EventCommonImageDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  __int64 v4; // x1
  Il2CppObject *Component_object; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_4CB6631 & 1) == 0 )
  {
    sub_1C6BA08(&Method_UnityEngine_Component_GetComponent_UIPanel___);
    sub_1C6BA08(&string_TypeInfo);
    byte_4CB6631 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform
    || (transform = UnityEngine_Transform__get_parent(transform, 0)) == 0
    || (Component_object = UnityEngine_Component__GetComponent_object_(
                             (UnityEngine_Component_o *)transform,
                             (const MethodInfo_3131B38 *)Method_UnityEngine_Component_GetComponent_UIPanel___),
        this->fields.basePanel = (struct UIPanel_o *)Component_object,
        sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.basePanel, (int32_t)Component_object, v6, v7),
        (transform = (UnityEngine_Transform_o *)this->fields.closeLabel) == 0) )
  {
    sub_1C6BC60(transform, v4);
  }
  UILabel__set_text((UILabel_o *)transform, string_TypeInfo->static_fields->Empty, 0);
  this->fields.isButtonEnable = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


void EventCommonImageDialog__OnClose(EventCommonImageDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x0
  __int64 v6; // x1
  struct System_Action_o *closeCallback; // x8
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  System_Action_o *v10; // x20

  if ( (byte_4CB6633 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_EventCommonImageDialog_OnClose__);
    sub_1C6BA08(&Method_EventCommonImageDialog__OnClose_b__6_0__);
    byte_4CB6633 = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    this->fields.isButtonEnable = 0;
    v3 = Method_EventCommonImageDialog_OnClose__;
    if ( (*((_BYTE *)Method_EventCommonImageDialog_OnClose__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C6BA20(Method_EventCommonImageDialog_OnClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C6B9EC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    closeCallback = this->fields.closeCallback;
    if ( !closeCallback )
      sub_1C6BC60(v5, v6);
    ((void (__fastcall *)(intptr_t, intptr_t))closeCallback->fields.invoke_impl)(
      closeCallback->fields.method_code,
      closeCallback->fields.method);
    this->fields.closeCallback = 0;
    sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.closeCallback, 0, v8, v9);
    v10 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
    System_Action___ctor(v10, (Il2CppObject *)this, Method_EventCommonImageDialog__OnClose_b__6_0__, 0);
    BaseDialog__Close((BaseDialog_o *)this, v10, 0);
  }
}


void EventCommonImageDialog__Open(EventCommonImageDialog_o *this, System_Action_o *callBack, const MethodInfo *method)
{
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  UILabel_o *closeLabel; // x20
  System_String_o *v8; // x0
  __int64 v9; // x1
  System_Action_o *v10; // x20

  if ( (byte_4CB6632 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_EventCommonImageDialog__Open_b__5_0__);
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&StringLiteral_3677/*"COMMON_CONFIRM_CLOSE"*/);
    byte_4CB6632 = 1;
  }
  EventCommonImageDialog__Init(this, (const MethodInfo *)callBack);
  this->fields.closeCallback = callBack;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.closeCallback, (int32_t)callBack, v5, v6);
  closeLabel = this->fields.closeLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v8 = LocalizationManager__Get((System_String_o *)StringLiteral_3677/*"COMMON_CONFIRM_CLOSE"*/, 0);
  if ( !closeLabel )
    sub_1C6BC60(v8, v9);
  UILabel__set_text(closeLabel, v8, 0);
  v10 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_EventCommonImageDialog__Open_b__5_0__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v10, 0, 0, 0);
}


void EventCommonImageDialog___OnClose_b__6_0(EventCommonImageDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_4CB6636 & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB6636 = 1;
  }
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_71659676(gameObject, 0);
}


void EventCommonImageDialog___Open_b__5_0(EventCommonImageDialog_o *this, const MethodInfo *method)
{
  this->fields.isButtonEnable = 1;
}


System_String_o *EventCommonImageDialog__get_closeBtnPath(EventCommonImageDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4CB6634 & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_15640/*"Window/CloseButton"*/);
    byte_4CB6634 = 1;
  }
  return (System_String_o *)StringLiteral_15640/*"Window/CloseButton"*/;
}