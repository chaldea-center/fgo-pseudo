void WebConnectMenu___ctor(WebConnectMenu_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  int32_t v5; // w1

  if ( (byte_4CB3A1C & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_1/*""*/);
    byte_4CB3A1C = 1;
  }
  v5 = StringLiteral_1/*""*/;
  this->fields.settingConnectPath = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.settingConnectPath, v5, v2, v3);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void WebConnectMenu__Callback(WebConnectMenu_o *this, bool result, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  CGThumbnailListItem_o *p_callbackFunc; // x0
  struct WebConnectMenu_CallbackFunc_o *v5; // x20
  struct WebConnectMenu_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (CGThumbnailListItem_o *)&this->fields.callbackFunc;
  v5 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0;
    sub_1C6B9AC(p_callbackFunc, 0, (int32_t)method, v3);
    ((void (__fastcall *)(intptr_t, bool, intptr_t))v5->fields.invoke_impl)(
      v5->fields.method_code,
      result,
      v5->fields.method);
  }
}


void WebConnectMenu__Close(WebConnectMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *menuRootObject; // x0

  WebConnectMenu__EndInput(this, method);
  menuRootObject = this->fields.menuRootObject;
  this->fields.state = 0;
  if ( !menuRootObject )
    sub_1C6BC60(0, v3);
  UnityEngine_GameObject__SetActive(menuRootObject, 0, 0);
}


void WebConnectMenu__EndInput(WebConnectMenu_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *wwwPathInput; // x0
  UIInput_o *v4; // x20
  struct System_String_o *value; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_4CB3A1A & 1) == 0 )
  {
    sub_1C6BA08(&Method_UnityEngine_Component_GetComponent_UIInput___);
    sub_1C6BA08(&StringLiteral_1/*""*/);
    byte_4CB3A1A = 1;
  }
  if ( this->fields.state )
  {
    wwwPathInput = (UnityEngine_Component_o *)this->fields.wwwPathInput;
    if ( !wwwPathInput )
      goto LABEL_11;
    wwwPathInput = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                wwwPathInput,
                                                (const MethodInfo_3131B38 *)Method_UnityEngine_Component_GetComponent_UIInput___);
    if ( !wwwPathInput )
      goto LABEL_11;
    v4 = (UIInput_o *)wwwPathInput;
    value = UIInput__get_value((UIInput_o *)wwwPathInput, 0);
    this->fields.settingConnectPath = value;
    sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.settingConnectPath, (int32_t)value, v6, v7);
    UIInput__set_value(v4, (System_String_o *)StringLiteral_1/*""*/, 0);
    wwwPathInput = (UnityEngine_Component_o *)this->fields.wwwPathInput;
    if ( !wwwPathInput
      || (UILineInput__SetInputEnable((UILineInput_o *)wwwPathInput, 0, 0),
          (wwwPathInput = (UnityEngine_Component_o *)this->fields.decideButton) == 0)
      || (UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)wwwPathInput, 0, 0),
          (wwwPathInput = (UnityEngine_Component_o *)this->fields.cancelButton) == 0) )
    {
LABEL_11:
      sub_1C6BC60(wwwPathInput, method);
    }
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)wwwPathInput, 0, 0);
    UnityEngine_Input__set_imeCompositionMode(0, 0);
  }
}


void WebConnectMenu__OnChangeServerInput(WebConnectMenu_o *this, const MethodInfo *method)
{
  ;
}


void WebConnectMenu__OnClickCancel(WebConnectMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x2

  if ( this->fields.state == 1 )
  {
    WebConnectMenu__EndInput(this, method);
    this->fields.state = 2;
    WebConnectMenu__Callback(this, 0, v3);
  }
}


void WebConnectMenu__OnClickDecide(WebConnectMenu_o *this, const MethodInfo *method)
{
  UILineInput_o *wwwPathInput; // x0
  struct System_String_o *Text; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  System_String_o *selectConnectPath; // x20
  System_Action_o *v8; // x21

  if ( (byte_4CB3A1B & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_WebConnectMenu_OnEndWebView__);
    sub_1C6BA08(&WebViewManager_TypeInfo);
    sub_1C6BA08(&StringLiteral_1/*""*/);
    byte_4CB3A1B = 1;
  }
  if ( this->fields.state == 1 )
  {
    wwwPathInput = this->fields.wwwPathInput;
    if ( !wwwPathInput )
      sub_1C6BC60(0, method);
    Text = UILineInput__GetText(wwwPathInput, 0);
    this->fields.selectConnectPath = Text;
    sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.selectConnectPath, (int32_t)Text, v5, v6);
    this->fields.state = 2;
    selectConnectPath = this->fields.selectConnectPath;
    v8 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
    System_Action___ctor(v8, (Il2CppObject *)this, Method_WebConnectMenu_OnEndWebView__, 0);
    if ( !WebViewManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(WebViewManager_TypeInfo);
    WebViewManager__OpenView((System_String_o *)StringLiteral_1/*""*/, selectConnectPath, v8, 0);
  }
}


