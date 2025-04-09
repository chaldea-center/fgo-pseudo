void __fastcall PresentBoxNotificationMenu___ctor(PresentBoxNotificationMenu_o *this, const MethodInfo *method)
{
  if ( (byte_49B595B & 1) == 0 )
  {
    sub_1B4CF90(&BaseDialog_TypeInfo, method);
    byte_49B595B = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall PresentBoxNotificationMenu__BackBuyBankItem(
        PresentBoxNotificationMenu_o *this,
        const MethodInfo *method)
{
  if ( (byte_49B5957 & 1) == 0 )
  {
    sub_1B4CF90(&StringLiteral_9737/*"OnMoveEnd"*/, method);
    byte_49B5957 = 1;
  }
  if ( this->fields.state == 4 )
  {
    this->fields.state = 5;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9737/*"OnMoveEnd"*/,
      0.1,
      0LL);
  }
}


void __fastcall PresentBoxNotificationMenu__Callback(
        PresentBoxNotificationMenu_o *this,
        int32_t result,
        const MethodInfo *method)
{
  struct PresentBoxNotificationMenu_CallbackFunc_o **p_callbackFunc; // x0
  struct PresentBoxNotificationMenu_CallbackFunc_o *v4; // x20
  struct PresentBoxNotificationMenu_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v4 = callbackFunc;
  *p_callbackFunc = 0LL;
  sub_1B4CF34(p_callbackFunc);
  if ( callbackFunc )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))v4->fields.m_target)(
      v4->fields.original_method_info,
      (unsigned int)result,
      *(_QWORD *)&v4->fields.extra_arg);
}


void __fastcall PresentBoxNotificationMenu__Close(
        PresentBoxNotificationMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_Action_o *v6; // x20

  if ( (byte_49B5956 & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_TypeInfo, callback);
    sub_1B4CF90(&Method_PresentBoxNotificationMenu_OnMoveEnd__, v5);
    byte_49B5956 = 1;
  }
  if ( this->fields.state )
  {
    this->fields.closeCallbackFunc = callback;
    sub_1B4CF34(&this->fields.closeCallbackFunc);
    this->fields.state = 5;
    v6 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
    System_Action___ctor(v6, (Il2CppObject *)this, Method_PresentBoxNotificationMenu_OnMoveEnd__, 0LL);
    BaseDialog__Close((BaseDialog_o *)this, v6, 0LL);
  }
  else if ( callback )
  {
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))callback->fields.m_target)(
      callback->fields.original_method_info,
      *(_QWORD *)&callback->fields.extra_arg);
  }
}


