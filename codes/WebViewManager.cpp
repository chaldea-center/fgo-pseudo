void WebViewManager___cctor(const MethodInfo *method)
{
  if ( (byte_59380BD & 1) == 0 )
  {
    sub_21FFC50(&WebViewManager_TypeInfo);
    byte_59380BD = 1;
  }
  *WebViewManager_TypeInfo->static_fields = (struct WebViewManager_StaticFields)1045220557LL;
}


void WebViewManager___ctor(WebViewManager_o *this, const MethodInfo *method)
{
  if ( (byte_59380BC & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_WebViewManager___ctor__);
    byte_59380BC = 1;
  }
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_476EDF0 *)Method_SingletonMonoBehaviour_WebViewManager___ctor__);
}


void WebViewManager__DestroyWebView(WebViewManager_o *this, const MethodInfo *method)
{
  UnityEngine_Object_c *v3; // x0
  struct WebViewObject_o **p_webView; // x20
  UnityEngine_Object_o *webView; // x21
  __int64 v6; // x1
  UnityEngine_Object_o *v7; // x21
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7

  if ( (byte_59380B6 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_59380B6 = 1;
  }
  v3 = UnityEngine_Object_TypeInfo;
  p_webView = &this->fields.webView;
  webView = (UnityEngine_Object_o *)this->fields.webView;
  this->fields.isVisibilityRequested = 0;
  if ( !*(&v3->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v3, method);
  if ( UnityEngine_Object__op_Inequality(webView, 0, 0) )
  {
    v7 = (UnityEngine_Object_o *)*p_webView;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
    UnityEngine_Object__Destroy_83246496(v7, 0);
    *p_webView = 0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.webView, 0, v8, v9, v10, v11, v12, v13);
  }
  if ( this->fields.isButtonEnable )
    this->fields.isButtonEnable = 0;
}


void WebViewManager__EndClose(WebViewManager_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *webViewBase; // x0
  __int64 v4; // x1
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  MissionNaviTransitionBoardItem_o *p_callbackFunc; // x19
  struct System_Action_o *v12; // x20
  struct System_Action_o *callbackFunc; // t1

  if ( (byte_59380B7 & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_21FFC50(&TouchEffectManager_TypeInfo);
    byte_59380B7 = 1;
  }
  webViewBase = (UnityEngine_Component_o *)this->fields.webViewBase;
  if ( !webViewBase )
    goto LABEL_11;
  webViewBase = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(webViewBase, 0);
  if ( !webViewBase )
    goto LABEL_11;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)webViewBase, 0, 0);
  if ( !*(&TouchEffectManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TouchEffectManager_TypeInfo, v4);
  TouchEffectManager__SetBlock(0, 0);
  webViewBase = (UnityEngine_Component_o *)SingletonTemplate_object___get_Instance((const MethodInfo_476EDF8 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !webViewBase )
LABEL_11:
    sub_21FFECC(webViewBase, method);
  MissionNotifyManager__EndPause((MissionNotifyManager_o *)webViewBase, 0);
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc;
  v12 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0;
    sub_21FFBF4(p_callbackFunc, 0, v5, v6, v7, v8, v9, v10);
    ((void (__fastcall *)(intptr_t, intptr_t))v12->fields.invoke_impl)(v12->fields.method_code, v12->fields.method);
  }
}


void WebViewManager__EndOpen(WebViewManager_o *this, const MethodInfo *method)
{
  this->fields.isButtonEnable = 1;
}


void WebViewManager__LargeIn(WebViewManager_o *this, UnityEngine_GameObject_o *window, const MethodInfo *method)
{
  WebViewManager_o *v4; // x19
  __int64 v5; // x1
  UnityEngine_Object_o *webView; // x20
  WebViewManager_o *v7; // x21
  __int64 v8; // x1
  UnityEngine_GameObject_o *gameObject; // x21
  WebViewManager_c *v10; // x8
  float OPEN_TIME; // s8
  __int64 v12; // x1
  TweenScale_o *v13; // x21
  EventDelegate_Callback_o *v14; // x20
  WebViewManager_o *v15; // x20

  v4 = this;
  if ( (byte_59380AC & 1) == 0 )
  {
    sub_21FFC50(&EventDelegate_Callback_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_WebViewManager__LargeIn_b__35_0__);
    this = (WebViewManager_o *)sub_21FFC50(&WebViewManager_TypeInfo);
    byte_59380AC = 1;
  }
  if ( !v4->fields.isLoadedNonDisp )
  {
    if ( v4->fields.isButtonEnable )
      goto LABEL_28;
    if ( window )
    {
      this = (WebViewManager_o *)UnityEngine_GameObject__get_transform(window, 0);
      v7 = this;
      if ( !byte_5931940 )
      {
        this = (WebViewManager_o *)sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
        byte_5931940 = 1;
      }
      if ( v7 )
      {
        UnityEngine_Transform__set_localScale(
          (UnityEngine_Transform_o *)v7,
          UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
          0);
        gameObject = UnityEngine_GameObject__get_gameObject(window, 0);
        v10 = WebViewManager_TypeInfo;
        if ( !*(&WebViewManager_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(WebViewManager_TypeInfo, v8);
          v10 = WebViewManager_TypeInfo;
        }
        OPEN_TIME = v10->static_fields->OPEN_TIME;
        if ( !byte_5931945 )
        {
          sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
          byte_5931945 = 1;
        }
        v13 = TweenScale__Begin(gameObject, OPEN_TIME, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12);
        this = (WebViewManager_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v13, 0, 0);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( v13 )
          {
            v13->fields.method = 3;
            v14 = (EventDelegate_Callback_o *)sub_21FFEBC(EventDelegate_Callback_TypeInfo);
            EventDelegate_Callback___ctor(v14, (Il2CppObject *)v4, Method_WebViewManager__LargeIn_b__35_0__, 0);
            UITweener__SetOnFinished((UITweener_o *)v13, v14, 0);
            return;
          }
        }
        else
        {
          this = (WebViewManager_o *)UnityEngine_GameObject__get_transform(window, 0);
          v15 = this;
          if ( !byte_5931945 )
          {
            this = (WebViewManager_o *)sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
            byte_5931945 = 1;
          }
          if ( v15 )
          {
            UnityEngine_Transform__set_localScale(
              (UnityEngine_Transform_o *)v15,
              UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
              0);
            goto LABEL_28;
          }
        }
      }
    }
LABEL_29:
    sub_21FFECC(this, window);
  }
  if ( !window )
    goto LABEL_29;
  UnityEngine_GameObject__SetActive(window, 0, 0);
  webView = (UnityEngine_Object_o *)v4->fields.webView;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
  if ( !UnityEngine_Object__op_Inequality(webView, 0, 0) )
    goto LABEL_28;
  this = (WebViewManager_o *)v4->fields.webView;
  if ( !this )
    goto LABEL_29;
  WebViewObject__SetVisibility((WebViewObject_o *)this, 0, 0);
LABEL_28:
  ActionExtensions__Call(v4->fields.callCallbackImmediately, 0);
}


void WebViewManager__LargeInLoadedWindow(
        WebViewManager_o *this,
        UnityEngine_GameObject_o *window,
        System_Action_o *callBack,
        const MethodInfo *method)
{
  __int64 v7; // x22
  __int64 transform; // x0
  __int64 v9; // x1
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  System_Action_o **v16; // x20
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  __int64 v23; // x1
  System_Action_o *v24; // x0
  UnityEngine_Transform_o *v25; // x23
  __int64 v26; // x1
  UnityEngine_Object_o *webView; // x23
  __int64 v28; // x1
  UnityEngine_GameObject_o *gameObject; // x23
  WebViewManager_c *v30; // x8
  float OPEN_TIME; // s8
  __int64 v32; // x1
  TweenScale_o *v33; // x23
  EventDelegate_Callback_o *v34; // x19
  UnityEngine_Transform_o *v35; // x21
  __int64 v36; // x1
  UnityEngine_Object_o *v37; // x21

  if ( (byte_59380AE & 1) == 0 )
  {
    sub_21FFC50(&EventDelegate_Callback_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_WebViewManager___c__DisplayClass37_0__LargeInLoadedWindow_b__0__);
    sub_21FFC50(&WebViewManager___c__DisplayClass37_0_TypeInfo);
    sub_21FFC50(&WebViewManager_TypeInfo);
    byte_59380AE = 1;
  }
  v7 = sub_21FFEBC(WebViewManager___c__DisplayClass37_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_36;
  *(_QWORD *)(v7 + 16) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v7 + 16), (int32_t)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 24) = callBack;
  v16 = (System_Action_o **)(v7 + 24);
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v7 + 24), (int32_t)callBack, v17, v18, v19, v20, v21, v22);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v23);
  transform = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)window, 0, 0);
  if ( (transform & 1) == 0 )
  {
    this->fields.isLoadedNonDisp = 0;
    *(_WORD *)&this->fields.isButtonEnable = 256;
    if ( window )
    {
      UnityEngine_GameObject__SetActive(window, 1, 0);
      transform = (__int64)UnityEngine_GameObject__get_transform(window, 0);
      v25 = (UnityEngine_Transform_o *)transform;
      if ( !byte_5931940 )
      {
        transform = sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
        byte_5931940 = 1;
      }
      if ( v25 )
      {
        UnityEngine_Transform__set_localScale(v25, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
        webView = (UnityEngine_Object_o *)this->fields.webView;
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v26);
        if ( UnityEngine_Object__op_Inequality(webView, 0, 0) )
        {
          transform = (__int64)this->fields.webView;
          if ( !transform )
            goto LABEL_36;
          WebViewObject__SetVisibility((WebViewObject_o *)transform, 0, 0);
        }
        gameObject = UnityEngine_GameObject__get_gameObject(window, 0);
        v30 = WebViewManager_TypeInfo;
        if ( !*(&WebViewManager_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(WebViewManager_TypeInfo, v28);
          v30 = WebViewManager_TypeInfo;
        }
        OPEN_TIME = v30->static_fields->OPEN_TIME;
        if ( !byte_5931945 )
        {
          sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
          byte_5931945 = 1;
        }
        v33 = TweenScale__Begin(gameObject, OPEN_TIME, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v32);
        transform = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v33, 0, 0);
        if ( (transform & 1) != 0 )
        {
          if ( v33 )
          {
            v33->fields.method = 3;
            v34 = (EventDelegate_Callback_o *)sub_21FFEBC(EventDelegate_Callback_TypeInfo);
            EventDelegate_Callback___ctor(
              v34,
              (Il2CppObject *)v7,
              Method_WebViewManager___c__DisplayClass37_0__LargeInLoadedWindow_b__0__,
              0);
            UITweener__SetOnFinished((UITweener_o *)v33, v34, 0);
            return;
          }
        }
        else
        {
          transform = (__int64)UnityEngine_GameObject__get_transform(window, 0);
          v35 = (UnityEngine_Transform_o *)transform;
          if ( !byte_5931945 )
          {
            transform = sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
            byte_5931945 = 1;
          }
          if ( v35 )
          {
            UnityEngine_Transform__set_localScale(v35, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
            v37 = (UnityEngine_Object_o *)this->fields.webView;
            if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v36);
            if ( UnityEngine_Object__op_Inequality(v37, 0, 0) )
            {
              transform = (__int64)this->fields.webView;
              if ( !transform )
                goto LABEL_36;
              WebViewObject__SetVisibility((WebViewObject_o *)transform, 1, 0);
            }
            v24 = *v16;
            this->fields.isButtonEnable = 1;
            goto LABEL_35;
          }
        }
      }
    }
LABEL_36:
    sub_21FFECC(transform, v9);
  }
  v24 = *v16;
