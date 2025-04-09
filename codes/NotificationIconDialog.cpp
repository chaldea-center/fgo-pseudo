void __fastcall NotificationIconDialog___ctor(NotificationIconDialog_o *this, const MethodInfo *method)
{
  if ( (byte_49BEB99 & 1) == 0 )
  {
    sub_1B4CF90(&BaseDialog_TypeInfo, method);
    byte_49BEB99 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall NotificationIconDialog__Close(NotificationIconDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  NotificationIconDialog__Close_45981680(this, 0LL, v2);
}


void __fastcall NotificationIconDialog__Close_45981680(
        NotificationIconDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int64 v6; // x1
  System_Action_o *v7; // x20

  if ( (byte_49BEB96 & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_TypeInfo, callback);
    sub_1B4CF90(&Method_NotificationIconDialog_EndClose__, v6);
    byte_49BEB96 = 1;
  }
  this->fields.closeEndFunc = callback;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.closeEndFunc, (int32_t)callback, (int32_t)method, v3);
  this->fields.isButtonEnable = 0;
  v7 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_NotificationIconDialog_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v7, 0LL);
}


void __fastcall NotificationIconDialog__EndClose(NotificationIconDialog_o *this, const MethodInfo *method)
{
  int32_t v3; // w2
  const MethodInfo *v4; // x3
  CGThumbnailListItem_o *p_closeEndFunc; // x19
  struct System_Action_o *v6; // x20
  struct System_Action_o *closeEndFunc; // t1

  NotificationIconDialog__Init(this, method);
  closeEndFunc = this->fields.closeEndFunc;
  p_closeEndFunc = (CGThumbnailListItem_o *)&this->fields.closeEndFunc;
  v6 = closeEndFunc;
  if ( closeEndFunc )
  {
    p_closeEndFunc->klass = 0LL;
    sub_1B4CF34(p_closeEndFunc, 0, v3, v4);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v6->fields.m_target)(
      v6->fields.original_method_info,
      *(_QWORD *)&v6->fields.extra_arg);
  }
}


void __fastcall NotificationIconDialog__EndOpen(NotificationIconDialog_o *this, const MethodInfo *method)
{
  this->fields.isButtonEnable = 1;
}


