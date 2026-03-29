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
  System_Collections_IEnumerator_o *v5; // x1

  v5 = WebCamTexturePlayer__CameraPermissionCheckRoutine(this, cancelCallback, successCallback, method);
  UnityEngine_MonoBehaviour__StartCoroutine_72105100((UnityEngine_MonoBehaviour_o *)this, v5, 0);
}


System_Collections_IEnumerator_o *WebCamTexturePlayer__CameraPermissionCheckRoutine(
        WebCamTexturePlayer_o *this,
        System_Action_o *cancelCallback,
        System_Action_o *successCallback,
        const MethodInfo *method)
{
  __int64 v7; // x22
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7

  if ( (byte_4D32ABB & 1) == 0 )
  {
    sub_1C93AD4(&WebCamTexturePlayer__CameraPermissionCheckRoutine_d__13_TypeInfo);
    byte_4D32ABB = 1;
  }
  v7 = sub_1C93D20(WebCamTexturePlayer__CameraPermissionCheckRoutine_d__13_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  *(_DWORD *)(v7 + 16) = 0;
  *(_QWORD *)(v7 + 32) = this;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v7 + 32), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v7 + 48) = cancelCallback;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v7 + 48), (int32_t)cancelCallback, v14, v15, v16, v17, v18, v19);
  *(_QWORD *)(v7 + 56) = successCallback;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v7 + 56), (int32_t)successCallback, v20, v21, v22, v23, v24, v25);
  return (System_Collections_IEnumerator_o *)v7;
}


void WebCamTexturePlayer__Init(WebCamTexturePlayer_o *this, UITexture_o *displayTexture, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v6; // x1
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  struct UnityEngine_Transform_o *transform; // x0
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 1, 0),
        this->fields.cameraDisplayTexture = displayTexture,
        sub_1C93A78(
          (GrandQuestFolderBoardItem_o *)&this->fields.cameraDisplayTexture,
          (int32_t)displayTexture,
          v7,
          v8,
          v9,
          v10,
          v11,
          v12),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.cameraDisplayTexture) == 0) )
  {
    sub_1C93D2C(gameObject, v6);
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0);
  this->fields.cameraDisplayTextureTransform = transform;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.cameraDisplayTextureTransform,
    (int32_t)transform,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
}


void WebCamTexturePlayer__OnDestroy(WebCamTexturePlayer_o *this, const MethodInfo *method)
{
  struct UnityEngine_WebCamTexture_o **p_webCamTexture; // x20
  UnityEngine_Object_o *webCamTexture; // x21
  __int64 v5; // x1
  UnityEngine_WebCamTexture_o *v6; // x0
  UnityEngine_Object_o *v7; // x21
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  struct UITexture_o **p_cameraDisplayTexture; // x20
  UnityEngine_Object_o *cameraDisplayTexture; // x21
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7

  if ( (byte_4D32AC0 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D32AC0 = 1;
  }
  p_webCamTexture = &this->fields.webCamTexture;
  webCamTexture = (UnityEngine_Object_o *)this->fields.webCamTexture;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(webCamTexture, 0, 0) )
  {
    v6 = *p_webCamTexture;
    if ( !*p_webCamTexture )
      goto LABEL_16;
    UnityEngine_WebCamTexture__Stop(v6, 0);
    v7 = (UnityEngine_Object_o *)*p_webCamTexture;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_72119908(v7, 0);
    *p_webCamTexture = 0;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.webCamTexture, 0, v8, v9, v10, v11, v12, v13);
  }
  p_cameraDisplayTexture = &this->fields.cameraDisplayTexture;
  cameraDisplayTexture = (UnityEngine_Object_o *)this->fields.cameraDisplayTexture;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(cameraDisplayTexture, 0, 0) )
  {
    v6 = (UnityEngine_WebCamTexture_o *)*p_cameraDisplayTexture;
    if ( *p_cameraDisplayTexture )
    {
      (*(void (__fastcall **)(UnityEngine_WebCamTexture_o *, _QWORD, _QWORD))&v6->klass[1]._2.thread_static_fields_offset)(
        v6,
        0,
        *(_QWORD *)&v6->klass[1]._2.token);
      *p_cameraDisplayTexture = 0;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.cameraDisplayTexture, 0, v22, v23, v24, v25, v26, v27);
      goto LABEL_15;
    }
