void WebViewSpotComponent___ctor(WebViewSpotComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
void WebViewSpotComponent__DestroyWebView(WebViewSpotComponent_o *this, bool isWebViewOnly, const MethodInfo *method)
{
  MissionNaviTransitionBoardItem_o *p_spotWebWindow; // x19
  UnityEngine_Object_o *v6; // x21
  struct UnityEngine_GameObject_o *spotWebWindow; // t1
  __int64 v8; // x1
  Il2CppObject *klass; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  UnityEngine_Object_o *v12; // x20
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  __int64 v19; // x1
  __int64 v20; // x2
  Il2CppObject *Instance; // x19

  if ( (byte_5935A3A & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_WebViewManager__get_Instance__);
    byte_5935A3A = 1;
  }
  spotWebWindow = this->fields.spotWebWindow;
  p_spotWebWindow = (MissionNaviTransitionBoardItem_o *)&this->fields.spotWebWindow;
  v6 = (UnityEngine_Object_o *)spotWebWindow;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, isWebViewOnly, method);
  if ( UnityEngine_Object__op_Inequality(v6, 0, 0) && !isWebViewOnly )
  {
    klass = (Il2CppObject *)p_spotWebWindow->klass;
    if ( !p_spotWebWindow->klass )
      goto LABEL_17;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)klass, 0, 0);
    v12 = (UnityEngine_Object_o *)p_spotWebWindow->klass;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10, v11);
    UnityEngine_Object__Destroy_83246496(v12, 0);
    p_spotWebWindow->klass = 0;
    sub_21FFBF4(p_spotWebWindow, 0, v13, v14, v15, v16, v17, v18);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_WebViewManager__get_Instance__);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v19, v20);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Instance, 0, 0) )
  {
    klass = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_WebViewManager__get_Instance__);
    if ( klass )
    {
      WebViewManager__DestroyWebView((WebViewManager_o *)klass, 0);
      return;
    }
LABEL_17:
    sub_21FFECC(klass, v8);
  }
}


void WebViewSpotComponent__EndSpotWebViewClose(WebViewSpotComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *spotWebWindow; // x20
  __int64 v5; // x1
  UnityEngine_GameObject_o *transform; // x0
  UnityEngine_Transform_o *v7; // x20

  if ( (byte_5935A39 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5935A39 = 1;
  }
  spotWebWindow = (UnityEngine_Object_o *)this->fields.spotWebWindow;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Inequality(spotWebWindow, 0, 0) )
  {
    transform = this->fields.spotWebWindow;
    if ( !transform )
      goto LABEL_14;
    transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0);
    v7 = (UnityEngine_Transform_o *)transform;
    if ( !byte_5931940 )
    {
      transform = (UnityEngine_GameObject_o *)sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
      byte_5931940 = 1;
    }
    if ( !v7
      || (UnityEngine_Transform__set_localScale(v7, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0),
          (transform = this->fields.spotWebWindow) == 0)
      || (transform = UnityEngine_GameObject__get_gameObject(transform, 0)) == 0 )
    {
LABEL_14:
      sub_21FFECC(transform, v5);
    }
    UnityEngine_GameObject__SetActive(transform, 0, 0);
  }
}


void WebViewSpotComponent__OnClickSpotWebViewClose(
        WebViewSpotComponent_o *this,
        System_Action_o *callBack,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  const MethodInfo_476E8C0 *v20; // x0
  Il2CppObject *Instance; // x0
  UnityEngine_GameObject_o *spotWebWindow; // x19
  WebViewManager_o *v23; // x20
  System_Action_o *v24; // x22

  if ( (byte_5935A38 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_WebViewManager__get_Instance__);
    sub_21FFC50(&Method_WebViewSpotComponent___c__DisplayClass12_0__OnClickSpotWebViewClose_b__0__);
    sub_21FFC50(&WebViewSpotComponent___c__DisplayClass12_0_TypeInfo);
    byte_5935A38 = 1;
  }
  v5 = sub_21FFEBC(WebViewSpotComponent___c__DisplayClass12_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_6;
  *(_QWORD *)(v5 + 16) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = callBack;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 24), (int32_t)callBack, v14, v15, v16, v17, v18, v19);
  v20 = (const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_WebViewManager__get_Instance__;
  this->fields.isClosing = 1;
  Instance = SingletonMonoBehaviour_object___get_Instance(v20);
  spotWebWindow = this->fields.spotWebWindow;
  v23 = (WebViewManager_o *)Instance;
  v24 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(
    v24,
    (Il2CppObject *)v5,
    Method_WebViewSpotComponent___c__DisplayClass12_0__OnClickSpotWebViewClose_b__0__,
    0);
  if ( !v23 )
LABEL_6:
    sub_21FFECC(v6, v7);
  WebViewManager__SmallOut(v23, spotWebWindow, v24, 0);
}