void __fastcall NotificationIconDialog__Init(NotificationIconDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *titleLabel; // x20
  __int64 v5; // x1
  UILabel_o *gameObject; // x0
  UnityEngine_Object_o *messageLabel; // x20
  UnityEngine_Object_o *okBtnLabel; // x20

  if ( (byte_49BEB94 & 1) == 0 )
  {
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, method);
    sub_1B4CF90(&StringLiteral_1/*""*/, v3);
    byte_49BEB94 = 1;
  }
  titleLabel = (UnityEngine_Object_o *)this->fields.titleLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(titleLabel, 0LL, 0LL) )
  {
    gameObject = this->fields.titleLabel;
    if ( !gameObject )
      goto LABEL_20;
    UILabel__set_text(gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  messageLabel = (UnityEngine_Object_o *)this->fields.messageLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(messageLabel, 0LL, 0LL) )
  {
    gameObject = this->fields.messageLabel;
    if ( !gameObject )
      goto LABEL_20;
    UILabel__set_text(gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  okBtnLabel = (UnityEngine_Object_o *)this->fields.okBtnLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(okBtnLabel, 0LL, 0LL) )
  {
    gameObject = this->fields.okBtnLabel;
    if ( !gameObject )
      goto LABEL_20;
    UILabel__set_text(gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  gameObject = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
LABEL_20:
    sub_1B4D1EC(gameObject, v5);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall NotificationIconDialog__OnClickOk(NotificationIconDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  struct System_Action_o *clickFunc; // x8

  if ( (byte_49BEB97 & 1) == 0 )
  {
    sub_1B4CF90(&Method_NotificationIconDialog_OnClickOk__, method);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    byte_49BEB97 = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v4 = Method_NotificationIconDialog_OnClickOk__;
    if ( (*((_BYTE *)Method_NotificationIconDialog_OnClickOk__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1B4CFA8(Method_NotificationIconDialog_OnClickOk__);
    v5 = (System_Reflection_MethodBase_o *)sub_1B4CF74(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, this->fields.onClickOkSeKind, 0, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      sub_1B4D1EC(0LL, v7);
    CommonUI__CloseNotificationIconDialog((CommonUI_o *)Instance, 0LL, 0LL);
    clickFunc = this->fields.clickFunc;
    if ( clickFunc )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))clickFunc->fields.m_target)(
        clickFunc->fields.original_method_info,
        *(_QWORD *)&clickFunc->fields.extra_arg);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall NotificationIconDialog__Open(
        NotificationIconDialog_o *this,
        System_String_o *title,
        System_String_o *message,
        int32_t type,
        int32_t objectId,
        System_Action_o *func,
        const MethodInfo *method)
{
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  UnityEngine_Object_o *titleLabel; // x24
  __int64 v19; // x1
  UILabel_o *v20; // x0
  System_String_o *v21; // x1
  UnityEngine_Object_o *messageLabel; // x23
  System_String_o *v23; // x1
  UnityEngine_Object_o *okBtnLabel; // x22
  UILabel_o *v25; // x22
  UnityEngine_Object_o *itemIconComponent; // x22
  System_Action_o *v27; // x20

  if ( (byte_49BEB95 & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_TypeInfo, title);
    sub_1B4CF90(&LocalizationManager_TypeInfo, v13);
    sub_1B4CF90(&Method_NotificationIconDialog_EndOpen__, v14);
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, v15);
    sub_1B4CF90(&StringLiteral_3657/*"COMMON_CONFIRM_CLOSE"*/, v16);
    sub_1B4CF90(&StringLiteral_1/*""*/, v17);
    byte_49BEB95 = 1;
  }
  this->fields.clickFunc = func;
  sub_1B4CF34(
    (CGThumbnailListItem_o *)&this->fields.clickFunc,
    (int32_t)func,
    (int32_t)message,
    *(const MethodInfo **)&type);
  titleLabel = (UnityEngine_Object_o *)this->fields.titleLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(titleLabel, 0LL, 0LL) )
  {
    v20 = this->fields.titleLabel;
    if ( !v20 )
      goto LABEL_32;
    if ( title )
      v21 = title;
    else
      v21 = (System_String_o *)StringLiteral_1/*""*/;
    UILabel__set_text(v20, v21, 0LL);
  }
  messageLabel = (UnityEngine_Object_o *)this->fields.messageLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(messageLabel, 0LL, 0LL) )
  {
    v20 = this->fields.messageLabel;
    if ( !v20 )
      goto LABEL_32;
    if ( message )
      v23 = message;
    else
      v23 = (System_String_o *)StringLiteral_1/*""*/;
    WrapControlText__textAdjust(v20, v23, v20->fields.mFontSize, 0, 0LL);
  }
  okBtnLabel = (UnityEngine_Object_o *)this->fields.okBtnLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(okBtnLabel, 0LL, 0LL) )
  {
    v25 = this->fields.okBtnLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v20 = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3657/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
    if ( !v25 )
      goto LABEL_32;
    UILabel__set_text(v25, (System_String_o *)v20, 0LL);
  }
  itemIconComponent = (UnityEngine_Object_o *)this->fields.itemIconComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(itemIconComponent, 0LL, 0LL) )
  {
    v20 = (UILabel_o *)this->fields.itemIconComponent;
    if ( v20 )
    {
      ItemIconComponent__SetGift_38682396((ItemIconComponent_o *)v20, type, objectId, -1, 0, 0LL);
      goto LABEL_31;
    }
LABEL_32:
    sub_1B4D1EC(v20, v19);
  }
LABEL_31:
  this->fields.isButtonEnable = 0;
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, 1, 0LL);
  v27 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
  System_Action___ctor(v27, (Il2CppObject *)this, Method_NotificationIconDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v27, 0, 0LL);
}


System_String_o *__fastcall NotificationIconDialog__get_closeBtnPath(
        NotificationIconDialog_o *this,
        const MethodInfo *method)
{
  if ( (byte_49BEB98 & 1) == 0 )
  {
    sub_1B4CF90(&StringLiteral_15352/*"Window/OkBtn"*/, method);
    byte_49BEB98 = 1;
  }
  return (System_String_o *)StringLiteral_15352/*"Window/OkBtn"*/;
}