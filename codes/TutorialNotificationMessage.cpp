void TutorialNotificationMessage___ctor(TutorialNotificationMessage_o *this, const MethodInfo *method)
{
  if ( (byte_4C559CC & 1) == 0 )
  {
    sub_1C3E564(&BaseDialog_TypeInfo);
    byte_4C559CC = 1;
  }
  this->fields.messageDefaultFontSize = -1;
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void TutorialNotificationMessage__Close(TutorialNotificationMessage_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  TutorialNotificationMessage__Close_40199580(this, 0, v2);
}


void TutorialNotificationMessage__Close_40199580(
        TutorialNotificationMessage_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  System_Action_o *v6; // x20

  if ( (byte_4C559CA & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    sub_1C3E564(&Method_TutorialNotificationMessage_EndClose__);
    byte_4C559CA = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.closeCallbackFunc, (int32_t)callback, (int32_t)method, v3);
  this->fields.isButtonEnable = 0;
  v6 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_TutorialNotificationMessage_EndClose__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v6, 0);
}


void TutorialNotificationMessage__EndClose(TutorialNotificationMessage_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  CGThumbnailListItem_o *p_closeCallbackFunc; // x19
  struct System_Action_o *v8; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  TutorialNotificationMessage__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C3E7C0(0, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (CGThumbnailListItem_o *)&this->fields.closeCallbackFunc;
  v8 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0;
    sub_1C3E508(p_closeCallbackFunc, 0, v5, v6);
    ((void (__fastcall *)(intptr_t, intptr_t))v8->fields.invoke_impl)(v8->fields.method_code, v8->fields.method);
  }
}


void TutorialNotificationMessage__EndOpen(TutorialNotificationMessage_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *touchObject; // x21
  Il2CppObject *touchPrefab; // x21
  UnityEngine_GameObject_o *touchBase; // x0
  __int64 v6; // x1
  UnityEngine_GameObject_o *v7; // x21
  UnityEngine_Transform_o *transform; // x22
  float x; // s11
  float y; // s12
  float z; // s13
  float v12; // s8
  float v13; // s9
  float v14; // s10
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v19; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v20; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C559C9 & 1) == 0 )
  {
    sub_1C3E564(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C559C9 = 1;
  }
  touchObject = (UnityEngine_Object_o *)this->fields.touchObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(touchObject, 0, 0) )
  {
    touchPrefab = (Il2CppObject *)this->fields.touchPrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    touchBase = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                              touchPrefab,
                                              (const MethodInfo_3185EB4 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !touchBase )
      goto LABEL_17;
    v7 = touchBase;
    transform = UnityEngine_GameObject__get_transform(touchBase, 0);
    touchBase = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v7, 0);
    if ( !touchBase )
      goto LABEL_17;
    localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)touchBase, 0);
    x = localPosition.fields.x;
    y = localPosition.fields.y;
    z = localPosition.fields.z;
    touchBase = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v7, 0);
    if ( !touchBase
      || (localScale = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)touchBase, 0),
          (touchBase = this->fields.touchBase) == 0)
      || (v12 = localScale.fields.x,
          v13 = localScale.fields.y,
          v14 = localScale.fields.z,
          touchBase = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(touchBase, 0),
          !transform) )
    {
LABEL_17:
      sub_1C3E7C0(touchBase, v6);
    }
    UnityEngine_Transform__set_parent(transform, (UnityEngine_Transform_o *)touchBase, 0);
    v19.fields.x = x + this->fields.touchObjPos.fields.x;
    v19.fields.y = y + this->fields.touchObjPos.fields.y;
    v19.fields.z = z + this->fields.touchObjPos.fields.z;
    UnityEngine_Transform__set_localPosition(transform, v19, 0);
    if ( !byte_4C506A7 )
    {
      sub_1C3E564(&UnityEngine_Quaternion_TypeInfo);
      byte_4C506A7 = 1;
    }
    UnityEngine_Transform__set_localRotation(
      transform,
      UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion,
      0);
    v20.fields.x = v12;
    v20.fields.y = v13;
    v20.fields.z = v14;
    UnityEngine_Transform__set_localScale(transform, v20, 0);
    this->fields.touchObject = v7;
    sub_1C3E508((CGThumbnailListItem_o *)&this->fields.touchObject, (int32_t)v7, v15, v16);
  }
  this->fields.isButtonEnable = 1;
}


