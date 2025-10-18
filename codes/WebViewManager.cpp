void WebViewManager___cctor(const MethodInfo *method)
{
  if ( (byte_4C429EC & 1) == 0 )
  {
    sub_1C37058(&WebViewManager_TypeInfo);
    byte_4C429EC = 1;
  }
  *WebViewManager_TypeInfo->static_fields = (struct WebViewManager_StaticFields)1045220557LL;
}


void WebViewManager___ctor(WebViewManager_o *this, const MethodInfo *method)
{
  if ( (byte_4C429EB & 1) == 0 )
  {
    sub_1C37058(&Method_SingletonMonoBehaviour_WebViewManager___ctor__);
    byte_4C429EB = 1;
  }
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_39ED654 *)Method_SingletonMonoBehaviour_WebViewManager___ctor__);
}


void WebViewManager__EndClose(WebViewManager_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *webViewBase; // x0
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  CGThumbnailListItem_o *p_callbackFunc; // x19
  struct System_Action_o *v7; // x20
  struct System_Action_o *callbackFunc; // t1

  if ( (byte_4C429E8 & 1) == 0 )
  {
    sub_1C37058(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_1C37058(&TouchEffectManager_TypeInfo);
    byte_4C429E8 = 1;
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
  webViewBase = (UnityEngine_Component_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39ED65C *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !webViewBase )
LABEL_11:
    sub_1C372B4(webViewBase);
  MissionNotifyManager__EndPause((MissionNotifyManager_o *)webViewBase, 0);
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (CGThumbnailListItem_o *)&this->fields.callbackFunc;
  v7 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0;
    sub_1C36FFC(p_callbackFunc, 0, v4, v5);
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
  WebViewObject_o *v6; // x0

  if ( (byte_4C429E6 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_WebViewManager_OnClickBack__);
    byte_4C429E6 = 1;
  }
  webView = (UnityEngine_Object_o *)this->fields.webView;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(webView, 0, 0) )
  {
    v4 = Method_WebViewManager_OnClickBack__;
    if ( (*((_BYTE *)Method_WebViewManager_OnClickBack__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1C37070(Method_WebViewManager_OnClickBack__);
    v5 = (System_Reflection_MethodBase_o *)sub_1C3703C(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 7, 0, 0);
    v6 = this->fields.webView;
    if ( !v6 )
      sub_1C372B4(0);
    WebViewObject__GoBack(v6, 0);
  }
}


void WebViewManager__OnClickClose(WebViewManager_o *this, const MethodInfo *method)
{
  struct WebViewObject_o **p_webView; // x20
  UnityEngine_Object_o *webView; // x21
  WebViewObject_o *baseWindow; // x0
  UnityEngine_Object_o *v6; // x21
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  _QWORD *v9; // x0
  System_Reflection_MethodBase_o *v10; // x0
  UnityEngine_Transform_o *v11; // x20
  const MethodInfo *v12; // x1

  if ( (byte_4C429E7 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_WebViewManager_OnClickClose__);
    byte_4C429E7 = 1;
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
    v6 = (UnityEngine_Object_o *)*p_webView;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71266752(v6, 0);
    *p_webView = 0;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.webView, 0, v7, v8);
  }
  if ( this->fields.isButtonEnable )
  {
    this->fields.isButtonEnable = 0;
    v9 = Method_WebViewManager_OnClickClose__;
    if ( (*((_BYTE *)Method_WebViewManager_OnClickClose__ + 83) & 2) != 0 )
      v9 = (_QWORD *)sub_1C37070(Method_WebViewManager_OnClickClose__);
    v10 = (System_Reflection_MethodBase_o *)sub_1C3703C(v9, v9[4]);
    OverwriteAssetSoundName__PlaySystemSe(v10, 1, 0, 0);
    baseWindow = (WebViewObject_o *)this->fields.baseWindow;
    if ( baseWindow )
    {
      baseWindow = (WebViewObject_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)baseWindow, 0);
      v11 = (UnityEngine_Transform_o *)baseWindow;
      if ( !byte_4C3C921 )
      {
        baseWindow = (WebViewObject_o *)sub_1C37058(&UnityEngine_Vector3_TypeInfo);
        byte_4C3C921 = 1;
      }
      if ( v11 )
      {
        UnityEngine_Transform__set_localScale(v11, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
        WebViewManager__EndClose(this, v12);
        return;
      }
    }
LABEL_19:
    sub_1C372B4(baseWindow);
  }
}


void WebViewManager__OnError(WebViewManager_o *this, System_String_o *msg, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields.errorMessage = msg;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.errorMessage, (int32_t)msg, (int32_t)method, v3);
}


void WebViewManager__OnLoadComplete(WebViewManager_o *this, System_String_o *message, const MethodInfo *method)
{
  UnityEngine_Object_o *webView; // x20
  WebViewObject_o *v5; // x0

  if ( (byte_4C429E2 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C429E2 = 1;
  }
  webView = (UnityEngine_Object_o *)this->fields.webView;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(webView, 0, 0) )
  {
    v5 = this->fields.webView;
    if ( !v5 )
      sub_1C372B4(0);
    WebViewObject__SetVisibility(v5, 1, 0);
  }
}


void WebViewManager__OnReceivedMessage(WebViewManager_o *this, System_String_o *msg, const MethodInfo *method)
{
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

  v4 = this;
  if ( (byte_4C429E3 & 1) == 0 )
  {
    sub_1C37058(&AccountLinkageParams_TypeInfo);
    sub_1C37058(&UnityEngine_Application_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__string___ctor__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__string__set_Item__);
    sub_1C37058(&System_Collections_Generic_Dictionary_string__string__TypeInfo);
    sub_1C37058(&NetworkManager_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C37058(&NetworkManager_StoreCallbackFunc_TypeInfo);
    sub_1C37058(&Method___f__AnonymousType0_string__Dictionary_string__string____ctor__);
    sub_1C37058(&Method___f__AnonymousType0_string__Dictionary_string__string___get_args__);
    sub_1C37058(&Method___f__AnonymousType0_string__Dictionary_string__string___get_path__);
    sub_1C37058(&_f__AnonymousType0_string__Dictionary_string__string___TypeInfo);
    sub_1C37058(&Method_WebViewManager_OnWebViewStore__);
    sub_1C37058(&StringLiteral_24459/*"url"*/);
    sub_1C37058(&StringLiteral_18019/*"close"*/);
    sub_1C37058(&StringLiteral_1051/*"//"*/);
    sub_1C37058(&StringLiteral_20812/*"inquiry"*/);
    sub_1C37058(&StringLiteral_18034/*"code"*/);
    sub_1C37058(&StringLiteral_19878/*"googlePlay"*/);
    sub_1C37058(&StringLiteral_23200/*"scene"*/);
    sub_1C37058(&StringLiteral_17422/*"browser"*/);
    sub_1C37058(&StringLiteral_1756/*"?"*/);
    sub_1C37058(&StringLiteral_2265/*"Android"*/);
    sub_1C37058(&StringLiteral_21389/*"mail"*/);
    sub_1C37058(&StringLiteral_20254/*"id"*/);
    sub_1C37058(&StringLiteral_24179/*"transition"*/);
    sub_1C37058(&StringLiteral_16645/*"accountLinkageAnx/issueToken"*/);
    sub_1C37058(&StringLiteral_16814/*"appStore"*/);
    this = (WebViewManager_o *)sub_1C37058(&StringLiteral_20096/*"iOS"*/);
    byte_4C429E3 = 1;
  }
  if ( !v4->fields.isButtonEnable )
    return;
  if ( !msg )
    goto LABEL_65;
  if ( System_String__IndexOf_63620032(msg, (System_String_o *)StringLiteral_1756/*"?"*/, 0) < 0 )
    return;
  if ( System_String__StartsWith(msg, (System_String_o *)StringLiteral_1051/*"//"*/, 0) )
  {
    this = (WebViewManager_o *)System_String__Substring(msg, 2, 0);
    msg = (System_String_o *)this;
    if ( !this )
      goto LABEL_65;
  }
  v5 = System_String__IndexOf_63620032(msg, (System_String_o *)StringLiteral_1756/*"?"*/, 0);
  v6 = (Il2CppObject *)System_String__Substring_63607580(msg, 0, v5, 0);
  v7 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C372A4(System_Collections_Generic_Dictionary_string__string__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v7,
    (const MethodInfo_3462C80 *)Method_System_Collections_Generic_Dictionary_string__string___ctor__);
  v8 = sub_1C372A4(_f__AnonymousType0_string__Dictionary_string__string___TypeInfo);
  _f__AnonymousType0_object__object____ctor(
    (__f__AnonymousType0__path_j__TPar___args_j__TPar__o *)v8,
    v6,
    (Il2CppObject *)v7,
    (const MethodInfo_32C2EA0 *)Method___f__AnonymousType0_string__Dictionary_string__string____ctor__);
  v9 = System_String__IndexOf_63620032(msg, (System_String_o *)StringLiteral_1756/*"?"*/, 0);
  this = (WebViewManager_o *)System_String__Substring(msg, v9 + 1, 0);
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
        sub_1C372BC(this);
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
        (const MethodInfo_346361C *)Method_System_Collections_Generic_Dictionary_string__string__set_Item__);
      m_CancellationTokenSource = (int)v11->fields.m_CancellationTokenSource;
      if ( (int)++v12 >= m_CancellationTokenSource )
        goto LABEL_19;
    }
LABEL_65:
    sub_1C372B4(this);
  }
LABEL_19:
  this = (WebViewManager_o *)System_String__Contains(msg, (System_String_o *)StringLiteral_16645/*"accountLinkageAnx/issueToken"*/, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    this = (WebViewManager_o *)NetworkManager__ParseQueryString(msg, 0);
    if ( !this )
      goto LABEL_65;
    Item = System_Collections_Generic_Dictionary_object__object___get_Item(
             (System_Collections_Generic_Dictionary_object__object__o *)this,
             (Il2CppObject *)StringLiteral_18034/*"code"*/,
             (const MethodInfo_34635B0 *)Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
    static_fields = AccountLinkageParams_TypeInfo->static_fields;
    static_fields->authorizationCode = (struct System_String_o *)Item;
    sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->authorizationCode, (int32_t)Item, v15, v16);
    goto LABEL_24;
  }
  if ( !v8 )
    goto LABEL_65;
  if ( System_String__Equals_63597688(*(System_String_o **)(v8 + 16), (System_String_o *)StringLiteral_17422/*"browser"*/, 0) )
  {
    this = *(WebViewManager_o **)(v8 + 24);
    if ( !this )
      goto LABEL_65;
    if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
           (System_Collections_Generic_Dictionary_object__object__o *)this,
           (Il2CppObject *)StringLiteral_24459/*"url"*/,
           (const MethodInfo_3463824 *)Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__) )
    {
      this = *(WebViewManager_o **)(v8 + 24);
      if ( !this )
        goto LABEL_65;
      v18 = System_Collections_Generic_Dictionary_object__object___get_Item(
              (System_Collections_Generic_Dictionary_object__object__o *)this,
              (Il2CppObject *)StringLiteral_24459/*"url"*/,
              (const MethodInfo_34635B0 *)Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
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
  if ( System_String__Equals_63597688(*(System_String_o **)(v8 + 16), (System_String_o *)StringLiteral_24179/*"transition"*/, 0) )
  {
    this = *(WebViewManager_o **)(v8 + 24);
    if ( !this )
      goto LABEL_65;
    if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
           (System_Collections_Generic_Dictionary_object__object__o *)this,
           (Il2CppObject *)StringLiteral_23200/*"scene"*/,
           (const MethodInfo_3463824 *)Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__) )
    {
      WebViewManager__OnClickClose(v4, v21);
      this = (WebViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      if ( !*(_QWORD *)(v8 + 24) )
        goto LABEL_65;
      v22 = (AvalonSceneManager_o *)this;
      this = (WebViewManager_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                   *(System_Collections_Generic_Dictionary_object__object__o **)(v8 + 24),
                                   (Il2CppObject *)StringLiteral_23200/*"scene"*/,
                                   (const MethodInfo_34635B0 *)Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
      if ( !v22 )
        goto LABEL_65;
      AvalonSceneManager__transitionScene_41159224(v22, (System_String_o *)this, 1, 0, 0);
    }
    return;
  }
  if ( System_String__Equals_63597688(*(System_String_o **)(v8 + 16), (System_String_o *)StringLiteral_16814/*"appStore"*/, 0) )
  {
    this = *(WebViewManager_o **)(v8 + 24);
    if ( !this )
      goto LABEL_65;
    if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
           (System_Collections_Generic_Dictionary_object__object__o *)this,
           (Il2CppObject *)StringLiteral_20254/*"id"*/,
           (const MethodInfo_3463824 *)Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__) )
    {
      this = *(WebViewManager_o **)(v8 + 24);
      if ( !this )
        goto LABEL_65;
      v23 = System_Collections_Generic_Dictionary_object__object___get_Item(
              (System_Collections_Generic_Dictionary_object__object__o *)this,
              (Il2CppObject *)StringLiteral_20254/*"id"*/,
              (const MethodInfo_34635B0 *)Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
    }
    else
    {
      v23 = 0;
    }
    v24 = (NetworkManager_StoreCallbackFunc_o *)sub_1C372A4(NetworkManager_StoreCallbackFunc_TypeInfo);
    NetworkManager_StoreCallbackFunc___ctor(v24, (Il2CppObject *)v4, Method_WebViewManager_OnWebViewStore__, 0);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v25 = &StringLiteral_20096/*"iOS"*/;
LABEL_64:
    NetworkManager__getStoreUrl((System_String_o *)*v25, (System_String_o *)v23, v24, 0);
    return;
  }
  if ( System_String__Equals_63597688(*(System_String_o **)(v8 + 16), (System_String_o *)StringLiteral_19878/*"googlePlay"*/, 0) )
  {
    this = *(WebViewManager_o **)(v8 + 24);
    if ( !this )
      goto LABEL_65;
    if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
           (System_Collections_Generic_Dictionary_object__object__o *)this,
           (Il2CppObject *)StringLiteral_20254/*"id"*/,
           (const MethodInfo_3463824 *)Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__) )
    {
      this = *(WebViewManager_o **)(v8 + 24);
      if ( !this )
        goto LABEL_65;
      v23 = System_Collections_Generic_Dictionary_object__object___get_Item(
              (System_Collections_Generic_Dictionary_object__object__o *)this,
              (Il2CppObject *)StringLiteral_20254/*"id"*/,
              (const MethodInfo_34635B0 *)Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
    }
    else
    {
      v23 = 0;
    }
    v24 = (NetworkManager_StoreCallbackFunc_o *)sub_1C372A4(NetworkManager_StoreCallbackFunc_TypeInfo);
    NetworkManager_StoreCallbackFunc___ctor(v24, (Il2CppObject *)v4, Method_WebViewManager_OnWebViewStore__, 0);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v25 = &StringLiteral_2265/*"Android"*/;
    goto LABEL_64;
  }
  if ( System_String__Equals_63597688(*(System_String_o **)(v8 + 16), (System_String_o *)StringLiteral_18019/*"close"*/, 0) )
  {
LABEL_24:
    WebViewManager__OnClickClose(v4, v17);
    return;
  }
  if ( System_String__Equals_63597688(*(System_String_o **)(v8 + 16), (System_String_o *)StringLiteral_21389/*"mail"*/, 0) )
  {
    this = *(WebViewManager_o **)(v8 + 24);
    if ( !this )
      goto LABEL_65;
    v26 = System_Collections_Generic_Dictionary_object__object___ContainsKey(
            (System_Collections_Generic_Dictionary_object__object__o *)this,
            (Il2CppObject *)StringLiteral_20812/*"inquiry"*/,
            (const MethodInfo_3463824 *)Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__);
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

  if ( (byte_4C429E5 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C429E5 = 1;
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
  const MethodInfo *v9; // x4

  if ( (byte_4C429DC & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_WebViewManager__get_Instance__);
    byte_4C429DC = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_WebViewManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v8 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( v8 )
    return 0;
  if ( !Instance )
    sub_1C372B4(v8);
  return WebViewManager__OpenNewsLocal((WebViewManager_o *)Instance, title, id, callbackFunc, v9);
}


bool WebViewManager__OpenNewsLocal(
        WebViewManager_o *this,
        System_String_o *title,
        int32_t id,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  Il2CppObject *Entity; // x0
  const MethodInfo *v11; // x7
  int klass; // w8
  System_String_o *v13; // x2
  WebViewManager_o *v14; // x0
  System_String_o *v15; // x1
  System_String_o *monitor; // x3

  if ( (byte_4C429E0 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_NewsMaster___);
    sub_1C37058(&Method_DataMasterBase_NewsMaster__NewsEntity__int__GetEntity__);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C429E0 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_NewsMaster___)) == 0 )
  {
    sub_1C372B4(Instance);
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             id,
             (const MethodInfo_33A10A0 *)Method_DataMasterBase_NewsMaster__NewsEntity__int__GetEntity__);
  if ( Entity )
  {
    klass = (int)Entity[2].klass;
    if ( klass == 1 )
    {
      monitor = (System_String_o *)Entity[2].monitor;
      v14 = this;
      v15 = title;
      v13 = 0;
    }
    else
    {
      if ( klass != 2 )
      {
        LOBYTE(Entity) = 0;
        return (char)Entity;
      }
      v13 = (System_String_o *)Entity[2].monitor;
      v14 = this;
      v15 = title;
      monitor = 0;
    }
    WebViewManager__OpenViewLocal(v14, v15, v13, monitor, callbackFunc, 0, 0, v11);
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
  const MethodInfo *v9; // x7
  bool v10; // w23

  if ( (byte_4C429DF & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_WebViewManager__get_Instance__);
    byte_4C429DF = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_WebViewManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v8 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  v10 = v8;
  if ( !v8 )
  {
    if ( !Instance )
      sub_1C372B4(v8);
    WebViewManager__OpenViewLocal((WebViewManager_o *)Instance, title, 0, text, callbackFunc, 0, 0, v9);
  }
  return !v10;
}


void WebViewManager__OpenSupportMail(WebViewManager_o *this, bool isInquiry, const MethodInfo *method)
{
  System_String_o *v4; // x0
  System_String_o **v5; // x9
  System_String_o *v6; // x20
  System_String_o *v7; // x19
  System_String_o *v8; // x21
  Il2CppObject *Instance; // x0
  NetworkManager_c *v10; // x0
  Il2CppObject *friendCode; // x20
  Il2CppObject *operatingSystem; // x22
  Il2CppObject *deviceModel; // x23
  System_String_o *v14; // x0
  System_String_o *v15; // x20
  System_String_o *v16; // x20
  System_String_o *v17; // x22
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  Il2CppObject *v20; // x21
  int32_t v21; // w1
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  int32_t v26; // w1
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  int32_t v31; // w1
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  System_String_o *v34; // x19

  if ( (byte_4C429E4 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Application_TypeInfo);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
    sub_1C37058(&string___TypeInfo);
    sub_1C37058(&System_Uri_TypeInfo);
    sub_1C37058(&StringLiteral_12484/*"SUPPORTMAIL_SUBJECT_SUGGEST"*/);
    sub_1C37058(&StringLiteral_12481/*"SUPPORTMAIL_ADDRESS"*/);
    sub_1C37058(&StringLiteral_1765/*"?subject="*/);
    sub_1C37058(&StringLiteral_510/*"&body="*/);
    sub_1C37058(&StringLiteral_12482/*"SUPPORTMAIL_BODY"*/);
    sub_1C37058(&StringLiteral_12483/*"SUPPORTMAIL_SUBJECT_INQUIRY"*/);
    sub_1C37058(&StringLiteral_21391/*"mailto:"*/);
    byte_4C429E4 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v4 = LocalizationManager__Get((System_String_o *)StringLiteral_12481/*"SUPPORTMAIL_ADDRESS"*/, 0);
  if ( isInquiry )
    v5 = (System_String_o **)&StringLiteral_12483/*"SUPPORTMAIL_SUBJECT_INQUIRY"*/;
  else
    v5 = (System_String_o **)&StringLiteral_12484/*"SUPPORTMAIL_SUBJECT_SUGGEST"*/;
  v6 = *v5;
  v7 = v4;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v8 = LocalizationManager__Get(v6, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
  if ( !Instance )
    goto LABEL_28;
  if ( !byte_4C429F7 )
  {
    sub_1C37058(&NetworkManager_TypeInfo);
    byte_4C429F7 = 1;
  }
  v10 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v10 = NetworkManager_TypeInfo;
  }
  friendCode = (Il2CppObject *)v10->static_fields->friendCode;
  operatingSystem = (Il2CppObject *)UnityEngine_SystemInfo__get_operatingSystem(0);
  deviceModel = (Il2CppObject *)UnityEngine_SystemInfo__get_deviceModel(0);
  v14 = LocalizationManager__Get((System_String_o *)StringLiteral_12482/*"SUPPORTMAIL_BODY"*/, 0);
  v15 = System_String__Format_63603016(v14, friendCode, operatingSystem, deviceModel, 0);
  if ( !System_Uri_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Uri_TypeInfo);
  v16 = System_Uri__EscapeDataString(v15, 0);
  v17 = System_Uri__EscapeDataString(v8, 0);
  Instance = (Il2CppObject *)sub_1C37100(string___TypeInfo, 6);
  if ( !Instance )
LABEL_28:
    sub_1C372B4(Instance);
  v20 = Instance;
  if ( !LODWORD(Instance[1].monitor) )
    goto LABEL_27;
  v21 = StringLiteral_21391/*"mailto:"*/;
  Instance[2].klass = (Il2CppClass *)StringLiteral_21391/*"mailto:"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)&Instance[2], v21, v18, v19);
  if ( LODWORD(v20[1].monitor) <= 1 )
    goto LABEL_27;
  v20[2].monitor = v7;
  sub_1C36FFC((CGThumbnailListItem_o *)&v20[2].monitor, (int32_t)v7, v22, v23);
  if ( LODWORD(v20[1].monitor) <= 2 )
    goto LABEL_27;
  v26 = StringLiteral_1765/*"?subject="*/;
  v20[3].klass = (Il2CppClass *)StringLiteral_1765/*"?subject="*/;
  sub_1C36FFC((CGThumbnailListItem_o *)&v20[3], v26, v24, v25);
  if ( LODWORD(v20[1].monitor) <= 3
    || (v20[3].monitor = v17,
        sub_1C36FFC((CGThumbnailListItem_o *)&v20[3].monitor, (int32_t)v17, v27, v28),
        LODWORD(v20[1].monitor) <= 4)
    || (v31 = StringLiteral_510/*"&body="*/,
        v20[4].klass = (Il2CppClass *)StringLiteral_510/*"&body="*/,
        sub_1C36FFC((CGThumbnailListItem_o *)&v20[4], v31, v29, v30),
        LODWORD(v20[1].monitor) <= 5) )
  {
LABEL_27:
    sub_1C372BC(Instance);
  }
  v20[4].monitor = v16;
  sub_1C36FFC((CGThumbnailListItem_o *)&v20[4].monitor, (int32_t)v16, v32, v33);
  v34 = System_String__Concat_63602172((System_String_array *)v20, 0);
  if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
  UnityEngine_Application__OpenURL(v34, 0);
}


bool WebViewManager__OpenView(
        System_String_o *title,
        System_String_o *path,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x22
  _BOOL8 v8; // x0
  const MethodInfo *v9; // x7
  bool v10; // w23

  if ( (byte_4C429DE & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_WebViewManager__get_Instance__);
    byte_4C429DE = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_WebViewManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v8 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  v10 = v8;
  if ( !v8 )
  {
    if ( !Instance )
      sub_1C372B4(v8);
    WebViewManager__OpenViewLocal((WebViewManager_o *)Instance, title, path, 0, callbackFunc, 0, 0, v9);
  }
  return !v10;
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
  const MethodInfo *v11; // x7

  if ( (byte_4C429DD & 1) == 0 )
  {
    sub_1C37058(&NetworkManager_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_WebViewManager__get_Instance__);
    sub_1C37058(&StringLiteral_15606/*"WebView/"*/);
    byte_4C429DD = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_WebViewManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v8 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( !v8 )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    BaseUrl = NetworkManager__getBaseUrl(1, 0);
    v10 = System_String__Concat_63599904(BaseUrl, (System_String_o *)StringLiteral_15606/*"WebView/"*/, path, 0);
    if ( !Instance )
      sub_1C372B4(v10);
    WebViewManager__OpenViewLocal((WebViewManager_o *)Instance, title, v10, 0, callbackFunc, 0, 0, v11);
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
  System_String_o *WebUrl; // x0
  System_String_o *v16; // x23
  Il2CppObject *Component_object; // x0
  struct WebViewObject_o **p_webView; // x24
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  UnityEngine_Object_o *webView; // x21
  const MethodInfo *v22; // x1
  Il2CppObject *v23; // x0
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  WebViewObject_o *v26; // x25
  System_Action_object__o *v27; // x26
  System_Action_object__o *v28; // x27
  System_Action_object__o *v29; // x28
  System_Action_object__o *v30; // x29
  System_Action_object__o *v31; // x21
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  UIWidget_o *baseWindow; // x20
  UnityEngine_Transform_o *v35; // x20
  UnityEngine_GameObject_o *gameObject; // x20
  WebViewManager_c *v37; // x8
  float OPEN_TIME; // s8
  TweenScale_o *v39; // x20
  UnityEngine_GameObject_o *v40; // x0
  int32_t v41; // w2
  const MethodInfo *v42; // x3
  int32_t v43; // w1
  int32_t v44; // w2
  const MethodInfo *v45; // x3
  UnityEngine_Transform_o *v46; // x20
  System_String_o *v48; // [xsp+68h] [xbp-68h]

  if ( (byte_4C429E1 & 1) == 0 )
  {
    sub_1C37058(&System_Action_string__TypeInfo);
    sub_1C37058(&Method_UnityEngine_Component_GetComponent_WebViewObject___);
    sub_1C37058(&Method_UnityEngine_GameObject_AddComponent_WebViewObject___);
    sub_1C37058(&ManagerConfig_TypeInfo);
    sub_1C37058(&NetworkManager_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_1C37058(&TouchEffectManager_TypeInfo);
    sub_1C37058(&Method_WebViewManager__OpenViewLocal_b__24_0__);
    sub_1C37058(&Method_WebViewManager__OpenViewLocal_b__24_1__);
    sub_1C37058(&Method_WebViewManager__OpenViewLocal_b__24_2__);
    sub_1C37058(&Method_WebViewManager__OpenViewLocal_b__24_3__);
    sub_1C37058(&Method_WebViewManager__OpenViewLocal_b__24_4__);
    sub_1C37058(&WebViewManager_TypeInfo);
    sub_1C37058(&StringLiteral_6017/*"EndOpen"*/);
    sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C429E1 = 1;
  }
  this->fields.callbackFunc = callbackFunc;
  sub_1C36FFC(
    (CGThumbnailListItem_o *)&this->fields.callbackFunc,
    (int32_t)callbackFunc,
    (int32_t)path,
    (const MethodInfo *)data);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  WebUrl = NetworkManager__getWebUrl(path, 1, 1, 0);
  if ( !this->fields.titleLabel )
    goto LABEL_49;
  v16 = WebUrl;
  UILabel__set_text(this->fields.titleLabel, title, 0);
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_30DE428 *)Method_UnityEngine_Component_GetComponent_WebViewObject___);
  this->fields.webView = (struct WebViewObject_o *)Component_object;
  p_webView = &this->fields.webView;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.webView, (int32_t)Component_object, v19, v20);
  webView = (UnityEngine_Object_o *)this->fields.webView;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(webView, 0, 0) )
  {
    v48 = password;
    WebUrl = (System_String_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !WebUrl )
      goto LABEL_49;
    v23 = UnityEngine_GameObject__AddComponent_object_(
            (UnityEngine_GameObject_o *)WebUrl,
            (const MethodInfo_313F0F0 *)Method_UnityEngine_GameObject_AddComponent_WebViewObject___);
    this->fields.webView = (struct WebViewObject_o *)v23;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.webView, (int32_t)v23, v24, v25);
    v26 = this->fields.webView;
    v27 = (System_Action_object__o *)sub_1C372A4(System_Action_string__TypeInfo);
    System_Action_object____ctor(v27, (Il2CppObject *)this, Method_WebViewManager__OpenViewLocal_b__24_0__, 0);
    v28 = (System_Action_object__o *)sub_1C372A4(System_Action_string__TypeInfo);
    System_Action_object____ctor(v28, (Il2CppObject *)this, Method_WebViewManager__OpenViewLocal_b__24_1__, 0);
    v29 = (System_Action_object__o *)sub_1C372A4(System_Action_string__TypeInfo);
    System_Action_object____ctor(v29, (Il2CppObject *)this, Method_WebViewManager__OpenViewLocal_b__24_2__, 0);
    v30 = (System_Action_object__o *)sub_1C372A4(System_Action_string__TypeInfo);
    System_Action_object____ctor(v30, (Il2CppObject *)this, Method_WebViewManager__OpenViewLocal_b__24_3__, 0);
    v31 = (System_Action_object__o *)sub_1C372A4(System_Action_string__TypeInfo);
    System_Action_object____ctor(v31, (Il2CppObject *)this, Method_WebViewManager__OpenViewLocal_b__24_4__, 0);
    if ( !v26 )
      goto LABEL_49;
    WebViewObject__Init(
      v26,
      (System_Action_string__o *)v27,
      (System_Action_string__o *)v28,
      (System_Action_string__o *)v29,
      (System_Action_string__o *)v30,
      (System_Action_string__o *)v31,
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
    password = v48;
  }
  WebViewManager__SetMargins(this, v22);
  this->fields.errorMessage = 0;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.errorMessage, 0, v32, v33);
  if ( username && password )
  {
    WebUrl = (System_String_o *)*p_webView;
    if ( !*p_webView )
      goto LABEL_49;
    WebViewObject__SetBasicAuthInfo((WebViewObject_o *)WebUrl, username, password, 0);
  }
  WebUrl = (System_String_o *)*p_webView;
  if ( !*p_webView )
LABEL_49:
    sub_1C372B4(WebUrl);
  if ( data )
    WebViewObject__LoadHTML((WebViewObject_o *)WebUrl, data, v16, 0);
  else
    WebViewObject__LoadURL((WebViewObject_o *)WebUrl, v16, 0);
  if ( !this->fields.isButtonEnable )
  {
    WebUrl = (System_String_o *)this->fields.webViewBase;
    if ( WebUrl )
    {
      WebUrl = (System_String_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)WebUrl, 0);
      if ( WebUrl )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)WebUrl, 1, 0);
        if ( !TouchEffectManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TouchEffectManager_TypeInfo);
        TouchEffectManager__SetBlock(1, 0);
        WebUrl = (System_String_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39ED65C *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
        if ( WebUrl )
        {
          MissionNotifyManager__StartPause((MissionNotifyManager_o *)WebUrl, 0);
          baseWindow = this->fields.baseWindow;
          WebUrl = (System_String_o *)ManagerConfig_TypeInfo;
          if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
          if ( baseWindow )
          {
            UIWidget__set_height(baseWindow, ManagerConfig_TypeInfo->static_fields->HEIGHT, 0);
            WebUrl = (System_String_o *)this->fields.baseWindow;
            if ( WebUrl )
            {
              WebUrl = (System_String_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)WebUrl, 0);
              v35 = (UnityEngine_Transform_o *)WebUrl;
              if ( !byte_4C3C921 )
              {
                WebUrl = (System_String_o *)sub_1C37058(&UnityEngine_Vector3_TypeInfo);
                byte_4C3C921 = 1;
              }
              if ( v35 )
              {
                UnityEngine_Transform__set_localScale(v35, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
                WebUrl = (System_String_o *)this->fields.baseWindow;
                if ( WebUrl )
                {
                  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)WebUrl, 0);
                  v37 = WebViewManager_TypeInfo;
                  if ( !WebViewManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(WebViewManager_TypeInfo);
                    v37 = WebViewManager_TypeInfo;
                  }
                  OPEN_TIME = v37->static_fields->OPEN_TIME;
                  if ( !byte_4C3C926 )
                  {
                    sub_1C37058(&UnityEngine_Vector3_TypeInfo);
                    byte_4C3C926 = 1;
                  }
                  v39 = TweenScale__Begin(
                          gameObject,
                          OPEN_TIME,
                          UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
                          0);
                  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                  WebUrl = (System_String_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v39, 0, 0);
                  if ( ((unsigned __int8)WebUrl & 1) != 0 )
                  {
                    if ( v39 )
                    {
                      v39->fields.method = 3;
                      v40 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
                      v39->fields.eventReceiver = v40;
                      sub_1C36FFC((CGThumbnailListItem_o *)&v39->fields.eventReceiver, (int32_t)v40, v41, v42);
                      v43 = StringLiteral_6017/*"EndOpen"*/;
                      v39->fields.callWhenFinished = (struct System_String_o *)StringLiteral_6017/*"EndOpen"*/;
                      sub_1C36FFC((CGThumbnailListItem_o *)&v39->fields.callWhenFinished, v43, v44, v45);
                      return 1;
                    }
                  }
                  else
                  {
                    WebUrl = (System_String_o *)this->fields.baseWindow;
                    if ( WebUrl )
                    {
                      WebUrl = (System_String_o *)UnityEngine_Component__get_transform(
                                                    (UnityEngine_Component_o *)WebUrl,
                                                    0);
                      v46 = (UnityEngine_Transform_o *)WebUrl;
                      if ( !byte_4C3C926 )
                      {
                        WebUrl = (System_String_o *)sub_1C37058(&UnityEngine_Vector3_TypeInfo);
                        byte_4C3C926 = 1;
                      }
                      if ( v46 )
                      {
                        UnityEngine_Transform__set_localScale(
                          v46,
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
  const MethodInfo *v13; // x7
  bool v14; // w25

  if ( (byte_4C429DB & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_WebViewManager__get_Instance__);
    byte_4C429DB = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_WebViewManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v12 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  v14 = v12;
  if ( !v12 )
  {
    if ( !Instance )
      sub_1C372B4(v12);
    WebViewManager__OpenViewLocal((WebViewManager_o *)Instance, title, path, 0, callbackFunc, username, password, v13);
  }
  return !v14;
}


void WebViewManager__PressBackKey(WebViewManager_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *webViewBase; // x0
  UnityEngine_Object_o *webView; // x20
  const MethodInfo *v5; // x1

  if ( (byte_4C429E9 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C429E9 = 1;
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
      sub_1C372B4(webViewBase);
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
  const MethodInfo *v12; // x1
  float v13; // s0
  int v14; // w8
  float v15; // s0
  struct UIWidget_o *v16; // x8
  float v17; // s0
  signed int v18; // w21
  int mHeight; // s11
  float v20; // s8
  WebViewManager_o *v21; // x0
  const MethodInfo *v22; // x1
  float v23; // s0
  int v24; // w8
  float v25; // s0
  int32_t v26; // w20
  float ScreenToUiRatio; // s0
  float v28; // s0
  int32_t v29; // w2

  if ( (byte_4C429EA & 1) == 0 )
  {
    sub_1C37058(&ResolutionManager_TypeInfo);
    byte_4C429EA = 1;
  }
  width = UnityEngine_Screen__get_width(0);
  height = UnityEngine_Screen__get_height(0);
  if ( !ResolutionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResolutionManager_TypeInfo);
  if ( !byte_4C429F8 )
  {
    sub_1C37058(&ResolutionManager_TypeInfo);
    byte_4C429F8 = 1;
  }
  webView = (WebViewManager_o *)ResolutionManager_TypeInfo;
  if ( !ResolutionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ResolutionManager_TypeInfo);
    webView = (WebViewManager_o *)ResolutionManager_TypeInfo;
  }
  m_CachedPtr_high = HIDWORD(webView[1].fields.titleLabel->fields.m_CachedPtr);
  if ( !byte_4C429F9 )
  {
    sub_1C37058(&ResolutionManager_TypeInfo);
    webView = (WebViewManager_o *)ResolutionManager_TypeInfo;
    byte_4C429F9 = 1;
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
  v13 = (float)mWidth / WebViewManager__get_ScreenToUiRatio(webView, v4);
  v14 = (int)v13;
  if ( v13 == INFINITY )
    v14 = 0x80000000;
  v15 = (float)(width - v14);
  v16 = this->fields.baseWindow;
  v17 = v11 * (float)(v15 * 0.5);
  v18 = v17 == INFINITY ? 0x80000000 : (int)v17;
  if ( !v16 )
    goto LABEL_30;
  mHeight = v16->fields.mHeight;
  v20 = (float)m_CancellationTokenSource / (float)height;
  v23 = (float)mHeight / WebViewManager__get_ScreenToUiRatio(webView, v12);
  v24 = (int)v23;
  if ( v23 == INFINITY )
    v24 = 0x80000000;
  v25 = v20 * (float)((float)(height - v24) * 0.5);
  v26 = v25 == INFINITY ? 0x80000000 : (int)v25;
  ScreenToUiRatio = WebViewManager__get_ScreenToUiRatio(v21, v22);
  webView = (WebViewManager_o *)this->fields.webView;
  if ( !webView )
LABEL_30:
    sub_1C372B4(webView);
  v28 = v20 * (float)((float)((float)(57.0 / ScreenToUiRatio) + (float)v26) + -2.0);
  if ( v28 == INFINITY )
    v29 = 0x80000000;
  else
    v29 = (int)v28;
  WebViewObject__SetMargins((WebViewObject_o *)webView, v18 & ~(v18 >> 31), v29, v18 & ~(v18 >> 31), v26, 0, 0);
}


void WebViewManager___OpenViewLocal_b__24_1(WebViewManager_o *this, System_String_o *msg, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields.errorMessage = msg;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.errorMessage, (int32_t)msg, (int32_t)method, v3);
}


void WebViewManager___OpenViewLocal_b__24_2(WebViewManager_o *this, System_String_o *msg, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields.errorMessage = msg;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.errorMessage, (int32_t)msg, (int32_t)method, v3);
}


void WebViewManager___OpenViewLocal_b__24_4(WebViewManager_o *this, System_String_o *msg, const MethodInfo *method)
{
  ;
}


bool WebViewManager__get_IsBusy(WebViewManager_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *webViewBase; // x20
  UnityEngine_Component_o *gameObject; // x0

  if ( (byte_4C429D9 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C429D9 = 1;
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
    sub_1C372B4(gameObject);
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

  if ( (byte_4C429DA & 1) == 0 )
  {
    sub_1C37058(&ManagerConfig_TypeInfo);
    byte_4C429DA = 1;
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