void EventCommonImageDialog___ctor(EventCommonImageDialog_o *this, const MethodInfo *method)
{
  if ( (byte_59386A9 & 1) == 0 )
  {
    sub_21FFC50(&BaseDialog_TypeInfo);
    byte_59386A9 = 1;
  }
  if ( !*(&BaseDialog_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, method);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void EventCommonImageDialog__Init(EventCommonImageDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  __int64 v4; // x1
  Il2CppObject *Component_object; // x0
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7

  if ( (byte_59386A5 & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_Component_GetComponent_UIPanel___);
    byte_59386A5 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform
    || (transform = UnityEngine_Transform__get_parent(transform, 0)) == 0
    || (Component_object = UnityEngine_Component__GetComponent_object_(
                             (UnityEngine_Component_o *)transform,
                             (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_UIPanel___),
        this->fields.basePanel = (struct UIPanel_o *)Component_object,
        sub_21FFBF4(
          (MissionNaviTransitionBoardItem_o *)&this->fields.basePanel,
          (int32_t)Component_object,
          v6,
          v7,
          v8,
          v9,
          v10,
          v11),
        (transform = (UnityEngine_Transform_o *)this->fields.closeLabel) == 0) )
  {
    sub_21FFECC(transform, v4);
  }
  UILabel__set_text((UILabel_o *)transform, **(System_String_o ***)(qword_594C0B8 + 184), 0);
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
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_Action_o *v14; // x20

  if ( (byte_59386A7 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_EventCommonImageDialog_OnClose__);
    sub_21FFC50(&Method_EventCommonImageDialog__OnClose_b__6_0__);
    byte_59386A7 = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    this->fields.isButtonEnable = 0;
    v3 = Method_EventCommonImageDialog_OnClose__;
    if ( (*((_BYTE *)Method_EventCommonImageDialog_OnClose__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_21FFC68(Method_EventCommonImageDialog_OnClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    closeCallback = this->fields.closeCallback;
    if ( !closeCallback )
      sub_21FFECC(v5, v6);
    ((void (__fastcall *)(intptr_t, intptr_t))closeCallback->fields.invoke_impl)(
      closeCallback->fields.method_code,
      closeCallback->fields.method);
    this->fields.closeCallback = 0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.closeCallback, 0, v8, v9, v10, v11, v12, v13);
    v14 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    System_Action___ctor(v14, (Il2CppObject *)this, Method_EventCommonImageDialog__OnClose_b__6_0__, 0);
    BaseDialog__Close((BaseDialog_o *)this, v14, 0);
  }
}


void EventCommonImageDialog__Open(EventCommonImageDialog_o *this, System_Action_o *callBack, const MethodInfo *method)
{
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  __int64 v11; // x1
  UILabel_o *closeLabel; // x20
  System_String_o *v13; // x0
  __int64 v14; // x1
  System_Action_o *v15; // x20

  if ( (byte_59386A6 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_EventCommonImageDialog__Open_b__5_0__);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&StringLiteral_3823/*"COMMON_CONFIRM_CLOSE"*/);
    byte_59386A6 = 1;
  }
  EventCommonImageDialog__Init(this, (const MethodInfo *)callBack);
  this->fields.closeCallback = callBack;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.closeCallback,
    (int32_t)callBack,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
  closeLabel = this->fields.closeLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v11);
  v13 = LocalizationManager__Get((System_String_o *)StringLiteral_3823/*"COMMON_CONFIRM_CLOSE"*/, 0);
  if ( !closeLabel )
    sub_21FFECC(v13, v14);
  UILabel__set_text(closeLabel, v13, 0);
  v15 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(v15, (Il2CppObject *)this, Method_EventCommonImageDialog__Open_b__5_0__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v15, 0, 0, 0);
}


void EventCommonImageDialog___OnClose_b__6_0(EventCommonImageDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_59386AA & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_59386AA = 1;
  }
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v3);
  UnityEngine_Object__Destroy_83246496(gameObject, 0);
}


void EventCommonImageDialog___Open_b__5_0(EventCommonImageDialog_o *this, const MethodInfo *method)
{
  this->fields.isButtonEnable = 1;
}


System_String_o *EventCommonImageDialog__get_closeBtnPath(EventCommonImageDialog_o *this, const MethodInfo *method)
{
  if ( (byte_59386A8 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_16229/*"Window/CloseButton"*/);
    byte_59386A8 = 1;
  }
  return (System_String_o *)StringLiteral_16229/*"Window/CloseButton"*/;
}