void WebViewSpotComponent__OpenView(
        WebViewSpotComponent_o *this,
        UnityEngine_GameObject_o *prefab,
        UnityEngine_Transform_o *parent,
        System_String_o *path,
        UnityEngine_Vector3_o viewPos,
        System_Action_o *callback,
        bool isLoadedNonDisp,
        const MethodInfo *method)
{
  float z; // s8
  float y; // s9
  float x; // s10
  __int64 v17; // x22
  UnityEngine_GameObject_o *v18; // x0
  __int64 v19; // x1
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  __int64 v32; // x1
  __int64 v33; // x2
  UnityEngine_GameObject_o **p_spotWebWindow; // x25
  UnityEngine_Object_o *spotWebWindow; // x27
  __int64 v36; // x1
  __int64 v37; // x2
  Il2CppObject *v38; // x0
  System_String_o *v39; // x2
  System_String_o *v40; // x3
  int32_t v41; // w4
  int32_t v42; // w5
  bool v43; // w6
  bool v44; // w7
  UnityEngine_Object_o *v45; // x23
  UnityEngine_GameObject_o *v46; // x21
  System_Action_o *v47; // x23
  __int64 v48; // x1
  __int64 v49; // x2
  UnityEngine_Vector3_o v50; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v51; // 0:s0.4,4:s1.4,8:s2.4

  z = viewPos.fields.z;
  y = viewPos.fields.y;
  x = viewPos.fields.x;
  if ( (byte_5935A36 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_UnityEngine_Object_Instantiate_GameObject____91575024);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_WebViewSpotComponent___c__DisplayClass10_0__OpenView_b__0__);
    sub_21FFC50(&WebViewSpotComponent___c__DisplayClass10_0_TypeInfo);
    sub_21FFC50(&WebViewManager_TypeInfo);
    byte_5935A36 = 1;
  }
  v17 = sub_21FFEBC(WebViewSpotComponent___c__DisplayClass10_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v17, 0);
  if ( !v17 )
    goto LABEL_18;
  *(_QWORD *)(v17 + 16) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v17 + 16), (int32_t)this, v20, v21, v22, v23, v24, v25);
  *(_QWORD *)(v17 + 24) = callback;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v17 + 24), (int32_t)callback, v26, v27, v28, v29, v30, v31);
  p_spotWebWindow = &this->fields.spotWebWindow;
  spotWebWindow = (UnityEngine_Object_o *)this->fields.spotWebWindow;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v32, v33);
  if ( UnityEngine_Object__op_Equality(spotWebWindow, 0, 0) )
  {
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v36, v37);
    v38 = UnityEngine_Object__Instantiate_object__59506996(
            (Il2CppObject *)prefab,
            parent,
            (const MethodInfo_38C0134 *)Method_UnityEngine_Object_Instantiate_GameObject____91575024);
    *p_spotWebWindow = (UnityEngine_GameObject_o *)v38;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.spotWebWindow,
      (int32_t)v38,
      v39,
      v40,
      v41,
      v42,
      v43,
      v44);
  }
  v45 = (UnityEngine_Object_o *)*p_spotWebWindow;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v36, v37);
  if ( UnityEngine_Object__op_Equality(v45, 0, 0) )
  {
    ActionExtensions__Call(*(System_Action_o **)(v17 + 24), 0);
    return;
  }
  v18 = this->fields.spotWebWindow;
  this->fields.isOpening = 1;
  if ( !v18 )