void WebConnectMenu__OnEndWebView(WebConnectMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  WebConnectMenu__Callback(this, 1, v2);
}


void WebConnectMenu__Open(WebConnectMenu_o *this, WebConnectMenu_CallbackFunc_o *callback, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int64 v6; // x1
  UnityEngine_GameObject_o *menuRootObject; // x0

  if ( (byte_4CB3A19 & 1) == 0 )
  {
    sub_1C6BA08(&Method_UnityEngine_Component_GetComponent_UIInput___);
    byte_4CB3A19 = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.callbackFunc = callback;
    sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callback, (int32_t)method, v3);
    menuRootObject = this->fields.menuRootObject;
    if ( !menuRootObject )
      goto LABEL_12;
    UnityEngine_GameObject__SetActive(menuRootObject, 1, 0);
    menuRootObject = (UnityEngine_GameObject_o *)this->fields.wwwPathInput;
    if ( !menuRootObject
      || (UILineInput__SetInputEnable((UILineInput_o *)menuRootObject, 1, 0),
          (menuRootObject = (UnityEngine_GameObject_o *)this->fields.decideButton) == 0)
      || (UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)menuRootObject, 1, 0),
          (menuRootObject = (UnityEngine_GameObject_o *)this->fields.cancelButton) == 0)
      || (UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)menuRootObject, 1, 0),
          (menuRootObject = (UnityEngine_GameObject_o *)this->fields.wwwPathInput) == 0)
      || (menuRootObject = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_object_(
                                                         (UnityEngine_Component_o *)menuRootObject,
                                                         (const MethodInfo_3131B38 *)Method_UnityEngine_Component_GetComponent_UIInput___)) == 0 )
    {
LABEL_12:
      sub_1C6BC60(menuRootObject, v6);
    }
    UIInput__set_value((UIInput_o *)menuRootObject, this->fields.settingConnectPath, 0);
    this->fields.state = 1;
  }
}


void WebConnectMenu__add_callbackFunc(
        WebConnectMenu_o *this,
        WebConnectMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct WebConnectMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct WebConnectMenu_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  WebConnectMenu_o *v11; // x0
  WebConnectMenu_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_4CB3A17 & 1) == 0 )
  {
    sub_1C6BA08(&WebConnectMenu_CallbackFunc_TypeInfo);
    byte_4CB3A17 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (WebConnectMenu_CallbackFunc_c *)v8->klass != WebConnectMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1CC77DC(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C6BFFC(v8);
  WebConnectMenu__remove_callbackFunc(v11, v12, v13);
}


void WebConnectMenu__remove_callbackFunc(
        WebConnectMenu_o *this,
        WebConnectMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct WebConnectMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct WebConnectMenu_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  WebConnectMenu_o *v11; // x0
  WebConnectMenu_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_4CB3A18 & 1) == 0 )
  {
    sub_1C6BA08(&WebConnectMenu_CallbackFunc_TypeInfo);
    byte_4CB3A18 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (WebConnectMenu_CallbackFunc_c *)v8->klass != WebConnectMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1CC77DC(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C6BFFC(v8);
  WebConnectMenu__Open(v11, v12, v13);
}


void WebConnectMenu_CallbackFunc___ctor(
        WebConnectMenu_CallbackFunc_o *this,
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
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C6BAC8(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C6BC7C(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C6BB30(v10, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1A9F4DC;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A9F494;
}


System_IAsyncResult_o *WebConnectMenu_CallbackFunc__BeginInvoke(
        WebConnectMenu_CallbackFunc_o *this,
        bool result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v9[2]; // [xsp+8h] [xbp-48h] BYREF
  bool v10[4]; // [xsp+1Ch] [xbp-34h] BYREF

  v10[0] = result;
  if ( (byte_4CB3A1D & 1) == 0 )
  {
    sub_1C6BA08(&bool_TypeInfo);
    byte_4CB3A1D = 1;
  }
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_1C6B9BC(this, v9, callback, object);
}


void WebConnectMenu_CallbackFunc__EndInvoke(
        WebConnectMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C6B9C0(result, 0, method);
}


void WebConnectMenu_CallbackFunc__Invoke(WebConnectMenu_CallbackFunc_o *this, bool result, const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, bool, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    result,
    this->fields.method);
}