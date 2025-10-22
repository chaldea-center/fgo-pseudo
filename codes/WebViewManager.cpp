void WebViewManager___cctor(const MethodInfo *method)
{
  if ( (byte_4C56795 & 1) == 0 )
  {
    sub_1C3E564(&WebViewManager_TypeInfo);
    byte_4C56795 = 1;
  }
  *WebViewManager_TypeInfo->static_fields = (struct WebViewManager_StaticFields)1045220557LL;
}


void WebViewManager___ctor(WebViewManager_o *this, const MethodInfo *method)
{
  if ( (byte_4C56794 & 1) == 0 )
  {
    sub_1C3E564(&Method_SingletonMonoBehaviour_WebViewManager___ctor__);
    byte_4C56794 = 1;
  }
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_39FFA90 *)Method_SingletonMonoBehaviour_WebViewManager___ctor__);
}


void WebViewManager__EndClose(WebViewManager_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *webViewBase; // x0
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  CGThumbnailListItem_o *p_callbackFunc; // x19
  struct System_Action_o *v7; // x20
  struct System_Action_o *callbackFunc; // t1

  if ( (byte_4C56791 & 1) == 0 )
  {
    sub_1C3E564(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_1C3E564(&TouchEffectManager_TypeInfo);
    byte_4C56791 = 1;
  }
  webViewBase = (UnityEngine_Component_o *)this->fields.webViewBase;
  if ( !webViewBase )
    goto LABEL_11;
  webViewBase = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(webViewBase, 0);
  if ( !webViewBase )
    goto LABEL_11;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)webViewBase, 0, 0);
  if ( !TouchEffectManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TouchEffectManager_TypeInfo);
  TouchEffectManager__SetBlock(0, 0);
  webViewBase = (UnityEngine_Component_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39FFA98 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !webViewBase )
LABEL_11:
    sub_1C3E7C0(webViewBase, method);
  MissionNotifyManager__EndPause((MissionNotifyManager_o *)webViewBase, 0);
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (CGThumbnailListItem_o *)&this->fields.callbackFunc;
  v7 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0;
    sub_1C3E508(p_callbackFunc, 0, v4, v5);
    ((void (__fastcall *)(intptr_t, intptr_t))v7->fields.invoke_impl)(v7->fields.method_code, v7->fields.method);
  }
}


void WebViewManager__EndOpen(WebViewManager_o *this, const MethodInfo *method)
{
  this->fields.isButtonEnable = 1;
}


void WebViewManager__OnClickBack(WebViewManager_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *webView; // x20
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  __int64 v6; // x1
  WebViewObject_o *v7; // x0

  if ( (byte_4C5678F & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&Method_WebViewManager_OnClickBack__);
    byte_4C5678F = 1;
  }
  webView = (UnityEngine_Object_o *)this->fields.webView;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(webView, 0, 0) )
  {
    v4 = Method_WebViewManager_OnClickBack__;
    if ( (*((_BYTE *)Method_WebViewManager_OnClickBack__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1C3E57C(Method_WebViewManager_OnClickBack__);
    v5 = (System_Reflection_MethodBase_o *)sub_1C3E548(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 7, 0, 0);
    v7 = this->fields.webView;
    if ( !v7 )
      sub_1C3E7C0(0, v6);
    WebViewObject__GoBack(v7, 0);
  }
}


void WebViewManager__OnClickClose(WebViewManager_o *this, const MethodInfo *method)
{
  struct WebViewObject_o **p_webView; // x20
  UnityEngine_Object_o *webView; // x21
  __int64 v5; // x1
  WebViewObject_o *baseWindow; // x0
  UnityEngine_Object_o *v7; // x21
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  _QWORD *v10; // x0
  System_Reflection_MethodBase_o *v11; // x0
  UnityEngine_Transform_o *v12; // x20
  const MethodInfo *v13; // x1

  if ( (byte_4C56790 & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&Method_WebViewManager_OnClickClose__);
    byte_4C56790 = 1;
  }
  p_webView = &this->fields.webView;
  webView = (UnityEngine_Object_o *)this->fields.webView;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(webView, 0, 0) )
  {
    baseWindow = *p_webView;
    if ( !*p_webView )
      goto LABEL_19;
    WebViewObject__SetVisibility(baseWindow, 0, 0);
    v7 = (UnityEngine_Object_o *)*p_webView;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71341564(v7, 0);
    *p_webView = 0;
    sub_1C3E508((CGThumbnailListItem_o *)&this->fields.webView, 0, v8, v9);
  }
  if ( this->fields.isButtonEnable )
  {
    this->fields.isButtonEnable = 0;
    v10 = Method_WebViewManager_OnClickClose__;
    if ( (*((_BYTE *)Method_WebViewManager_OnClickClose__ + 83) & 2) != 0 )
      v10 = (_QWORD *)sub_1C3E57C(Method_WebViewManager_OnClickClose__);
    v11 = (System_Reflection_MethodBase_o *)sub_1C3E548(v10, v10[4]);
    OverwriteAssetSoundName__PlaySystemSe(v11, 1, 0, 0);
    baseWindow = (WebViewObject_o *)this->fields.baseWindow;
    if ( baseWindow )
    {
      baseWindow = (WebViewObject_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)baseWindow, 0);
      v12 = (UnityEngine_Transform_o *)baseWindow;
      if ( !byte_4C506A1 )
      {
        baseWindow = (WebViewObject_o *)sub_1C3E564(&UnityEngine_Vector3_TypeInfo);
        byte_4C506A1 = 1;
      }
      if ( v12 )
      {
        UnityEngine_Transform__set_localScale(v12, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
        WebViewManager__EndClose(this, v13);
        return;
      }
    }
LABEL_19:
    sub_1C3E7C0(baseWindow, v5);
  }
}


void WebViewManager__OnError(WebViewManager_o *this, System_String_o *msg, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields.errorMessage = msg;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.errorMessage, (int32_t)msg, (int32_t)method, v3);
}


