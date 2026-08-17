void WebCamTexturePlayer___ctor(WebCamTexturePlayer_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void WebCamTexturePlayer__CameraPermissionCheck(
        WebCamTexturePlayer_o *this,
        System_Action_o *cancelCallback,
        System_Action_o *successCallback,
        const MethodInfo *method)
{
  ActionExtensions__Call(cancelCallback, 0);
}


System_Collections_IEnumerator_o *WebCamTexturePlayer__CameraPermissionCheckRoutine(
        WebCamTexturePlayer_o *this,
        System_Action_o *cancelCallback,
        System_Action_o *successCallback,
        const MethodInfo *method)
{
  __int64 v7; // x22
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
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7

  if ( (byte_59729B5 & 1) == 0 )
  {
    sub_2213A60(&WebCamTexturePlayer__CameraPermissionCheckRoutine_d__4_TypeInfo);
    byte_59729B5 = 1;
  }
  v7 = sub_2213CCC(WebCamTexturePlayer__CameraPermissionCheckRoutine_d__4_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  *(_DWORD *)(v7 + 16) = 0;
  *(_QWORD *)(v7 + 32) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 32), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v7 + 48) = cancelCallback;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 48), (int32_t)cancelCallback, v14, v15, v16, v17, v18, v19);
  *(_QWORD *)(v7 + 56) = successCallback;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 56), (int32_t)successCallback, v20, v21, v22, v23, v24, v25);
  return (System_Collections_IEnumerator_o *)v7;
}


void WebCamTexturePlayer__Init(WebCamTexturePlayer_o *this, UITexture_o *displayTexture, const MethodInfo *method)
{
  ;
}


void WebCamTexturePlayer__PlayCamera(
        WebCamTexturePlayer_o *this,
        System_Action_o *cancelCallback,
        System_Action_o *successCallback,
        const MethodInfo *method)
{
  ActionExtensions__Call(cancelCallback, 0);
}


void WebCamTexturePlayer__StopCamera(WebCamTexturePlayer_o *this, const MethodInfo *method)
{
  ;
}


bool WebCamTexturePlayer__get_IsCameraPermissionGranted(WebCamTexturePlayer_o *this, const MethodInfo *method)
{
  if ( (byte_59729B4 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_17473/*"android.permission.CAMERA"*/);
    byte_59729B4 = 1;
  }
  return UnityEngine_Android_Permission__HasUserAuthorizedPermission((System_String_o *)StringLiteral_17473/*"android.permission.CAMERA"*/, 0);
}