void TutorialNotificationMessage__EndTurorialRequest(
        TutorialNotificationMessage_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  CGThumbnailListItem_o *p_selectCallbackFunc; // x0
  struct System_Action_o *v5; // x19
  struct System_Action_o *selectCallbackFunc; // t1

  selectCallbackFunc = this->fields.selectCallbackFunc;
  p_selectCallbackFunc = (CGThumbnailListItem_o *)&this->fields.selectCallbackFunc;
  v5 = selectCallbackFunc;
  if ( selectCallbackFunc )
  {
    p_selectCallbackFunc->klass = 0;
    sub_1C3E508(p_selectCallbackFunc, 0, (int32_t)method, v3);
    ((void (__fastcall *)(intptr_t, intptr_t))v5->fields.invoke_impl)(v5->fields.method_code, v5->fields.method);
  }
}


void TutorialNotificationMessage__Init(TutorialNotificationMessage_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *messageLabel; // x20
  __int64 v4; // x1
  UILabel_o *maskSprite; // x0
  struct UnityEngine_GameObject_o **p_touchObject; // x20
  UnityEngine_Object_o *touchObject; // x21
  UnityEngine_Object_o *v8; // x21
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float z; // s1

  if ( (byte_4C559C5 & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&StringLiteral_1/*""*/);
    byte_4C559C5 = 1;
  }
  messageLabel = (UnityEngine_Object_o *)this->fields.messageLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(messageLabel, 0, 0) )
  {
    maskSprite = this->fields.messageLabel;
    if ( !maskSprite )
      goto LABEL_19;
    UILabel__set_text(maskSprite, (System_String_o *)StringLiteral_1/*""*/, 0);
  }
  p_touchObject = &this->fields.touchObject;
  touchObject = (UnityEngine_Object_o *)this->fields.touchObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(touchObject, 0, 0) )
  {
    v8 = (UnityEngine_Object_o *)*p_touchObject;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71341564(v8, 0);
    *p_touchObject = 0;
    sub_1C3E508((CGThumbnailListItem_o *)&this->fields.touchObject, 0, v9, v10);
    if ( !byte_4C506A1 )
    {
      sub_1C3E564(&UnityEngine_Vector3_TypeInfo);
      byte_4C506A1 = 1;
    }
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    z = static_fields->zeroVector.fields.z;
    *(_QWORD *)&this->fields.touchObjPos.fields.x = *(_QWORD *)&static_fields->zeroVector.fields.x;
    this->fields.touchObjPos.fields.z = z;
  }
  maskSprite = (UILabel_o *)this->fields.maskSprite;
  if ( !maskSprite
    || (((void (__fastcall *)(UILabel_o *, const MethodInfo *, float))maskSprite->klass->vtable._8_set_alpha.methodPtr)(
          maskSprite,
          maskSprite->klass->vtable._8_set_alpha.method,
          1.0),
        this->fields.isButtonEnable = 0,
        (maskSprite = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0)) == 0) )
  {
LABEL_19:
    sub_1C3E7C0(maskSprite, v4);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskSprite, 0, 0);
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