void WebViewManager__OnLoadComplete(WebViewManager_o *this, System_String_o *message, const MethodInfo *method)
{
  UnityEngine_Object_o *webView; // x20
  __int64 v5; // x1
  WebViewObject_o *v6; // x0

  if ( (byte_4C5678B & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C5678B = 1;
  }
  webView = (UnityEngine_Object_o *)this->fields.webView;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(webView, 0, 0) )
  {
    v6 = this->fields.webView;
    if ( !v6 )
      sub_1C3E7C0(0, v5);
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
  unsigned int v12; // w23
  Il2CppObject *Item; // x0
  struct AccountLinkageParams_StaticFields *static_fields; // x8
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  const MethodInfo *v17; // x1
  Il2CppObject *v18; // x0
  System_String_o *v19; // x19
  System_String_o *WebUrl; // x19
  const MethodInfo *v21; // x1
  AvalonSceneManager_o *v22; // x19
  Il2CppObject *v23; // x20
  NetworkManager_StoreCallbackFunc_o *v24; // x21
  __int64 *v25; // x8
  _BOOL8 v26; // x0
  const MethodInfo *v27; // x2

  v3 = msg;
  v4 = this;
  if ( (byte_4C5678C & 1) == 0 )
  {
    sub_1C3E564(&AccountLinkageParams_TypeInfo);
    sub_1C3E564(&UnityEngine_Application_TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_string__string___ctor__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_string__string__set_Item__);
    sub_1C3E564(&System_Collections_Generic_Dictionary_string__string__TypeInfo);
    sub_1C3E564(&NetworkManager_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C3E564(&NetworkManager_StoreCallbackFunc_TypeInfo);
    sub_1C3E564(&Method___f__AnonymousType0_string__Dictionary_string__string____ctor__);
    sub_1C3E564(&Method___f__AnonymousType0_string__Dictionary_string__string___get_args__);
    sub_1C3E564(&Method___f__AnonymousType0_string__Dictionary_string__string___get_path__);
    sub_1C3E564(&_f__AnonymousType0_string__Dictionary_string__string___TypeInfo);
    sub_1C3E564(&Method_WebViewManager_OnWebViewStore__);
    sub_1C3E564(&StringLiteral_24479/*"url"*/);
    sub_1C3E564(&StringLiteral_18036/*"close"*/);
    sub_1C3E564(&StringLiteral_1051/*"//"*/);
    sub_1C3E564(&StringLiteral_20830/*"inquiry"*/);
    sub_1C3E564(&StringLiteral_18051/*"code"*/);
    sub_1C3E564(&StringLiteral_19896/*"googlePlay"*/);
    sub_1C3E564(&StringLiteral_23219/*"scene"*/);
    sub_1C3E564(&StringLiteral_17438/*"browser"*/);
    sub_1C3E564(&StringLiteral_1755/*"?"*/);
    sub_1C3E564(&StringLiteral_2265/*"Android"*/);
    sub_1C3E564(&StringLiteral_21407/*"mail"*/);
    sub_1C3E564(&StringLiteral_20272/*"id"*/);
    sub_1C3E564(&StringLiteral_24199/*"transition"*/);
    sub_1C3E564(&StringLiteral_16655/*"accountLinkageAnx/issueToken"*/);
    sub_1C3E564(&StringLiteral_16829/*"appStore"*/);
    this = (WebViewManager_o *)sub_1C3E564(&StringLiteral_20114/*"iOS"*/);
    byte_4C5678C = 1;
  }
  if ( !v4->fields.isButtonEnable )
    return;
  if ( !v3 )
    goto LABEL_65;
  if ( System_String__IndexOf_63694844(v3, (System_String_o *)StringLiteral_1755/*"?"*/, 0) < 0 )
    return;
  if ( System_String__StartsWith(v3, (System_String_o *)StringLiteral_1051/*"//"*/, 0) )
  {
    this = (WebViewManager_o *)System_String__Substring(v3, 2, 0);
    v3 = (System_String_o *)this;
    if ( !this )
      goto LABEL_65;
  }
  v5 = System_String__IndexOf_63694844(v3, (System_String_o *)StringLiteral_1755/*"?"*/, 0);
  v6 = (Il2CppObject *)System_String__Substring_63682392(v3, 0, v5, 0);
  v7 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C3E7B0(System_Collections_Generic_Dictionary_string__string__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v7,
    (const MethodInfo_3474E30 *)Method_System_Collections_Generic_Dictionary_string__string___ctor__);
  v8 = sub_1C3E7B0(_f__AnonymousType0_string__Dictionary_string__string___TypeInfo);
  _f__AnonymousType0_object__object____ctor(
    (__f__AnonymousType0__path_j__TPar___args_j__TPar__o *)v8,
    v6,
    (Il2CppObject *)v7,
    (const MethodInfo_32D4DF4 *)Method___f__AnonymousType0_string__Dictionary_string__string____ctor__);
  v9 = System_String__IndexOf_63694844(v3, (System_String_o *)StringLiteral_1755/*"?"*/, 0);
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
      if ( v12 >= m_CancellationTokenSource )
LABEL_66:
        sub_1C3E7C8(this, msg);
      this = (WebViewManager_o *)*((_QWORD *)&v11->fields.basePanel + (int)v12);
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
        (const MethodInfo_34757CC *)Method_System_Collections_Generic_Dictionary_string__string__set_Item__);
      m_CancellationTokenSource = (int)v11->fields.m_CancellationTokenSource;
      if ( (int)++v12 >= m_CancellationTokenSource )
        goto LABEL_19;
    }
LABEL_65:
    sub_1C3E7C0(this, msg);
  }