void __fastcall PresentBoxNotificationMenu__Init(PresentBoxNotificationMenu_o *this, const MethodInfo *method)
{
  UILabel_o *message1Label; // x0

  if ( (byte_49B5954 & 1) == 0 )
  {
    sub_1B4CF90(&StringLiteral_1/*""*/, method);
    byte_49B5954 = 1;
  }
  message1Label = this->fields.message1Label;
  if ( !message1Label
    || (UILabel__set_text(message1Label, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (message1Label = this->fields.message2Label) == 0LL)
    || (UILabel__set_text(message1Label, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (message1Label = this->fields.closeLabel) == 0LL)
    || (UILabel__set_text(message1Label, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (message1Label = (UILabel_o *)this->fields.ItemListViewManager) == 0LL) )
  {
    sub_1B4D1EC(message1Label, method);
  }
  ListViewManager__DestroyList((ListViewManager_o *)message1Label, 0LL);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall PresentBoxNotificationMenu__OnClickClose(PresentBoxNotificationMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_49B5959 & 1) == 0 )
  {
    sub_1B4CF90(&Method_PresentBoxNotificationMenu_OnClickClose__, method);
    byte_49B5959 = 1;
  }
  v3 = Method_PresentBoxNotificationMenu_OnClickClose__;
  if ( (*((_BYTE *)Method_PresentBoxNotificationMenu_OnClickClose__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1B4CFA8();
  v4 = (System_Reflection_MethodBase_o *)sub_1B4CF74(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0LL);
  PresentBoxNotificationMenu__Callback(this, 0, v5);
}


void __fastcall PresentBoxNotificationMenu__OnMoveEnd(PresentBoxNotificationMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  int32_t v4; // w8
  struct PresentBoxNotificationListViewManager_o *ItemListViewManager; // x20
  PresentBoxNotificationListViewManager_CallbackFunc_o *v6; // x21
  const MethodInfo *v7; // x3
  __int64 v8; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x2
  struct System_Action_o **p_closeCallbackFunc; // x19
  struct System_Action_o *v12; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  if ( (byte_49B5958 & 1) == 0 )
  {
    sub_1B4CF90(&PresentBoxNotificationListViewManager_CallbackFunc_TypeInfo, method);
    sub_1B4CF90(&Method_PresentBoxNotificationMenu_OnSelectBuyItem__, v3);
    byte_49B5958 = 1;
  }
  switch ( this->fields.state )
  {
    case 2:
      v4 = 3;
      goto LABEL_6;
    case 3:
      this->fields.state = 4;
      ItemListViewManager = this->fields.ItemListViewManager;
      v6 = (PresentBoxNotificationListViewManager_CallbackFunc_o *)sub_1B4D1DC(PresentBoxNotificationListViewManager_CallbackFunc_TypeInfo);
      PresentBoxNotificationListViewManager_CallbackFunc___ctor(
        v6,
        (Il2CppObject *)this,
        Method_PresentBoxNotificationMenu_OnSelectBuyItem__,
        v7);
      if ( !ItemListViewManager )
        sub_1B4D1EC(v8, v9);
      ItemListViewManager->fields.callbackFunc = v6;
      sub_1B4CF34(&ItemListViewManager->fields.callbackFunc);
      PresentBoxNotificationListViewManager__SetMode_30368152(ItemListViewManager, 1, v10);
      break;
    case 5:
      v4 = 6;
LABEL_6:
      this->fields.state = v4;
      break;
    case 6:
      PresentBoxNotificationMenu__Init(this, method);
      closeCallbackFunc = this->fields.closeCallbackFunc;
      p_closeCallbackFunc = &this->fields.closeCallbackFunc;
      v12 = closeCallbackFunc;
      if ( closeCallbackFunc )
      {
        *p_closeCallbackFunc = 0LL;
        sub_1B4CF34(p_closeCallbackFunc);
        ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v12->fields.m_target)(
          v12->fields.original_method_info,
          *(_QWORD *)&v12->fields.extra_arg);
      }
      break;
    default:
      return;
  }
}


void __fastcall PresentBoxNotificationMenu__OnSelectBuyItem(
        PresentBoxNotificationMenu_o *this,
        int32_t n,
        const MethodInfo *method)
{
  this->fields.selectItemNum = n;
}


void __fastcall PresentBoxNotificationMenu__Open(
        PresentBoxNotificationMenu_o *this,
        UserPresentBoxEntity_array *presentList,
        PresentBoxNotificationMenu_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v13; // x1
  UILabel_o *message1Label; // x21
  UILabel_o *message2Label; // x21
  UILabel_o *closeLabel; // x21
  const MethodInfo *v17; // x3
  System_Action_o *v18; // x20

  if ( (byte_49B5955 & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_TypeInfo, presentList);
    sub_1B4CF90(&LocalizationManager_TypeInfo, v7);
    sub_1B4CF90(&Method_PresentBoxNotificationMenu_OnMoveEnd__, v8);
    sub_1B4CF90(&StringLiteral_10226/*"PRESENT_BOX_NOTIFICATION_MESSAGE2"*/, v9);
    sub_1B4CF90(&StringLiteral_10225/*"PRESENT_BOX_NOTIFICATION_MESSAGE1"*/, v10);
    sub_1B4CF90(&StringLiteral_10224/*"PRESENT_BOX_NOTIFICATION_CLOSE"*/, v11);
    byte_49B5955 = 1;
  }
  if ( !this->fields.state )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_13;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
    this->fields.callbackFunc = callback;
    sub_1B4CF34(&this->fields.callbackFunc);
    gameObject = (UnityEngine_GameObject_o *)this->fields.ItemListViewManager;
    if ( !gameObject )
      goto LABEL_13;
    ListViewManager__set_IsInput((ListViewManager_o *)gameObject, 0, 0LL);
    message1Label = this->fields.message1Label;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10225/*"PRESENT_BOX_NOTIFICATION_MESSAGE1"*/, 0LL);
    if ( !message1Label )
      goto LABEL_13;
    UILabel__set_text(message1Label, (System_String_o *)gameObject, 0LL);
    message2Label = this->fields.message2Label;
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10226/*"PRESENT_BOX_NOTIFICATION_MESSAGE2"*/, 0LL);
    if ( !message2Label
      || (UILabel__set_text(message2Label, (System_String_o *)gameObject, 0LL),
          closeLabel = this->fields.closeLabel,
          gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10224/*"PRESENT_BOX_NOTIFICATION_CLOSE"*/, 0LL),
          !closeLabel)
      || (UILabel__set_text(closeLabel, (System_String_o *)gameObject, 0LL),
          (gameObject = (UnityEngine_GameObject_o *)this->fields.ItemListViewManager) == 0LL) )
    {
LABEL_13:
      sub_1B4D1EC(gameObject, v13);
    }
    PresentBoxNotificationListViewManager__CreateList(
      (PresentBoxNotificationListViewManager_o *)gameObject,
      0,
      presentList,
      v17);
    this->fields.state = 2;
    v18 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
    System_Action___ctor(v18, (Il2CppObject *)this, Method_PresentBoxNotificationMenu_OnMoveEnd__, 0LL);
    BaseDialog__Open((BaseDialog_o *)this, v18, 0, 0LL);
  }
}


