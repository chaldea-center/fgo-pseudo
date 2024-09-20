void __fastcall NotificationIconDialog___ctor(NotificationIconDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4A5EC0C & 1) == 0 )
  {
    sub_1B885B0(&BaseDialog_TypeInfo);
    byte_4A5EC0C = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall NotificationIconDialog__Close(NotificationIconDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  NotificationIconDialog__Close_45254588(this, 0LL, v2);
}


void __fastcall NotificationIconDialog__Close_45254588(
        NotificationIconDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_Action_o *v6; // x20

  if ( (byte_4A5EC09 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_NotificationIconDialog_EndClose__);
    byte_4A5EC09 = 1;
  }
  this->fields.closeEndFunc = callback;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.closeEndFunc, (int32_t)callback, (int32_t)method, v3);
  this->fields.isButtonEnable = 0;
  v6 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_NotificationIconDialog_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v6, 0LL);
}


void __fastcall NotificationIconDialog__EndClose(NotificationIconDialog_o *this, const MethodInfo *method)
{
  int32_t v3; // w2
  int32_t v4; // w3
  ServantStatusBattleListViewItem_o *p_closeEndFunc; // x19
  struct System_Action_o *v6; // x20
  struct System_Action_o *closeEndFunc; // t1

  NotificationIconDialog__Init(this, method);
  closeEndFunc = this->fields.closeEndFunc;
  p_closeEndFunc = (ServantStatusBattleListViewItem_o *)&this->fields.closeEndFunc;
  v6 = closeEndFunc;
  if ( closeEndFunc )
  {
    p_closeEndFunc->klass = 0LL;
    sub_1B88554(p_closeEndFunc, 0, v3, v4);
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
  UnityEngine_Object_o *titleLabel; // x20
  __int64 v4; // x1
  UILabel_o *gameObject; // x0
  UnityEngine_Object_o *messageLabel; // x20
  UnityEngine_Object_o *okBtnLabel; // x20

  if ( (byte_4A5EC07 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5EC07 = 1;
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
    sub_1B8880C(gameObject, v4);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall NotificationIconDialog__OnClickOk(NotificationIconDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  struct System_Action_o *clickFunc; // x8

  if ( (byte_4A5EC0A & 1) == 0 )
  {
    sub_1B885B0(&Method_NotificationIconDialog_OnClickOk__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A5EC0A = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v3 = Method_NotificationIconDialog_OnClickOk__;
    if ( (*((_BYTE *)Method_NotificationIconDialog_OnClickOk__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_NotificationIconDialog_OnClickOk__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, this->fields.onClickOkSeKind, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      sub_1B8880C(0LL, v6);
    CommonUI__CloseNotificationIconDialog((CommonUI_o *)Instance, 0LL, 0LL);
    clickFunc = this->fields.clickFunc;
    if ( clickFunc )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))clickFunc->fields.m_target)(
        clickFunc->fields.original_method_info,
        *(_QWORD *)&clickFunc->fields.extra_arg);
  }
}


void __fastcall NotificationIconDialog__Open(
        NotificationIconDialog_o *this,
        System_String_o *title,
        System_String_o *message,
        int32_t type,
        int32_t objectId,
        System_Action_o *func,
        const MethodInfo *method)
{
  UnityEngine_Object_o *titleLabel; // x24
  __int64 v14; // x1
  UILabel_o *v15; // x0
  System_String_o *v16; // x1
  UnityEngine_Object_o *messageLabel; // x23
  System_String_o *v18; // x1
  UnityEngine_Object_o *okBtnLabel; // x22
  UILabel_o *v20; // x22
  UnityEngine_Object_o *itemIconComponent; // x22
  System_Action_o *v22; // x20

  if ( (byte_4A5EC08 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&Method_NotificationIconDialog_EndOpen__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StringLiteral_3756/*"COMMON_CONFIRM_CLOSE"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5EC08 = 1;
  }
  this->fields.clickFunc = func;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.clickFunc, (int32_t)func, (int32_t)message, type);
  titleLabel = (UnityEngine_Object_o *)this->fields.titleLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(titleLabel, 0LL, 0LL) )
  {
    v15 = this->fields.titleLabel;
    if ( !v15 )
      goto LABEL_32;
    if ( title )
      v16 = title;
    else
      v16 = (System_String_o *)StringLiteral_1/*""*/;
    UILabel__set_text(v15, v16, 0LL);
  }
  messageLabel = (UnityEngine_Object_o *)this->fields.messageLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(messageLabel, 0LL, 0LL) )
  {
    v15 = this->fields.messageLabel;
    if ( !v15 )
      goto LABEL_32;
    if ( message )
      v18 = message;
    else
      v18 = (System_String_o *)StringLiteral_1/*""*/;
    WrapControlText__textAdjust(v15, v18, v15->fields.mFontSize, 0, 0, 0LL);
  }
  okBtnLabel = (UnityEngine_Object_o *)this->fields.okBtnLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(okBtnLabel, 0LL, 0LL) )
  {
    v20 = this->fields.okBtnLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v15 = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3756/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
    if ( !v20 )
      goto LABEL_32;
    UILabel__set_text(v20, (System_String_o *)v15, 0LL);
  }
  itemIconComponent = (UnityEngine_Object_o *)this->fields.itemIconComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(itemIconComponent, 0LL, 0LL) )
  {
    v15 = (UILabel_o *)this->fields.itemIconComponent;
    if ( v15 )
    {
      ItemIconComponent__SetGift_38144896((ItemIconComponent_o *)v15, type, objectId, -1, 0, 0LL);
      goto LABEL_31;
    }
LABEL_32:
    sub_1B8880C(v15, v14);
  }
LABEL_31:
  this->fields.isButtonEnable = 0;
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, 1, 0LL);
  v22 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v22, (Il2CppObject *)this, Method_NotificationIconDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v22, 0, 0LL);
}


System_String_o *__fastcall NotificationIconDialog__get_closeBtnPath(
        NotificationIconDialog_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A5EC0B & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_15652/*"Window/OkBtn"*/);
    byte_4A5EC0B = 1;
  }
  return (System_String_o *)StringLiteral_15652/*"Window/OkBtn"*/;
}