LABEL_19:
  this = (WebViewManager_o *)System_String__Contains(v3, (System_String_o *)StringLiteral_16655/*"accountLinkageAnx/issueToken"*/, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    this = (WebViewManager_o *)NetworkManager__ParseQueryString(v3, 0);
    if ( !this )
      goto LABEL_65;
    Item = System_Collections_Generic_Dictionary_object__object___get_Item(
             (System_Collections_Generic_Dictionary_object__object__o *)this,
             (Il2CppObject *)StringLiteral_18051/*"code"*/,
             (const MethodInfo_3475760 *)Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
    static_fields = AccountLinkageParams_TypeInfo->static_fields;
    static_fields->authorizationCode = (struct System_String_o *)Item;
    sub_1C3E508((CGThumbnailListItem_o *)&static_fields->authorizationCode, (int32_t)Item, v15, v16);
    goto LABEL_24;
  }
  if ( !v8 )
    goto LABEL_65;
  if ( System_String__Equals_63672500(*(System_String_o **)(v8 + 16), (System_String_o *)StringLiteral_17438/*"browser"*/, 0) )
  {
    this = *(WebViewManager_o **)(v8 + 24);
    if ( !this )
      goto LABEL_65;
    if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
           (System_Collections_Generic_Dictionary_object__object__o *)this,
           (Il2CppObject *)StringLiteral_24479/*"url"*/,
           (const MethodInfo_34759D4 *)Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__) )
    {
      this = *(WebViewManager_o **)(v8 + 24);
      if ( !this )
        goto LABEL_65;
      v18 = System_Collections_Generic_Dictionary_object__object___get_Item(
              (System_Collections_Generic_Dictionary_object__object__o *)this,
              (Il2CppObject *)StringLiteral_24479/*"url"*/,
              (const MethodInfo_3475760 *)Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
      v19 = UnityEngine_WWW__UnEscapeURL((System_String_o *)v18, 0);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      WebUrl = NetworkManager__getWebUrl(v19, 1, 1, 0);
      if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
      UnityEngine_Application__OpenURL(WebUrl, 0);
    }
    return;
  }
  if ( System_String__Equals_63672500(*(System_String_o **)(v8 + 16), (System_String_o *)StringLiteral_24199/*"transition"*/, 0) )
  {
    this = *(WebViewManager_o **)(v8 + 24);
    if ( !this )
      goto LABEL_65;
    if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
           (System_Collections_Generic_Dictionary_object__object__o *)this,
           (Il2CppObject *)StringLiteral_23219/*"scene"*/,
           (const MethodInfo_34759D4 *)Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__) )
    {
      WebViewManager__OnClickClose(v4, v21);
      this = (WebViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      if ( !*(_QWORD *)(v8 + 24) )
        goto LABEL_65;
      v22 = (AvalonSceneManager_o *)this;
      this = (WebViewManager_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                   *(System_Collections_Generic_Dictionary_object__object__o **)(v8 + 24),
                                   (Il2CppObject *)StringLiteral_23219/*"scene"*/,
                                   (const MethodInfo_3475760 *)Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
      if ( !v22 )
        goto LABEL_65;
      AvalonSceneManager__transitionScene_41207660(v22, (System_String_o *)this, 1, 0, 0);
    }
    return;
  }
  if ( System_String__Equals_63672500(*(System_String_o **)(v8 + 16), (System_String_o *)StringLiteral_16829/*"appStore"*/, 0) )
  {
    this = *(WebViewManager_o **)(v8 + 24);
    if ( !this )
      goto LABEL_65;
    if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
           (System_Collections_Generic_Dictionary_object__object__o *)this,
           (Il2CppObject *)StringLiteral_20272/*"id"*/,
           (const MethodInfo_34759D4 *)Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__) )
    {
      this = *(WebViewManager_o **)(v8 + 24);
      if ( !this )
        goto LABEL_65;
      v23 = System_Collections_Generic_Dictionary_object__object___get_Item(
              (System_Collections_Generic_Dictionary_object__object__o *)this,
              (Il2CppObject *)StringLiteral_20272/*"id"*/,
              (const MethodInfo_3475760 *)Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
    }
    else
    {
      v23 = 0;
    }
    v24 = (NetworkManager_StoreCallbackFunc_o *)sub_1C3E7B0(NetworkManager_StoreCallbackFunc_TypeInfo);
    NetworkManager_StoreCallbackFunc___ctor(v24, (Il2CppObject *)v4, Method_WebViewManager_OnWebViewStore__, 0);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v25 = &StringLiteral_20114/*"iOS"*/;
LABEL_64:
    NetworkManager__getStoreUrl((System_String_o *)*v25, (System_String_o *)v23, v24, 0);
    return;
  }
  if ( System_String__Equals_63672500(*(System_String_o **)(v8 + 16), (System_String_o *)StringLiteral_19896/*"googlePlay"*/, 0) )
  {
    this = *(WebViewManager_o **)(v8 + 24);
    if ( !this )
      goto LABEL_65;
    if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
           (System_Collections_Generic_Dictionary_object__object__o *)this,
           (Il2CppObject *)StringLiteral_20272/*"id"*/,
           (const MethodInfo_34759D4 *)Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__) )
    {
      this = *(WebViewManager_o **)(v8 + 24);
      if ( !this )
        goto LABEL_65;
      v23 = System_Collections_Generic_Dictionary_object__object___get_Item(
              (System_Collections_Generic_Dictionary_object__object__o *)this,
              (Il2CppObject *)StringLiteral_20272/*"id"*/,
              (const MethodInfo_3475760 *)Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
    }
    else
    {
      v23 = 0;
    }
    v24 = (NetworkManager_StoreCallbackFunc_o *)sub_1C3E7B0(NetworkManager_StoreCallbackFunc_TypeInfo);
    NetworkManager_StoreCallbackFunc___ctor(v24, (Il2CppObject *)v4, Method_WebViewManager_OnWebViewStore__, 0);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v25 = &StringLiteral_2265/*"Android"*/;
    goto LABEL_64;
  }
  if ( System_String__Equals_63672500(*(System_String_o **)(v8 + 16), (System_String_o *)StringLiteral_18036/*"close"*/, 0) )
  {
LABEL_24:
    WebViewManager__OnClickClose(v4, v17);
    return;
  }
  if ( System_String__Equals_63672500(*(System_String_o **)(v8 + 16), (System_String_o *)StringLiteral_21407/*"mail"*/, 0) )
  {
    this = *(WebViewManager_o **)(v8 + 24);
    if ( !this )
      goto LABEL_65;
    v26 = System_Collections_Generic_Dictionary_object__object___ContainsKey(
            (System_Collections_Generic_Dictionary_object__object__o *)this,
            (Il2CppObject *)StringLiteral_20830/*"inquiry"*/,
            (const MethodInfo_34759D4 *)Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__);
    WebViewManager__OpenSupportMail((WebViewManager_o *)v26, v26, v27);
  }
}


