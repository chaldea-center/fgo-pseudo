void ReceiptViewMenu___ctor(ReceiptViewMenu_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void ReceiptViewMenu__Callback(ReceiptViewMenu_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  GrandQuestFolderBoardItem_o *p_callbackFunc; // x0
  struct ReceiptViewMenu_CallbackFunc_o *v9; // x19
  struct ReceiptViewMenu_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc;
  v9 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0;
    sub_1C93A78(p_callbackFunc, 0, v2, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(intptr_t, intptr_t))v9->fields.invoke_impl)(v9->fields.method_code, v9->fields.method);
  }
}


void ReceiptViewMenu__Close(ReceiptViewMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *menuRootObject; // x0

  ReceiptViewMenu__EndInput(this, method);
  menuRootObject = this->fields.menuRootObject;
  this->fields.state = 0;
  if ( !menuRootObject )
    sub_1C93D2C(0, v3);
  UnityEngine_GameObject__SetActive(menuRootObject, 0, 0);
}


void ReceiptViewMenu__EndInput(ReceiptViewMenu_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *menuRootObject; // x0

  if ( this->fields.state )
  {
    menuRootObject = this->fields.menuRootObject;
    if ( !menuRootObject )
      sub_1C93D2C(0, method);
    UnityEngine_GameObject__SetActive(menuRootObject, 0, 0);
  }
}


void ReceiptViewMenu__OnClickCancel(ReceiptViewMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  if ( this->fields.state == 1 )
  {
    ReceiptViewMenu__EndInput(this, method);
    this->fields.state = 2;
    ReceiptViewMenu__Callback(this, v3);
  }
}


void ReceiptViewMenu__Open(
        ReceiptViewMenu_o *this,
        System_String_o *data,
        ReceiptViewMenu_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct ReceiptViewMenu_CallbackFunc_o **p_callbackFunc; // x21
  __int64 v11; // x1
  UITextList_o *textList; // x0

  if ( !this->fields.state )
  {
    this->fields.callbackFunc = callback;
    p_callbackFunc = &this->fields.callbackFunc;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc,
      (int32_t)callback,
      (int32_t)callback,
      (int32_t)method,
      v4,
      v5,
      v6,
      v7);
    textList = (UITextList_o *)*(p_callbackFunc - 3);
    if ( !textList
      || (UITextList__Clear(textList, 0), (textList = this->fields.textList) == 0)
      || (UITextList__Add(textList, data, 0), (textList = (UITextList_o *)this->fields.menuRootObject) == 0)
      || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)textList, 1, 0),
          (textList = (UITextList_o *)this->fields.cancelButton) == 0) )
    {
      sub_1C93D2C(textList, v11);
    }
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)textList, 1, 0);
    this->fields.state = 1;
  }
}


void ReceiptViewMenu__add_callbackFunc(
        ReceiptViewMenu_o *this,
        ReceiptViewMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct ReceiptViewMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct ReceiptViewMenu_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  ReceiptViewMenu_o *v11; // x0
  ReceiptViewMenu_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_4D2DF1E & 1) == 0 )
  {
    sub_1C93AD4(&ReceiptViewMenu_CallbackFunc_TypeInfo);
    byte_4D2DF1E = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (ReceiptViewMenu_CallbackFunc_c *)v8->klass != ReceiptViewMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1CEF8A8(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C940C8(v8);
  ReceiptViewMenu__remove_callbackFunc(v11, v12, v13);
}


void ReceiptViewMenu__remove_callbackFunc(
        ReceiptViewMenu_o *this,
        ReceiptViewMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct ReceiptViewMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct ReceiptViewMenu_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  ReceiptViewMenu_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_4D2DF1F & 1) == 0 )
  {
    sub_1C93AD4(&ReceiptViewMenu_CallbackFunc_TypeInfo);
    byte_4D2DF1F = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (ReceiptViewMenu_CallbackFunc_c *)v8->klass != ReceiptViewMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1CEF8A8(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C940C8(v8);
  ReceiptViewMenu__EndInput(v11, v12);
}


void ReceiptViewMenu_CallbackFunc___ctor(
        ReceiptViewMenu_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C93B94(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1C93D48(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C93BFC(v14, 0);
    }
    goto LABEL_5;
  }
  if ( v12 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1AC5AAC;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1AC5A6C;
}


System_IAsyncResult_o *ReceiptViewMenu_CallbackFunc__BeginInvoke(
        ReceiptViewMenu_CallbackFunc_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  v5 = 0;
  return sub_1C93A88(this, &v5, callback, object);
}


void ReceiptViewMenu_CallbackFunc__EndInvoke(
        ReceiptViewMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C93A8C(result, 0, method);
}


void ReceiptViewMenu_CallbackFunc__Invoke(ReceiptViewMenu_CallbackFunc_o *this, const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, intptr_t))this->fields.invoke_impl)(this->fields.method_code, this->fields.method);
}