void TutorialNotificationMessage__OnClickClose(TutorialNotificationMessage_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  struct UnityEngine_GameObject_o **p_touchObject; // x20
  UnityEngine_Object_o *touchObject; // x21
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  UnityEngine_Object_o *v9; // x21
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float z; // s1
  NetworkManager_ResultCallbackFunc_o *v14; // x20
  Il2CppObject *Request_object; // x0
  __int64 v16; // x1
  CGThumbnailListItem_o *p_selectCallbackFunc; // x19
  struct System_Action_o *v18; // x20
  struct System_Action_o *selectCallbackFunc; // t1

  if ( (byte_4C559CB & 1) == 0 )
  {
    sub_1C3E564(&Method_NetworkManager_getRequest_TutorialSetRequest___);
    sub_1C3E564(&NetworkManager_TypeInfo);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1C3E564(&Method_TutorialNotificationMessage_EndTurorialRequest__);
    sub_1C3E564(&Method_TutorialNotificationMessage_OnClickClose__);
    sub_1C3E564(&StringLiteral_22400/*"ok"*/);
    byte_4C559CB = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v3 = Method_TutorialNotificationMessage_OnClickClose__;
    if ( (*((_BYTE *)Method_TutorialNotificationMessage_OnClickClose__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C3E57C(Method_TutorialNotificationMessage_OnClickClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C3E548(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    p_touchObject = &this->fields.touchObject;
    touchObject = (UnityEngine_Object_o *)this->fields.touchObject;
    this->fields.isButtonEnable = 0;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(touchObject, 0, 0) )
    {
      v9 = (UnityEngine_Object_o *)*p_touchObject;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_71341564(v9, 0);
      *p_touchObject = 0;
      sub_1C3E508((CGThumbnailListItem_o *)&this->fields.touchObject, 0, v10, v11);
      if ( !byte_4C506A1 )
      {
        sub_1C3E564(&UnityEngine_Vector3_TypeInfo);
        byte_4C506A1 = 1;
      }
      static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
      z = static_fields->zeroVector.fields.z;
      *(_QWORD *)&this->fields.touchObjPos.fields.x = *(_QWORD *)&static_fields->zeroVector.fields.x;
      this->fields.touchObjPos.fields.z = z;
    }
    if ( this->fields.flagId == -1 )
    {
      selectCallbackFunc = this->fields.selectCallbackFunc;
      p_selectCallbackFunc = (CGThumbnailListItem_o *)&this->fields.selectCallbackFunc;
      v18 = selectCallbackFunc;
      if ( selectCallbackFunc )
      {
        p_selectCallbackFunc->klass = 0;
        sub_1C3E508(p_selectCallbackFunc, 0, v7, v8);
        ((void (__fastcall *)(intptr_t, intptr_t))v18->fields.invoke_impl)(v18->fields.method_code, v18->fields.method);
      }
    }
    else
    {
      v14 = (NetworkManager_ResultCallbackFunc_o *)sub_1C3E7B0(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v14,
        (Il2CppObject *)this,
        Method_TutorialNotificationMessage_EndTurorialRequest__,
        0);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Request_object = NetworkManager__getRequest_object_(
                         v14,
                         (const MethodInfo_3184BE4 *)Method_NetworkManager_getRequest_TutorialSetRequest___);
      if ( !Request_object )
        sub_1C3E7C0(0, v16);
      TutorialSetRequest__beginRequest((TutorialSetRequest_o *)Request_object, this->fields.flagId, 0);
    }
  }
}


void TutorialNotificationMessage__Open(
        TutorialNotificationMessage_o *this,
        System_String_o *message,
        int32_t flagId,
        System_Action_o *selectCallback,
        int32_t maskType,
        UnityEngine_Vector2_o messagePos,
        int32_t fontSize,
        bool dispTouchSprite,
        const MethodInfo *method)
{
  float y; // s8
  float x; // s9
  UnityEngine_Object_o *messageLabel; // x24
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float z; // s1
  __int64 v21; // x1
  const MethodInfo *v22; // x2
  void *transform; // x0
  System_String_o *v24; // x1
  System_Action_o *v25; // x0
  intptr_t *v26; // x8
  System_Action_o *v27; // x21
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v29; // 0:s0.4,4:s1.4,8:s2.4

  y = messagePos.fields.y;
  x = messagePos.fields.x;
  if ( (byte_4C559C6 & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&Method_TutorialNotificationMessage_EndOpen__);
    sub_1C3E564(&Method_TutorialNotificationMessage__Open_b__13_0__);
    sub_1C3E564(&StringLiteral_1/*""*/);
    byte_4C559C6 = 1;
  }
  this->fields.selectCallbackFunc = selectCallback;
  sub_1C3E508(
    (CGThumbnailListItem_o *)&this->fields.selectCallbackFunc,
    (int32_t)selectCallback,
    flagId,
    (const MethodInfo *)selectCallback);
  this->fields.flagId = flagId;
  if ( !byte_4C506A1 )
  {
    sub_1C3E564(&UnityEngine_Vector3_TypeInfo);
    byte_4C506A1 = 1;
  }
  messageLabel = (UnityEngine_Object_o *)this->fields.messageLabel;
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  z = static_fields->zeroVector.fields.z;
  *(_QWORD *)&this->fields.touchObjPos.fields.x = *(_QWORD *)&static_fields->zeroVector.fields.x;
  this->fields.touchObjPos.fields.z = z;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(messageLabel, 0, 0) )
  {
    transform = this->fields.messageLabel;
    if ( this->fields.messageDefaultFontSize < 0 )
    {
      if ( !transform )
        goto LABEL_30;
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0);
      if ( !transform )
        goto LABEL_30;
      localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)transform, 0);
      transform = this->fields.messageLabel;
      this->fields.messageDefaultPosition.fields.x = localPosition.fields.x;
      this->fields.messageDefaultPosition.fields.y = localPosition.fields.y;
      if ( !transform )
        goto LABEL_30;
      this->fields.messageDefaultFontSize = *((_DWORD *)transform + 106);
    }
    else if ( !transform )
    {
      goto LABEL_30;
    }
    if ( message )
      v24 = message;
    else
      v24 = (System_String_o *)StringLiteral_1/*""*/;
    UILabel__set_text((UILabel_o *)transform, v24, 0);
    transform = this->fields.messageLabel;
    if ( fontSize < 1 )
    {
      if ( !transform )
        goto LABEL_30;
      fontSize = this->fields.messageDefaultFontSize;
    }
    else if ( !transform )
    {
      goto LABEL_30;
    }
    UILabel__set_fontSize((UILabel_o *)transform, fontSize, 0);
    transform = this->fields.messageLabel;
    if ( transform )
    {
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0);
      if ( transform )
      {
        v29.fields.y = y + this->fields.messageDefaultPosition.fields.y;
        v29.fields.x = x + this->fields.messageDefaultPosition.fields.x;
        v29.fields.z = 0.0;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v29, 0);
        goto LABEL_26;
      }
    }