void WebViewManager__OnStarted(WebViewManager_o *this, System_String_o *message, const MethodInfo *method)
{
  ;
}


void WebViewManager__OnWebViewStore(WebViewManager_o *this, System_String_o *url, const MethodInfo *method)
{
  const MethodInfo *v3; // x7

  if ( (byte_4C5678E & 1) == 0 )
  {
    sub_1C3E564(&StringLiteral_1/*""*/);
    byte_4C5678E = 1;
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
  Il2CppObject *Instance; // x22
  _BOOL8 v8; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x4

  if ( (byte_4C56785 & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_WebViewManager__get_Instance__);
    byte_4C56785 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_WebViewManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v8 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( v8 )
    return 0;
  if ( !Instance )
    sub_1C3E7C0(v8, v9);
  return WebViewManager__OpenNewsLocal((WebViewManager_o *)Instance, title, id, callbackFunc, v10);
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
  WebViewManager_o *v15; // x0
  System_String_o *v16; // x1
  System_String_o *monitor; // x3

  if ( (byte_4C56789 & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMasterData_NewsMaster___);
    sub_1C3E564(&Method_DataMasterBase_NewsMaster__NewsEntity__int__GetEntity__);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C56789 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_NewsMaster___)) == 0 )
  {
    sub_1C3E7C0(Instance, v10);
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             id,
             (const MethodInfo_33B2F58 *)Method_DataMasterBase_NewsMaster__NewsEntity__int__GetEntity__);
  if ( Entity )
  {
    klass = (int)Entity[2].klass;
    if ( klass == 1 )
    {
      monitor = (System_String_o *)Entity[2].monitor;
      v15 = this;
      v16 = title;
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
      v15 = this;
      v16 = title;
      monitor = 0;
    }
    WebViewManager__OpenViewLocal(v15, v16, v14, monitor, callbackFunc, 0, 0, v12);
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
  Il2CppObject *Instance; // x22
  _BOOL8 v8; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x7
  bool v11; // w23

  if ( (byte_4C56788 & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_WebViewManager__get_Instance__);
    byte_4C56788 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_WebViewManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v8 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  v11 = v8;
  if ( !v8 )
  {
    if ( !Instance )
      sub_1C3E7C0(v8, v9);
    WebViewManager__OpenViewLocal((WebViewManager_o *)Instance, title, 0, text, callbackFunc, 0, 0, v10);
  }
  return !v11;
}


void WebViewManager__OpenSupportMail(WebViewManager_o *this, bool isInquiry, const MethodInfo *method)
{
  System_String_o *v4; // x0
  System_String_o **v5; // x9
  System_String_o *v6; // x20
  System_String_o *v7; // x19
  System_String_o *v8; // x21
  Il2CppObject *Instance; // x0
  __int64 v10; // x1
  NetworkManager_c *v11; // x0
  Il2CppObject *friendCode; // x20
  Il2CppObject *operatingSystem; // x22
  Il2CppObject *deviceModel; // x23
  System_String_o *v15; // x0
  System_String_o *v16; // x20
  System_String_o *v17; // x20
  System_String_o *v18; // x22
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  Il2CppObject *v21; // x21
  int32_t v22; // w1
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  int32_t v27; // w1
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  int32_t v32; // w1
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  System_String_o *v35; // x19

  if ( (byte_4C5678D & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Application_TypeInfo);
    sub_1C3E564(&LocalizationManager_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
    sub_1C3E564(&string___TypeInfo);
    sub_1C3E564(&System_Uri_TypeInfo);
    sub_1C3E564(&StringLiteral_12492/*"SUPPORTMAIL_SUBJECT_SUGGEST"*/);
    sub_1C3E564(&StringLiteral_12489/*"SUPPORTMAIL_ADDRESS"*/);
    sub_1C3E564(&StringLiteral_1764/*"?subject="*/);
    sub_1C3E564(&StringLiteral_510/*"&body="*/);
    sub_1C3E564(&StringLiteral_12490/*"SUPPORTMAIL_BODY"*/);
    sub_1C3E564(&StringLiteral_12491/*"SUPPORTMAIL_SUBJECT_INQUIRY"*/);
    sub_1C3E564(&StringLiteral_21409/*"mailto:"*/);
    byte_4C5678D = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v4 = LocalizationManager__Get((System_String_o *)StringLiteral_12489/*"SUPPORTMAIL_ADDRESS"*/, 0);
  if ( isInquiry )
    v5 = (System_String_o **)&StringLiteral_12491/*"SUPPORTMAIL_SUBJECT_INQUIRY"*/;
  else
    v5 = (System_String_o **)&StringLiteral_12492/*"SUPPORTMAIL_SUBJECT_SUGGEST"*/;
  v6 = *v5;
  v7 = v4;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v8 = LocalizationManager__Get(v6, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
  if ( !Instance )
    goto LABEL_28;
  if ( !byte_4C567A0 )
  {
    sub_1C3E564(&NetworkManager_TypeInfo);
    byte_4C567A0 = 1;
  }
  v11 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v11 = NetworkManager_TypeInfo;
  }
  friendCode = (Il2CppObject *)v11->static_fields->friendCode;
  operatingSystem = (Il2CppObject *)UnityEngine_SystemInfo__get_operatingSystem(0);
  deviceModel = (Il2CppObject *)UnityEngine_SystemInfo__get_deviceModel(0);
  v15 = LocalizationManager__Get((System_String_o *)StringLiteral_12490/*"SUPPORTMAIL_BODY"*/, 0);
  v16 = System_String__Format_63677828(v15, friendCode, operatingSystem, deviceModel, 0);
  if ( !System_Uri_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Uri_TypeInfo);
  v17 = System_Uri__EscapeDataString(v16, 0);
  v18 = System_Uri__EscapeDataString(v8, 0);
  Instance = (Il2CppObject *)sub_1C3E60C(string___TypeInfo, 6);
  if ( !Instance )
LABEL_28:
    sub_1C3E7C0(Instance, v10);
  v21 = Instance;
  if ( !LODWORD(Instance[1].monitor) )
    goto LABEL_27;
  v22 = StringLiteral_21409/*"mailto:"*/;
  Instance[2].klass = (Il2CppClass *)StringLiteral_21409/*"mailto:"*/;
  sub_1C3E508((CGThumbnailListItem_o *)&Instance[2], v22, v19, v20);
  if ( LODWORD(v21[1].monitor) <= 1 )
    goto LABEL_27;
  v21[2].monitor = v7;
  sub_1C3E508((CGThumbnailListItem_o *)&v21[2].monitor, (int32_t)v7, v23, v24);
  if ( LODWORD(v21[1].monitor) <= 2 )
    goto LABEL_27;
  v27 = StringLiteral_1764/*"?subject="*/;
  v21[3].klass = (Il2CppClass *)StringLiteral_1764/*"?subject="*/;
  sub_1C3E508((CGThumbnailListItem_o *)&v21[3], v27, v25, v26);
  if ( LODWORD(v21[1].monitor) <= 3
    || (v21[3].monitor = v18,
        sub_1C3E508((CGThumbnailListItem_o *)&v21[3].monitor, (int32_t)v18, v28, v29),
        LODWORD(v21[1].monitor) <= 4)
    || (v32 = StringLiteral_510/*"&body="*/,
        v21[4].klass = (Il2CppClass *)StringLiteral_510/*"&body="*/,
        sub_1C3E508((CGThumbnailListItem_o *)&v21[4], v32, v30, v31),
        LODWORD(v21[1].monitor) <= 5) )
  {
LABEL_27:
    sub_1C3E7C8(Instance, v10);
  }
  v21[4].monitor = v17;
  sub_1C3E508((CGThumbnailListItem_o *)&v21[4].monitor, (int32_t)v17, v33, v34);
  v35 = System_String__Concat_63676984((System_String_array *)v21, 0);
  if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
  UnityEngine_Application__OpenURL(v35, 0);
}


bool WebViewManager__OpenView(
        System_String_o *title,
        System_String_o *path,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x22
  _BOOL8 v8; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x7
  bool v11; // w23

  if ( (byte_4C56787 & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_WebViewManager__get_Instance__);
    byte_4C56787 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_WebViewManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v8 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  v11 = v8;
  if ( !v8 )
  {
    if ( !Instance )
      sub_1C3E7C0(v8, v9);
    WebViewManager__OpenViewLocal((WebViewManager_o *)Instance, title, path, 0, callbackFunc, 0, 0, v10);
  }
  return !v11;
}


bool WebViewManager__OpenViewDynamic(
        System_String_o *title,
        System_String_o *path,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x22
  bool v8; // w23
  System_String_o *BaseUrl; // x0
  System_String_o *v10; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x7

  if ( (byte_4C56786 & 1) == 0 )
  {
    sub_1C3E564(&NetworkManager_TypeInfo);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_WebViewManager__get_Instance__);
    sub_1C3E564(&StringLiteral_15616/*"WebView/"*/);
    byte_4C56786 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_WebViewManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v8 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( !v8 )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    BaseUrl = NetworkManager__getBaseUrl(1, 0);
    v10 = System_String__Concat_63674716(BaseUrl, (System_String_o *)StringLiteral_15616/*"WebView/"*/, path, 0);
    if ( !Instance )
      sub_1C3E7C0(v10, v11);
    WebViewManager__OpenViewLocal((WebViewManager_o *)Instance, title, v10, 0, callbackFunc, 0, 0, v12);
  }
  return !v8;
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
  __int64 WebUrl; // x0
  __int64 v16; // x1
  System_String_o *v17; // x23
  Il2CppObject *Component_object; // x0
  struct WebViewObject_o **p_webView; // x24
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  UnityEngine_Object_o *webView; // x21
  const MethodInfo *v23; // x1
  Il2CppObject *v24; // x0
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  WebViewObject_o *v27; // x25
  System_Action_object__o *v28; // x26
  System_Action_object__o *v29; // x27
  System_Action_object__o *v30; // x28
  System_Action_object__o *v31; // x29
  System_Action_object__o *v32; // x21
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  UIWidget_o *baseWindow; // x20
  UnityEngine_Transform_o *v36; // x20
  UnityEngine_GameObject_o *gameObject; // x20
  WebViewManager_c *v38; // x8
  float OPEN_TIME; // s8
  TweenScale_o *v40; // x20
  UnityEngine_GameObject_o *v41; // x0
  int32_t v42; // w2
  const MethodInfo *v43; // x3
  int32_t v44; // w1
  int32_t v45; // w2
  const MethodInfo *v46; // x3
  UnityEngine_Transform_o *v47; // x20
  System_String_o *v49; // [xsp+68h] [xbp-68h]

  if ( (byte_4C5678A & 1) == 0 )
  {
    sub_1C3E564(&System_Action_string__TypeInfo);
    sub_1C3E564(&Method_UnityEngine_Component_GetComponent_WebViewObject___);
    sub_1C3E564(&Method_UnityEngine_GameObject_AddComponent_WebViewObject___);
    sub_1C3E564(&ManagerConfig_TypeInfo);
    sub_1C3E564(&NetworkManager_TypeInfo);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_1C3E564(&TouchEffectManager_TypeInfo);
    sub_1C3E564(&Method_WebViewManager__OpenViewLocal_b__24_0__);
    sub_1C3E564(&Method_WebViewManager__OpenViewLocal_b__24_1__);
    sub_1C3E564(&Method_WebViewManager__OpenViewLocal_b__24_2__);
    sub_1C3E564(&Method_WebViewManager__OpenViewLocal_b__24_3__);
    sub_1C3E564(&Method_WebViewManager__OpenViewLocal_b__24_4__);
    sub_1C3E564(&WebViewManager_TypeInfo);
    sub_1C3E564(&StringLiteral_6017/*"EndOpen"*/);
    sub_1C3E564(&StringLiteral_1/*""*/);
    byte_4C5678A = 1;
  }
  this->fields.callbackFunc = callbackFunc;
  sub_1C3E508(
    (CGThumbnailListItem_o *)&this->fields.callbackFunc,
    (int32_t)callbackFunc,
    (int32_t)path,
    (const MethodInfo *)data);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  WebUrl = (__int64)NetworkManager__getWebUrl(path, 1, 1, 0);
  if ( !this->fields.titleLabel )
    goto LABEL_49;
  v17 = (System_String_o *)WebUrl;
  UILabel__set_text(this->fields.titleLabel, title, 0);
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_30F0240 *)Method_UnityEngine_Component_GetComponent_WebViewObject___);
  this->fields.webView = (struct WebViewObject_o *)Component_object;
  p_webView = &this->fields.webView;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.webView, (int32_t)Component_object, v20, v21);
  webView = (UnityEngine_Object_o *)this->fields.webView;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(webView, 0, 0) )
  {
    v49 = password;
    WebUrl = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !WebUrl )
      goto LABEL_49;
    v24 = UnityEngine_GameObject__AddComponent_object_(
            (UnityEngine_GameObject_o *)WebUrl,
            (const MethodInfo_3150FE4 *)Method_UnityEngine_GameObject_AddComponent_WebViewObject___);
    this->fields.webView = (struct WebViewObject_o *)v24;
    sub_1C3E508((CGThumbnailListItem_o *)&this->fields.webView, (int32_t)v24, v25, v26);
    v27 = this->fields.webView;
    v28 = (System_Action_object__o *)sub_1C3E7B0(System_Action_string__TypeInfo);
    System_Action_object____ctor(v28, (Il2CppObject *)this, Method_WebViewManager__OpenViewLocal_b__24_0__, 0);
    v29 = (System_Action_object__o *)sub_1C3E7B0(System_Action_string__TypeInfo);
    System_Action_object____ctor(v29, (Il2CppObject *)this, Method_WebViewManager__OpenViewLocal_b__24_1__, 0);
    v30 = (System_Action_object__o *)sub_1C3E7B0(System_Action_string__TypeInfo);
    System_Action_object____ctor(v30, (Il2CppObject *)this, Method_WebViewManager__OpenViewLocal_b__24_2__, 0);
    v31 = (System_Action_object__o *)sub_1C3E7B0(System_Action_string__TypeInfo);
    System_Action_object____ctor(v31, (Il2CppObject *)this, Method_WebViewManager__OpenViewLocal_b__24_3__, 0);
    v32 = (System_Action_object__o *)sub_1C3E7B0(System_Action_string__TypeInfo);
    System_Action_object____ctor(v32, (Il2CppObject *)this, Method_WebViewManager__OpenViewLocal_b__24_4__, 0);
    if ( !v27 )
      goto LABEL_49;
    WebViewObject__Init(
      v27,
      (System_Action_string__o *)v28,
      (System_Action_string__o *)v29,
      (System_Action_string__o *)v30,
      (System_Action_string__o *)v31,
      (System_Action_string__o *)v32,
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
    password = v49;
  }
  WebViewManager__SetMargins(this, v23);
  this->fields.errorMessage = 0;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.errorMessage, 0, v33, v34);
  if ( username && password )
  {
    WebUrl = (__int64)*p_webView;
    if ( !*p_webView )
      goto LABEL_49;
    WebViewObject__SetBasicAuthInfo((WebViewObject_o *)WebUrl, username, password, 0);
  }
  WebUrl = (__int64)*p_webView;
  if ( !*p_webView )
