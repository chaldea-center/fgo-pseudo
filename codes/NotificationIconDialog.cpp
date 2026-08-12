void NotificationIconDialog___ctor(NotificationIconDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_596A85D & 1) == 0 )
  {
    sub_2213A60(&BaseDialog_TypeInfo);
    byte_596A85D = 1;
  }
  if ( !*(&BaseDialog_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, method, v2);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void NotificationIconDialog__Close(NotificationIconDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  NotificationIconDialog__Close_38428316(this, 0, v2);
}


void NotificationIconDialog__Close_38428316(
        NotificationIconDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  System_Action_c *v10; // x0
  System_Action_o *v11; // x20

  if ( (byte_596A85A & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_NotificationIconDialog_EndClose__);
    byte_596A85A = 1;
  }
  this->fields.closeEndFunc = callback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.closeEndFunc,
    (int32_t)callback,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  v10 = System_Action_TypeInfo;
  this->fields.isButtonEnable = 0;
  v11 = (System_Action_o *)sub_2213CCC(v10);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_NotificationIconDialog_EndClose__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v11, 0);
}


void NotificationIconDialog__EndClose(NotificationIconDialog_o *this, const MethodInfo *method)
{
  System_String_o *v3; // x2
  System_String_o *v4; // x3
  int32_t v5; // w4
  int32_t v6; // w5
  bool v7; // w6
  bool v8; // w7
  MissionNaviTransitionBoardItem_o *p_closeEndFunc; // x19
  struct System_Action_o *v10; // x20
  struct System_Action_o *closeEndFunc; // t1

  NotificationIconDialog__Init(this, method);
  closeEndFunc = this->fields.closeEndFunc;
  p_closeEndFunc = (MissionNaviTransitionBoardItem_o *)&this->fields.closeEndFunc;
  v10 = closeEndFunc;
  if ( closeEndFunc )
  {
    p_closeEndFunc->klass = 0;
    sub_2213A04(p_closeEndFunc, 0, v3, v4, v5, v6, v7, v8);
    ((void (__fastcall *)(intptr_t, intptr_t))v10->fields.invoke_impl)(v10->fields.method_code, v10->fields.method);
  }
}


void NotificationIconDialog__EndOpen(NotificationIconDialog_o *this, const MethodInfo *method)
{
  this->fields.isButtonEnable = 1;
}