void __fastcall PresentBoxNotificationMenu__add_callbackFunc(
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

  if ( (byte_49B5952 & 1) == 0 )
  {
    sub_1B4CF90(&PresentBoxNotificationMenu_CallbackFunc_TypeInfo, value);
    byte_49B5952 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (PresentBoxNotificationMenu_CallbackFunc_c *)v8->klass != PresentBoxNotificationMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1B8724C(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (PresentBoxNotificationMenu_o *)sub_1B4D4AC(v8);
  PresentBoxNotificationMenu__remove_callbackFunc(v11, v12, v13);
}


System_String_o *__fastcall PresentBoxNotificationMenu__get_closeBtnPath(
        PresentBoxNotificationMenu_o *this,
        const MethodInfo *method)
{
  if ( (byte_49B595A & 1) == 0 )
  {
    sub_1B4CF90(&StringLiteral_8672/*"MainPanel/BaseView/CloseButton"*/, method);
    byte_49B595A = 1;
  }
  return (System_String_o *)StringLiteral_8672/*"MainPanel/BaseView/CloseButton"*/;
}


void __fastcall PresentBoxNotificationMenu__remove_callbackFunc(
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

  if ( (byte_49B5953 & 1) == 0 )
  {
    sub_1B4CF90(&PresentBoxNotificationMenu_CallbackFunc_TypeInfo, value);
    byte_49B5953 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (PresentBoxNotificationMenu_CallbackFunc_c *)v8->klass != PresentBoxNotificationMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1B8724C(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (PresentBoxNotificationMenu_o *)sub_1B4D4AC(v8);
  PresentBoxNotificationMenu__Init(v11, v12);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PresentBoxNotificationMenu_CallbackFunc___ctor(
        PresentBoxNotificationMenu_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  __int64 v6; // x21
  int v8; // w22
  struct System_Reflection_MethodInfo_o *v9; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v6 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v4;
  *(_QWORD *)&this->fields.method = object;
  sub_1B4CF34(&this->fields.method);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B4D050(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B4D208(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B4D0B8(v10, 0LL);
    }
    goto LABEL_5;
  }
  if ( v8 != 1 )
  {
LABEL_5:
    v9 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v9;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_1994380;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1994338;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall PresentBoxNotificationMenu_CallbackFunc__BeginInvoke(
        PresentBoxNotificationMenu_CallbackFunc_o *this,
        int32_t result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-48h] BYREF
  int32_t v10; // [xsp+1Ch] [xbp-34h] BYREF

  v10 = result;
  if ( (byte_49B595C & 1) == 0 )
  {
    sub_1B4CF90(&PresentBoxNotificationMenu_Result_TypeInfo, *(_QWORD *)&result);
    byte_49B595C = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(PresentBoxNotificationMenu_Result_TypeInfo, &v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1B4CF44(this, v9, callback, object);
}


void __fastcall PresentBoxNotificationMenu_CallbackFunc__EndInvoke(
        PresentBoxNotificationMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B4CF48(result, 0LL, method);
}


void __fastcall PresentBoxNotificationMenu_CallbackFunc__Invoke(
        PresentBoxNotificationMenu_CallbackFunc_o *this,
        int32_t result,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, int32_t, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    result,
    *(_QWORD *)&this->fields.extra_arg);
}