LABEL_35:
  ActionExtensions__Call(v24, 0);
}


void WebViewManager__OnClickBack(WebViewManager_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *webView; // x20
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  __int64 v6; // x1
  WebViewObject_o *v7; // x0

  if ( (byte_59380B3 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_WebViewManager_OnClickBack__);
    byte_59380B3 = 1;
  }
  webView = (UnityEngine_Object_o *)this->fields.webView;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(webView, 0, 0) )
  {
    v4 = Method_WebViewManager_OnClickBack__;
    if ( (*((_BYTE *)Method_WebViewManager_OnClickBack__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_21FFC68(Method_WebViewManager_OnClickBack__);
    v5 = (System_Reflection_MethodBase_o *)sub_21FFC34(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 7, 0, 0);
    v7 = this->fields.webView;
    if ( !v7 )
      sub_21FFECC(0, v6);
    WebViewObject__GoBack(v7, 0);
  }
}


void WebViewManager__OnClickClose(WebViewManager_o *this, const MethodInfo *method)
{
  UnityEngine_Object_c *v3; // x0
  struct WebViewObject_o **p_webView; // x20
  UnityEngine_Object_o *webView; // x21
  __int64 v6; // x1
  WebViewObject_o *baseWindow; // x0
  __int64 v8; // x1
  UnityEngine_Object_o *v9; // x21
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  _QWORD *v16; // x0
  System_Reflection_MethodBase_o *v17; // x0
  UnityEngine_Transform_o *v18; // x20
  const MethodInfo *v19; // x1

  if ( (byte_59380B4 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_WebViewManager_OnClickClose__);
    byte_59380B4 = 1;
  }
  v3 = UnityEngine_Object_TypeInfo;
  p_webView = &this->fields.webView;
  webView = (UnityEngine_Object_o *)this->fields.webView;
  this->fields.isVisibilityRequested = 0;
  if ( !*(&v3->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v3, method);
  if ( UnityEngine_Object__op_Inequality(webView, 0, 0) )
  {
    baseWindow = *p_webView;
    if ( !*p_webView )
      goto LABEL_19;
    WebViewObject__SetVisibility(baseWindow, 0, 0);
    v9 = (UnityEngine_Object_o *)*p_webView;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
    UnityEngine_Object__Destroy_83246496(v9, 0);
    *p_webView = 0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.webView, 0, v10, v11, v12, v13, v14, v15);
  }
  if ( this->fields.isButtonEnable )
  {
    this->fields.isButtonEnable = 0;
    v16 = Method_WebViewManager_OnClickClose__;
    if ( (*((_BYTE *)Method_WebViewManager_OnClickClose__ + 83) & 2) != 0 )
      v16 = (_QWORD *)sub_21FFC68(Method_WebViewManager_OnClickClose__);
    v17 = (System_Reflection_MethodBase_o *)sub_21FFC34(v16, v16[4]);
    OverwriteAssetSoundName__PlaySystemSe(v17, 1, 0, 0);
    baseWindow = (WebViewObject_o *)this->fields.baseWindow;
    if ( baseWindow )
    {
      baseWindow = (WebViewObject_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)baseWindow, 0);
      v18 = (UnityEngine_Transform_o *)baseWindow;
      if ( !byte_5931940 )
      {
        baseWindow = (WebViewObject_o *)sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
        byte_5931940 = 1;
      }
      if ( v18 )
      {
        UnityEngine_Transform__set_localScale(v18, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
        WebViewManager__EndClose(this, v19);
        return;
      }
    }
LABEL_19:
    sub_21FFECC(baseWindow, v6);
  }
}


void WebViewManager__OnClickTargetWebViewClose(WebViewManager_o *this, const MethodInfo *method)
{
  UnityEngine_Object_c *v3; // x0
  UnityEngine_Object_o *webView; // x20
  __int64 v5; // x1
  WebViewObject_o *v6; // x0

  if ( (byte_59380B5 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_59380B5 = 1;
  }
  v3 = UnityEngine_Object_TypeInfo;
  webView = (UnityEngine_Object_o *)this->fields.webView;
  this->fields.isVisibilityRequested = 0;
  if ( !*(&v3->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v3, method);
  if ( UnityEngine_Object__op_Inequality(webView, 0, 0) )
  {
    v6 = this->fields.webView;
    if ( !v6 )
      sub_21FFECC(0, v5);
    WebViewObject__SetVisibility(v6, 0, 0);
  }
  if ( this->fields.isButtonEnable )
    this->fields.isButtonEnable = 0;
}


void WebViewManager__OnError(WebViewManager_o *this, System_String_o *msg, const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields.errorMessage = msg;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.errorMessage,
    (int32_t)msg,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void WebViewManager__OnLoadComplete(WebViewManager_o *this, System_String_o *message, const MethodInfo *method)
{
  UnityEngine_Object_o *webView; // x20
  __int64 v5; // x1
  WebViewObject_o *v6; // x0

  if ( (byte_59380AF & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_59380AF = 1;
  }
  webView = (UnityEngine_Object_o *)this->fields.webView;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, message);
  if ( !UnityEngine_Object__op_Equality(webView, 0, 0)
    && !this->fields.isLoadedNonDisp
    && this->fields.isVisibilityRequested )
  {
    v6 = this->fields.webView;
    if ( !v6 )
      sub_21FFECC(0, v5);
    WebViewObject__SetVisibility(v6, 1, 0);
  }
}


void WebViewManager__OnReceivedMessage(WebViewManager_o *this, System_String_o *msg, const MethodInfo *method)
{
  System_String_o *v3; // x20
  WebViewManager_o *v4; // x19
  int32_t v5; // w0
  Il2CppObject *v6; // x22
  System_Collections_Generic_Dictionary_object__object__o *v7; // x23
  __int64 v8; // x21
  int32_t v9; // w0
  int m_CancellationTokenSource; // w8
  WebViewManager_o *v11; // x22
  __int64 v12; // x23
  Il2CppObject *Item; // x0
  struct AccountLinkageParams_StaticFields *static_fields; // x8
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  const MethodInfo *v21; // x1
  Il2CppObject *v22; // x0
  __int64 v23; // x1
  System_String_o *v24; // x19
  __int64 v25; // x1
  System_String_o *WebUrl; // x19
  const MethodInfo *v27; // x1
  AvalonSceneManager_o *v28; // x19
  Il2CppObject *v29; // x20
  _BOOL8 v30; // x0
  const MethodInfo *v31; // x2
  NetworkManager_StoreCallbackFunc_o *v32; // x21
  __int64 v33; // x1
  __int64 *v34; // x8
  __int64 v35; // x1

  v3 = msg;
  v4 = this;
  if ( (byte_59380B0 & 1) == 0 )
  {
    sub_21FFC50(&AccountLinkageParams_TypeInfo);
    sub_21FFC50(&UnityEngine_Application_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__string___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__string__set_Item__);
    sub_21FFC50(&System_Collections_Generic_Dictionary_string__string__TypeInfo);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_21FFC50(&NetworkManager_StoreCallbackFunc_TypeInfo);
    sub_21FFC50(&Method___f__AnonymousType0_string__Dictionary_string__string____ctor__);
    sub_21FFC50(&Method___f__AnonymousType0_string__Dictionary_string__string___get_args__);
    sub_21FFC50(&Method___f__AnonymousType0_string__Dictionary_string__string___get_path__);
    sub_21FFC50(&_f__AnonymousType0_string__Dictionary_string__string___TypeInfo);
    sub_21FFC50(&Method_WebViewManager_OnWebViewStore__);
    sub_21FFC50(&StringLiteral_25758/*"url"*/);
    sub_21FFC50(&StringLiteral_18775/*"close"*/);
    sub_21FFC50(&StringLiteral_1126/*"//"*/);
    sub_21FFC50(&StringLiteral_21776/*"inquiry"*/);
    sub_21FFC50(&StringLiteral_18791/*"code"*/);
    sub_21FFC50(&StringLiteral_20776/*"googlePlay"*/);
    sub_21FFC50(&StringLiteral_24361/*"scene"*/);
    sub_21FFC50(&StringLiteral_18145/*"browser"*/);
    sub_21FFC50(&StringLiteral_1837/*"?"*/);
    sub_21FFC50(&StringLiteral_2370/*"Android"*/);
    sub_21FFC50(&StringLiteral_22429/*"mail"*/);
    sub_21FFC50(&StringLiteral_21192/*"id"*/);
    sub_21FFC50(&StringLiteral_25435/*"transition"*/);
    sub_21FFC50(&StringLiteral_17284/*"accountLinkageAnx/issueToken"*/);
    sub_21FFC50(&StringLiteral_17488/*"appStore"*/);
    this = (WebViewManager_o *)sub_21FFC50(&StringLiteral_21017/*"iOS"*/);
    byte_59380B0 = 1;
  }
  if ( !v4->fields.isButtonEnable )
    return;
  if ( !v3 )
    goto LABEL_65;
  if ( System_String__IndexOf_75501892(v3, (System_String_o *)StringLiteral_1837/*"?"*/, 0) < 0 )
    return;
  if ( System_String__StartsWith(v3, (System_String_o *)StringLiteral_1126/*"//"*/, 0) )
  {
    this = (WebViewManager_o *)System_String__Substring(v3, 2, 0);
    v3 = (System_String_o *)this;
    if ( !this )
      goto LABEL_65;
  }
  v5 = System_String__IndexOf_75501892(v3, (System_String_o *)StringLiteral_1837/*"?"*/, 0);
  v6 = (Il2CppObject *)System_String__Substring_75489544(v3, 0, v5, 0);
  v7 = (System_Collections_Generic_Dictionary_object__object__o *)sub_21FFEBC(System_Collections_Generic_Dictionary_string__string__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v7,
    (const MethodInfo_3FC9AD8 *)Method_System_Collections_Generic_Dictionary_string__string___ctor__);
  v8 = sub_21FFEBC(_f__AnonymousType0_string__Dictionary_string__string___TypeInfo);
  _f__AnonymousType0_object__object____ctor(
    (__f__AnonymousType0__path_j__TPar___args_j__TPar__o *)v8,
    v6,
    (Il2CppObject *)v7,
    (const MethodInfo_3AD95D4 *)Method___f__AnonymousType0_string__Dictionary_string__string____ctor__);
  v9 = System_String__IndexOf_75501892(v3, (System_String_o *)StringLiteral_1837/*"?"*/, 0);
  this = (WebViewManager_o *)System_String__Substring(v3, v9 + 1, 0);
  if ( !this )
    goto LABEL_65;
  this = (WebViewManager_o *)System_String__Split((System_String_o *)this, 0x26u, 0, 0);
  if ( !this )
    goto LABEL_65;
  m_CancellationTokenSource = (int)this->fields.m_CancellationTokenSource;
  v11 = this;
  if ( m_CancellationTokenSource >= 1 )
  {
    v12 = 0;
    while ( 1 )
    {
      if ( (unsigned int)v12 >= m_CancellationTokenSource )
LABEL_66:
        sub_21FFED4(this);
      this = (WebViewManager_o *)*((_QWORD *)&v11->fields.basePanel + v12);
      if ( !this )
        break;
      this = (WebViewManager_o *)System_String__Split((System_String_o *)this, 0x3Du, 0, 0);
      if ( !v8 || !this )
        break;
      if ( LODWORD(this->fields.m_CancellationTokenSource) < 2 )
        goto LABEL_66;
      if ( !*(_QWORD *)(v8 + 24) )
        break;
      System_Collections_Generic_Dictionary_object__object___set_Item(
        *(System_Collections_Generic_Dictionary_object__object__o **)(v8 + 24),
        (Il2CppObject *)this->fields.basePanel,
        (Il2CppObject *)this->fields.baseWindow,
        (const MethodInfo_3FCA454 *)Method_System_Collections_Generic_Dictionary_string__string__set_Item__);
      m_CancellationTokenSource = (int)v11->fields.m_CancellationTokenSource;
      if ( (int)++v12 >= m_CancellationTokenSource )
        goto LABEL_19;
    }
LABEL_65:
    sub_21FFECC(this, msg);
  }
LABEL_19:
  this = (WebViewManager_o *)System_String__Contains(v3, (System_String_o *)StringLiteral_17284/*"accountLinkageAnx/issueToken"*/, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, msg);
    this = (WebViewManager_o *)NetworkManager__ParseQueryString(v3, 0);
    if ( !this )
      goto LABEL_65;
    Item = System_Collections_Generic_Dictionary_object__object___get_Item(
             (System_Collections_Generic_Dictionary_object__object__o *)this,
             (Il2CppObject *)StringLiteral_18791/*"code"*/,
             (const MethodInfo_3FCA3E8 *)Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
    static_fields = AccountLinkageParams_TypeInfo->static_fields;
    static_fields->authorizationCode = (struct System_String_o *)Item;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&static_fields->authorizationCode,
      (int32_t)Item,
      v15,
      v16,
      v17,
      v18,
      v19,
      v20);
    goto LABEL_24;
  }
  if ( !v8 )
    goto LABEL_65;
  if ( System_String__Equals_75473952(*(System_String_o **)(v8 + 16), (System_String_o *)StringLiteral_18145/*"browser"*/, 0) )
  {
    this = *(WebViewManager_o **)(v8 + 24);
    if ( !this )
      goto LABEL_65;
    if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
           (System_Collections_Generic_Dictionary_object__object__o *)this,
           (Il2CppObject *)StringLiteral_25758/*"url"*/,
           (const MethodInfo_3FCA65C *)Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__) )
    {
      this = *(WebViewManager_o **)(v8 + 24);
      if ( !this )
        goto LABEL_65;
      v22 = System_Collections_Generic_Dictionary_object__object___get_Item(
              (System_Collections_Generic_Dictionary_object__object__o *)this,
              (Il2CppObject *)StringLiteral_25758/*"url"*/,
              (const MethodInfo_3FCA3E8 *)Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
      v24 = UnityEngine_WWW__UnEscapeURL((System_String_o *)v22, 0);
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v23);
      WebUrl = NetworkManager__getWebUrl(v24, 1, 1, 0);
      if ( !*(&UnityEngine_Application_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo, v25);
      UnityEngine_Application__OpenURL(WebUrl, 0);
    }
    return;
  }
  if ( System_String__Equals_75473952(*(System_String_o **)(v8 + 16), (System_String_o *)StringLiteral_25435/*"transition"*/, 0) )
  {
    this = *(WebViewManager_o **)(v8 + 24);
    if ( !this )
      goto LABEL_65;
    if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
           (System_Collections_Generic_Dictionary_object__object__o *)this,
           (Il2CppObject *)StringLiteral_24361/*"scene"*/,
           (const MethodInfo_3FCA65C *)Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__) )
    {
      WebViewManager__OnClickClose(v4, v27);
      this = (WebViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      if ( !*(_QWORD *)(v8 + 24) )
        goto LABEL_65;
      v28 = (AvalonSceneManager_o *)this;
      this = (WebViewManager_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                   *(System_Collections_Generic_Dictionary_object__object__o **)(v8 + 24),
                                   (Il2CppObject *)StringLiteral_24361/*"scene"*/,
                                   (const MethodInfo_3FCA3E8 *)Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
      if ( !v28 )
        goto LABEL_65;
      AvalonSceneManager__transitionScene_48092832(v28, (System_String_o *)this, 1, 0, 0);
    }
    return;
  }
  if ( System_String__Equals_75473952(*(System_String_o **)(v8 + 16), (System_String_o *)StringLiteral_17488/*"appStore"*/, 0) )
  {
    this = *(WebViewManager_o **)(v8 + 24);
    if ( !this )
      goto LABEL_65;
    if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
           (System_Collections_Generic_Dictionary_object__object__o *)this,
           (Il2CppObject *)StringLiteral_21192/*"id"*/,
           (const MethodInfo_3FCA65C *)Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__) )
    {
      this = *(WebViewManager_o **)(v8 + 24);
      if ( !this )
        goto LABEL_65;
      v29 = System_Collections_Generic_Dictionary_object__object___get_Item(
              (System_Collections_Generic_Dictionary_object__object__o *)this,
              (Il2CppObject *)StringLiteral_21192/*"id"*/,
              (const MethodInfo_3FCA3E8 *)Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
    }
    else
    {
      v29 = 0;
    }
    v32 = (NetworkManager_StoreCallbackFunc_o *)sub_21FFEBC(NetworkManager_StoreCallbackFunc_TypeInfo);
    NetworkManager_StoreCallbackFunc___ctor(v32, (Il2CppObject *)v4, Method_WebViewManager_OnWebViewStore__, 0);
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v33);
    v34 = &StringLiteral_21017/*"iOS"*/;
LABEL_64:
    NetworkManager__getStoreUrl((System_String_o *)*v34, (System_String_o *)v29, v32, 0);
    return;
  }
  if ( System_String__Equals_75473952(*(System_String_o **)(v8 + 16), (System_String_o *)StringLiteral_20776/*"googlePlay"*/, 0) )
  {
    this = *(WebViewManager_o **)(v8 + 24);
    if ( !this )
      goto LABEL_65;
    if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
           (System_Collections_Generic_Dictionary_object__object__o *)this,
           (Il2CppObject *)StringLiteral_21192/*"id"*/,
           (const MethodInfo_3FCA65C *)Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__) )
    {
      this = *(WebViewManager_o **)(v8 + 24);
      if ( !this )
        goto LABEL_65;
      v29 = System_Collections_Generic_Dictionary_object__object___get_Item(
              (System_Collections_Generic_Dictionary_object__object__o *)this,
              (Il2CppObject *)StringLiteral_21192/*"id"*/,
              (const MethodInfo_3FCA3E8 *)Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
    }
    else
    {
      v29 = 0;
    }
    v32 = (NetworkManager_StoreCallbackFunc_o *)sub_21FFEBC(NetworkManager_StoreCallbackFunc_TypeInfo);
    NetworkManager_StoreCallbackFunc___ctor(v32, (Il2CppObject *)v4, Method_WebViewManager_OnWebViewStore__, 0);
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v35);
    v34 = &StringLiteral_2370/*"Android"*/;
    goto LABEL_64;
  }
  if ( System_String__Equals_75473952(*(System_String_o **)(v8 + 16), (System_String_o *)StringLiteral_18775/*"close"*/, 0) )
  {
LABEL_24:
    WebViewManager__OnClickClose(v4, v21);
    return;
  }
  if ( System_String__Equals_75473952(*(System_String_o **)(v8 + 16), (System_String_o *)StringLiteral_22429/*"mail"*/, 0) )
  {
    this = *(WebViewManager_o **)(v8 + 24);
    if ( !this )
      goto LABEL_65;
    v30 = System_Collections_Generic_Dictionary_object__object___ContainsKey(
            (System_Collections_Generic_Dictionary_object__object__o *)this,
            (Il2CppObject *)StringLiteral_21776/*"inquiry"*/,
            (const MethodInfo_3FCA65C *)Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__);
    WebViewManager__OpenSupportMail((WebViewManager_o *)v30, v30, v31);
  }
}