LABEL_16:
    sub_1C93D2C(v6, v5);
  }
LABEL_15:
  this->fields.playCameraCoroutine = 0;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.playCameraCoroutine, 0, v16, v17, v18, v19, v20, v21);
}


void WebCamTexturePlayer__PlayCamera(
        WebCamTexturePlayer_o *this,
        System_Action_o *cancelCallback,
        System_Action_o *successCallback,
        const MethodInfo *method)
{
  UnityEngine_Object_o *webCamTexture; // x22
  _BOOL8 isPlaying; // x0
  const MethodInfo *v9; // x1
  UnityEngine_WebCamTexture_o *v10; // x0
  UnityEngine_Object_o *cameraDisplayTexture; // x22
  const MethodInfo *v12; // x3
  System_Collections_IEnumerator_o *v13; // x0
  struct UnityEngine_Coroutine_o *started; // x0
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7

  if ( (byte_4D32ABC & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D32ABC = 1;
  }
  webCamTexture = (UnityEngine_Object_o *)this->fields.webCamTexture;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  isPlaying = UnityEngine_Object__op_Inequality(webCamTexture, 0, 0);
  if ( isPlaying )
  {
    v10 = this->fields.webCamTexture;
    if ( !v10 )
      sub_1C93D2C(0, v9);
    isPlaying = UnityEngine_WebCamTexture__get_isPlaying(v10, 0);
    if ( isPlaying )
      goto LABEL_12;
  }
  if ( !WebCamTexturePlayer__get_IsCameraPermissionGranted((WebCamTexturePlayer_o *)isPlaying, v9) )
    goto LABEL_12;
  cameraDisplayTexture = (UnityEngine_Object_o *)this->fields.cameraDisplayTexture;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(cameraDisplayTexture, 0, 0) )
  {
LABEL_12:
    ActionExtensions__Call(cancelCallback, 0);
  }
  else
  {
    v13 = WebCamTexturePlayer__PlayCameraRoutine(this, cancelCallback, successCallback, v12);
    started = UnityEngine_MonoBehaviour__StartCoroutine_72105100((UnityEngine_MonoBehaviour_o *)this, v13, 0);
    this->fields.playCameraCoroutine = started;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&this->fields.playCameraCoroutine,
      (int32_t)started,
      v15,
      v16,
      v17,
      v18,
      v19,
      v20);
  }
}


System_Collections_IEnumerator_o *WebCamTexturePlayer__PlayCameraRoutine(
        WebCamTexturePlayer_o *this,
        System_Action_o *cancelCallback,
        System_Action_o *successCallback,
        const MethodInfo *method)
{
  __int64 v7; // x22
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7

  if ( (byte_4D32ABD & 1) == 0 )
  {
    sub_1C93AD4(&WebCamTexturePlayer__PlayCameraRoutine_d__15_TypeInfo);
    byte_4D32ABD = 1;
  }
  v7 = sub_1C93D20(WebCamTexturePlayer__PlayCameraRoutine_d__15_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  *(_DWORD *)(v7 + 16) = 0;
  *(_QWORD *)(v7 + 32) = this;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v7 + 32), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v7 + 40) = cancelCallback;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v7 + 40), (int32_t)cancelCallback, v14, v15, v16, v17, v18, v19);
  *(_QWORD *)(v7 + 48) = successCallback;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v7 + 48), (int32_t)successCallback, v20, v21, v22, v23, v24, v25);
  return (System_Collections_IEnumerator_o *)v7;
}


