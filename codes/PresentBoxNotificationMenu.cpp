void PresentBoxNotificationMenu___ctor(PresentBoxNotificationMenu_o *this, const MethodInfo *method)
{
  if ( (byte_4CE84A7 & 1) == 0 )
  {
    sub_1C7BAE8(&BaseDialog_TypeInfo);
    byte_4CE84A7 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void PresentBoxNotificationMenu__BackBuyBankItem(PresentBoxNotificationMenu_o *this, const MethodInfo *method)
{
  if ( (byte_4CE84A3 & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_9968/*"OnMoveEnd"*/);
    byte_4CE84A3 = 1;
  }
  if ( this->fields.state == 4 )
  {
    this->fields.state = 5;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9968/*"OnMoveEnd"*/,
      0.1,
      0);
  }
}


void PresentBoxNotificationMenu__Callback(PresentBoxNotificationMenu_o *this, int32_t result, const MethodInfo *method)
{
  struct PresentBoxNotificationMenu_CallbackFunc_o **p_callbackFunc; // x0
  struct PresentBoxNotificationMenu_CallbackFunc_o *v4; // x20
  struct PresentBoxNotificationMenu_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v4 = callbackFunc;
  *p_callbackFunc = 0;
  sub_1C7BA8C(p_callbackFunc, 0);
  if ( callbackFunc )
    ((void (__fastcall *)(intptr_t, _QWORD, intptr_t))v4->fields.invoke_impl)(
      v4->fields.method_code,
      (unsigned int)result,
      v4->fields.method);
}


void PresentBoxNotificationMenu__Close(
        PresentBoxNotificationMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_Action_o *v5; // x20

  if ( (byte_4CE84A2 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&Method_PresentBoxNotificationMenu_OnMoveEnd__);
    byte_4CE84A2 = 1;
  }
  if ( this->fields.state )
  {
    this->fields.closeCallbackFunc = callback;
    sub_1C7BA8C(&this->fields.closeCallbackFunc, callback);
    this->fields.state = 5;
    v5 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
    System_Action___ctor(v5, (Il2CppObject *)this, Method_PresentBoxNotificationMenu_OnMoveEnd__, 0);
    BaseDialog__Close((BaseDialog_o *)this, v5, 0);
  }
  else if ( callback )
  {
    ((void (__fastcall *)(intptr_t, intptr_t))callback->fields.invoke_impl)(
      callback->fields.method_code,
      callback->fields.method);
  }
}


void PresentBoxNotificationMenu__Init(PresentBoxNotificationMenu_o *this, const MethodInfo *method)
{
  UILabel_o *message1Label; // x0

  if ( (byte_4CE84A0 & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_1/*""*/);
    byte_4CE84A0 = 1;
  }
  message1Label = this->fields.message1Label;
  if ( !message1Label
    || (UILabel__set_text(message1Label, (System_String_o *)StringLiteral_1/*""*/, 0),
        (message1Label = this->fields.message2Label) == 0)
    || (UILabel__set_text(message1Label, (System_String_o *)StringLiteral_1/*""*/, 0),
        (message1Label = this->fields.closeLabel) == 0)
    || (UILabel__set_text(message1Label, (System_String_o *)StringLiteral_1/*""*/, 0),
        (message1Label = (UILabel_o *)this->fields.ItemListViewManager) == 0) )
  {
    sub_1C7BD40(message1Label, method);
  }
  ListViewManager__DestroyList((ListViewManager_o *)message1Label, 0);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


void PresentBoxNotificationMenu__OnClickClose(PresentBoxNotificationMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4CE84A5 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_PresentBoxNotificationMenu_OnClickClose__);
    byte_4CE84A5 = 1;
  }
  v3 = Method_PresentBoxNotificationMenu_OnClickClose__;
  if ( (*((_BYTE *)Method_PresentBoxNotificationMenu_OnClickClose__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C7BB00(Method_PresentBoxNotificationMenu_OnClickClose__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C7BACC(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
  PresentBoxNotificationMenu__Callback(this, 0, v5);
}


void PresentBoxNotificationMenu__OnMoveEnd(PresentBoxNotificationMenu_o *this, const MethodInfo *method)
{
  int32_t v3; // w8
  struct PresentBoxNotificationListViewManager_o *ItemListViewManager; // x20
  PresentBoxNotificationListViewManager_CallbackFunc_o *v5; // x21
  const MethodInfo *v6; // x3
  __int64 v7; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x2
  struct System_Action_o **p_closeCallbackFunc; // x19
  struct System_Action_o *v11; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  if ( (byte_4CE84A4 & 1) == 0 )
  {
    sub_1C7BAE8(&PresentBoxNotificationListViewManager_CallbackFunc_TypeInfo);
    sub_1C7BAE8(&Method_PresentBoxNotificationMenu_OnSelectBuyItem__);
    byte_4CE84A4 = 1;
  }
  switch ( this->fields.state )
  {
    case 2:
      v3 = 3;
      goto LABEL_6;
    case 3:
      this->fields.state = 4;
      ItemListViewManager = this->fields.ItemListViewManager;
      v5 = (PresentBoxNotificationListViewManager_CallbackFunc_o *)sub_1C7BD34(PresentBoxNotificationListViewManager_CallbackFunc_TypeInfo);
      PresentBoxNotificationListViewManager_CallbackFunc___ctor(
        v5,
        (Il2CppObject *)this,
        Method_PresentBoxNotificationMenu_OnSelectBuyItem__,
        v6);
      if ( !ItemListViewManager )
        sub_1C7BD40(v7, v8);
      ItemListViewManager->fields.callbackFunc = v5;
      sub_1C7BA8C(&ItemListViewManager->fields.callbackFunc, v5);
      PresentBoxNotificationListViewManager__SetMode_31660284(ItemListViewManager, 1, v9);
      break;
    case 5:
      v3 = 6;
LABEL_6:
      this->fields.state = v3;
      break;
    case 6:
      PresentBoxNotificationMenu__Init(this, method);
      closeCallbackFunc = this->fields.closeCallbackFunc;
      p_closeCallbackFunc = &this->fields.closeCallbackFunc;
      v11 = closeCallbackFunc;
      if ( closeCallbackFunc )
      {
        *p_closeCallbackFunc = 0;
        sub_1C7BA8C(p_closeCallbackFunc, 0);
        ((void (__fastcall *)(intptr_t, intptr_t))v11->fields.invoke_impl)(v11->fields.method_code, v11->fields.method);
      }
      break;
    default:
      return;
  }
}


void PresentBoxNotificationMenu__OnSelectBuyItem(
        PresentBoxNotificationMenu_o *this,
        int32_t n,
        const MethodInfo *method)
{
  this->fields.selectItemNum = n;
}


void PresentBoxNotificationMenu__Open(
        PresentBoxNotificationMenu_o *this,
        UserPresentBoxEntity_array *presentList,
        PresentBoxNotificationMenu_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v8; // x1
  UILabel_o *message1Label; // x21
  UILabel_o *message2Label; // x21
  UILabel_o *closeLabel; // x21
  const MethodInfo *v12; // x3
  System_Action_o *v13; // x20

  if ( (byte_4CE84A1 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    sub_1C7BAE8(&Method_PresentBoxNotificationMenu_OnMoveEnd__);
    sub_1C7BAE8(&StringLiteral_10472/*"PRESENT_BOX_NOTIFICATION_MESSAGE2"*/);
    sub_1C7BAE8(&StringLiteral_10471/*"PRESENT_BOX_NOTIFICATION_MESSAGE1"*/);
    sub_1C7BAE8(&StringLiteral_10470/*"PRESENT_BOX_NOTIFICATION_CLOSE"*/);
    byte_4CE84A1 = 1;
  }
  if ( !this->fields.state )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !gameObject )
      goto LABEL_13;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0);
    this->fields.callbackFunc = callback;
    sub_1C7BA8C(&this->fields.callbackFunc, callback);
    gameObject = (UnityEngine_GameObject_o *)this->fields.ItemListViewManager;
    if ( !gameObject )
      goto LABEL_13;
    ListViewManager__set_IsInput((ListViewManager_o *)gameObject, 0, 0);
    message1Label = this->fields.message1Label;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10471/*"PRESENT_BOX_NOTIFICATION_MESSAGE1"*/, 0);
    if ( !message1Label )
      goto LABEL_13;
    UILabel__set_text(message1Label, (System_String_o *)gameObject, 0);
    message2Label = this->fields.message2Label;
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10472/*"PRESENT_BOX_NOTIFICATION_MESSAGE2"*/, 0);
    if ( !message2Label
      || (UILabel__set_text(message2Label, (System_String_o *)gameObject, 0),
          closeLabel = this->fields.closeLabel,
          gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10470/*"PRESENT_BOX_NOTIFICATION_CLOSE"*/, 0),
          !closeLabel)
      || (UILabel__set_text(closeLabel, (System_String_o *)gameObject, 0),
          (gameObject = (UnityEngine_GameObject_o *)this->fields.ItemListViewManager) == 0) )
    {
LABEL_13:
      sub_1C7BD40(gameObject, v8);
    }
    PresentBoxNotificationListViewManager__CreateList(
      (PresentBoxNotificationListViewManager_o *)gameObject,
      0,
      presentList,
      v12);
    this->fields.state = 2;
    v13 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
    System_Action___ctor(v13, (Il2CppObject *)this, Method_PresentBoxNotificationMenu_OnMoveEnd__, 0);
    BaseDialog__Open((BaseDialog_o *)this, v13, 0, 0, 0);
  }
}