LABEL_30:
    sub_1C3E7C0(transform, v21);
  }
LABEL_26:
  TutorialNotificationMessage__setTutorialMaskActive(this, 1, v22);
  this->fields.isButtonEnable = 0;
  v25 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
  if ( dispTouchSprite )
    v26 = &Method_TutorialNotificationMessage_EndOpen__;
  else
    v26 = (intptr_t *)&Method_TutorialNotificationMessage__Open_b__13_0__;
  v27 = v25;
  System_Action___ctor(v25, (Il2CppObject *)this, *v26, 0);
  BaseDialog__Open((BaseDialog_o *)this, v27, maskType, 0, 0);
}


void TutorialNotificationMessage__OpenWithArrow(
        TutorialNotificationMessage_o *this,
        System_String_o *message,
        UnityEngine_Vector2_o messagePos,
        int32_t fontSize,
        const MethodInfo *method)
{
  int32_t messageDefaultFontSize; // w20
  float y; // s8
  float x; // s9
  UnityEngine_Object_o *messageLabel; // x22
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float z; // s1
  __int64 v13; // x1
  const MethodInfo *v14; // x2
  void *transform; // x0
  System_String_o *v16; // x1
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v18; // 0:s0.4,4:s1.4,8:s2.4

  messageDefaultFontSize = fontSize;
  y = messagePos.fields.y;
  x = messagePos.fields.x;
  if ( (byte_4C559C8 & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&StringLiteral_1/*""*/);
    byte_4C559C8 = 1;
  }
  this->fields.selectCallbackFunc = 0;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.selectCallbackFunc, 0, fontSize, method);
  this->fields.flagId = -1;
  if ( !byte_4C506A1 )
  {
    sub_1C3E564(&UnityEngine_Vector3_TypeInfo);
    byte_4C506A1 = 1;
  }
  messageLabel = (UnityEngine_Object_o *)this->fields.messageLabel;
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  z = static_fields->zeroVector.fields.z;
  *(_QWORD *)&this->fields.touchObjPos.fields.x = *(_QWORD *)&static_fields->zeroVector.fields.x;
  this->fields.touchObjPos.fields.z = z;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(messageLabel, 0, 0) )
    goto LABEL_26;
  transform = this->fields.messageLabel;
  if ( this->fields.messageDefaultFontSize < 0 )
  {
    if ( !transform )
      goto LABEL_27;
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0);
    if ( !transform )
      goto LABEL_27;
    localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)transform, 0);
    transform = this->fields.messageLabel;
    this->fields.messageDefaultPosition.fields.x = localPosition.fields.x;
    this->fields.messageDefaultPosition.fields.y = localPosition.fields.y;
    if ( !transform )
      goto LABEL_27;
    this->fields.messageDefaultFontSize = *((_DWORD *)transform + 106);
  }
  else if ( !transform )
  {
    goto LABEL_27;
  }
  if ( message )
    v16 = message;
  else
    v16 = (System_String_o *)StringLiteral_1/*""*/;
  UILabel__set_text((UILabel_o *)transform, v16, 0);
  transform = this->fields.messageLabel;
  if ( !transform || (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0)) == 0 )
