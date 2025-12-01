void AssistEffectConfirmDialog___ctor(AssistEffectConfirmDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4CC107D & 1) == 0 )
  {
    sub_1C713B0(&BaseDialog_TypeInfo);
    byte_4CC107D = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, method);
}


void AssistEffectConfirmDialog__Init(AssistEffectConfirmDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UILabel_o *titleLabel; // x0
  UILabel_o *closeLabel; // x20

  if ( (byte_4CC1079 & 1) == 0 )
  {
    sub_1C713B0(&LocalizationManager_TypeInfo);
    sub_1C713B0(&StringLiteral_3680/*"COMMON_CONFIRM_CLOSE"*/);
    sub_1C713B0(&StringLiteral_1/*""*/);
    byte_4CC1079 = 1;
  }
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, method);
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel )
    goto LABEL_10;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  titleLabel = this->fields.messageLabel;
  if ( !titleLabel )
    goto LABEL_10;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  titleLabel = this->fields.noDataLabel;
  if ( !titleLabel )
    goto LABEL_10;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  closeLabel = this->fields.closeLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  titleLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3680/*"COMMON_CONFIRM_CLOSE"*/, 0);
  if ( !closeLabel )
LABEL_10:
    sub_1C71608(titleLabel, v3);
  UILabel__set_text(closeLabel, (System_String_o *)titleLabel, 0);
  this->fields.closeCallback = 0;
  sub_1C71354(&this->fields.closeCallback, 0);
}


void AssistEffectConfirmDialog__OnClickCloseButton(AssistEffectConfirmDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  struct AssistEffectConfirmDialog_ClickDelegate_o *closeCallback; // x8

  if ( (byte_4CC107B & 1) == 0 )
  {
    sub_1C713B0(&Method_AssistEffectConfirmDialog_OnClickCloseButton__);
    byte_4CC107B = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 4;
    v3 = Method_AssistEffectConfirmDialog_OnClickCloseButton__;
    if ( (*((_BYTE *)Method_AssistEffectConfirmDialog_OnClickCloseButton__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C713C8();
    v4 = (System_Reflection_MethodBase_o *)sub_1C71394(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    closeCallback = this->fields.closeCallback;
    if ( closeCallback )
      ((void (__fastcall *)(intptr_t, intptr_t))closeCallback->fields.invoke_impl)(
        closeCallback->fields.method_code,
        closeCallback->fields.method);
  }
}


void AssistEffectConfirmDialog__Open(
        AssistEffectConfirmDialog_o *this,
        AssistEffectConfirmDialog_ClickDelegate_o *closeCallback,
        int32_t eventId,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v8; // x1
  UILabel_o *titleLabel; // x22
  UILabel_o *messageLabel; // x22
  UnityEngine_Object_o *listViewManager; // x21
  const MethodInfo *v12; // x2
  UILabel_o *noDataLabel; // x20
  bool v14; // w1
  System_Action_o *v15; // x20
  const MethodInfo *v16; // x4

  if ( (byte_4CC107A & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&Method_AssistEffectConfirmDialog__Open_b__11_0__);
    sub_1C713B0(&LocalizationManager_TypeInfo);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&StringLiteral_5516/*"EVENT_ASSIST_SKILL_CONFIRM_DIALOG_NO_DATA"*/);
    sub_1C713B0(&StringLiteral_5515/*"EVENT_ASSIST_SKILL_CONFIRM_DIALOG_MESSAGE"*/);
    sub_1C713B0(&StringLiteral_5517/*"EVENT_ASSIST_SKILL_CONFIRM_DIALOG_TITLE"*/);
    byte_4CC107A = 1;
  }
  AssistEffectConfirmDialog__Init(this, (const MethodInfo *)closeCallback);
  this->fields.state = 1;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_24;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5517/*"EVENT_ASSIST_SKILL_CONFIRM_DIALOG_TITLE"*/, 0);
  if ( !titleLabel )
    goto LABEL_24;
  UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0);
  messageLabel = this->fields.messageLabel;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5515/*"EVENT_ASSIST_SKILL_CONFIRM_DIALOG_MESSAGE"*/, 0);
  if ( !messageLabel )
    goto LABEL_24;
  UILabel__set_text(messageLabel, (System_String_o *)gameObject, 0);
  this->fields.closeCallback = closeCallback;
  sub_1C71354(&this->fields.closeCallback, closeCallback);
  listViewManager = (UnityEngine_Object_o *)this->fields.listViewManager;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(listViewManager, 0, 0) )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.listViewManager;
    if ( gameObject )
    {
      gameObject = (UnityEngine_GameObject_o *)AssistEffectListViewManager__CreateList(
                                                 (AssistEffectListViewManager_o *)gameObject,
                                                 eventId,
                                                 v12);
      noDataLabel = this->fields.noDataLabel;
      if ( (_DWORD)gameObject )
      {
        if ( noDataLabel )
        {
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.noDataLabel, 0);
          if ( gameObject )
          {
            v14 = 0;
LABEL_22:
            UnityEngine_GameObject__SetActive(gameObject, v14, 0);
            goto LABEL_23;
          }
        }
      }
      else
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5516/*"EVENT_ASSIST_SKILL_CONFIRM_DIALOG_NO_DATA"*/, 0);
        if ( noDataLabel )
        {
          UILabel__set_text(noDataLabel, (System_String_o *)gameObject, 0);
          gameObject = (UnityEngine_GameObject_o *)this->fields.noDataLabel;
          if ( gameObject )
          {
            gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
            if ( gameObject )
            {
              v14 = 1;
              goto LABEL_22;
            }
          }
        }
      }
    }