void WebCamTexturePlayer__StopCamera(WebCamTexturePlayer_o *this, const MethodInfo *method)
{
  UnityEngine_Coroutine_o *playCameraCoroutine; // x1
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7
  UnityEngine_Object_o *webCamTexture; // x20
  __int64 v11; // x1
  __int64 gameObject; // x0
  UnityEngine_Object_o *cameraDisplayTexture; // x20
  UnityEngine_Object_o *cameraDisplayTextureTransform; // x20
  UnityEngine_Transform_o *v15; // x20
  UnityEngine_Transform_o *v16; // x20

  if ( (byte_4D32ABF & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D32ABF = 1;
  }
  playCameraCoroutine = this->fields.playCameraCoroutine;
  if ( playCameraCoroutine )
  {
    UnityEngine_MonoBehaviour__StopCoroutine_72105720((UnityEngine_MonoBehaviour_o *)this, playCameraCoroutine, 0);
    this->fields.playCameraCoroutine = 0;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.playCameraCoroutine, 0, v4, v5, v6, v7, v8, v9);
  }
  webCamTexture = (UnityEngine_Object_o *)this->fields.webCamTexture;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(webCamTexture, 0, 0) )
  {
    gameObject = (__int64)this->fields.webCamTexture;
    if ( !gameObject )
      goto LABEL_26;
    UnityEngine_WebCamTexture__Stop((UnityEngine_WebCamTexture_o *)gameObject, 0);
  }
  cameraDisplayTexture = (UnityEngine_Object_o *)this->fields.cameraDisplayTexture;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(cameraDisplayTexture, 0, 0) )
  {
    cameraDisplayTextureTransform = (UnityEngine_Object_o *)this->fields.cameraDisplayTextureTransform;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    gameObject = UnityEngine_Object__op_Inequality(cameraDisplayTextureTransform, 0, 0);
    if ( (gameObject & 1) != 0 )
    {
      v15 = this->fields.cameraDisplayTextureTransform;
      if ( !byte_4D2A139 )
      {
        gameObject = sub_1C93AD4(&UnityEngine_Vector3_TypeInfo);
        byte_4D2A139 = 1;
      }
      if ( v15 )
      {
        UnityEngine_Transform__set_localEulerAngles(v15, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
        v16 = this->fields.cameraDisplayTextureTransform;
        if ( !byte_4D2A13E )
        {
          gameObject = sub_1C93AD4(&UnityEngine_Vector3_TypeInfo);
          byte_4D2A13E = 1;
        }
        if ( v16 )
        {
          UnityEngine_Transform__set_localScale(v16, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
          gameObject = (__int64)this->fields.cameraDisplayTexture;
          if ( gameObject )
          {
            gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
            if ( gameObject )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
              return;
            }
          }
        }
      }
LABEL_26:
      sub_1C93D2C(gameObject, v11);
    }
  }
}


void WebCamTexturePlayer__Update(WebCamTexturePlayer_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *webCamTexture; // x20
  __int64 v4; // x1
  UnityEngine_WebCamTexture_o *v5; // x0
  UnityEngine_Object_o *cameraDisplayTextureTransform; // x20
  const MethodInfo *v7; // x1

  if ( (byte_4D32ABE & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D32ABE = 1;
  }
  webCamTexture = (UnityEngine_Object_o *)this->fields.webCamTexture;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(webCamTexture, 0, 0) )
  {
    v5 = this->fields.webCamTexture;
    if ( !v5 )
      goto LABEL_15;
    if ( !UnityEngine_WebCamTexture__get_isPlaying(v5, 0) )
      return;
    v5 = this->fields.webCamTexture;
    if ( !v5 )
LABEL_15:
      sub_1C93D2C(v5, v4);
    if ( ((int (__fastcall *)(UnityEngine_WebCamTexture_o *, const MethodInfo *))v5->klass->vtable._4_get_width.methodPtr)(
           v5,
           v5->klass->vtable._4_get_width.method) >= 100 )
    {
      cameraDisplayTextureTransform = (UnityEngine_Object_o *)this->fields.cameraDisplayTextureTransform;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Equality(cameraDisplayTextureTransform, 0, 0) )
        WebCamTexturePlayer__UpdateDisplayLayout(this, v7);
    }
  }
}