void WebViewManager__OnStarted(WebViewManager_o *this, System_String_o *message, const MethodInfo *method)
{
  ;
}


void WebViewManager__OnWebViewStore(WebViewManager_o *this, System_String_o *url, const MethodInfo *method)
{
  const MethodInfo *v3; // x7

  if ( (byte_59380B2 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_59380B2 = 1;
  }
  if ( url )
    WebViewManager__OpenViewLocal(this, (System_String_o *)StringLiteral_1/*""*/, url, 0, this->fields.callbackFunc, 0, 0, v3);
}


bool WebViewManager__OpenNews(
        System_String_o *title,
        int32_t id,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  __int64 v7; // x1
  Il2CppObject *Instance; // x22
  _BOOL8 v9; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x4

  if ( (byte_59380A4 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_WebViewManager__get_Instance__);
    byte_59380A4 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_WebViewManager__get_Instance__);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
  v9 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( v9 )
    return 0;
  if ( !Instance )
    sub_21FFECC(v9, v10);
  return WebViewManager__OpenNewsLocal((WebViewManager_o *)Instance, title, id, callbackFunc, v11);
}


bool WebViewManager__OpenNewsLocal(
        WebViewManager_o *this,
        System_String_o *title,
        int32_t id,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v10; // x1
  Il2CppObject *Entity; // x0
  const MethodInfo *v12; // x7
  int klass; // w8
  System_String_o *v14; // x2
  System_String_o *monitor; // x3

  if ( (byte_59380A9 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_NewsMaster___);
    sub_21FFC50(&Method_DataMasterBase_NewsMaster__NewsEntity__int__GetEntity__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_59380A9 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_NewsMaster___)) == 0 )
  {
    sub_21FFECC(Instance, v10);
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             id,
             (const MethodInfo_3EDD388 *)Method_DataMasterBase_NewsMaster__NewsEntity__int__GetEntity__);
  if ( Entity )
  {
    klass = (int)Entity[2].klass;
    if ( klass == 1 )
    {
      monitor = (System_String_o *)Entity[2].monitor;
      v14 = 0;
    }
    else
    {
      if ( klass != 2 )
      {
        LOBYTE(Entity) = 0;
        return (char)Entity;
      }
      v14 = (System_String_o *)Entity[2].monitor;
      monitor = 0;
    }
    WebViewManager__OpenViewLocal(this, title, v14, monitor, callbackFunc, 0, 0, v12);
    LOBYTE(Entity) = 1;
  }
  return (char)Entity;
}


bool WebViewManager__OpenStringView(
        System_String_o *title,
        System_String_o *text,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  __int64 v7; // x1
  Il2CppObject *Instance; // x22
  _BOOL8 v9; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x7
  bool v12; // w23

  if ( (byte_59380A7 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_WebViewManager__get_Instance__);
    byte_59380A7 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_WebViewManager__get_Instance__);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
  v9 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  v12 = v9;
  if ( !v9 )
  {
    if ( !Instance )
      sub_21FFECC(v9, v10);
    WebViewManager__OpenViewLocal((WebViewManager_o *)Instance, title, 0, text, callbackFunc, 0, 0, v11);
  }
  return !v12;
}