void WebCamTexturePlayer__CameraPermissionCheckRoutine_d__4___ctor(
        WebCamTexturePlayer__CameraPermissionCheckRoutine_d__4_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool WebCamTexturePlayer__CameraPermissionCheckRoutine_d__4__MoveNext(
        WebCamTexturePlayer__CameraPermissionCheckRoutine_d__4_o *this,
        const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  WebCamTexturePlayer__CameraPermissionCheckRoutine_d__4_o *v8; // x19
  int32_t _1__state; // w8
  struct WebCamTexturePlayer_o *_4__this; // x24
  Il2CppObject *v11; // x20
  Il2CppObject **p__8__1; // x21
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  UnityEngine_Android_PermissionCallbacks_o *v19; // x20
  Il2CppObject *v20; // x23
  System_Action_object__o *v21; // x22
  Il2CppObject *v22; // x22
  System_Action_object__o *v23; // x23
  Il2CppObject *v24; // x21
  System_Action_object__o *v25; // x22
  struct WebCamTexturePlayer___c__DisplayClass4_0_o *_8__1; // x8
  MissionNaviTransitionBoardItem_o *p__2__current; // x19
  bool result; // w0
  __int64 v29; // x1
  Il2CppObject *Instance; // x19
  WebCamTexturePlayer__CameraPermissionCheckRoutine_d__4_o *v31; // x20
  WebCamTexturePlayer___c_c *v32; // x8
  struct WebCamTexturePlayer___c_StaticFields *static_fields; // x9
  System_Action_o *_9__4_0; // x22
  System_String_o *v35; // x21
  Il2CppObject *v36; // x23
  struct WebCamTexturePlayer___c_StaticFields *v37; // x0
  System_String_o *v38; // x2
  System_String_o *v39; // x3
  int32_t v40; // w4
  int32_t v41; // w5
  bool v42; // w6
  bool v43; // w7

  v8 = this;
  if ( (byte_59729B7 & 1) == 0 )
  {
    sub_2213A60(&System_Action_string__TypeInfo);
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&UnityEngine_Android_PermissionCallbacks_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_WebCamTexturePlayer___c__CameraPermissionCheckRoutine_b__4_0__);
    sub_2213A60(&Method_WebCamTexturePlayer___c__DisplayClass4_0__CameraPermissionCheckRoutine_b__1__);
    sub_2213A60(&Method_WebCamTexturePlayer___c__DisplayClass4_0__CameraPermissionCheckRoutine_b__2__);
    sub_2213A60(&Method_WebCamTexturePlayer___c__DisplayClass4_0__CameraPermissionCheckRoutine_b__3__);
    sub_2213A60(&WebCamTexturePlayer___c__DisplayClass4_0_TypeInfo);
    sub_2213A60(&WebCamTexturePlayer___c_TypeInfo);
    sub_2213A60(&StringLiteral_10770/*"PHOTO_CAMERA_PERMISSION_CONFIRM_DIALOG"*/);
    sub_2213A60(&StringLiteral_17473/*"android.permission.CAMERA"*/);
    this = (WebCamTexturePlayer__CameraPermissionCheckRoutine_d__4_o *)sub_2213A60(&StringLiteral_1/*""*/);
    byte_59729B7 = 1;
  }
  _1__state = v8->fields.__1__state;
  _4__this = v8->fields.__4__this;
  if ( _1__state == 1 )
  {
    v8->fields.__1__state = -1;
    goto LABEL_11;
  }
  if ( !_1__state )
  {
    v8->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_28;
    this = (WebCamTexturePlayer__CameraPermissionCheckRoutine_d__4_o *)WebCamTexturePlayer__get_IsCameraPermissionGranted(
                                                                         (WebCamTexturePlayer_o *)this,
                                                                         method);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
LABEL_15:
      if ( WebCamTexturePlayer__get_IsCameraPermissionGranted((WebCamTexturePlayer_o *)this, method) )
      {
        ActionExtensions__Call(v8->fields.successCallback, 0);
        return 0;
      }
      ActionExtensions__Call(v8->fields.cancelCallback, 0);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v29);
      this = (WebCamTexturePlayer__CameraPermissionCheckRoutine_d__4_o *)LocalizationManager__Get(
                                                                           (System_String_o *)StringLiteral_10770/*"PHOTO_CAMERA_PERMISSION_CONFIRM_DIALOG"*/,
                                                                           0);
      v31 = this;
      v32 = WebCamTexturePlayer___c_TypeInfo;
      if ( !*(&WebCamTexturePlayer___c_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(WebCamTexturePlayer___c_TypeInfo, method);
        v32 = WebCamTexturePlayer___c_TypeInfo;
      }
      static_fields = v32->static_fields;
      _9__4_0 = static_fields->__9__4_0;
      v35 = (System_String_o *)StringLiteral_1/*""*/;
      if ( !_9__4_0 )
      {
        if ( !*(&v32->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(v32, method);
          static_fields = WebCamTexturePlayer___c_TypeInfo->static_fields;
        }
        v36 = (Il2CppObject *)static_fields->__9;
        _9__4_0 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
        System_Action___ctor(_9__4_0, v36, Method_WebCamTexturePlayer___c__CameraPermissionCheckRoutine_b__4_0__, 0);
        v37 = WebCamTexturePlayer___c_TypeInfo->static_fields;
        v37->__9__4_0 = _9__4_0;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)&v37->__9__4_0, (int32_t)_9__4_0, v38, v39, v40, v41, v42, v43);
      }
      if ( Instance )
      {
        CommonUI__OpenNotificationDialog(
          (CommonUI_o *)Instance,
          v35,
          (System_String_o *)v31,
          _9__4_0,
          -1,
          0,
          0,
          0,
          0,
          0,
          0,
          0,
          0,
          0.0,
          0,
          0);
        return 0;
      }
LABEL_28:
      sub_2213CDC(this, method);
    }
    v11 = (Il2CppObject *)sub_2213CCC(WebCamTexturePlayer___c__DisplayClass4_0_TypeInfo);
    System_Object___ctor(v11, 0);
    v8->fields.__8__1 = (struct WebCamTexturePlayer___c__DisplayClass4_0_o *)v11;
    p__8__1 = (Il2CppObject **)&v8->fields.__8__1;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v8->fields.__8__1, (int32_t)v11, v13, v14, v15, v16, v17, v18);
    if ( !v8->fields.__8__1 )
      goto LABEL_28;
    v8->fields.__8__1->fields.isWaiting = 1;
    v19 = (UnityEngine_Android_PermissionCallbacks_o *)sub_2213CCC(UnityEngine_Android_PermissionCallbacks_TypeInfo);
    UnityEngine_Android_PermissionCallbacks___ctor(v19, 0);
    v20 = *p__8__1;
    v21 = (System_Action_object__o *)sub_2213CCC(System_Action_string__TypeInfo);
    System_Action_object____ctor(
      v21,
      v20,
      Method_WebCamTexturePlayer___c__DisplayClass4_0__CameraPermissionCheckRoutine_b__1__,
      0);
    if ( !v19 )
      goto LABEL_28;
    UnityEngine_Android_PermissionCallbacks__add_PermissionGranted(v19, (System_Action_string__o *)v21, 0);
    v22 = *p__8__1;
    v23 = (System_Action_object__o *)sub_2213CCC(System_Action_string__TypeInfo);
    System_Action_object____ctor(
      v23,
      v22,
      Method_WebCamTexturePlayer___c__DisplayClass4_0__CameraPermissionCheckRoutine_b__2__,
      0);
    UnityEngine_Android_PermissionCallbacks__add_PermissionDenied(v19, (System_Action_string__o *)v23, 0);
    v24 = *p__8__1;
    v25 = (System_Action_object__o *)sub_2213CCC(System_Action_string__TypeInfo);
    System_Action_object____ctor(
      v25,
      v24,
      Method_WebCamTexturePlayer___c__DisplayClass4_0__CameraPermissionCheckRoutine_b__3__,
      0);
    UnityEngine_Android_PermissionCallbacks__add_PermissionDeniedAndDontAskAgain(v19, (System_Action_string__o *)v25, 0);
    UnityEngine_Android_Permission__RequestUserPermission((System_String_o *)StringLiteral_17473/*"android.permission.CAMERA"*/, v19, 0);