void WebCamTexturePlayer__UpdateDisplayLayout(WebCamTexturePlayer_o *this, const MethodInfo *method)
{
  UnityEngine_WebCamTexture_o *webCamTexture; // x0
  UnityEngine_Transform_o *cameraDisplayTextureTransform; // x20
  UnityEngine_Transform_o *v5; // x8
  UnityEngine_Vector3_o v7; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v8; // 0:s0.4,4:s1.4,8:s2.4

  webCamTexture = this->fields.webCamTexture;
  if ( !webCamTexture )
    goto LABEL_8;
  cameraDisplayTextureTransform = this->fields.cameraDisplayTextureTransform;
  webCamTexture = (UnityEngine_WebCamTexture_o *)UnityEngine_WebCamTexture__get_videoRotationAngle(webCamTexture, 0);
  if ( !cameraDisplayTextureTransform
    || (v7.fields.z = (float)-(int)webCamTexture,
        v7.fields.x = 0.0,
        v7.fields.y = 0.0,
        UnityEngine_Transform__set_localEulerAngles(cameraDisplayTextureTransform, v7, 0),
        (webCamTexture = this->fields.webCamTexture) == 0)
    || (webCamTexture = (UnityEngine_WebCamTexture_o *)UnityEngine_WebCamTexture__get_videoVerticallyMirrored(
                                                         webCamTexture,
                                                         0),
        (v5 = this->fields.cameraDisplayTextureTransform) == 0) )
  {
LABEL_8:
    sub_1C93D2C(webCamTexture, method);
  }
  v8.fields.y = 1.0;
  v8.fields.x = 1.0;
  if ( ((unsigned __int8)webCamTexture & 1) != 0 )
    v8.fields.y = -1.0;
  v8.fields.z = 1.0;
  UnityEngine_Transform__set_localScale(v5, v8, 0);
}


bool WebCamTexturePlayer__get_IsCameraPermissionGranted(WebCamTexturePlayer_o *this, const MethodInfo *method)
{
  if ( (byte_4D32ABA & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_16886/*"android.permission.CAMERA"*/);
    byte_4D32ABA = 1;
  }
  return UnityEngine_Android_Permission__HasUserAuthorizedPermission((System_String_o *)StringLiteral_16886/*"android.permission.CAMERA"*/, 0);
}