// local variable allocation has failed, the output may be wrong!
void WebViewManager__OpenSupportMail(WebViewManager_o *this, bool isInquiry, const MethodInfo *method)
{
  System_String_o *v4; // x0
  __int64 v5; // x1
  bool v6; // zf
  System_String_o *v7; // x19
  System_String_o **v8; // x9
  System_String_o *v9; // x20
  System_String_o *v10; // x20
  Il2CppObject *Instance; // x0
  __int64 v12; // x1
  NetworkManager_c *v13; // x0
  Il2CppObject *friendCode; // x21
  Il2CppObject *operatingSystem; // x22
  Il2CppObject *deviceModel; // x23
  System_String_o *v17; // x0
  __int64 v18; // x1
  System_String_o *v19; // x21
  System_String_o *v20; // x21
  System_String_o *v21; // x22
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  Il2CppObject *v28; // x20
  int32_t v29; // w1
  System_String_o *v30; // x2
  System_String_o *v31; // x3
  int32_t v32; // w4
  int32_t v33; // w5
  bool v34; // w6
  bool v35; // w7
  System_String_o *v36; // x2
  System_String_o *v37; // x3
  int32_t v38; // w4
  int32_t v39; // w5
  bool v40; // w6
  bool v41; // w7
  int32_t v42; // w1
  System_String_o *v43; // x2
  System_String_o *v44; // x3
  int32_t v45; // w4
  int32_t v46; // w5
  bool v47; // w6
  bool v48; // w7
  System_String_o *v49; // x2
  System_String_o *v50; // x3
  int32_t v51; // w4
  int32_t v52; // w5
  bool v53; // w6
  bool v54; // w7
  int32_t v55; // w1
  System_String_o *v56; // x2
  System_String_o *v57; // x3
  int32_t v58; // w4
  int32_t v59; // w5
  bool v60; // w6
  bool v61; // w7
  __int64 v62; // x1
  System_String_o *v63; // x19

  if ( (byte_59380B1 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Application_TypeInfo);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
    sub_21FFC50(&string___TypeInfo);
    sub_21FFC50(&System_Uri_TypeInfo);
    sub_21FFC50(&StringLiteral_12985/*"SUPPORTMAIL_SUBJECT_SUGGEST"*/);
    sub_21FFC50(&StringLiteral_12982/*"SUPPORTMAIL_ADDRESS"*/);
    sub_21FFC50(&StringLiteral_1846/*"?subject="*/);
    sub_21FFC50(&StringLiteral_537/*"&body="*/);
    sub_21FFC50(&StringLiteral_12983/*"SUPPORTMAIL_BODY"*/);
    sub_21FFC50(&StringLiteral_12984/*"SUPPORTMAIL_SUBJECT_INQUIRY"*/);
    sub_21FFC50(&StringLiteral_22431/*"mailto:"*/);
    byte_59380B1 = 1;
  }
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, isInquiry);
  v4 = LocalizationManager__Get((System_String_o *)StringLiteral_12982/*"SUPPORTMAIL_ADDRESS"*/, 0);
  v6 = !isInquiry;
  v7 = v4;
  if ( v6 )
    v8 = (System_String_o **)&StringLiteral_12985/*"SUPPORTMAIL_SUBJECT_SUGGEST"*/;
  else
    v8 = (System_String_o **)&StringLiteral_12984/*"SUPPORTMAIL_SUBJECT_INQUIRY"*/;
  v9 = *v8;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v5);
  v10 = LocalizationManager__Get(v9, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
  if ( !Instance )
    goto LABEL_28;
  if ( !byte_5938139 )
  {
    sub_21FFC50(&NetworkManager_TypeInfo);
    byte_5938139 = 1;
  }
  v13 = NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v12);
    v13 = NetworkManager_TypeInfo;
  }
  friendCode = (Il2CppObject *)v13->static_fields->friendCode;
  operatingSystem = (Il2CppObject *)UnityEngine_SystemInfo__get_operatingSystem(0);
  deviceModel = (Il2CppObject *)UnityEngine_SystemInfo__get_deviceModel(0);
  v17 = LocalizationManager__Get((System_String_o *)StringLiteral_12983/*"SUPPORTMAIL_BODY"*/, 0);
  v19 = System_String__Format_75484644(v17, friendCode, operatingSystem, deviceModel, 0);
  if ( !*(&System_Uri_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Uri_TypeInfo, v18);
  v20 = System_Uri__EscapeDataString(v19, 0);
  v21 = System_Uri__EscapeDataString(v10, 0);
  Instance = (Il2CppObject *)sub_21FFD10(string___TypeInfo, 6);
  if ( !Instance )
LABEL_28:
    sub_21FFECC(Instance, v12);
  v28 = Instance;
  if ( !LODWORD(Instance[1].monitor) )
    goto LABEL_27;
  v29 = StringLiteral_22431/*"mailto:"*/;
  Instance[2].klass = (Il2CppClass *)StringLiteral_22431/*"mailto:"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&Instance[2], v29, v22, v23, v24, v25, v26, v27);
  if ( ((__int64)v28[1].monitor & 0xFFFFFFFE) == 0 )
    goto LABEL_27;
  v28[2].monitor = v7;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v28[2].monitor, (int32_t)v7, v30, v31, v32, v33, v34, v35);
  if ( LODWORD(v28[1].monitor) <= 2 )
    goto LABEL_27;
  v42 = StringLiteral_1846/*"?subject="*/;
  v28[3].klass = (Il2CppClass *)StringLiteral_1846/*"?subject="*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v28[3], v42, v36, v37, v38, v39, v40, v41);
  if ( ((__int64)v28[1].monitor & 0xFFFFFFFC) == 0
    || (v28[3].monitor = v21,
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v28[3].monitor, (int32_t)v21, v43, v44, v45, v46, v47, v48),
        LODWORD(v28[1].monitor) <= 4)
    || (v55 = StringLiteral_537/*"&body="*/,
        v28[4].klass = (Il2CppClass *)StringLiteral_537/*"&body="*/,
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v28[4], v55, v49, v50, v51, v52, v53, v54),
        LODWORD(v28[1].monitor) <= 5) )
  {
LABEL_27:
    sub_21FFED4(Instance);
  }
  v28[4].monitor = v20;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v28[4].monitor, (int32_t)v20, v56, v57, v58, v59, v60, v61);
  v63 = System_String__Concat_75483816((System_String_array *)v28, 0);
  if ( !*(&UnityEngine_Application_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo, v62);
  UnityEngine_Application__OpenURL(v63, 0);
}


bool WebViewManager__OpenView(
        System_String_o *title,
        System_String_o *path,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  __int64 v7; // x1
  Il2CppObject *Instance; // x22
  _BOOL8 v9; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x7
  bool v12; // w23

  if ( (byte_59380A6 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_WebViewManager__get_Instance__);
    byte_59380A6 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_WebViewManager__get_Instance__);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
  v9 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  v12 = v9;
  if ( !v9 )
  {
    if ( !Instance )
      sub_21FFECC(v9, v10);
    WebViewManager__OpenViewLocal((WebViewManager_o *)Instance, title, path, 0, callbackFunc, 0, 0, v11);
  }
  return !v12;
}


bool WebViewManager__OpenViewDynamic(
        System_String_o *title,
        System_String_o *path,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  __int64 v7; // x1
  Il2CppObject *Instance; // x22
  __int64 v9; // x1
  bool v10; // w23
  System_String_o *BaseUrl; // x0
  System_String_o *v12; // x0
  __int64 v13; // x1
  const MethodInfo *v14; // x7

  if ( (byte_59380A5 & 1) == 0 )
  {
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_WebViewManager__get_Instance__);
    sub_21FFC50(&StringLiteral_16188/*"WebView/"*/);
    byte_59380A5 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_WebViewManager__get_Instance__);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
  v10 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( !v10 )
  {
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v9);
    BaseUrl = NetworkManager__getBaseUrl(1, 0);
    v12 = System_String__Concat_75481624(BaseUrl, (System_String_o *)StringLiteral_16188/*"WebView/"*/, path, 0);
    if ( !Instance )
      sub_21FFECC(v12, v13);
    WebViewManager__OpenViewLocal((WebViewManager_o *)Instance, title, v12, 0, callbackFunc, 0, 0, v14);
  }
  return !v10;
}


