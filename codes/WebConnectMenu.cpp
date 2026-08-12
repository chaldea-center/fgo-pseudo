void WebConnectMenu___ctor(WebConnectMenu_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  int32_t v9; // w1

  if ( (byte_596DDFB & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596DDFB = 1;
  }
  v9 = (int)StringLiteral_1/*""*/;
  this->fields.settingConnectPath = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.settingConnectPath, v9, v2, v3, v4, v5, v6, v7);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void WebConnectMenu__Callback(WebConnectMenu_o *this, bool result, const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  MissionNaviTransitionBoardItem_o *p_callbackFunc; // x0
  struct WebConnectMenu_CallbackFunc_o *v9; // x20
  struct WebConnectMenu_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc;
  v9 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0;
    sub_2213A04(p_callbackFunc, 0, (System_String_o *)method, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(intptr_t, bool, intptr_t))v9->fields.invoke_impl)(
      v9->fields.method_code,
      result,
      v9->fields.method);
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
    sub_2213CDC(0, v3);
  UnityEngine_GameObject__SetActive(menuRootObject, 0, 0);
}


void WebConnectMenu__EndInput(WebConnectMenu_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *wwwPathInput; // x0
  UIInput_o *v4; // x20
  struct System_String_o *value; // x0
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7

  if ( (byte_596DDF9 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_UIInput___);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596DDF9 = 1;
  }
  if ( this->fields.state )
  {
    wwwPathInput = (UnityEngine_Component_o *)this->fields.wwwPathInput;
    if ( !wwwPathInput )
      goto LABEL_11;
    wwwPathInput = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                wwwPathInput,
                                                (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_UIInput___);
    if ( !wwwPathInput )
      goto LABEL_11;
    v4 = (UIInput_o *)wwwPathInput;
    value = UIInput__get_value((UIInput_o *)wwwPathInput, 0);
    this->fields.settingConnectPath = value;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.settingConnectPath,
      (int32_t)value,
      v6,
      v7,
      v8,
      v9,
      v10,
      v11);
    UIInput__set_value(v4, (System_String_o *)StringLiteral_1/*""*/, 0);
    wwwPathInput = (UnityEngine_Component_o *)this->fields.wwwPathInput;
    if ( !wwwPathInput
      || (UILineInput__SetInputEnable((UILineInput_o *)wwwPathInput, 0, 0),
          (wwwPathInput = (UnityEngine_Component_o *)this->fields.decideButton) == 0)
      || (UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)wwwPathInput, 0, 0),
          (wwwPathInput = (UnityEngine_Component_o *)this->fields.cancelButton) == 0) )
    {
LABEL_11:
      sub_2213CDC(wwwPathInput, method);
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
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  System_String_o *selectConnectPath; // x20
  System_Action_o *v12; // x21
  __int64 v13; // x1
  __int64 v14; // x2

  if ( (byte_596DDFA & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_WebConnectMenu_OnEndWebView__);
    sub_2213A60(&WebViewManager_TypeInfo);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596DDFA = 1;
  }
  if ( this->fields.state == 1 )
  {
    wwwPathInput = this->fields.wwwPathInput;
    if ( !wwwPathInput )
      sub_2213CDC(0, method);
    Text = UILineInput__GetText(wwwPathInput, 0);
    this->fields.selectConnectPath = Text;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.selectConnectPath,
      (int32_t)Text,
      v5,
      v6,
      v7,
      v8,
      v9,
      v10);
    selectConnectPath = this->fields.selectConnectPath;
    this->fields.state = 2;
    v12 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(v12, (Il2CppObject *)this, Method_WebConnectMenu_OnEndWebView__, 0);
    if ( !*(&WebViewManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(WebViewManager_TypeInfo, v13, v14);
    WebViewManager__OpenView((System_String_o *)StringLiteral_1/*""*/, selectConnectPath, v12, 0);
  }
}


void WebConnectMenu__OnEndWebView(WebConnectMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  WebConnectMenu__Callback(this, 1, v2);
}


void WebConnectMenu__Open(WebConnectMenu_o *this, WebConnectMenu_CallbackFunc_o *callback, const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  __int64 v10; // x1
  UnityEngine_GameObject_o *menuRootObject; // x0

  if ( (byte_596DDF8 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_UIInput___);
    byte_596DDF8 = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.callbackFunc = callback;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc,
      (int32_t)callback,
      (System_String_o *)method,
      v3,
      v4,
      v5,
      v6,
      v7);
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
                                                         (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_UIInput___)) == 0 )
    {
LABEL_12:
      sub_2213CDC(menuRootObject, v10);
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
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x0
  bool v12; // zf
  WebConnectMenu_o *v13; // x0
  WebConnectMenu_CallbackFunc_o *v14; // x1
  const MethodInfo *v15; // x2

  if ( (byte_596DDF6 & 1) == 0 )
  {
    sub_2213A60(&WebConnectMenu_CallbackFunc_TypeInfo);
    byte_596DDF6 = 1;
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
    v11 = sub_224B48C(p_callbackFunc, v8, v6);
    v12 = v11 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  sub_221405C(v8, WebConnectMenu_CallbackFunc_TypeInfo, v9, v10);
  WebConnectMenu__remove_callbackFunc(v13, v14, v15);
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
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x0
  bool v12; // zf
  WebConnectMenu_o *v13; // x0
  WebConnectMenu_CallbackFunc_o *v14; // x1
  const MethodInfo *v15; // x2

  if ( (byte_596DDF7 & 1) == 0 )
  {
    sub_2213A60(&WebConnectMenu_CallbackFunc_TypeInfo);
    byte_596DDF7 = 1;
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
    v11 = sub_224B48C(p_callbackFunc, v8, v6);
    v12 = v11 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  sub_221405C(v8, WebConnectMenu_CallbackFunc_TypeInfo, v9, v10);
  WebConnectMenu__Open(v13, v14, v15);
}


void WebConnectMenu_CallbackFunc___ctor(
        WebConnectMenu_CallbackFunc_o *this,
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
  this->fields.invoke_impl = (intptr_t)sub_2009004;
LABEL_6:
  this->fields.extra_arg = (intptr_t)&loc_2008FBC;
}


System_IAsyncResult_o *WebConnectMenu_CallbackFunc__BeginInvoke(
        WebConnectMenu_CallbackFunc_o *this,
        bool result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v9[2]; // [xsp+8h] [xbp-38h] BYREF
  bool v10[4]; // [xsp+1Ch] [xbp-24h] BYREF

  v10[0] = result;
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(qword_5984328, v10);
  return sub_2213A14(this, v9, callback, object);
}


void WebConnectMenu_CallbackFunc__EndInvoke(
        WebConnectMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_2213A18(result, 0, method);
}


void WebConnectMenu_CallbackFunc__Invoke(WebConnectMenu_CallbackFunc_o *this, bool result, const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, bool, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    result,
    this->fields.method);
}