void WebCamTexturePlayer__CameraPermissionCheckRoutine_d__13___ctor(
        WebCamTexturePlayer__CameraPermissionCheckRoutine_d__13_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool WebCamTexturePlayer__CameraPermissionCheckRoutine_d__13__MoveNext(
        WebCamTexturePlayer__CameraPermissionCheckRoutine_d__13_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  WebCamTexturePlayer__CameraPermissionCheckRoutine_d__13_o *v8; // x19
  int32_t _1__state; // w8
  struct WebCamTexturePlayer_o *_4__this; // x24
  Il2CppObject *v11; // x20
  Il2CppObject **p__8__1; // x21
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  UnityEngine_Android_PermissionCallbacks_o *v19; // x20
  Il2CppObject *v20; // x23
  System_Action_object__o *v21; // x22
  Il2CppObject *v22; // x22
  System_Action_object__o *v23; // x23
  Il2CppObject *v24; // x21
  System_Action_object__o *v25; // x22
  struct WebCamTexturePlayer___c__DisplayClass13_0_o *_8__1; // x8
  GrandQuestFolderBoardItem_o *p__2__current; // x19
  Il2CppObject *Instance; // x19
  WebCamTexturePlayer__CameraPermissionCheckRoutine_d__13_o *v30; // x20
  WebCamTexturePlayer___c_c *v31; // x8
  System_Action_o *_9__13_0; // x22
  System_String_o *v33; // x21
  Il2CppObject *v34; // x23
  struct WebCamTexturePlayer___c_StaticFields *static_fields; // x0
  int32_t v36; // w2
  int32_t v37; // w3
  System_String_o *v38; // x4
  int32_t v39; // w5
  int64_t v40; // x6
  System_String_o *v41; // x7

  v8 = this;
  if ( (byte_4D32AC2 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_string__TypeInfo);
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&UnityEngine_Android_PermissionCallbacks_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C93AD4(&Method_WebCamTexturePlayer___c__CameraPermissionCheckRoutine_b__13_0__);
    sub_1C93AD4(&Method_WebCamTexturePlayer___c__DisplayClass13_0__CameraPermissionCheckRoutine_b__1__);
    sub_1C93AD4(&Method_WebCamTexturePlayer___c__DisplayClass13_0__CameraPermissionCheckRoutine_b__2__);
    sub_1C93AD4(&Method_WebCamTexturePlayer___c__DisplayClass13_0__CameraPermissionCheckRoutine_b__3__);
    sub_1C93AD4(&WebCamTexturePlayer___c__DisplayClass13_0_TypeInfo);
    sub_1C93AD4(&WebCamTexturePlayer___c_TypeInfo);
    sub_1C93AD4(&StringLiteral_10419/*"PHOTO_CAMERA_PERMISSION_CONFIRM_DIALOG"*/);
    sub_1C93AD4(&StringLiteral_16886/*"android.permission.CAMERA"*/);
    this = (WebCamTexturePlayer__CameraPermissionCheckRoutine_d__13_o *)sub_1C93AD4(&StringLiteral_1/*""*/);
    byte_4D32AC2 = 1;
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
    this = (WebCamTexturePlayer__CameraPermissionCheckRoutine_d__13_o *)WebCamTexturePlayer__get_IsCameraPermissionGranted(
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
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      this = (WebCamTexturePlayer__CameraPermissionCheckRoutine_d__13_o *)LocalizationManager__Get(
                                                                            (System_String_o *)StringLiteral_10419/*"PHOTO_CAMERA_PERMISSION_CONFIRM_DIALOG"*/,
                                                                            0);
      v30 = this;
      v31 = WebCamTexturePlayer___c_TypeInfo;
      if ( !WebCamTexturePlayer___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WebCamTexturePlayer___c_TypeInfo);
        v31 = WebCamTexturePlayer___c_TypeInfo;
      }
      _9__13_0 = v31->static_fields->__9__13_0;
      v33 = (System_String_o *)StringLiteral_1/*""*/;
      if ( !_9__13_0 )
      {
        if ( !v31->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v31);
          v31 = WebCamTexturePlayer___c_TypeInfo;
        }
        v34 = (Il2CppObject *)v31->static_fields->__9;
        _9__13_0 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
        System_Action___ctor(_9__13_0, v34, Method_WebCamTexturePlayer___c__CameraPermissionCheckRoutine_b__13_0__, 0);
        static_fields = WebCamTexturePlayer___c_TypeInfo->static_fields;
        static_fields->__9__13_0 = _9__13_0;
        sub_1C93A78(
          (GrandQuestFolderBoardItem_o *)&static_fields->__9__13_0,
          (int32_t)_9__13_0,
          v36,
          v37,
          v38,
          v39,
          v40,
          v41);
      }
      if ( Instance )
      {
        CommonUI__OpenNotificationDialog(
          (CommonUI_o *)Instance,
          v33,
          (System_String_o *)v30,
          _9__13_0,
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
      sub_1C93D2C(this, method);
    }
    v11 = (Il2CppObject *)sub_1C93D20(WebCamTexturePlayer___c__DisplayClass13_0_TypeInfo);
    System_Object___ctor(v11, 0);
    v8->fields.__8__1 = (struct WebCamTexturePlayer___c__DisplayClass13_0_o *)v11;
    p__8__1 = (Il2CppObject **)&v8->fields.__8__1;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&v8->fields.__8__1, (int32_t)v11, v13, v14, v15, v16, v17, v18);
    if ( !v8->fields.__8__1 )
      goto LABEL_28;
    v8->fields.__8__1->fields.isWaiting = 1;
    v19 = (UnityEngine_Android_PermissionCallbacks_o *)sub_1C93D20(UnityEngine_Android_PermissionCallbacks_TypeInfo);
    UnityEngine_Android_PermissionCallbacks___ctor(v19, 0);
    v20 = *p__8__1;
    v21 = (System_Action_object__o *)sub_1C93D20(System_Action_string__TypeInfo);
    System_Action_object____ctor(
      v21,
      v20,
      Method_WebCamTexturePlayer___c__DisplayClass13_0__CameraPermissionCheckRoutine_b__1__,
      0);
    if ( !v19 )
      goto LABEL_28;
    UnityEngine_Android_PermissionCallbacks__add_PermissionGranted(v19, (System_Action_string__o *)v21, 0);
    v22 = *p__8__1;
    v23 = (System_Action_object__o *)sub_1C93D20(System_Action_string__TypeInfo);
    System_Action_object____ctor(
      v23,
      v22,
      Method_WebCamTexturePlayer___c__DisplayClass13_0__CameraPermissionCheckRoutine_b__2__,
      0);
    UnityEngine_Android_PermissionCallbacks__add_PermissionDenied(v19, (System_Action_string__o *)v23, 0);
    v24 = *p__8__1;
    v25 = (System_Action_object__o *)sub_1C93D20(System_Action_string__TypeInfo);
    System_Action_object____ctor(
      v25,
      v24,
      Method_WebCamTexturePlayer___c__DisplayClass13_0__CameraPermissionCheckRoutine_b__3__,
      0);
    UnityEngine_Android_PermissionCallbacks__add_PermissionDeniedAndDontAskAgain(v19, (System_Action_string__o *)v25, 0);
    UnityEngine_Android_Permission__RequestUserPermission((System_String_o *)StringLiteral_16886/*"android.permission.CAMERA"*/, v19, 0);
LABEL_11:
    this = (WebCamTexturePlayer__CameraPermissionCheckRoutine_d__13_o *)&v8->fields.__8__1;
    _8__1 = v8->fields.__8__1;
    if ( !_8__1 )
      goto LABEL_28;
    if ( _8__1->fields.isWaiting )
    {
      v8->fields.__2__current = 0;
      p__2__current = (GrandQuestFolderBoardItem_o *)&v8->fields.__2__current;
      sub_1C93A78(p__2__current, 0, v2, v3, v4, v5, v6, v7);
      LODWORD(p__2__current[-1].fields._ClosedMessage_k__BackingField) = 1;
      return 1;
    }
    this->klass = 0;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)this, 0, v2, v3, v4, v5, v6, v7);
    if ( !_4__this )
      goto LABEL_28;
    goto LABEL_15;
  }
  return 0;
}