void PresentBoxNotificationMenu__add_callbackFunc(
        PresentBoxNotificationMenu_o *this,
        PresentBoxNotificationMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct PresentBoxNotificationMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct PresentBoxNotificationMenu_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  PresentBoxNotificationMenu_o *v11; // x0
  PresentBoxNotificationMenu_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_4CE849E & 1) == 0 )
  {
    sub_1C7BAE8(&PresentBoxNotificationMenu_CallbackFunc_TypeInfo);
    byte_4CE849E = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (PresentBoxNotificationMenu_CallbackFunc_c *)v8->klass != PresentBoxNotificationMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1CD78BC(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (PresentBoxNotificationMenu_o *)sub_1C7C0DC(v8);
  PresentBoxNotificationMenu__remove_callbackFunc(v11, v12, v13);
}


System_String_o *PresentBoxNotificationMenu__get_closeBtnPath(
        PresentBoxNotificationMenu_o *this,
        const MethodInfo *method)
{
  if ( (byte_4CE84A6 & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_8896/*"MainPanel/BaseView/CloseButton"*/);
    byte_4CE84A6 = 1;
  }
  return (System_String_o *)StringLiteral_8896/*"MainPanel/BaseView/CloseButton"*/;
}


void PresentBoxNotificationMenu__remove_callbackFunc(
        PresentBoxNotificationMenu_o *this,
        PresentBoxNotificationMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct PresentBoxNotificationMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct PresentBoxNotificationMenu_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  PresentBoxNotificationMenu_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_4CE849F & 1) == 0 )
  {
    sub_1C7BAE8(&PresentBoxNotificationMenu_CallbackFunc_TypeInfo);
    byte_4CE849F = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (PresentBoxNotificationMenu_CallbackFunc_c *)v8->klass != PresentBoxNotificationMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1CD78BC(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (PresentBoxNotificationMenu_o *)sub_1C7C0DC(v8);
  PresentBoxNotificationMenu__Init(v11, v12);
}


void PresentBoxNotificationMenu_CallbackFunc___ctor(
        PresentBoxNotificationMenu_CallbackFunc_o *this,
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
  sub_1C7BA8C(&this->fields.m_target, object);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C7BBA8(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C7BD5C(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C7BC10(v10, 0);
    }
    goto LABEL_5;
  }
  if ( v8 != 1 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1AA7FD8;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1AA7F90;
}


System_IAsyncResult_o *PresentBoxNotificationMenu_CallbackFunc__BeginInvoke(
        PresentBoxNotificationMenu_CallbackFunc_o *this,
        int32_t result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v9[2]; // [xsp+8h] [xbp-48h] BYREF
  int32_t v10; // [xsp+1Ch] [xbp-34h] BYREF

  v10 = result;
  if ( (byte_4CE84A8 & 1) == 0 )
  {
    sub_1C7BAE8(&PresentBoxNotificationMenu_Result_TypeInfo);
    byte_4CE84A8 = 1;
  }
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(PresentBoxNotificationMenu_Result_TypeInfo, &v10);
  return (System_IAsyncResult_o *)sub_1C7BA9C(this, v9, callback, object);
}


void PresentBoxNotificationMenu_CallbackFunc__EndInvoke(
        PresentBoxNotificationMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C7BAA0(result, 0, method);
}


void PresentBoxNotificationMenu_CallbackFunc__Invoke(
        PresentBoxNotificationMenu_CallbackFunc_o *this,
        int32_t result,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, int32_t, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    result,
    this->fields.method);
}