bool WebViewManager__OpenViewLocal(
        WebViewManager_o *this,
        System_String_o *title,
        System_String_o *path,
        System_String_o *data,
        System_Action_o *callbackFunc,
        System_String_o *username,
        System_String_o *password,
        const MethodInfo *method)
{
  System_String_o *v8; // x27
  __int64 v15; // x1
  NetworkManager_c *v16; // x0
  __int64 WebUrl; // x0
  __int64 v18; // x1
  System_String_o *v19; // x23
  Il2CppObject *Component_object; // x0
  struct WebViewObject_o **p_webView; // x24
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  __int64 v28; // x1
  UnityEngine_Object_o *webView; // x21
  const MethodInfo *v30; // x1
  Il2CppObject *v31; // x0
  System_String_o *v32; // x2
  System_String_o *v33; // x3
  int32_t v34; // w4
  int32_t v35; // w5
  bool v36; // w6
  bool v37; // w7
  WebViewObject_o *v38; // x25
  System_Action_object__o *v39; // x26
  System_Action_object__o *v40; // x27
  System_Action_object__o *v41; // x28
  System_Action_object__o *v42; // x29
  System_Action_object__o *v43; // x21
  System_String_o *v44; // x2
  System_String_o *v45; // x3
  int32_t v46; // w4
  int32_t v47; // w5
  bool v48; // w6
  bool v49; // w7
  __int64 v50; // x1
  UIWidget_o *baseWindow; // x20
  UnityEngine_Transform_o *v52; // x20
  __int64 v53; // x1
  UnityEngine_GameObject_o *gameObject; // x20
  WebViewManager_c *v55; // x8
  float OPEN_TIME; // s8
  __int64 v57; // x1
  TweenScale_o *v58; // x20
  UnityEngine_GameObject_o *v59; // x0
  System_String_o *v60; // x2
  System_String_o *v61; // x3
  int32_t v62; // w4
  int32_t v63; // w5
  bool v64; // w6
  bool v65; // w7
  int32_t v66; // w1
  System_String_o *v67; // x2
  System_String_o *v68; // x3
  int32_t v69; // w4
  int32_t v70; // w5
  bool v71; // w6
  bool v72; // w7
  UnityEngine_Transform_o *v73; // x20
  System_String_o *v75; // [xsp+68h] [xbp-68h]

  v8 = password;
  if ( (byte_59380AA & 1) == 0 )
  {
    sub_21FFC50(&System_Action_string__TypeInfo);
    sub_21FFC50(&Method_UnityEngine_Component_GetComponent_WebViewObject___);
    sub_21FFC50(&Method_UnityEngine_GameObject_AddComponent_WebViewObject___);
    sub_21FFC50(&ManagerConfig_TypeInfo);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_21FFC50(&TouchEffectManager_TypeInfo);
    sub_21FFC50(&Method_WebViewManager__OpenViewLocal_b__33_0__);
    sub_21FFC50(&Method_WebViewManager__OpenViewLocal_b__33_1__);
    sub_21FFC50(&Method_WebViewManager__OpenViewLocal_b__33_2__);
    sub_21FFC50(&Method_WebViewManager__OpenViewLocal_b__33_3__);
    sub_21FFC50(&Method_WebViewManager__OpenViewLocal_b__33_4__);
    sub_21FFC50(&WebViewManager_TypeInfo);
    sub_21FFC50(&StringLiteral_6259/*"EndOpen"*/);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_59380AA = 1;
  }
  this->fields.callbackFunc = callbackFunc;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc,
    (int32_t)callbackFunc,
    path,
    data,
    (int32_t)callbackFunc,
    (int32_t)username,
    (bool)password,
    (bool)method);
  v16 = NetworkManager_TypeInfo;
  *(_WORD *)&this->fields.isLoadCompleted = 0;
  this->fields.isVisibilityRequested = 1;
  if ( !*(&v16->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v16, v15);
  WebUrl = (__int64)NetworkManager__getWebUrl(path, 1, 1, 0);
  if ( !this->fields.titleLabel )
    goto LABEL_50;
  v19 = (System_String_o *)WebUrl;
  UILabel__set_text(this->fields.titleLabel, title, 0);
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_WebViewObject___);
  this->fields.webView = (struct WebViewObject_o *)Component_object;
  p_webView = &this->fields.webView;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.webView,
    (int32_t)Component_object,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  webView = (UnityEngine_Object_o *)this->fields.webView;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v28);
  if ( UnityEngine_Object__op_Equality(webView, 0, 0) )
  {
    v75 = v8;
    WebUrl = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !WebUrl )
      goto LABEL_50;
    v31 = UnityEngine_GameObject__AddComponent_object_(
            (UnityEngine_GameObject_o *)WebUrl,
            (const MethodInfo_38839E8 *)Method_UnityEngine_GameObject_AddComponent_WebViewObject___);
    this->fields.webView = (struct WebViewObject_o *)v31;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.webView, (int32_t)v31, v32, v33, v34, v35, v36, v37);
    v38 = this->fields.webView;
    v39 = (System_Action_object__o *)sub_21FFEBC(System_Action_string__TypeInfo);
    System_Action_object____ctor(v39, (Il2CppObject *)this, Method_WebViewManager__OpenViewLocal_b__33_0__, 0);
    v40 = (System_Action_object__o *)sub_21FFEBC(System_Action_string__TypeInfo);
    System_Action_object____ctor(v40, (Il2CppObject *)this, Method_WebViewManager__OpenViewLocal_b__33_1__, 0);
    v41 = (System_Action_object__o *)sub_21FFEBC(System_Action_string__TypeInfo);
    System_Action_object____ctor(v41, (Il2CppObject *)this, Method_WebViewManager__OpenViewLocal_b__33_2__, 0);
    v42 = (System_Action_object__o *)sub_21FFEBC(System_Action_string__TypeInfo);
    System_Action_object____ctor(v42, (Il2CppObject *)this, Method_WebViewManager__OpenViewLocal_b__33_3__, 0);
    v43 = (System_Action_object__o *)sub_21FFEBC(System_Action_string__TypeInfo);
    System_Action_object____ctor(v43, (Il2CppObject *)this, Method_WebViewManager__OpenViewLocal_b__33_4__, 0);
    if ( !v38 )
      goto LABEL_50;
    WebViewObject__Init(
      v38,
      (System_Action_string__o *)v39,
      (System_Action_string__o *)v40,
      (System_Action_string__o *)v41,
      (System_Action_string__o *)v42,
      (System_Action_string__o *)v43,
      0,
      0,
      0,
      1,
      (System_String_o *)StringLiteral_1/*""*/,
      0,
      0,
      1,
      0,
      1,
      1,
      0,
      0);
    v8 = v75;
  }
  WebViewManager__SetMargins(this, v30);
  this->fields.errorMessage = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.errorMessage, 0, v44, v45, v46, v47, v48, v49);
  if ( username && v8 )
  {
    WebUrl = (__int64)*p_webView;
    if ( !*p_webView )
      goto LABEL_50;
    WebViewObject__SetBasicAuthInfo((WebViewObject_o *)WebUrl, username, v8, 0);
  }
  WebUrl = (__int64)*p_webView;
  if ( data )
  {
    if ( !WebUrl )
      goto LABEL_50;
    WebViewObject__LoadHTML((WebViewObject_o *)WebUrl, data, v19, 0);
  }
  else
  {
    if ( !WebUrl )
      goto LABEL_50;
    WebViewObject__LoadURL((WebViewObject_o *)WebUrl, v19, 0);
  }
  if ( !this->fields.isButtonEnable )
  {
    WebUrl = (__int64)this->fields.webViewBase;
    if ( WebUrl )
    {
      WebUrl = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)WebUrl, 0);
      if ( WebUrl )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)WebUrl, 1, 0);
        if ( !*(&TouchEffectManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(TouchEffectManager_TypeInfo, v50);
        TouchEffectManager__SetBlock(1, 0);
        WebUrl = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_476EDF8 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
        if ( WebUrl )
        {
          MissionNotifyManager__StartPause((MissionNotifyManager_o *)WebUrl, 0);
          baseWindow = this->fields.baseWindow;
          WebUrl = (__int64)ManagerConfig_TypeInfo;
          if ( !*(&ManagerConfig_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo, v18);
          if ( baseWindow )
          {
            UIWidget__set_height(baseWindow, ManagerConfig_TypeInfo->static_fields->HEIGHT, 0);
            WebUrl = (__int64)this->fields.baseWindow;
            if ( WebUrl )
            {
              WebUrl = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)WebUrl, 0);
              v52 = (UnityEngine_Transform_o *)WebUrl;
              if ( !byte_5931940 )
              {
                WebUrl = sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
                byte_5931940 = 1;
              }
              if ( v52 )
              {
                UnityEngine_Transform__set_localScale(v52, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
                WebUrl = (__int64)this->fields.baseWindow;
                if ( WebUrl )
                {
                  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)WebUrl, 0);
                  v55 = WebViewManager_TypeInfo;
                  if ( !*(&WebViewManager_TypeInfo->_2.cctor_finished + 1) )
                  {
                    j_il2cpp_runtime_class_init_0(WebViewManager_TypeInfo, v53);
                    v55 = WebViewManager_TypeInfo;
                  }
                  OPEN_TIME = v55->static_fields->OPEN_TIME;
                  if ( !byte_5931945 )
                  {
                    sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
                    byte_5931945 = 1;
                  }
                  v58 = TweenScale__Begin(
                          gameObject,
                          OPEN_TIME,
                          UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
                          0);
                  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v57);
                  WebUrl = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v58, 0, 0);
                  if ( (WebUrl & 1) != 0 )
                  {
                    if ( v58 )
                    {
                      v58->fields.method = 3;
                      v59 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
                      v58->fields.eventReceiver = v59;
                      sub_21FFBF4(
                        (MissionNaviTransitionBoardItem_o *)&v58->fields.eventReceiver,
                        (int32_t)v59,
                        v60,
                        v61,
                        v62,
                        v63,
                        v64,
                        v65);
                      v66 = StringLiteral_6259/*"EndOpen"*/;
                      v58->fields.callWhenFinished = (struct System_String_o *)StringLiteral_6259/*"EndOpen"*/;
                      sub_21FFBF4(
                        (MissionNaviTransitionBoardItem_o *)&v58->fields.callWhenFinished,
                        v66,
                        v67,
                        v68,
                        v69,
                        v70,
                        v71,
                        v72);
                      return 1;
                    }
                  }
                  else
                  {
                    WebUrl = (__int64)this->fields.baseWindow;
                    if ( WebUrl )
                    {
                      WebUrl = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)WebUrl, 0);
                      v73 = (UnityEngine_Transform_o *)WebUrl;
                      if ( !byte_5931945 )
                      {
                        WebUrl = sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
                        byte_5931945 = 1;
                      }
                      if ( v73 )
                      {
                        UnityEngine_Transform__set_localScale(
                          v73,
                          UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
                          0);
                        this->fields.isButtonEnable = 1;
                        return 1;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_50:
    sub_21FFECC(WebUrl, v18);
  }
  return 1;
}


void WebViewManager__OpenViewLocal_48482232(
        WebViewManager_o *this,
        UnityEngine_GameObject_o *prefab,
        System_String_o *path,
        UnityEngine_Vector3_o viewPos,
        System_Action_o *callback,
        bool isLoadedNonDisp,
        const MethodInfo *method)
{
  float z; // s8
  float y; // s9
  float x; // s10
  __int64 v15; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v17; // x1
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  __int64 v30; // x1
  NetworkManager_c *v31; // x0
  int v32; // w9
  __int64 v33; // x1
  System_String_o *WebUrl; // x21
  System_Action_o *v35; // x23
  System_String_o *v36; // x2
  System_String_o *v37; // x3
  int32_t v38; // w4
  int32_t v39; // w5
  bool v40; // w6
  bool v41; // w7
  System_Action_o *v42; // x23
  System_String_o *v43; // x2
  System_String_o *v44; // x3
  int32_t v45; // w4
  int32_t v46; // w5
  bool v47; // w6
  bool v48; // w7
  Il2CppObject *Component_object; // x0
  struct WebViewObject_o **p_webView; // x23
  System_String_o *v51; // x2
  System_String_o *v52; // x3
  int32_t v53; // w4
  int32_t v54; // w5
  bool v55; // w6
  bool v56; // w7
  __int64 v57; // x1
  UnityEngine_Object_o *webView; // x24
  Il2CppObject *v59; // x0
  System_String_o *v60; // x2
  System_String_o *v61; // x3
  int32_t v62; // w4
  int32_t v63; // w5
  bool v64; // w6
  bool v65; // w7
  WebViewObject_o *v66; // x23
  System_Action_object__o *v67; // x24
  System_Action_object__o *v68; // x25
  System_Action_object__o *v69; // x26
  System_Action_object__o *v70; // x27
  System_Action_object__o *v71; // x28
  Il2CppObject *v72; // x0
  const MethodInfo *v73; // x2
  System_String_o *v74; // x2
  System_String_o *v75; // x3
  int32_t v76; // w4
  int32_t v77; // w5
  bool v78; // w6
  bool v79; // w7
  const MethodInfo *v80; // x2
  UnityEngine_Vector3_o v81; // 0:s0.4,4:s1.4,8:s2.4

  z = viewPos.fields.z;
  y = viewPos.fields.y;
  x = viewPos.fields.x;
  if ( (byte_59380AB & 1) == 0 )
  {
    sub_21FFC50(&System_Action_string__TypeInfo);
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_UnityEngine_Component_GetComponent_WebViewObject___);
    sub_21FFC50(&Method_UnityEngine_GameObject_AddComponent_WebViewObject___);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_WebViewManager___c__DisplayClass34_0__OpenViewLocal_b__0__);
    sub_21FFC50(&Method_WebViewManager___c__DisplayClass34_0__OpenViewLocal_b__1__);
    sub_21FFC50(&Method_WebViewManager___c__DisplayClass34_0__OpenViewLocal_b__2__);
    sub_21FFC50(&Method_WebViewManager___c__DisplayClass34_0__OpenViewLocal_b__3__);
    sub_21FFC50(&Method_WebViewManager___c__DisplayClass34_0__OpenViewLocal_b__4__);
    sub_21FFC50(&Method_WebViewManager___c__DisplayClass34_0__OpenViewLocal_b__5__);
    sub_21FFC50(&Method_WebViewManager___c__DisplayClass34_0__OpenViewLocal_b__6__);
    sub_21FFC50(&WebViewManager___c__DisplayClass34_0_TypeInfo);
    sub_21FFC50(&StringLiteral_10263/*"OnClickTargetWebViewClose"*/);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_59380AB = 1;
  }
  v15 = sub_21FFEBC(WebViewManager___c__DisplayClass34_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v15, 0);
  if ( !v15 )
    goto LABEL_19;
  *(_QWORD *)(v15 + 24) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v15 + 24), (int32_t)this, v18, v19, v20, v21, v22, v23);
  *(_QWORD *)(v15 + 32) = callback;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v15 + 32), (int32_t)callback, v24, v25, v26, v27, v28, v29);
  v31 = NetworkManager_TypeInfo;
  *(_WORD *)&this->fields.isLoadCompleted = 0;
  this->fields.isLoadedNonDisp = isLoadedNonDisp;
  v32 = *(&v31->_2.cctor_finished + 1);
  this->fields.isVisibilityRequested = !isLoadedNonDisp;
  if ( !v32 )
    j_il2cpp_runtime_class_init_0(v31, v30);
  WebUrl = NetworkManager__getWebUrl(path, 1, 1, 0);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v33);
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)prefab, 0, 0) )
  {
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10263/*"OnClickTargetWebViewClose"*/,
      1.0,
      0);
    ActionExtensions__Call(*(System_Action_o **)(v15 + 32), 0);
    return;
  }
  *(_BYTE *)(v15 + 16) = 0;
  v35 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(v35, (Il2CppObject *)v15, Method_WebViewManager___c__DisplayClass34_0__OpenViewLocal_b__0__, 0);
  this->fields.tryCallCallback = v35;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.tryCallCallback,
    (int32_t)v35,
    v36,
    v37,
    v38,
    v39,
    v40,
    v41);
  v42 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(v42, (Il2CppObject *)v15, Method_WebViewManager___c__DisplayClass34_0__OpenViewLocal_b__1__, 0);
  this->fields.callCallbackImmediately = v42;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.callCallbackImmediately,
    (int32_t)v42,
    v43,
    v44,
    v45,
    v46,
    v47,
    v48);
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_WebViewObject___);
  this->fields.webView = (struct WebViewObject_o *)Component_object;
  p_webView = &this->fields.webView;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.webView,
    (int32_t)Component_object,
    v51,
    v52,
    v53,
    v54,
    v55,
    v56);
  webView = (UnityEngine_Object_o *)this->fields.webView;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v57);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(webView, 0, 0);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( gameObject )
    {
      v59 = UnityEngine_GameObject__AddComponent_object_(
              gameObject,
              (const MethodInfo_38839E8 *)Method_UnityEngine_GameObject_AddComponent_WebViewObject___);
      *p_webView = (struct WebViewObject_o *)v59;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.webView, (int32_t)v59, v60, v61, v62, v63, v64, v65);
      v66 = *p_webView;
      v67 = (System_Action_object__o *)sub_21FFEBC(System_Action_string__TypeInfo);
      System_Action_object____ctor(
        v67,
        (Il2CppObject *)v15,
        Method_WebViewManager___c__DisplayClass34_0__OpenViewLocal_b__2__,
        0);
      v68 = (System_Action_object__o *)sub_21FFEBC(System_Action_string__TypeInfo);
      System_Action_object____ctor(
        v68,
        (Il2CppObject *)v15,
        Method_WebViewManager___c__DisplayClass34_0__OpenViewLocal_b__3__,
        0);
      v69 = (System_Action_object__o *)sub_21FFEBC(System_Action_string__TypeInfo);
      System_Action_object____ctor(
        v69,
        (Il2CppObject *)v15,
        Method_WebViewManager___c__DisplayClass34_0__OpenViewLocal_b__4__,
        0);
      v70 = (System_Action_object__o *)sub_21FFEBC(System_Action_string__TypeInfo);
      System_Action_object____ctor(
        v70,
        (Il2CppObject *)v15,
        Method_WebViewManager___c__DisplayClass34_0__OpenViewLocal_b__5__,
        0);
      v71 = (System_Action_object__o *)sub_21FFEBC(System_Action_string__TypeInfo);
      System_Action_object____ctor(
        v71,
        (Il2CppObject *)v15,
        Method_WebViewManager___c__DisplayClass34_0__OpenViewLocal_b__6__,
        0);
      if ( v66 )
      {
        WebViewObject__Init(
          v66,
          (System_Action_string__o *)v67,
          (System_Action_string__o *)v68,
          (System_Action_string__o *)v69,
          (System_Action_string__o *)v70,
          (System_Action_string__o *)v71,
          0,
          0,
          0,
          1,
          (System_String_o *)StringLiteral_1/*""*/,
          0,
          0,
          1,
          0,
          1,
          1,
          0,
          0);
        goto LABEL_16;
      }
    }