LABEL_49:
    sub_1C3E7C0(WebUrl, v16);
  if ( data )
    WebViewObject__LoadHTML((WebViewObject_o *)WebUrl, data, v17, 0);
  else
    WebViewObject__LoadURL((WebViewObject_o *)WebUrl, v17, 0);
  if ( !this->fields.isButtonEnable )
  {
    WebUrl = (__int64)this->fields.webViewBase;
    if ( WebUrl )
    {
      WebUrl = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)WebUrl, 0);
      if ( WebUrl )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)WebUrl, 1, 0);
        if ( !TouchEffectManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TouchEffectManager_TypeInfo);
        TouchEffectManager__SetBlock(1, 0);
        WebUrl = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_39FFA98 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
        if ( WebUrl )
        {
          MissionNotifyManager__StartPause((MissionNotifyManager_o *)WebUrl, 0);
          baseWindow = this->fields.baseWindow;
          WebUrl = (__int64)ManagerConfig_TypeInfo;
          if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
          if ( baseWindow )
          {
            UIWidget__set_height(baseWindow, ManagerConfig_TypeInfo->static_fields->HEIGHT, 0);
            WebUrl = (__int64)this->fields.baseWindow;
            if ( WebUrl )
            {
              WebUrl = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)WebUrl, 0);
              v36 = (UnityEngine_Transform_o *)WebUrl;
              if ( !byte_4C506A1 )
              {
                WebUrl = sub_1C3E564(&UnityEngine_Vector3_TypeInfo);
                byte_4C506A1 = 1;
              }
              if ( v36 )
              {
                UnityEngine_Transform__set_localScale(v36, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
                WebUrl = (__int64)this->fields.baseWindow;
                if ( WebUrl )
                {
                  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)WebUrl, 0);
                  v38 = WebViewManager_TypeInfo;
                  if ( !WebViewManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(WebViewManager_TypeInfo);
                    v38 = WebViewManager_TypeInfo;
                  }
                  OPEN_TIME = v38->static_fields->OPEN_TIME;
                  if ( !byte_4C506A6 )
                  {
                    sub_1C3E564(&UnityEngine_Vector3_TypeInfo);
                    byte_4C506A6 = 1;
                  }
                  v40 = TweenScale__Begin(
                          gameObject,
                          OPEN_TIME,
                          UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
                          0);
                  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                  WebUrl = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v40, 0, 0);
                  if ( (WebUrl & 1) != 0 )
                  {
                    if ( v40 )
                    {
                      v40->fields.method = 3;
                      v41 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
                      v40->fields.eventReceiver = v41;
                      sub_1C3E508((CGThumbnailListItem_o *)&v40->fields.eventReceiver, (int32_t)v41, v42, v43);
                      v44 = StringLiteral_6017/*"EndOpen"*/;
                      v40->fields.callWhenFinished = (struct System_String_o *)StringLiteral_6017/*"EndOpen"*/;
                      sub_1C3E508((CGThumbnailListItem_o *)&v40->fields.callWhenFinished, v44, v45, v46);
                      return 1;
                    }
                  }
                  else
                  {
                    WebUrl = (__int64)this->fields.baseWindow;
                    if ( WebUrl )
                    {
                      WebUrl = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)WebUrl, 0);
                      v47 = (UnityEngine_Transform_o *)WebUrl;
                      if ( !byte_4C506A6 )
                      {
                        WebUrl = sub_1C3E564(&UnityEngine_Vector3_TypeInfo);
                        byte_4C506A6 = 1;
                      }
                      if ( v47 )
                      {
                        UnityEngine_Transform__set_localScale(
                          v47,
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
    goto LABEL_49;
  }
  return 1;
}


bool WebViewManager__OpenViewWithBasicAuth(
        System_String_o *title,
        System_String_o *path,
        System_String_o *username,
        System_String_o *password,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x24
  _BOOL8 v12; // x0
  __int64 v13; // x1
  const MethodInfo *v14; // x7
  bool v15; // w25

  if ( (byte_4C56784 & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_WebViewManager__get_Instance__);
    byte_4C56784 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_WebViewManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v12 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  v15 = v12;
  if ( !v12 )
  {
    if ( !Instance )
      sub_1C3E7C0(v12, v13);
    WebViewManager__OpenViewLocal((WebViewManager_o *)Instance, title, path, 0, callbackFunc, username, password, v14);
  }
  return !v15;
}


void WebViewManager__PressBackKey(WebViewManager_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *webViewBase; // x0
  UnityEngine_Object_o *webView; // x20
  const MethodInfo *v5; // x1

  if ( (byte_4C56792 & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C56792 = 1;
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
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(webView, 0, 0) )
    {
      webViewBase = (UnityEngine_Component_o *)this->fields.webView;
      if ( webViewBase )
      {
        if ( WebViewObject__CanGoBack((WebViewObject_o *)webViewBase, 0) )
          WebViewManager__OnClickBack(this, v5);
        else
          WebViewManager__OnClickClose(this, v5);
        return;
      }
LABEL_14:
      sub_1C3E7C0(webViewBase, method);
    }
  }
}


void WebViewManager__SetMargins(WebViewManager_o *this, const MethodInfo *method)
{
  int32_t width; // w21
  const MethodInfo *v4; // x1
  int32_t height; // w20
  WebViewManager_o *webView; // x0
  int m_CachedPtr_high; // s8
  struct UIWidget_o *baseWindow; // x8
  int mWidth; // s10
  int m_CancellationTokenSource; // s9
  float v11; // s8
  float v12; // s0
  int v13; // w8
  float v14; // s0
  struct UIWidget_o *v15; // x8
  float v16; // s0
  signed int v17; // w21
  int mHeight; // s11
  float v19; // s8
  WebViewManager_o *v20; // x0
  const MethodInfo *v21; // x1
  float v22; // s0
  int v23; // w8
  float v24; // s0
  int32_t v25; // w20
  float ScreenToUiRatio; // s0
  float v27; // s0
  int32_t v28; // w2

  if ( (byte_4C56793 & 1) == 0 )
  {
    sub_1C3E564(&ResolutionManager_TypeInfo);
    byte_4C56793 = 1;
  }
  width = UnityEngine_Screen__get_width(0);
  height = UnityEngine_Screen__get_height(0);
  if ( !ResolutionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResolutionManager_TypeInfo);
  if ( !byte_4C567A1 )
  {
    sub_1C3E564(&ResolutionManager_TypeInfo);
    byte_4C567A1 = 1;
  }
  webView = (WebViewManager_o *)ResolutionManager_TypeInfo;
  if ( !ResolutionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ResolutionManager_TypeInfo);
    webView = (WebViewManager_o *)ResolutionManager_TypeInfo;
  }
  m_CachedPtr_high = HIDWORD(webView[1].fields.titleLabel->fields.m_CachedPtr);
  if ( !byte_4C567A2 )
  {
    sub_1C3E564(&ResolutionManager_TypeInfo);
    webView = (WebViewManager_o *)ResolutionManager_TypeInfo;
    byte_4C567A2 = 1;
  }
  if ( !LODWORD(webView[2].klass) )
  {
    j_il2cpp_runtime_class_init_0(webView);
    webView = (WebViewManager_o *)ResolutionManager_TypeInfo;
  }
  baseWindow = this->fields.baseWindow;
  if ( !baseWindow )
    goto LABEL_30;
  mWidth = baseWindow->fields.mWidth;
  m_CancellationTokenSource = (int)webView[1].fields.titleLabel->fields.m_CancellationTokenSource;
  v11 = (float)m_CachedPtr_high / (float)width;
  v12 = (float)mWidth / WebViewManager__get_ScreenToUiRatio(webView, v4);
  v13 = (int)v12;
  if ( v12 == INFINITY )
    v13 = 0x80000000;
  v14 = (float)(width - v13);
  v15 = this->fields.baseWindow;
  v16 = v11 * (float)(v14 * 0.5);
  v17 = v16 == INFINITY ? 0x80000000 : (int)v16;
  if ( !v15 )
    goto LABEL_30;
  mHeight = v15->fields.mHeight;
  v19 = (float)m_CancellationTokenSource / (float)height;
  v22 = (float)mHeight / WebViewManager__get_ScreenToUiRatio(webView, v4);
  v23 = (int)v22;
  if ( v22 == INFINITY )
    v23 = 0x80000000;
  v24 = v19 * (float)((float)(height - v23) * 0.5);
  v25 = v24 == INFINITY ? 0x80000000 : (int)v24;
  ScreenToUiRatio = WebViewManager__get_ScreenToUiRatio(v20, v21);
  webView = (WebViewManager_o *)this->fields.webView;
  if ( !webView )
LABEL_30:
    sub_1C3E7C0(webView, v4);
  v27 = v19 * (float)((float)((float)(57.0 / ScreenToUiRatio) + (float)v25) + -2.0);
  if ( v27 == INFINITY )
    v28 = 0x80000000;
  else
    v28 = (int)v27;
  WebViewObject__SetMargins((WebViewObject_o *)webView, v17 & ~(v17 >> 31), v28, v17 & ~(v17 >> 31), v25, 0, 0);
}


void WebViewManager___OpenViewLocal_b__24_1(WebViewManager_o *this, System_String_o *msg, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields.errorMessage = msg;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.errorMessage, (int32_t)msg, (int32_t)method, v3);
}