LABEL_24:
    sub_1C71608(gameObject, v8);
  }
LABEL_23:
  v15 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
  System_Action___ctor(v15, (Il2CppObject *)this, Method_AssistEffectConfirmDialog__Open_b__11_0__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v15, 0, 0, v16);
}


void AssistEffectConfirmDialog___Open_b__11_0(AssistEffectConfirmDialog_o *this, const MethodInfo *method)
{
  this->fields.state = 2;
}


UnityEngine_GameObject_o *AssistEffectConfirmDialog__get_closeBtnObject(
        AssistEffectConfirmDialog_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *closeButton; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *v6; // x0

  if ( (byte_4CC107C & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC107C = 1;
  }
  closeButton = (UnityEngine_Object_o *)this->fields.closeButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(closeButton, 0, 0) )
    return 0;
  v6 = (UnityEngine_Component_o *)this->fields.closeButton;
  if ( !v6 )
    sub_1C71608(0, v4);
  return UnityEngine_Component__get_gameObject(v6, 0);
}


void AssistEffectConfirmDialog_ClickDelegate___ctor(
        AssistEffectConfirmDialog_ClickDelegate_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  intptr_t v4; // x8
  int v8; // w22
  Il2CppObject *m_target; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v4;
  this->fields.m_target = object;
  sub_1C71354(&this->fields.m_target, object);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C71470(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C71624(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C714D8(v10, 0);
    }
    goto LABEL_5;
  }
  if ( v8 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1A9D6F8;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A9D6B8;
}


System_IAsyncResult_o *AssistEffectConfirmDialog_ClickDelegate__BeginInvoke(
        AssistEffectConfirmDialog_ClickDelegate_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  v5 = 0;
  return (System_IAsyncResult_o *)sub_1C71364(this, &v5, callback, object);
}


void AssistEffectConfirmDialog_ClickDelegate__EndInvoke(
        AssistEffectConfirmDialog_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C71368(result, 0, method);
}


void AssistEffectConfirmDialog_ClickDelegate__Invoke(
        AssistEffectConfirmDialog_ClickDelegate_o *this,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, intptr_t))this->fields.invoke_impl)(this->fields.method_code, this->fields.method);
}