LABEL_19:
    sub_21FFECC(gameObject, v17);
  }
LABEL_16:
  if ( !prefab )
    goto LABEL_19;
  v72 = UnityEngine_GameObject__GetComponent_object_(
          prefab,
          (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
  v81.fields.x = x;
  v81.fields.y = y;
  v81.fields.z = z;
  WebViewManager__SetMargins_48483972(this, (UIWidget_o *)v72, v81, v73);
  this->fields.errorMessage = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.errorMessage, 0, v74, v75, v76, v77, v78, v79);
  gameObject = (UnityEngine_GameObject_o *)this->fields.webView;
  if ( !gameObject )
    goto LABEL_19;
  WebViewObject__LoadURL((WebViewObject_o *)gameObject, WebUrl, 0);
  WebViewManager__LargeIn(this, prefab, v80);
}


bool WebViewManager__OpenViewWithBasicAuth(
        System_String_o *title,
        System_String_o *path,
        System_String_o *username,
        System_String_o *password,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  __int64 v11; // x1
  Il2CppObject *Instance; // x24
  _BOOL8 v13; // x0
  __int64 v14; // x1
  const MethodInfo *v15; // x7
  bool v16; // w25

  if ( (byte_59380A3 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_WebViewManager__get_Instance__);
    byte_59380A3 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_WebViewManager__get_Instance__);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11);
  v13 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  v16 = v13;
  if ( !v13 )
  {
    if ( !Instance )
      sub_21FFECC(v13, v14);
    WebViewManager__OpenViewLocal((WebViewManager_o *)Instance, title, path, 0, callbackFunc, username, password, v15);
  }
  return !v16;
}


void WebViewManager__OpenView_48481972(
        UnityEngine_GameObject_o *prefab,
        System_String_o *path,
        UnityEngine_Vector3_o viewPos,
        System_Action_o *callback,
        bool isLoadedNonDisp,
        const MethodInfo *method)
{
  float z; // s8
  float y; // s9
  float x; // s10
  __int64 v13; // x1
  Il2CppObject *Instance; // x23
  _BOOL8 v15; // x0
  __int64 v16; // x1
  const MethodInfo *v17; // x5
  UnityEngine_Vector3_o v18; // 0:s0.4,4:s1.4,8:s2.4

  z = viewPos.fields.z;
  y = viewPos.fields.y;
  x = viewPos.fields.x;
  if ( (byte_59380A8 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_WebViewManager__get_Instance__);
    byte_59380A8 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_WebViewManager__get_Instance__);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13);
  v15 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( !v15 )
  {
    if ( !Instance )
      sub_21FFECC(v15, v16);
    v18.fields.y = y;
    v18.fields.z = z;
    v18.fields.x = x;
    WebViewManager__OpenViewLocal_48482232(
      (WebViewManager_o *)Instance,
      prefab,
      path,
      v18,
      callback,
      isLoadedNonDisp,
      v17);
  }
}


void WebViewManager__PressBackKey(WebViewManager_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *webViewBase; // x0
  __int64 v4; // x1
  UnityEngine_Object_o *webView; // x20
  const MethodInfo *v6; // x1

  if ( (byte_59380B8 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_59380B8 = 1;
  }
  webViewBase = (UnityEngine_Component_o *)this->fields.webViewBase;
  if ( !webViewBase )
    goto LABEL_14;
  webViewBase = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(webViewBase, 0);
  if ( !webViewBase )
    goto LABEL_14;
  if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)webViewBase, 0) )
  {
    webView = (UnityEngine_Object_o *)this->fields.webView;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
    if ( UnityEngine_Object__op_Inequality(webView, 0, 0) )
    {
      webViewBase = (UnityEngine_Component_o *)this->fields.webView;
      if ( webViewBase )
      {
        if ( WebViewObject__CanGoBack((WebViewObject_o *)webViewBase, 0) )
          WebViewManager__OnClickBack(this, v6);
        else
          WebViewManager__OnClickClose(this, v6);
        return;
      }
LABEL_14:
      sub_21FFECC(webViewBase, method);
    }
  }
}