LABEL_27:
    sub_1C3E7C0(transform, v13);
  v18.fields.y = y + this->fields.messageDefaultPosition.fields.y;
  v18.fields.x = x + this->fields.messageDefaultPosition.fields.x;
  v18.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v18, 0);
  transform = this->fields.messageLabel;
  if ( messageDefaultFontSize < 0 )
  {
    if ( !transform )
      goto LABEL_27;
    messageDefaultFontSize = this->fields.messageDefaultFontSize;
  }
  else if ( !transform )
  {
    goto LABEL_27;
  }
  UILabel__set_fontSize((UILabel_o *)transform, messageDefaultFontSize, 0);
LABEL_26:
  TutorialNotificationMessage__setTutorialMaskActive(this, 0, v14);
  this->fields.isButtonEnable = 0;
  BaseDialog__Open((BaseDialog_o *)this, 0, 0, 0, 0);
}


// local variable allocation has failed, the output may be wrong!
void TutorialNotificationMessage__Open_40197532(
        TutorialNotificationMessage_o *this,
        System_String_o *message,
        UnityEngine_Vector2_o messagePos,
        UnityEngine_Vector3_o touchObjPos,
        int32_t dlgBgId,
        int32_t alignment,
        int32_t fontSize,
        System_Action_o *callback,
        int32_t spacingY,
        const MethodInfo *method)
{
  float z; // s10
  float y; // s11
  float x; // s12
  float v18; // s8
  float v19; // s9
  UnityEngine_Object_o *messageLabel; // x25
  __int64 v23; // x1
  const MethodInfo *v24; // x2
  UILabel_o *transform; // x0
  int32_t v26; // w1
  System_String_o *v27; // x1
  __int64 v28; // x2
  __int64 v29; // x3
  __int64 v30; // x4
  __int64 v31; // x5
  __int64 v32; // x6
  __int64 v33; // x7
  ExUITexture_o *backTexture; // x21
  Il2CppObject *v35; // x0
  System_String_o *v36; // x20
  System_Action_o *v37; // x22
  System_Action_o *v38; // x20
  int32_t v39; // [xsp+Ch] [xbp-74h] BYREF
  UnityEngine_Vector2_o v40; // 0:s0.4,4:s1.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v42; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v43; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v44; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v45; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  z = touchObjPos.fields.z;
  y = touchObjPos.fields.y;
  x = touchObjPos.fields.x;
  v18 = messagePos.fields.y;
  v19 = messagePos.fields.x;
  if ( (byte_4C559C7 & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    sub_1C3E564(&int_TypeInfo);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&Method_TutorialNotificationMessage_EndOpen__);
    sub_1C3E564(&Method_TutorialNotificationMessage__Open_b__14_0__);
    sub_1C3E564(&StringLiteral_1/*""*/);
    sub_1C3E564(&StringLiteral_3032/*"Back/back{0}"*/);
    byte_4C559C7 = 1;
  }
  this->fields.selectCallbackFunc = callback;
  sub_1C3E508(
    (CGThumbnailListItem_o *)&this->fields.selectCallbackFunc,
    (int32_t)callback,
    dlgBgId,
    *(const MethodInfo **)&alignment);
  this->fields.touchObjPos.fields.x = x;
  this->fields.touchObjPos.fields.y = y;
  this->fields.flagId = -1;
  this->fields.touchObjPos.fields.z = z;
  messageLabel = (UnityEngine_Object_o *)this->fields.messageLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(messageLabel, 0, 0) )
    goto LABEL_43;
  transform = this->fields.messageLabel;
  if ( !transform )
    goto LABEL_50;
  if ( dlgBgId )
  {
    UILabel__set_applyGradient(transform, 1, 0);
    transform = this->fields.messageLabel;
    if ( !transform )
      goto LABEL_50;
    v43.fields.g = 0.2902;
    v43.fields.b = 0.031373;
    v43.fields.a = 1.0;
    v43.fields.r = 0.32941;
    UILabel__set_gradientTop(transform, v43, 0);
    transform = this->fields.messageLabel;
    if ( !transform )
      goto LABEL_50;
    v44.fields.r = 0.1098;
    v44.fields.g = 0.0;
    v44.fields.b = 0.0;
    v44.fields.a = 1.0;
    UILabel__set_gradientBottom(transform, v44, 0);
    transform = this->fields.messageLabel;
    if ( !transform )
      goto LABEL_50;
    UILabel__set_spacingY(transform, 11, 0);
    transform = this->fields.messageLabel;
    if ( !transform )
      goto LABEL_50;
    UILabel__set_effectStyle(transform, 2, 0);
    transform = this->fields.messageLabel;
    if ( !transform )
      goto LABEL_50;
    v45.fields.r = 0.47059;
    v45.fields.b = 0.15294;
    v45.fields.a = 0.058824;
    v45.fields.g = 0.32941;
    UILabel__set_effectColor(transform, v45, 0);
    transform = this->fields.messageLabel;
    if ( !transform )
      goto LABEL_50;
    v40.fields.x = 3.0;
    v40.fields.y = 3.0;
    UILabel__set_effectDistance(transform, v40, 0);
    transform = this->fields.messageLabel;
    if ( !transform )
      goto LABEL_50;
    UIWidget__set_height((UIWidget_o *)transform, 543, 0);
    transform = this->fields.messageLabel;
    if ( !transform )
      goto LABEL_50;
    v26 = alignment;
  }
  else
  {
    UILabel__set_applyGradient(transform, 0, 0);
    transform = this->fields.messageLabel;
    if ( !transform )
      goto LABEL_50;
    UILabel__set_spacingY(transform, 0, 0);
    transform = this->fields.messageLabel;
    if ( !transform )
      goto LABEL_50;
    UILabel__set_effectStyle(transform, 0, 0);
    transform = this->fields.messageLabel;
    if ( !transform )
      goto LABEL_50;
    UIWidget__set_height((UIWidget_o *)transform, 460, 0);
    transform = this->fields.messageLabel;
    if ( !transform )
      goto LABEL_50;
    v26 = 2;
  }
  UILabel__set_alignment(transform, v26, 0);
  transform = this->fields.messageLabel;
  if ( this->fields.messageDefaultFontSize < 0 )
  {
    if ( !transform )
      goto LABEL_50;
    transform = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0);
    if ( !transform )
      goto LABEL_50;
    localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)transform, 0);
    transform = this->fields.messageLabel;
    this->fields.messageDefaultPosition.fields.x = localPosition.fields.x;
    this->fields.messageDefaultPosition.fields.y = localPosition.fields.y;
    if ( !transform )
      goto LABEL_50;
    this->fields.messageDefaultFontSize = transform->fields.mFontSize;
  }
  else if ( !transform )
  {
    goto LABEL_50;
  }
  if ( message )
    v27 = message;
  else
    v27 = (System_String_o *)StringLiteral_1/*""*/;
  UILabel__set_text(transform, v27, 0);
  transform = this->fields.messageLabel;
  if ( fontSize < 1 )
  {
    if ( !transform )
      goto LABEL_50;
    fontSize = this->fields.messageDefaultFontSize;
  }
  else if ( !transform )
  {
    goto LABEL_50;
  }
  UILabel__set_fontSize(transform, fontSize, 0);
  if ( spacingY >= 1 )
  {
    transform = this->fields.messageLabel;
    if ( !transform )
      goto LABEL_50;
    UILabel__set_spacingY(transform, spacingY, 0);
  }
  transform = this->fields.messageLabel;
  if ( !transform
    || (transform = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0)) == 0 )
  {
LABEL_50:
    sub_1C3E7C0(transform, v23);
  }
  v42.fields.y = v18 + this->fields.messageDefaultPosition.fields.y;
  v42.fields.x = v19 + this->fields.messageDefaultPosition.fields.x;
  v42.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v42, 0);