void WebViewManager___OpenViewLocal_b__24_2(WebViewManager_o *this, System_String_o *msg, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields.errorMessage = msg;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.errorMessage, (int32_t)msg, (int32_t)method, v3);
}


void WebViewManager___OpenViewLocal_b__24_4(WebViewManager_o *this, System_String_o *msg, const MethodInfo *method)
{
  ;
}


bool WebViewManager__get_IsBusy(WebViewManager_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *webViewBase; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *gameObject; // x0

  if ( (byte_4C56782 & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C56782 = 1;
  }
  webViewBase = (UnityEngine_Object_o *)this->fields.webViewBase;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(webViewBase, 0, 0) )
    return 0;
  gameObject = (UnityEngine_Component_o *)this->fields.webViewBase;
  if ( !gameObject
    || (gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0)) == 0 )
  {
    sub_1C3E7C0(gameObject, v4);
  }
  return UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)gameObject, 0);
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
  int32_t height; // w8
  ManagerConfig_c *v4; // x0
  float v5; // s8
  struct ManagerConfig_StaticFields *static_fields; // x8
  int v7; // w19
  int32_t v8; // w0

  if ( (byte_4C56783 & 1) == 0 )
  {
    sub_1C3E564(&ManagerConfig_TypeInfo);
    byte_4C56783 = 1;
  }
  width = UnityEngine_Screen__get_width(0);
  height = UnityEngine_Screen__get_height(0);
  v4 = ManagerConfig_TypeInfo;
  v5 = (float)width / (float)height;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v4 = ManagerConfig_TypeInfo;
  }
  static_fields = v4->static_fields;
  if ( v5 <= 1.7778 )
  {
    v7 = static_fields->WIDTH;
    v8 = UnityEngine_Screen__get_width(0);
  }
  else
  {
    v7 = static_fields->HEIGHT;
    v8 = UnityEngine_Screen__get_height(0);
  }
  return (float)v7 / (float)v8;
}