void WebViewManager__SetMargins(WebViewManager_o *this, const MethodInfo *method)
{
  int32_t width; // w19
  const MethodInfo *v4; // x1
  int32_t height; // w20
  WebViewManager_o *webView; // x0
  int m_CachedPtr_high; // w23
  struct UIWidget_o *baseWindow; // x8
  int mWidth; // w22
  int m_CancellationTokenSource; // w24
  float ScreenToUiRatio; // s0
  struct UIWidget_o *v12; // x8
  int mHeight; // w25
  float v14; // s8
  float v15; // s9
  WebViewManager_o *v16; // x0
  const MethodInfo *v17; // x1
  float v18; // s0
  float v19; // s1
  float v20; // s2
  int v21; // w9
  float v22; // s0
  float v23; // s1
  int32_t v24; // w4
  float v25; // s4
  float v26; // s0
  int32_t v27; // w2
  int v28; // w8
  float v29; // s0
  int32_t v30; // w1

  if ( (byte_59380B9 & 1) == 0 )
  {
    sub_21FFC50(&ResolutionManager_TypeInfo);
    byte_59380B9 = 1;
  }
  width = UnityEngine_Screen__get_width(0);
  height = UnityEngine_Screen__get_height(0);
  if ( !*(&ResolutionManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ResolutionManager_TypeInfo, v4);
  if ( !byte_593813A )
  {
    sub_21FFC50(&ResolutionManager_TypeInfo);
    byte_593813A = 1;
  }
  webView = (WebViewManager_o *)ResolutionManager_TypeInfo;
  if ( !*(&ResolutionManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ResolutionManager_TypeInfo, v4);
    webView = (WebViewManager_o *)ResolutionManager_TypeInfo;
  }
  m_CachedPtr_high = HIDWORD(webView[1].fields.baseWindow->fields.m_CachedPtr);
  if ( !byte_593813B )
  {
    sub_21FFC50(&ResolutionManager_TypeInfo);
    webView = (WebViewManager_o *)ResolutionManager_TypeInfo;
    byte_593813B = 1;
  }
  if ( !HIDWORD(webView[1].fields.callbackFunc) )
  {
    j_il2cpp_runtime_class_init_0(webView, v4);
    webView = (WebViewManager_o *)ResolutionManager_TypeInfo;
  }
  baseWindow = this->fields.baseWindow;
  if ( !baseWindow )
    goto LABEL_31;
  mWidth = baseWindow->fields.mWidth;
  m_CancellationTokenSource = (int)webView[1].fields.baseWindow->fields.m_CancellationTokenSource;
  ScreenToUiRatio = WebViewManager__get_ScreenToUiRatio(webView, v4);
  v12 = this->fields.baseWindow;
  if ( !v12
    || (mHeight = v12->fields.mHeight,
        v14 = ScreenToUiRatio,
        v15 = WebViewManager__get_ScreenToUiRatio(webView, v4),
        v18 = WebViewManager__get_ScreenToUiRatio(v16, v17),
        (webView = (WebViewManager_o *)this->fields.webView) == 0) )
  {
LABEL_31:
    sub_21FFECC(webView, v4);
  }
  v19 = (float)mHeight / v15;
  v20 = (float)m_CancellationTokenSource / (float)height;
  v21 = (int)v19;
  if ( v19 == INFINITY )
    v21 = 0x80000000;
  v22 = 57.0 / v18;
  v23 = v20 * vcvts_n_f32_s32(height - v21, 1u);
  if ( v23 == INFINITY )
    v24 = 0x80000000;
  else
    v24 = (int)v23;
  v25 = (float)mWidth / v14;
  v26 = v20 * (float)((float)(v22 + (float)v24) + -2.0);
  if ( v26 == INFINITY )
    v27 = 0x80000000;
  else
    v27 = (int)v26;
  if ( v25 == INFINITY )
    v28 = 0x80000000;
  else
    v28 = (int)v25;
  v29 = (float)((float)m_CachedPtr_high / (float)width) * vcvts_n_f32_s32(width - v28, 1u);
  if ( v29 == INFINITY )
    v30 = 0;
  else
    v30 = (int)v29 & ~((int)v29 >> 31);
  WebViewObject__SetMargins((WebViewObject_o *)webView, v30, v27, v30, v24, 0, 0);
}


void WebViewManager__SetMargins_48483972(
        WebViewManager_o *this,
        UIWidget_o *baseWindow,
        UnityEngine_Vector3_o offset,
        const MethodInfo *method)
{
  float y; // s8
  float x; // s9
  int32_t width; // w21
  WebViewManager_o *height; // x0
  int v10; // w20
  const MethodInfo *v11; // x1
  WebViewObject_o *webView; // x0
  __int64 v13; // x1
  float ScreenToUiRatio; // s0
  float v15; // s10
  float v16; // s13
  float v17; // s11
  int32_t mHeight; // s12
  float mWidth; // s14
  ResolutionManager_c *v20; // x0
  ResolutionManager_c *v21; // x0
  float v22; // s15
  float v23; // s14
  ResolutionManager_c *v24; // x0
  ResolutionManager_c *v25; // x0
  float v26; // s10
  float v27; // s15
  float v28; // s8
  double v29; // d9
  __int64 v30; // x1
  double v31; // d0
  double v32; // d0
  double v33; // d1
  double v34; // d1
  double v35; // d9
  float v36; // s12
  float v37; // s14
  double v38; // d8
  float v39; // s13
  float v40; // s12
  __int64 v41; // x1
  double v42; // d0
  float v43; // s10
  double v44; // d0
  double v45; // d1
  double v46; // d1
  double v47; // d11
  float v48; // s14
  float v49; // s13
  double v50; // d8
  __int64 v51; // x1
  double v52; // d0
  double v53; // d0
  double v54; // d1
  double v55; // d1
  double v56; // d13
  float v57; // s10
  double v58; // d8
  double v59; // d0
  double v60; // d0
  double v61; // d1
  double v62; // d1
  int32_t v63; // w4
  int32_t v64; // w2
  int32_t v65; // w3
  int32_t v66; // w1
  float v67; // [xsp+4h] [xbp-7Ch]
  double iptr; // [xsp+8h] [xbp-78h] BYREF

  y = offset.fields.y;
  x = offset.fields.x;
  if ( (byte_59380BA & 1) == 0 )
  {
    sub_21FFC50(&ResolutionManager_TypeInfo);
    byte_59380BA = 1;
  }
  width = UnityEngine_Screen__get_width(0);
  height = (WebViewManager_o *)UnityEngine_Screen__get_height(0);
  v10 = (int)height;
  ScreenToUiRatio = WebViewManager__get_ScreenToUiRatio(height, v11);
  if ( !baseWindow )
LABEL_104:
    sub_21FFECC(webView, v13);
  v15 = 1.0;
  v16 = 1.0;
  v17 = 1.0 / ScreenToUiRatio;
  mHeight = baseWindow->fields.mHeight;
  mWidth = (float)baseWindow->fields.mWidth;
  if ( width >= 1 )
  {
    if ( !*(&ResolutionManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(ResolutionManager_TypeInfo, v13);
    if ( !byte_593813A )
    {
      sub_21FFC50(&ResolutionManager_TypeInfo);
      byte_593813A = 1;
    }
    v20 = ResolutionManager_TypeInfo;
    if ( !*(&ResolutionManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(ResolutionManager_TypeInfo, v13);
      v20 = ResolutionManager_TypeInfo;
    }
    v16 = 1.0;
    if ( v20->static_fields->_DefaultResolutionScreenWidth_k__BackingField >= 1 )
    {
      if ( !*(&v20->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(v20, v13);
      if ( !byte_593813A )
      {
        sub_21FFC50(&ResolutionManager_TypeInfo);
        byte_593813A = 1;
      }
      v21 = ResolutionManager_TypeInfo;
      if ( !*(&ResolutionManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(ResolutionManager_TypeInfo, v13);
        v21 = ResolutionManager_TypeInfo;
      }
      v16 = (float)v21->static_fields->_DefaultResolutionScreenWidth_k__BackingField / (float)width;
    }
  }
  v22 = v17 * mWidth;
  v23 = x * v17;
  if ( v10 >= 1 )
  {
    if ( !*(&ResolutionManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(ResolutionManager_TypeInfo, v13);
    if ( !byte_593813B )
    {
      sub_21FFC50(&ResolutionManager_TypeInfo);
      byte_593813B = 1;
    }
    v24 = ResolutionManager_TypeInfo;
    if ( !*(&ResolutionManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(ResolutionManager_TypeInfo, v13);
      v24 = ResolutionManager_TypeInfo;
    }
    if ( v24->static_fields->_DefaultResolutionScreenHeight_k__BackingField >= 1 )
    {
      if ( !*(&v24->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(v24, v13);
      if ( !byte_593813B )
      {
        sub_21FFC50(&ResolutionManager_TypeInfo);
        byte_593813B = 1;
      }
      v25 = ResolutionManager_TypeInfo;
      if ( !*(&ResolutionManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(ResolutionManager_TypeInfo, v13);
        v25 = ResolutionManager_TypeInfo;
      }
      v15 = (float)v25->static_fields->_DefaultResolutionScreenHeight_k__BackingField / (float)v10;
    }
  }
  v67 = v15;
  v26 = y;
  v27 = (float)((float)width - v22) * 0.5;
  if ( !byte_593220B )
  {
    sub_21FFC50(&System_Math_TypeInfo);
    byte_593220B = 1;
  }
  v28 = (float)(v23 + v27) * v16;
  if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v13);
  v29 = v28;
  v31 = modf(v28, &iptr);
  if ( v28 >= 0.0 )
  {
    if ( v31 != 0.5 )
    {
      v35 = floor(v29 + 0.5);
      goto LABEL_48;
    }
    v33 = 1.0;
    v32 = iptr;
  }
  else
  {
    if ( v31 != -0.5 )
    {
      v35 = ceil(v29 + -0.5);
      goto LABEL_48;
    }
    v32 = iptr;
    v33 = -1.0;
  }
  v34 = v32 + v33;
  if ( ((__int64)v32 & 1) != 0 )
    v35 = v34;
  else
    v35 = v32;
LABEL_48:
  if ( !byte_593220B )
  {
    sub_21FFC50(&System_Math_TypeInfo);
    byte_593220B = 1;
  }
  v36 = (float)mHeight;
  v37 = (float)(v27 - v23) * v16;
  if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v30);
  v38 = v37;
  v39 = v17 * v36;
  v40 = v26 * v17;
  v42 = modf(v37, &iptr);
  if ( v37 >= 0.0 )
  {
    v43 = v67;
    if ( v42 != 0.5 )
    {
      v47 = floor(v38 + 0.5);
      goto LABEL_62;
    }
    v45 = 1.0;
    v44 = iptr;
  }
  else
  {
    v43 = v67;
    if ( v42 != -0.5 )
    {
      v47 = ceil(v38 + -0.5);
      goto LABEL_62;
    }
    v44 = iptr;
    v45 = -1.0;
  }
  v46 = v44 + v45;
  if ( ((__int64)v44 & 1) != 0 )
    v47 = v46;
  else
    v47 = v44;
LABEL_62:
  v48 = (float)((float)v10 - v39) * 0.5;
  if ( !byte_593220B )
  {
    sub_21FFC50(&System_Math_TypeInfo);
    byte_593220B = 1;
  }
  v49 = (float)(v40 + v48) * v43;
  if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v41);
  v50 = v49;
  v52 = modf(v49, &iptr);
  if ( v49 >= 0.0 )
  {
    if ( v52 != 0.5 )
    {
      v56 = floor(v50 + 0.5);
      goto LABEL_76;
    }
    v54 = 1.0;
    v53 = iptr;
  }
  else
  {
    if ( v52 != -0.5 )
    {
      v56 = ceil(v50 + -0.5);
      goto LABEL_76;
    }
    v53 = iptr;
    v54 = -1.0;
  }
  v55 = v53 + v54;
  if ( ((__int64)v53 & 1) != 0 )
    v56 = v55;
  else
    v56 = v53;
LABEL_76:
  if ( !byte_593220B )
  {
    sub_21FFC50(&System_Math_TypeInfo);
    byte_593220B = 1;
  }
  v57 = (float)(v48 - v40) * v43;
  if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v51);
  v58 = v57;
  v59 = modf(v57, &iptr);
  if ( v57 >= 0.0 )
  {
    if ( v59 != 0.5 )
    {
      v60 = floor(v58 + 0.5);
      goto LABEL_90;
    }
    v61 = 1.0;
    v60 = iptr;
  }
  else
  {
    if ( v59 != -0.5 )
    {
      v60 = ceil(v58 + -0.5);
      goto LABEL_90;
    }
    v60 = iptr;
    v61 = -1.0;
  }
  v62 = v60 + v61;
  if ( ((__int64)v60 & 1) != 0 )
    v60 = v62;
LABEL_90:
  webView = this->fields.webView;
  if ( !webView )
    goto LABEL_104;
  if ( v56 == INFINITY )
    v63 = 0;
  else
    v63 = (int)v56 & ~((int)v56 >> 31);
  if ( v60 == INFINITY )
    v64 = 0;
  else
    v64 = (int)v60 & ~((int)v60 >> 31);
  if ( v47 == INFINITY )
    v65 = 0;
  else
    v65 = (int)v47 & ~((int)v47 >> 31);
  if ( v35 == INFINITY )
    v66 = 0;
  else
    v66 = (int)v35 & ~((int)v35 >> 31);
  WebViewObject__SetMargins(webView, v66, v64, v65, v63, 0, 0);
}


// local variable allocation has failed, the output may be wrong!
void WebViewManager__SetVisibilityWebView(WebViewManager_o *this, bool enable, const MethodInfo *method)
{
  bool v5; // w22
  UnityEngine_Object_c *v6; // x0
  UnityEngine_Object_o *webView; // x21
  __int64 v8; // x1
  WebViewObject_o *v9; // x0

  v5 = enable;
  if ( (byte_59380BB & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_59380BB = 1;
  }
  v6 = UnityEngine_Object_TypeInfo;
  webView = (UnityEngine_Object_o *)this->fields.webView;
  this->fields.isVisibilityRequested = v5;
  if ( !*(&v6->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v6, enable);
  if ( !UnityEngine_Object__op_Equality(webView, 0, 0) )
  {
    v9 = this->fields.webView;
    if ( !v9 )
      sub_21FFECC(0, v8);
    WebViewObject__SetVisibility(v9, enable, 0);
    if ( enable )
      this->fields.isLoadedNonDisp = 0;
  }
}


bool WebViewManager__SmallOut(
        WebViewManager_o *this,
        UnityEngine_GameObject_o *window,
        System_Action_o *callBack,
        const MethodInfo *method)
{
  __int64 v7; // x21
  __int64 transform; // x0
  const MethodInfo *v9; // x1
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  __int64 v16; // x1
  UnityEngine_Transform_o *v17; // x23
  __int64 v18; // x1
  UnityEngine_GameObject_o *gameObject; // x23
  WebViewManager_c *v20; // x8
  float OPEN_TIME; // s8
  TweenScale_o *v22; // x23
  const MethodInfo *v23; // x1
  __int64 v24; // x1
  EventDelegate_Callback_o *v25; // x19
  UnityEngine_Transform_o *v27; // x19

  if ( (byte_59380AD & 1) == 0 )
  {
    sub_21FFC50(&EventDelegate_Callback_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_WebViewManager___c__DisplayClass36_0__SmallOut_b__0__);
    sub_21FFC50(&WebViewManager___c__DisplayClass36_0_TypeInfo);
    sub_21FFC50(&WebViewManager_TypeInfo);
    byte_59380AD = 1;
  }
  v7 = sub_21FFEBC(WebViewManager___c__DisplayClass36_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_27;
  *(_QWORD *)(v7 + 16) = callBack;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v7 + 16), (int32_t)callBack, v10, v11, v12, v13, v14, v15);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v16);
  transform = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)window, 0, 0);
  if ( (transform & 1) != 0 )
    goto LABEL_21;
  if ( !window )
    goto LABEL_27;
  if ( !UnityEngine_GameObject__get_activeSelf(window, 0) )
  {
LABEL_21:
    WebViewManager__OnClickTargetWebViewClose(this, v9);
  }
  else
  {
    transform = (__int64)UnityEngine_GameObject__get_transform(window, 0);
    v17 = (UnityEngine_Transform_o *)transform;
    if ( !byte_5931945 )
    {
      transform = sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
      byte_5931945 = 1;
    }
    if ( !v17 )
      goto LABEL_27;
    UnityEngine_Transform__set_localScale(v17, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
    gameObject = UnityEngine_GameObject__get_gameObject(window, 0);
    v20 = WebViewManager_TypeInfo;
    if ( !*(&WebViewManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(WebViewManager_TypeInfo, v18);
      v20 = WebViewManager_TypeInfo;
    }
    OPEN_TIME = v20->static_fields->OPEN_TIME;
    if ( !byte_5931940 )
    {
      sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
      byte_5931940 = 1;
    }
    v22 = TweenScale__Begin(gameObject, OPEN_TIME, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
    WebViewManager__OnClickTargetWebViewClose(this, v23);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v24);
    transform = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v22, 0, 0);
    if ( (transform & 1) != 0 )
    {
      if ( v22 )
      {
        v22->fields.method = 3;
        v25 = (EventDelegate_Callback_o *)sub_21FFEBC(EventDelegate_Callback_TypeInfo);
        EventDelegate_Callback___ctor(
          v25,
          (Il2CppObject *)v7,
          Method_WebViewManager___c__DisplayClass36_0__SmallOut_b__0__,
          0);
        UITweener__SetOnFinished((UITweener_o *)v22, v25, 0);
        return 1;
      }
LABEL_27:
      sub_21FFECC(transform, v9);
    }
    transform = (__int64)UnityEngine_GameObject__get_transform(window, 0);
    v27 = (UnityEngine_Transform_o *)transform;
    if ( !byte_5931940 )
    {
      transform = sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
      byte_5931940 = 1;
    }
    if ( !v27 )
      goto LABEL_27;
    UnityEngine_Transform__set_localScale(v27, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
  }
  ActionExtensions__Call(*(System_Action_o **)(v7 + 16), 0);
  return 0;
}


void WebViewManager___LargeIn_b__35_0(WebViewManager_o *this, const MethodInfo *method)
{
  System_Action_o *tryCallCallback; // x0

  tryCallCallback = this->fields.tryCallCallback;
  this->fields.isLargeInCompleted = 1;
  this->fields.isButtonEnable = 1;
  ActionExtensions__Call(tryCallCallback, 0);
}


void WebViewManager___OpenViewLocal_b__33_1(WebViewManager_o *this, System_String_o *msg, const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields.errorMessage = msg;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.errorMessage,
    (int32_t)msg,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void WebViewManager___OpenViewLocal_b__33_2(WebViewManager_o *this, System_String_o *msg, const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields.errorMessage = msg;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.errorMessage,
    (int32_t)msg,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void WebViewManager___OpenViewLocal_b__33_4(WebViewManager_o *this, System_String_o *msg, const MethodInfo *method)
{
  ;
}


bool WebViewManager__get_IsBusy(WebViewManager_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *webViewBase; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *gameObject; // x0

  if ( (byte_59380A1 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_59380A1 = 1;
  }
  webViewBase = (UnityEngine_Object_o *)this->fields.webViewBase;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( !UnityEngine_Object__op_Inequality(webViewBase, 0, 0) )
    return 0;
  gameObject = (UnityEngine_Component_o *)this->fields.webViewBase;
  if ( !gameObject
    || (gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0)) == 0 )
  {
    sub_21FFECC(gameObject, v4);
  }
  return UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)gameObject, 0);
}


bool WebViewManager__get_IsLoadedNonDisp(WebViewManager_o *this, const MethodInfo *method)
{
  return this->fields.isLoadedNonDisp;
}


bool WebViewManager__get_IsWideThan16to9(WebViewManager_o *this, const MethodInfo *method)
{
  int32_t width; // w19

  width = UnityEngine_Screen__get_width(0);
  return (float)((float)width / (float)UnityEngine_Screen__get_height(0)) > 1.7778;
}


float WebViewManager__get_ScreenToUiRatio(WebViewManager_o *this, const MethodInfo *method)
{
  int32_t width; // w19
  __int64 v3; // x1
  float height; // s1
  ManagerConfig_c *v5; // x0
  int v6; // w8
  int v7; // w19
  int32_t v8; // w0

  if ( (byte_59380A2 & 1) == 0 )
  {
    sub_21FFC50(&ManagerConfig_TypeInfo);
    byte_59380A2 = 1;
  }
  width = UnityEngine_Screen__get_width(0);
  height = (float)UnityEngine_Screen__get_height(0);
  v5 = ManagerConfig_TypeInfo;
  v6 = *(&ManagerConfig_TypeInfo->_2.cctor_finished + 1);
  if ( (float)((float)width / height) <= 1.7778 )
  {
    if ( !v6 )
    {
      j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo, v3);
      v5 = ManagerConfig_TypeInfo;
    }
    v7 = v5->static_fields->WIDTH;
    v8 = UnityEngine_Screen__get_width(0);
  }
  else
  {
    if ( !v6 )
    {
      j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo, v3);
      v5 = ManagerConfig_TypeInfo;
    }
    v7 = v5->static_fields->HEIGHT;
    v8 = UnityEngine_Screen__get_height(0);
  }
  return (float)v7 / (float)v8;
}


void WebViewManager___c__DisplayClass34_0___ctor(
        WebViewManager___c__DisplayClass34_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void WebViewManager___c__DisplayClass34_0___OpenViewLocal_b__0(
        WebViewManager___c__DisplayClass34_0_o *this,
        const MethodInfo *method)
{
  struct WebViewManager_o *_4__this; // x9
  System_Action_o *callback; // x0

  if ( !this->fields.isCallbackCalled )
  {
    _4__this = this->fields.__4__this;
    if ( !_4__this )
      sub_21FFECC(this, method);
    if ( _4__this->fields.isLoadCompleted && _4__this->fields.isLargeInCompleted )
    {
      callback = this->fields.callback;
      this->fields.isCallbackCalled = 1;
      ActionExtensions__Call(callback, 0);
    }
  }
}


void WebViewManager___c__DisplayClass34_0___OpenViewLocal_b__1(
        WebViewManager___c__DisplayClass34_0_o *this,
        const MethodInfo *method)
{
  System_Action_o *callback; // x0

  if ( !this->fields.isCallbackCalled )
  {
    callback = this->fields.callback;
    this->fields.isCallbackCalled = 1;
    ActionExtensions__Call(callback, 0);
  }
}


void WebViewManager___c__DisplayClass34_0___OpenViewLocal_b__2(
        WebViewManager___c__DisplayClass34_0_o *this,
        System_String_o *msg,
        const MethodInfo *method)
{
  WebViewManager_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_21FFECC(0, msg);
  WebViewManager__OnReceivedMessage(_4__this, msg, method);
}


void WebViewManager___c__DisplayClass34_0___OpenViewLocal_b__3(
        WebViewManager___c__DisplayClass34_0_o *this,
        System_String_o *msg,
        const MethodInfo *method)
{
  struct WebViewManager_o *_4__this; // x8
  WebViewManager___c__DisplayClass34_0_o *v4; // x20
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (v4 = this,
        ActionExtensions__Call(_4__this->fields.callCallbackImmediately, 0),
        (this = (WebViewManager___c__DisplayClass34_0_o *)v4->fields.__4__this) == 0) )
  {
    sub_21FFECC(this, msg);
  }
  this[2].fields.__4__this = (struct WebViewManager_o *)msg;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this[2].fields.__4__this, (int32_t)msg, v6, v7, v8, v9, v10, v11);
}


void WebViewManager___c__DisplayClass34_0___OpenViewLocal_b__4(
        WebViewManager___c__DisplayClass34_0_o *this,
        System_String_o *msg,
        const MethodInfo *method)
{
  struct WebViewManager_o *_4__this; // x8
  WebViewManager___c__DisplayClass34_0_o *v4; // x20
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (v4 = this,
        ActionExtensions__Call(_4__this->fields.callCallbackImmediately, 0),
        (this = (WebViewManager___c__DisplayClass34_0_o *)v4->fields.__4__this) == 0) )
  {
    sub_21FFECC(this, msg);
  }
  this[2].fields.__4__this = (struct WebViewManager_o *)msg;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this[2].fields.__4__this, (int32_t)msg, v6, v7, v8, v9, v10, v11);
}


void WebViewManager___c__DisplayClass34_0___OpenViewLocal_b__5(
        WebViewManager___c__DisplayClass34_0_o *this,
        System_String_o *msg,
        const MethodInfo *method)
{
  struct WebViewManager_o *_4__this; // x0
  struct WebViewManager_o *v5; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (_4__this->fields.isLoadCompleted = 1,
        WebViewManager__OnLoadComplete(_4__this, msg, method),
        (v5 = this->fields.__4__this) == 0) )
  {
    sub_21FFECC(_4__this, msg);
  }
  ActionExtensions__Call(v5->fields.tryCallCallback, 0);
}


void WebViewManager___c__DisplayClass34_0___OpenViewLocal_b__6(
        WebViewManager___c__DisplayClass34_0_o *this,
        System_String_o *msg,
        const MethodInfo *method)
{
  if ( !this->fields.__4__this )
    sub_21FFECC(this, msg);
}


void WebViewManager___c__DisplayClass36_0___ctor(
        WebViewManager___c__DisplayClass36_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void WebViewManager___c__DisplayClass36_0___SmallOut_b__0(
        WebViewManager___c__DisplayClass36_0_o *this,
        const MethodInfo *method)
{
  ActionExtensions__Call(this->fields.callBack, 0);
}


void WebViewManager___c__DisplayClass37_0___ctor(
        WebViewManager___c__DisplayClass37_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void WebViewManager___c__DisplayClass37_0___LargeInLoadedWindow_b__0(
        WebViewManager___c__DisplayClass37_0_o *this,
        const MethodInfo *method)
{
  WebViewManager___c__DisplayClass37_0_o *v2; // x19
  struct WebViewManager_o *_4__this; // x8
  UnityEngine_Object_o *webView; // x20
  struct WebViewManager_o *v5; // x8
  struct WebViewManager_o *v6; // x8
  System_Action_o *callBack; // x0

  v2 = this;
  if ( (byte_59380BE & 1) == 0 )
  {
    this = (WebViewManager___c__DisplayClass37_0_o *)sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_59380BE = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_12;
  webView = (UnityEngine_Object_o *)_4__this->fields.webView;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  this = (WebViewManager___c__DisplayClass37_0_o *)UnityEngine_Object__op_Inequality(webView, 0, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v5 = v2->fields.__4__this;
    if ( v5 )
    {
      this = (WebViewManager___c__DisplayClass37_0_o *)v5->fields.webView;
      if ( this )
      {
        WebViewObject__SetVisibility((WebViewObject_o *)this, 1, 0);
        goto LABEL_10;
      }
    }
LABEL_12:
    sub_21FFECC(this, method);
  }
LABEL_10:
  v6 = v2->fields.__4__this;
  if ( !v6 )
    goto LABEL_12;
  callBack = v2->fields.callBack;
  v6->fields.isButtonEnable = 1;
  ActionExtensions__Call(callBack, 0);
}