void NotificationIconDialog__Init(NotificationIconDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *titleLabel; // x20
  __int64 v5; // x1
  __int64 v6; // x2
  UILabel_o *gameObject; // x0
  UnityEngine_Object_o *messageLabel; // x20
  __int64 v9; // x2
  UnityEngine_Object_o *okBtnLabel; // x20

  if ( (byte_596A858 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596A858 = 1;
  }
  titleLabel = (UnityEngine_Object_o *)this->fields.titleLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Inequality(titleLabel, 0, 0) )
  {
    gameObject = this->fields.titleLabel;
    if ( !gameObject )
      goto LABEL_20;
    UILabel__set_text(gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
  }
  messageLabel = (UnityEngine_Object_o *)this->fields.messageLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v6);
  if ( UnityEngine_Object__op_Inequality(messageLabel, 0, 0) )
  {
    gameObject = this->fields.messageLabel;
    if ( !gameObject )
      goto LABEL_20;
    UILabel__set_text(gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
  }
  okBtnLabel = (UnityEngine_Object_o *)this->fields.okBtnLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v9);
  if ( UnityEngine_Object__op_Inequality(okBtnLabel, 0, 0) )
  {
    gameObject = this->fields.okBtnLabel;
    if ( !gameObject )
      goto LABEL_20;
    UILabel__set_text(gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
  }
  gameObject = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
LABEL_20:
    sub_2213CDC(gameObject, v5);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


void NotificationIconDialog__OnClickOk(NotificationIconDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  struct System_Action_o *clickFunc; // x8

  if ( (byte_596A85B & 1) == 0 )
  {
    sub_2213A60(&Method_NotificationIconDialog_OnClickOk__);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_596A85B = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v3 = Method_NotificationIconDialog_OnClickOk__;
    if ( (*((_BYTE *)Method_NotificationIconDialog_OnClickOk__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_NotificationIconDialog_OnClickOk__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, this->fields.onClickOkSeKind, 0, 0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      sub_2213CDC(0, v6);
    CommonUI__CloseNotificationIconDialog((CommonUI_o *)Instance, 0, 0);
    clickFunc = this->fields.clickFunc;
    if ( clickFunc )
      ((void (__fastcall *)(intptr_t, intptr_t))clickFunc->fields.invoke_impl)(
        clickFunc->fields.method_code,
        clickFunc->fields.method);
  }
}


// local variable allocation has failed, the output may be wrong!
void NotificationIconDialog__Open(
        NotificationIconDialog_o *this,
        System_String_o *title,
        System_String_o *message,
        int32_t type,
        int32_t objectId,
        System_Action_o *func,
        const MethodInfo *method)
{
  bool v7; // w7
  __int64 v14; // x1
  __int64 v15; // x2
  UnityEngine_Object_o *titleLabel; // x24
  __int64 v17; // x1
  __int64 v18; // x2
  UILabel_o *v19; // x0
  System_String_o *v20; // x1
  UnityEngine_Object_o *messageLabel; // x23
  __int64 v22; // x2
  System_String_o *v23; // x1
  UnityEngine_Object_o *okBtnLabel; // x22
  __int64 v25; // x1
  __int64 v26; // x2
  UILabel_o *v27; // x22
  UnityEngine_Object_o *itemIconComponent; // x22
  System_Action_o *v29; // x20

  if ( (byte_596A859 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&Method_NotificationIconDialog_EndOpen__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_3828/*"COMMON_CONFIRM_CLOSE"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596A859 = 1;
  }
  this->fields.clickFunc = func;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.clickFunc,
    (int32_t)func,
    message,
    *(System_String_o **)&type,
    objectId,
    (int32_t)func,
    (bool)method,
    v7);
  titleLabel = (UnityEngine_Object_o *)this->fields.titleLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v14, v15);
  if ( UnityEngine_Object__op_Inequality(titleLabel, 0, 0) )
  {
    v19 = this->fields.titleLabel;
    if ( !v19 )
      goto LABEL_32;
    if ( title )
      v20 = title;
    else
      v20 = (System_String_o *)StringLiteral_1/*""*/;
    UILabel__set_text(v19, v20, 0);
  }
  messageLabel = (UnityEngine_Object_o *)this->fields.messageLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v17, v18);
  if ( UnityEngine_Object__op_Inequality(messageLabel, 0, 0) )
  {
    v19 = this->fields.messageLabel;
    if ( !v19 )
      goto LABEL_32;
    if ( message )
      v23 = message;
    else
      v23 = (System_String_o *)StringLiteral_1/*""*/;
    WrapControlText__textAdjust(v19, v23, v19->fields.mFontSize, 0, 0);
  }
  okBtnLabel = (UnityEngine_Object_o *)this->fields.okBtnLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v17, v22);
  if ( UnityEngine_Object__op_Inequality(okBtnLabel, 0, 0) )
  {
    v27 = this->fields.okBtnLabel;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v25, v26);
    v19 = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3828/*"COMMON_CONFIRM_CLOSE"*/, 0);
    if ( !v27 )
      goto LABEL_32;
    UILabel__set_text(v27, (System_String_o *)v19, 0);
  }
  itemIconComponent = (UnityEngine_Object_o *)this->fields.itemIconComponent;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v25, v26);
  if ( UnityEngine_Object__op_Inequality(itemIconComponent, 0, 0) )
  {
    v19 = (UILabel_o *)this->fields.itemIconComponent;
    if ( v19 )
    {
      ItemIconComponent__SetGift_47884936((ItemIconComponent_o *)v19, type, objectId, -1, 0, 0);
      goto LABEL_31;
    }
LABEL_32:
    sub_2213CDC(v19, v17);
  }
LABEL_31:
  this->fields.isButtonEnable = 0;
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, 1, 0);
  v29 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v29, (Il2CppObject *)this, Method_NotificationIconDialog_EndOpen__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v29, 0, 0, 0);
}


System_String_o *NotificationIconDialog__get_closeBtnPath(NotificationIconDialog_o *this, const MethodInfo *method)
{
  if ( (byte_596A85C & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_16270/*"Window/OkBtn"*/);
    byte_596A85C = 1;
  }
  return (System_String_o *)StringLiteral_16270/*"Window/OkBtn"*/;
}