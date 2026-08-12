void PresentBoxNotificationMenu___ctor(PresentBoxNotificationMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_596A882 & 1) == 0 )
  {
    sub_2213A60(&BaseDialog_TypeInfo);
    byte_596A882 = 1;
  }
  if ( !*(&BaseDialog_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, method, v2);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void PresentBoxNotificationMenu__BackBuyBankItem(PresentBoxNotificationMenu_o *this, const MethodInfo *method)
{
  System_String_o *v3; // x1

  if ( (byte_596A87E & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_10344/*"OnMoveEnd"*/);
    byte_596A87E = 1;
  }
  if ( this->fields.state == 4 )
  {
    v3 = (System_String_o *)StringLiteral_10344/*"OnMoveEnd"*/;
    this->fields.state = 5;
    UnityEngine_MonoBehaviour__Invoke((UnityEngine_MonoBehaviour_o *)this, v3, 0.1, 0);
  }
}


void PresentBoxNotificationMenu__Callback(PresentBoxNotificationMenu_o *this, int32_t result, const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  MissionNaviTransitionBoardItem_o *p_callbackFunc; // x0
  struct PresentBoxNotificationMenu_CallbackFunc_o *v10; // x20
  struct PresentBoxNotificationMenu_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc;
  v10 = callbackFunc;
  p_callbackFunc->klass = 0;
  sub_2213A04(p_callbackFunc, 0, (System_String_o *)method, v3, v4, v5, v6, v7);
  if ( callbackFunc )
    ((void (__fastcall *)(intptr_t, _QWORD, intptr_t))v10->fields.invoke_impl)(
      v10->fields.method_code,
      (unsigned int)result,
      v10->fields.method);
}


void PresentBoxNotificationMenu__Close(
        PresentBoxNotificationMenu_o *this,
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

  if ( (byte_596A87D & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_PresentBoxNotificationMenu_OnMoveEnd__);
    byte_596A87D = 1;
  }
  if ( this->fields.state )
  {
    this->fields.closeCallbackFunc = callback;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.closeCallbackFunc,
      (int32_t)callback,
      (System_String_o *)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    v10 = System_Action_TypeInfo;
    this->fields.state = 5;
    v11 = (System_Action_o *)sub_2213CCC(v10);
    System_Action___ctor(v11, (Il2CppObject *)this, Method_PresentBoxNotificationMenu_OnMoveEnd__, 0);
    BaseDialog__Close((BaseDialog_o *)this, v11, 0);
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

  if ( (byte_596A87B & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596A87B = 1;
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
    sub_2213CDC(message1Label, method);
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

  if ( (byte_596A880 & 1) == 0 )
  {
    sub_2213A60(&Method_PresentBoxNotificationMenu_OnClickClose__);
    byte_596A880 = 1;
  }
  v3 = Method_PresentBoxNotificationMenu_OnClickClose__;
  if ( (*((_BYTE *)Method_PresentBoxNotificationMenu_OnClickClose__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_2213A78(Method_PresentBoxNotificationMenu_OnClickClose__);
  v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
  PresentBoxNotificationMenu__Callback(this, 0, v5);
}


void PresentBoxNotificationMenu__OnMoveEnd(PresentBoxNotificationMenu_o *this, const MethodInfo *method)
{
  int32_t state; // w8
  struct PresentBoxNotificationListViewManager_o *ItemListViewManager; // x20
  PresentBoxNotificationListViewManager_CallbackFunc_o *v5; // x21
  const MethodInfo *v6; // x3
  __int64 v7; // x0
  __int64 v8; // x1
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  const MethodInfo *v15; // x2
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  MissionNaviTransitionBoardItem_o *p_closeCallbackFunc; // x19
  struct System_Action_o *v23; // x20
  struct System_Action_o *closeCallbackFunc; // t1
  int32_t v25; // w8

  if ( (byte_596A87F & 1) == 0 )
  {
    sub_2213A60(&PresentBoxNotificationListViewManager_CallbackFunc_TypeInfo);
    sub_2213A60(&Method_PresentBoxNotificationMenu_OnSelectBuyItem__);
    byte_596A87F = 1;
  }
  state = this->fields.state;
  if ( state <= 4 )
  {
    if ( state != 2 )
    {
      if ( state == 3 )
      {
        ItemListViewManager = this->fields.ItemListViewManager;
        this->fields.state = 4;
        v5 = (PresentBoxNotificationListViewManager_CallbackFunc_o *)sub_2213CCC(PresentBoxNotificationListViewManager_CallbackFunc_TypeInfo);
        PresentBoxNotificationListViewManager_CallbackFunc___ctor(
          v5,
          (Il2CppObject *)this,
          Method_PresentBoxNotificationMenu_OnSelectBuyItem__,
          v6);
        if ( !ItemListViewManager )
          sub_2213CDC(v7, v8);
        ItemListViewManager->fields.callbackFunc = v5;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&ItemListViewManager->fields.callbackFunc,
          (int32_t)v5,
          v9,
          v10,
          v11,
          v12,
          v13,
          v14);
        PresentBoxNotificationListViewManager__SetMode_38433940(ItemListViewManager, 1, v15);
      }
      return;
    }
    v25 = 3;
LABEL_14:
    this->fields.state = v25;
    return;
  }
  if ( state == 5 )
  {
    v25 = 6;
    goto LABEL_14;
  }
  if ( state == 6 )
  {
    PresentBoxNotificationMenu__Init(this, method);
    closeCallbackFunc = this->fields.closeCallbackFunc;
    p_closeCallbackFunc = (MissionNaviTransitionBoardItem_o *)&this->fields.closeCallbackFunc;
    v23 = closeCallbackFunc;
    if ( closeCallbackFunc )
    {
      p_closeCallbackFunc->klass = 0;
      sub_2213A04(p_closeCallbackFunc, 0, v16, v17, v18, v19, v20, v21);
      ((void (__fastcall *)(intptr_t, intptr_t))v23->fields.invoke_impl)(v23->fields.method_code, v23->fields.method);
    }
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
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  __int64 v15; // x1
  __int64 v16; // x2
  UILabel_o *message1Label; // x21
  UILabel_o *message2Label; // x21
  UILabel_o *closeLabel; // x21
  const MethodInfo *v20; // x3
  System_Action_o *v21; // x20

  if ( (byte_596A87C & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&Method_PresentBoxNotificationMenu_OnMoveEnd__);
    sub_2213A60(&StringLiteral_10869/*"PRESENT_BOX_NOTIFICATION_MESSAGE2"*/);
    sub_2213A60(&StringLiteral_10868/*"PRESENT_BOX_NOTIFICATION_MESSAGE1"*/);
    sub_2213A60(&StringLiteral_10867/*"PRESENT_BOX_NOTIFICATION_CLOSE"*/);
    byte_596A87C = 1;
  }
  if ( !this->fields.state )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !gameObject )
      goto LABEL_13;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0);
    this->fields.callbackFunc = callback;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc,
      (int32_t)callback,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14);
    gameObject = (UnityEngine_GameObject_o *)this->fields.ItemListViewManager;
    if ( !gameObject )
      goto LABEL_13;
    ListViewManager__set_IsInput((ListViewManager_o *)gameObject, 0, 0);
    message1Label = this->fields.message1Label;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v15, v16);
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10868/*"PRESENT_BOX_NOTIFICATION_MESSAGE1"*/, 0);
    if ( !message1Label )
      goto LABEL_13;
    UILabel__set_text(message1Label, (System_String_o *)gameObject, 0);
    message2Label = this->fields.message2Label;
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10869/*"PRESENT_BOX_NOTIFICATION_MESSAGE2"*/, 0);
    if ( !message2Label
      || (UILabel__set_text(message2Label, (System_String_o *)gameObject, 0),
          closeLabel = this->fields.closeLabel,
          gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10867/*"PRESENT_BOX_NOTIFICATION_CLOSE"*/, 0),
          !closeLabel)
      || (UILabel__set_text(closeLabel, (System_String_o *)gameObject, 0),
          (gameObject = (UnityEngine_GameObject_o *)this->fields.ItemListViewManager) == 0) )
    {
LABEL_13:
      sub_2213CDC(gameObject, v8);
    }
    PresentBoxNotificationListViewManager__CreateList(
      (PresentBoxNotificationListViewManager_o *)gameObject,
      0,
      presentList,
      v20);
    this->fields.state = 2;
    v21 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(v21, (Il2CppObject *)this, Method_PresentBoxNotificationMenu_OnMoveEnd__, 0);
    BaseDialog__Open((BaseDialog_o *)this, v21, 0, 0, 0);
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
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x0
  bool v12; // zf
  PresentBoxNotificationMenu_o *v13; // x0
  PresentBoxNotificationMenu_CallbackFunc_o *v14; // x1
  const MethodInfo *v15; // x2

  if ( (byte_596A879 & 1) == 0 )
  {
    sub_2213A60(&PresentBoxNotificationMenu_CallbackFunc_TypeInfo);
    byte_596A879 = 1;
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
    v11 = sub_224B48C(p_callbackFunc, v8, v6);
    v12 = v11 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  v13 = (PresentBoxNotificationMenu_o *)sub_221405C(v8, PresentBoxNotificationMenu_CallbackFunc_TypeInfo, v9, v10);
  PresentBoxNotificationMenu__remove_callbackFunc(v13, v14, v15);
}


System_String_o *PresentBoxNotificationMenu__get_closeBtnPath(
        PresentBoxNotificationMenu_o *this,
        const MethodInfo *method)
{
  if ( (byte_596A881 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_9240/*"MainPanel/BaseView/CloseButton"*/);
    byte_596A881 = 1;
  }
  return (System_String_o *)StringLiteral_9240/*"MainPanel/BaseView/CloseButton"*/;
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
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x0
  bool v12; // zf
  PresentBoxNotificationMenu_o *v13; // x0
  const MethodInfo *v14; // x1

  if ( (byte_596A87A & 1) == 0 )
  {
    sub_2213A60(&PresentBoxNotificationMenu_CallbackFunc_TypeInfo);
    byte_596A87A = 1;
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
    v11 = sub_224B48C(p_callbackFunc, v8, v6);
    v12 = v11 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  v13 = (PresentBoxNotificationMenu_o *)sub_221405C(v8, PresentBoxNotificationMenu_CallbackFunc_TypeInfo, v9, v10);
  PresentBoxNotificationMenu__Init(v13, v14);
}


void PresentBoxNotificationMenu_CallbackFunc___ctor(
        PresentBoxNotificationMenu_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    (System_String_o *)method,
    (System_String_o *)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_2213B38(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_2213CF8(0, "Delegate to an instance method cannot have null 'this'.");
      sub_2213BA0(v14, 0);
    }
    goto LABEL_5;
  }
  if ( v12 != 1 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1FFFD50;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1FFFD08;
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
  if ( (byte_596A883 & 1) == 0 )
  {
    sub_2213A60(&PresentBoxNotificationMenu_Result_TypeInfo);
    byte_596A883 = 1;
  }
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(PresentBoxNotificationMenu_Result_TypeInfo, &v10);
  return sub_2213A14(this, v9, callback, object);
}


void PresentBoxNotificationMenu_CallbackFunc__EndInvoke(
        PresentBoxNotificationMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_2213A18(result, 0, method);
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