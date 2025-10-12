void ReceiptViewMenu___ctor(ReceiptViewMenu_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void ReceiptViewMenu__Callback(ReceiptViewMenu_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  CGThumbnailListItem_o *p_callbackFunc; // x0
  struct ReceiptViewMenu_CallbackFunc_o *v5; // x19
  struct ReceiptViewMenu_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (CGThumbnailListItem_o *)&this->fields.callbackFunc;
  v5 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0;
    sub_1C32BC4(p_callbackFunc, 0, v2, v3);
    ((void (__fastcall *)(intptr_t, intptr_t))v5->fields.invoke_impl)(v5->fields.method_code, v5->fields.method);
  }
}


void ReceiptViewMenu__Close(ReceiptViewMenu_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *menuRootObject; // x0

  ReceiptViewMenu__EndInput(this, method);
  menuRootObject = this->fields.menuRootObject;
  this->fields.state = 0;
  if ( !menuRootObject )
    sub_1C32E7C(0);
  UnityEngine_GameObject__SetActive(menuRootObject, 0, 0);
}


void ReceiptViewMenu__EndInput(ReceiptViewMenu_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *menuRootObject; // x0

  if ( this->fields.state )
  {
    menuRootObject = this->fields.menuRootObject;
    if ( !menuRootObject )
      sub_1C32E7C(0);
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
  struct ReceiptViewMenu_CallbackFunc_o **p_callbackFunc; // x21
  UITextList_o *textList; // x0

  if ( !this->fields.state )
  {
    this->fields.callbackFunc = callback;
    p_callbackFunc = &this->fields.callbackFunc;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callback, (int32_t)callback, method);
    textList = (UITextList_o *)*(p_callbackFunc - 3);
    if ( !textList
      || (UITextList__Clear(textList, 0), (textList = this->fields.textList) == 0)
      || (UITextList__Add(textList, data, 0), (textList = (UITextList_o *)this->fields.menuRootObject) == 0)
      || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)textList, 1, 0),
          (textList = (UITextList_o *)this->fields.cancelButton) == 0) )
    {
      sub_1C32E7C(textList);
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

  if ( (byte_4C34F35 & 1) == 0 )
  {
    sub_1C32C20(&ReceiptViewMenu_CallbackFunc_TypeInfo);
    byte_4C34F35 = 1;
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
    v9 = sub_1C6CE78(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C3313C(v8);
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

  if ( (byte_4C34F36 & 1) == 0 )
  {
    sub_1C32C20(&ReceiptViewMenu_CallbackFunc_TypeInfo);
    byte_4C34F36 = 1;
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
    v9 = sub_1C6CE78(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C3313C(v8);
  ReceiptViewMenu__EndInput(v11, v12);
}


void ReceiptViewMenu_CallbackFunc___ctor(
        ReceiptViewMenu_CallbackFunc_o *this,
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
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C32CE0(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C32E98(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C32D48(v10, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1A74644;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A74604;
}


System_IAsyncResult_o *ReceiptViewMenu_CallbackFunc__BeginInvoke(
        ReceiptViewMenu_CallbackFunc_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  v5 = 0;
  return (System_IAsyncResult_o *)sub_1C32BD4(this, &v5, callback, object);
}


void ReceiptViewMenu_CallbackFunc__EndInvoke(
        ReceiptViewMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C32BD8(result, 0, method);
}


void ReceiptViewMenu_CallbackFunc__Invoke(ReceiptViewMenu_CallbackFunc_o *this, const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, intptr_t))this->fields.invoke_impl)(this->fields.method_code, this->fields.method);
}