LABEL_11:
    this = (WebCamTexturePlayer__CameraPermissionCheckRoutine_d__4_o *)&v8->fields.__8__1;
    _8__1 = v8->fields.__8__1;
    if ( !_8__1 )
      goto LABEL_28;
    if ( _8__1->fields.isWaiting )
    {
      v8->fields.__2__current = 0;
      p__2__current = (MissionNaviTransitionBoardItem_o *)&v8->fields.__2__current;
      sub_2213A04(p__2__current, 0, v2, v3, v4, v5, v6, v7);
      result = 1;
      p__2__current[-1].fields._BoardType_k__BackingField = 1;
      return result;
    }
    this->klass = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)this, 0, v2, v3, v4, v5, v6, v7);
    if ( !_4__this )
      goto LABEL_28;
    goto LABEL_15;
  }
  return 0;
}


Il2CppObject *WebCamTexturePlayer__CameraPermissionCheckRoutine_d__4__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        WebCamTexturePlayer__CameraPermissionCheckRoutine_d__4_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn WebCamTexturePlayer__CameraPermissionCheckRoutine_d__4__System_Collections_IEnumerator_Reset(
        WebCamTexturePlayer__CameraPermissionCheckRoutine_d__4_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_2213A74(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_2213CCC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_2213A74(&Method_WebCamTexturePlayer__CameraPermissionCheckRoutine_d__4_System_Collections_IEnumerator_Reset__);
  sub_2213BA0(v3, v4);
}


Il2CppObject *WebCamTexturePlayer__CameraPermissionCheckRoutine_d__4__System_Collections_IEnumerator_get_Current(
        WebCamTexturePlayer__CameraPermissionCheckRoutine_d__4_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void WebCamTexturePlayer__CameraPermissionCheckRoutine_d__4__System_IDisposable_Dispose(
        WebCamTexturePlayer__CameraPermissionCheckRoutine_d__4_o *this,
        const MethodInfo *method)
{
  ;
}


void WebCamTexturePlayer___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_59729B6 & 1) == 0 )
  {
    sub_2213A60(&WebCamTexturePlayer___c_TypeInfo);
    byte_59729B6 = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(WebCamTexturePlayer___c_TypeInfo);
  System_Object___ctor(v1, 0);
  WebCamTexturePlayer___c_TypeInfo->static_fields->__9 = (struct WebCamTexturePlayer___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)WebCamTexturePlayer___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void WebCamTexturePlayer___c___ctor(WebCamTexturePlayer___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void WebCamTexturePlayer___c___CameraPermissionCheckRoutine_b__4_0(
        WebCamTexturePlayer___c_o *this,
        const MethodInfo *method)
{
  ;
}


void WebCamTexturePlayer___c__DisplayClass4_0___ctor(
        WebCamTexturePlayer___c__DisplayClass4_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void WebCamTexturePlayer___c__DisplayClass4_0___CameraPermissionCheckRoutine_b__1(
        WebCamTexturePlayer___c__DisplayClass4_0_o *this,
        System_String_o *_,
        const MethodInfo *method)
{
  this->fields.isWaiting = 0;
}


void WebCamTexturePlayer___c__DisplayClass4_0___CameraPermissionCheckRoutine_b__2(
        WebCamTexturePlayer___c__DisplayClass4_0_o *this,
        System_String_o *_,
        const MethodInfo *method)
{
  this->fields.isWaiting = 0;
}


void WebCamTexturePlayer___c__DisplayClass4_0___CameraPermissionCheckRoutine_b__3(
        WebCamTexturePlayer___c__DisplayClass4_0_o *this,
        System_String_o *_,
        const MethodInfo *method)
{
  this->fields.isWaiting = 0;
}