LABEL_43:
  TutorialNotificationMessage__setTutorialMaskActive(this, 1, v24);
  transform = (UILabel_o *)this->fields.maskSprite;
  if ( !transform )
    goto LABEL_50;
  ((void (__fastcall *)(UILabel_o *, const MethodInfo *, float))transform->klass->vtable._8_set_alpha.methodPtr)(
    transform,
    transform->klass->vtable._8_set_alpha.method,
    0.01);
  this->fields.isButtonEnable = 0;
  if ( !dlgBgId )
    goto LABEL_47;
  backTexture = this->fields.backTexture;
  v39 = dlgBgId;
  v35 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v39, v28, v29, v30, v31, v32, v33);
  v36 = System_String__Format((System_String_o *)StringLiteral_3032/*"Back/back{0}"*/, v35, 0);
  v37 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
  System_Action___ctor(v37, (Il2CppObject *)this, Method_TutorialNotificationMessage__Open_b__14_0__, 0);
  if ( !backTexture )
    goto LABEL_50;
  if ( !ExUITexture__SetAssetImage(backTexture, v36, v37, 0) )
  {
LABEL_47:
    transform = (UILabel_o *)this->fields.backTexture;
    if ( !transform )
      goto LABEL_50;
    ExUITexture__ClearImage((ExUITexture_o *)transform, 0);
    v38 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
    System_Action___ctor(v38, (Il2CppObject *)this, Method_TutorialNotificationMessage_EndOpen__, 0);
    BaseDialog__Open((BaseDialog_o *)this, v38, 1, 0, 0);
  }
}


void TutorialNotificationMessage___Open_b__13_0(TutorialNotificationMessage_o *this, const MethodInfo *method)
{
  this->fields.isButtonEnable = 1;
}


void TutorialNotificationMessage___Open_b__14_0(TutorialNotificationMessage_o *this, const MethodInfo *method)
{
  System_Action_o *v3; // x20

  if ( (byte_4C559CD & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    sub_1C3E564(&Method_TutorialNotificationMessage_EndOpen__);
    byte_4C559CD = 1;
  }
  v3 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
  System_Action___ctor(v3, (Il2CppObject *)this, Method_TutorialNotificationMessage_EndOpen__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v3, 1, 0, 0);
}


// local variable allocation has failed, the output may be wrong!
void TutorialNotificationMessage__setTutorialMaskActive(
        TutorialNotificationMessage_o *this,
        bool active,
        const MethodInfo *method)
{
  UnityEngine_Component_o *maskSprite; // x0

  maskSprite = (UnityEngine_Component_o *)this->fields.maskSprite;
  if ( !maskSprite
    || (maskSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(maskSprite, 0)) == 0 )
  {
    sub_1C3E7C0(maskSprite, active);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskSprite, active, 0);
}