Il2CppObject *WebCamTexturePlayer__CameraPermissionCheckRoutine_d__13__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        WebCamTexturePlayer__CameraPermissionCheckRoutine_d__13_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn WebCamTexturePlayer__CameraPermissionCheckRoutine_d__13__System_Collections_IEnumerator_Reset(
        WebCamTexturePlayer__CameraPermissionCheckRoutine_d__13_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C93AE8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C93D20(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C93AE8(&Method_WebCamTexturePlayer__CameraPermissionCheckRoutine_d__13_System_Collections_IEnumerator_Reset__);
  sub_1C93BFC(v3, v4);
}


Il2CppObject *WebCamTexturePlayer__CameraPermissionCheckRoutine_d__13__System_Collections_IEnumerator_get_Current(
        WebCamTexturePlayer__CameraPermissionCheckRoutine_d__13_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void WebCamTexturePlayer__CameraPermissionCheckRoutine_d__13__System_IDisposable_Dispose(
        WebCamTexturePlayer__CameraPermissionCheckRoutine_d__13_o *this,
        const MethodInfo *method)
{
  ;
}


void WebCamTexturePlayer__PlayCameraRoutine_d__15___ctor(
        WebCamTexturePlayer__PlayCameraRoutine_d__15_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool WebCamTexturePlayer__PlayCameraRoutine_d__15__MoveNext(
        WebCamTexturePlayer__PlayCameraRoutine_d__15_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  WebCamTexturePlayer__PlayCameraRoutine_d__15_o *v8; // x19
  int32_t _1__state; // w8
  struct WebCamTexturePlayer_o *_4__this; // x23
  WebCamTexturePlayer__PlayCameraRoutine_d__15_o **p_webCamTexture; // x20
  UnityEngine_Object_o *webCamTexture; // x21
  UnityEngine_WebCamDevice_array *devices; // x21
  System_Action_o *successCallback; // x0
  int i_5__2; // w8
  System_String_o *name; // x21
  UnityEngine_WebCamTexture_o *v18; // x22
  int32_t v19; // w2
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7
  GrandQuestFolderBoardItem_o *p__2__current; // x19
  GrandQuestFolderBoardItem_o *v26; // x19

  v8 = this;
  if ( (byte_4D32AC3 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    this = (WebCamTexturePlayer__PlayCameraRoutine_d__15_o *)sub_1C93AD4(&UnityEngine_WebCamTexture_TypeInfo);
    byte_4D32AC3 = 1;
  }
  _1__state = v8->fields.__1__state;
  if ( _1__state == 2 )
  {
    i_5__2 = v8->fields._i_5__2;
    v8->fields.__1__state = -1;
    v8->fields._i_5__2 = ++i_5__2;
    if ( i_5__2 >= 10 )
    {
      successCallback = v8->fields.successCallback;
      goto LABEL_14;
    }
    goto LABEL_30;
  }
  _4__this = v8->fields.__4__this;
  if ( _1__state == 1 )
  {
    v8->fields.__1__state = -1;
    if ( _4__this )
      goto LABEL_26;
    goto LABEL_31;
  }
  if ( _1__state )
    return 0;
  v8->fields.__1__state = -1;
  if ( !_4__this )
    goto LABEL_31;
  p_webCamTexture = (WebCamTexturePlayer__PlayCameraRoutine_d__15_o **)&_4__this->fields.webCamTexture;
  webCamTexture = (UnityEngine_Object_o *)_4__this->fields.webCamTexture;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(webCamTexture, 0, 0) )
  {
    devices = UnityEngine_WebCamTexture__get_devices(0);
    this = (WebCamTexturePlayer__PlayCameraRoutine_d__15_o *)BasicHelper__IsNullOrEmpty(
                                                               (System_Collections_ICollection_o *)devices,
                                                               0);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      successCallback = v8->fields.cancelCallback;
LABEL_14:
      ActionExtensions__Call(successCallback, 0);
      return 0;
    }
    if ( devices )
    {
      if ( !LODWORD(devices->max_length) )
        sub_1C93D34(this);
      name = UnityEngine_WebCamDevice__get_name(devices->m_Items, 0);
      v18 = (UnityEngine_WebCamTexture_o *)sub_1C93D20(UnityEngine_WebCamTexture_TypeInfo);
      UnityEngine_WebCamTexture___ctor(v18, name, 1920, 1080, 30, 0);
      *p_webCamTexture = (WebCamTexturePlayer__PlayCameraRoutine_d__15_o *)v18;
      sub_1C93A78(
        (GrandQuestFolderBoardItem_o *)&_4__this->fields.webCamTexture,
        (int32_t)v18,
        v19,
        v20,
        v21,
        v22,
        v23,
        v24);
      goto LABEL_21;
    }
LABEL_31:
    sub_1C93D2C(this, method);
  }
LABEL_21:
  this = (WebCamTexturePlayer__PlayCameraRoutine_d__15_o *)_4__this->fields.cameraDisplayTexture;
  if ( !this )
    goto LABEL_31;
  this = (WebCamTexturePlayer__PlayCameraRoutine_d__15_o *)UnityEngine_Component__get_gameObject(
                                                             (UnityEngine_Component_o *)this,
                                                             0);
  if ( !this )
    goto LABEL_31;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
  this = (WebCamTexturePlayer__PlayCameraRoutine_d__15_o *)_4__this->fields.cameraDisplayTexture;
  if ( !this )
    goto LABEL_31;
  (*(void (__fastcall **)(WebCamTexturePlayer__PlayCameraRoutine_d__15_o *, WebCamTexturePlayer__PlayCameraRoutine_d__15_o *, _QWORD))&this->klass[1]._2.field_count)(
    this,
    *p_webCamTexture,
    *(_QWORD *)&this->klass[1]._2.interfaces_count);
  this = *p_webCamTexture;
  if ( !*p_webCamTexture )
    goto LABEL_31;
  UnityEngine_WebCamTexture__Play((UnityEngine_WebCamTexture_o *)this, 0);
LABEL_26:
  this = (WebCamTexturePlayer__PlayCameraRoutine_d__15_o *)_4__this->fields.webCamTexture;
  if ( !this )
    goto LABEL_31;
  if ( ((int (__fastcall *)(WebCamTexturePlayer__PlayCameraRoutine_d__15_o *, const MethodInfo *))this->klass->vtable._4_System_Collections_Generic_IEnumerator_System_Object__get_Current.methodPtr)(
         this,
         this->klass->vtable._4_System_Collections_Generic_IEnumerator_System_Object__get_Current.method) < 100 )
  {
    v8->fields.__2__current = 0;
    p__2__current = (GrandQuestFolderBoardItem_o *)&v8->fields.__2__current;
    sub_1C93A78(p__2__current, 0, v2, v3, v4, v5, v6, v7);
    LODWORD(p__2__current[-1].fields._ClosedMessage_k__BackingField) = 1;
    return 1;
  }
  v8->fields._i_5__2 = 0;
LABEL_30:
  v8->fields.__2__current = 0;
  v26 = (GrandQuestFolderBoardItem_o *)&v8->fields.__2__current;
  sub_1C93A78(v26, 0, v2, v3, v4, v5, v6, v7);
  LODWORD(v26[-1].fields._ClosedMessage_k__BackingField) = 2;
  return 1;
}


Il2CppObject *WebCamTexturePlayer__PlayCameraRoutine_d__15__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        WebCamTexturePlayer__PlayCameraRoutine_d__15_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn WebCamTexturePlayer__PlayCameraRoutine_d__15__System_Collections_IEnumerator_Reset(
        WebCamTexturePlayer__PlayCameraRoutine_d__15_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C93AE8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C93D20(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C93AE8(&Method_WebCamTexturePlayer__PlayCameraRoutine_d__15_System_Collections_IEnumerator_Reset__);
  sub_1C93BFC(v3, v4);
}


Il2CppObject *WebCamTexturePlayer__PlayCameraRoutine_d__15__System_Collections_IEnumerator_get_Current(
        WebCamTexturePlayer__PlayCameraRoutine_d__15_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void WebCamTexturePlayer__PlayCameraRoutine_d__15__System_IDisposable_Dispose(
        WebCamTexturePlayer__PlayCameraRoutine_d__15_o *this,
        const MethodInfo *method)
{
  ;
}


void WebCamTexturePlayer___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4D32AC1 & 1) == 0 )
  {
    sub_1C93AD4(&WebCamTexturePlayer___c_TypeInfo);
    byte_4D32AC1 = 1;
  }
  v1 = (Il2CppObject *)sub_1C93D20(WebCamTexturePlayer___c_TypeInfo);
  System_Object___ctor(v1, 0);
  WebCamTexturePlayer___c_TypeInfo->static_fields->__9 = (struct WebCamTexturePlayer___c_o *)v1;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)WebCamTexturePlayer___c_TypeInfo->static_fields,
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


void WebCamTexturePlayer___c___CameraPermissionCheckRoutine_b__13_0(
        WebCamTexturePlayer___c_o *this,
        const MethodInfo *method)
{
  ;
}


void WebCamTexturePlayer___c__DisplayClass13_0___ctor(
        WebCamTexturePlayer___c__DisplayClass13_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void WebCamTexturePlayer___c__DisplayClass13_0___CameraPermissionCheckRoutine_b__1(
        WebCamTexturePlayer___c__DisplayClass13_0_o *this,
        System_String_o *_,
        const MethodInfo *method)
{
  this->fields.isWaiting = 0;
}


void WebCamTexturePlayer___c__DisplayClass13_0___CameraPermissionCheckRoutine_b__2(
        WebCamTexturePlayer___c__DisplayClass13_0_o *this,
        System_String_o *_,
        const MethodInfo *method)
{
  this->fields.isWaiting = 0;
}


void WebCamTexturePlayer___c__DisplayClass13_0___CameraPermissionCheckRoutine_b__3(
        WebCamTexturePlayer___c__DisplayClass13_0_o *this,
        System_String_o *_,
        const MethodInfo *method)
{
  this->fields.isWaiting = 0;
}