LABEL_18:
    sub_21FFECC(v18, v19);
  UnityEngine_GameObject__SetActive(v18, 1, 0);
  v50.fields.x = x;
  v50.fields.y = y;
  v50.fields.z = z;
  GameObjectExtensions__SetLocalPosition(*p_spotWebWindow, v50, 0);
  v46 = *p_spotWebWindow;
  v47 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(v47, (Il2CppObject *)v17, Method_WebViewSpotComponent___c__DisplayClass10_0__OpenView_b__0__, 0);
  if ( !*(&WebViewManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(WebViewManager_TypeInfo, v48, v49);
  v51.fields.y = y;
  v51.fields.z = z;
  v51.fields.x = x;
  WebViewManager__OpenView_48481972(v46, path, v51, v47, isLoadedNonDisp, 0);
}


void WebViewSpotComponent__SetVisibilityWebView(
        WebViewSpotComponent_o *this,
        bool enable,
        System_Action_o *callBack,
        const MethodInfo *method)
{
  __int64 v7; // x21
  UnityEngine_GameObject_o *v8; // x0
  __int64 v9; // x1
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  __int64 v22; // x1
  __int64 v23; // x2
  UnityEngine_Object_o *spotWebWindow; // x23
  __int64 v25; // x1
  __int64 v26; // x2
  Il2CppObject *Instance; // x23
  UnityEngine_GameObject_o *v28; // x20
  System_Action_o *v29; // x19

  if ( (byte_5935A37 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_WebViewManager__get_Instance__);
    sub_21FFC50(&Method_WebViewSpotComponent___c__DisplayClass11_0__SetVisibilityWebView_b__0__);
    sub_21FFC50(&WebViewSpotComponent___c__DisplayClass11_0_TypeInfo);
    byte_5935A37 = 1;
  }
  v7 = sub_21FFEBC(WebViewSpotComponent___c__DisplayClass11_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_17;
  *(_QWORD *)(v7 + 16) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v7 + 16), (int32_t)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 24) = callBack;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v7 + 24), (int32_t)callBack, v16, v17, v18, v19, v20, v21);
  spotWebWindow = (UnityEngine_Object_o *)this->fields.spotWebWindow;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v22, v23);
  if ( !UnityEngine_Object__op_Equality(spotWebWindow, 0, 0) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_WebViewManager__get_Instance__);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v25, v26);
    if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0) )
    {
      if ( enable )
      {
        v28 = this->fields.spotWebWindow;
        this->fields.isOpening = 1;
        v29 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
        System_Action___ctor(
          v29,
          (Il2CppObject *)v7,
          Method_WebViewSpotComponent___c__DisplayClass11_0__SetVisibilityWebView_b__0__,
          0);
        if ( Instance )
        {
          WebViewManager__LargeInLoadedWindow((WebViewManager_o *)Instance, v28, v29, 0);
          return;
        }
LABEL_17:
        sub_21FFECC(v8, v9);
      }
      v8 = this->fields.spotWebWindow;
      *(_WORD *)&this->fields.isOpening = 0;
      if ( !v8 )
        goto LABEL_17;
      UnityEngine_GameObject__SetActive(v8, 0, 0);
      if ( !Instance )
        goto LABEL_17;
      WebViewManager__SetVisibilityWebView((WebViewManager_o *)Instance, 0, 0);
    }
  }
  ActionExtensions__Call(*(System_Action_o **)(v7 + 24), 0);
}


bool WebViewSpotComponent__get_IsClosing(WebViewSpotComponent_o *this, const MethodInfo *method)
{
  return this->fields.isClosing;
}


bool WebViewSpotComponent__get_IsOpening(WebViewSpotComponent_o *this, const MethodInfo *method)
{
  return this->fields.isOpening;
}


UnityEngine_Vector3_o WebViewSpotComponent__get_ViewPosition(WebViewSpotComponent_o *this, const MethodInfo *method)
{
  float x; // s0
  float y; // s1
  float z; // s2
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  x = this->fields.viewPosition.fields.x;
  y = this->fields.viewPosition.fields.y;
  z = this->fields.viewPosition.fields.z;
  result.fields.z = z;
  result.fields.y = y;
  result.fields.x = x;
  return result;
}


void WebViewSpotComponent___c__DisplayClass10_0___ctor(
        WebViewSpotComponent___c__DisplayClass10_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void WebViewSpotComponent___c__DisplayClass10_0___OpenView_b__0(
        WebViewSpotComponent___c__DisplayClass10_0_o *this,
        const MethodInfo *method)
{
  struct WebViewSpotComponent_o *_4__this; // x8
  System_Action_o *callback; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_21FFECC(this, method);
  callback = this->fields.callback;
  _4__this->fields.isOpening = 0;
  ActionExtensions__Call(callback, 0);
}


void WebViewSpotComponent___c__DisplayClass11_0___ctor(
        WebViewSpotComponent___c__DisplayClass11_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void WebViewSpotComponent___c__DisplayClass11_0___SetVisibilityWebView_b__0(
        WebViewSpotComponent___c__DisplayClass11_0_o *this,
        const MethodInfo *method)
{
  struct WebViewSpotComponent_o *_4__this; // x8
  UnityEngine_GameObject_o *spotWebWindow; // x20
  struct WebViewSpotComponent_o *v5; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_6;
  spotWebWindow = _4__this->fields.spotWebWindow;
  if ( !byte_5931945 )
  {
    sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
    byte_5931945 = 1;
  }
  GameObjectExtensions__SetLocalScale(spotWebWindow, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
  v5 = this->fields.__4__this;
  if ( !v5 )
LABEL_6:
    sub_21FFECC(this, method);
  *(_WORD *)&v5->fields.isOpening = 0;
  ActionExtensions__Call(this->fields.callBack, 0);
}


void WebViewSpotComponent___c__DisplayClass12_0___ctor(
        WebViewSpotComponent___c__DisplayClass12_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void WebViewSpotComponent___c__DisplayClass12_0___OnClickSpotWebViewClose_b__0(
        WebViewSpotComponent___c__DisplayClass12_0_o *this,
        const MethodInfo *method)
{
  struct WebViewSpotComponent_o *_4__this; // x0
  const MethodInfo *v4; // x2

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (_4__this->fields.isClosing = 0,
        WebViewSpotComponent__EndSpotWebViewClose(_4__this, method),
        (_4__this = this->fields.__4__this) == 0) )
  {
    sub_21FFECC(_4__this, method);
  }
  WebViewSpotComponent__DestroyWebView(_4__this, 1, v4);
  ActionExtensions__Call(this->fields.callBack, 0);
}