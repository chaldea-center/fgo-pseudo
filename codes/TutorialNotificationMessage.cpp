void TutorialNotificationMessage___ctor(TutorialNotificationMessage_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  BaseDialog_c *v4; // x0

  if ( (byte_596F41C & 1) == 0 )
  {
    sub_2213A60(&BaseDialog_TypeInfo);
    byte_596F41C = 1;
  }
  v4 = BaseDialog_TypeInfo;
  this->fields.messageDefaultFontSize = -1;
  if ( !*(&v4->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v4, method, v2);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void TutorialNotificationMessage__Close(TutorialNotificationMessage_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  TutorialNotificationMessage__Close_47106572(this, 0, v2);
}


void TutorialNotificationMessage__Close_47106572(
        TutorialNotificationMessage_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  System_Action_c *v10; // x0
  System_Action_o *v11; // x20

  if ( (byte_596F41A & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_TutorialNotificationMessage_EndClose__);
    byte_596F41A = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.closeCallbackFunc,
    (int32_t)callback,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  v10 = System_Action_TypeInfo;
  this->fields.isButtonEnable = 0;
  v11 = (System_Action_o *)sub_2213CCC(v10);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_TutorialNotificationMessage_EndClose__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v11, 0);
}


void TutorialNotificationMessage__EndClose(TutorialNotificationMessage_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  MissionNaviTransitionBoardItem_o *p_closeCallbackFunc; // x19
  struct System_Action_o *v12; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  TutorialNotificationMessage__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_2213CDC(0, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (MissionNaviTransitionBoardItem_o *)&this->fields.closeCallbackFunc;
  v12 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0;
    sub_2213A04(p_closeCallbackFunc, 0, v5, v6, v7, v8, v9, v10);
    ((void (__fastcall *)(intptr_t, intptr_t))v12->fields.invoke_impl)(v12->fields.method_code, v12->fields.method);
  }
}


void TutorialNotificationMessage__EndOpen(TutorialNotificationMessage_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *touchObject; // x21
  __int64 v5; // x1
  __int64 v6; // x2
  Il2CppObject *touchPrefab; // x21
  UnityEngine_GameObject_o *touchBase; // x0
  __int64 v9; // x1
  UnityEngine_GameObject_o *v10; // x21
  UnityEngine_Transform_o *transform; // x22
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  UnityEngine_Vector3_o localPosition; // 0:kr00_12.12
  UnityEngine_Vector3_o localScale; // 0:kr14_12.12
  UnityEngine_Vector3_o v20; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_596F419 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596F419 = 1;
  }
  touchObject = (UnityEngine_Object_o *)this->fields.touchObject;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Equality(touchObject, 0, 0) )
  {
    touchPrefab = (Il2CppObject *)this->fields.touchPrefab;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v6);
    touchBase = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                              touchPrefab,
                                              (const MethodInfo_38F34CC *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !touchBase )
      goto LABEL_17;
    v10 = touchBase;
    transform = UnityEngine_GameObject__get_transform(touchBase, 0);
    touchBase = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v10, 0);
    if ( !touchBase
      || (localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)touchBase, 0),
          (touchBase = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v10, 0)) == 0)
      || (localScale = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)touchBase, 0),
          (touchBase = this->fields.touchBase) == 0)
      || (touchBase = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(touchBase, 0), !transform) )
    {
LABEL_17:
      sub_2213CDC(touchBase, v9);
    }
    UnityEngine_Transform__set_parent(transform, (UnityEngine_Transform_o *)touchBase, 0);
    v20.fields.x = localPosition.fields.x + this->fields.touchObjPos.fields.x;
    v20.fields.y = localPosition.fields.y + this->fields.touchObjPos.fields.y;
    v20.fields.z = localPosition.fields.z + this->fields.touchObjPos.fields.z;
    UnityEngine_Transform__set_localPosition(transform, v20, 0);
    if ( !byte_5969AE6 )
    {
      sub_2213A60(&UnityEngine_Quaternion_TypeInfo);
      byte_5969AE6 = 1;
    }
    UnityEngine_Transform__set_localRotation(
      transform,
      UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion,
      0);
    UnityEngine_Transform__set_localScale(transform, localScale, 0);
    this->fields.touchObject = v10;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.touchObject,
      (int32_t)v10,
      v12,
      v13,
      v14,
      v15,
      v16,
      v17);
  }
  this->fields.isButtonEnable = 1;
}


void TutorialNotificationMessage__EndTurorialRequest(
        TutorialNotificationMessage_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  MissionNaviTransitionBoardItem_o *p_selectCallbackFunc; // x0
  struct System_Action_o *v9; // x19
  struct System_Action_o *selectCallbackFunc; // t1

  selectCallbackFunc = this->fields.selectCallbackFunc;
  p_selectCallbackFunc = (MissionNaviTransitionBoardItem_o *)&this->fields.selectCallbackFunc;
  v9 = selectCallbackFunc;
  if ( selectCallbackFunc )
  {
    p_selectCallbackFunc->klass = 0;
    sub_2213A04(p_selectCallbackFunc, 0, (System_String_o *)method, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(intptr_t, intptr_t))v9->fields.invoke_impl)(v9->fields.method_code, v9->fields.method);
  }
}


void TutorialNotificationMessage__Init(TutorialNotificationMessage_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *messageLabel; // x20
  __int64 v5; // x1
  __int64 v6; // x2
  UILabel_o *maskSprite; // x0
  struct UnityEngine_GameObject_o **p_touchObject; // x20
  UnityEngine_Object_o *touchObject; // x21
  __int64 v10; // x2
  UnityEngine_Object_o *v11; // x21
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float z; // s1

  if ( (byte_596F415 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596F415 = 1;
  }
  messageLabel = (UnityEngine_Object_o *)this->fields.messageLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Inequality(messageLabel, 0, 0) )
  {
    maskSprite = this->fields.messageLabel;
    if ( !maskSprite )
      goto LABEL_19;
    UILabel__set_text(maskSprite, (System_String_o *)StringLiteral_1/*""*/, 0);
  }
  p_touchObject = &this->fields.touchObject;
  touchObject = (UnityEngine_Object_o *)this->fields.touchObject;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v6);
  if ( UnityEngine_Object__op_Inequality(touchObject, 0, 0) )
  {
    v11 = (UnityEngine_Object_o *)*p_touchObject;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v10);
    UnityEngine_Object__Destroy_83459800(v11, 0);
    *p_touchObject = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.touchObject, 0, v12, v13, v14, v15, v16, v17);
    if ( !byte_5969AE0 )
    {
      sub_2213A60(&UnityEngine_Vector3_TypeInfo);
      byte_5969AE0 = 1;
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
    sub_2213CDC(maskSprite, v5);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskSprite, 0, 0);
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


void TutorialNotificationMessage__OnClickClose(TutorialNotificationMessage_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  __int64 v6; // x2
  UnityEngine_Object_c *v7; // x0
  struct UnityEngine_GameObject_o **p_touchObject; // x20
  UnityEngine_Object_o *touchObject; // x21
  __int64 v10; // x1
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  UnityEngine_Object_o *v17; // x21
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float z; // s1
  NetworkManager_ResultCallbackFunc_o *v26; // x20
  __int64 v27; // x1
  __int64 v28; // x2
  Il2CppObject *Request_object; // x0
  __int64 v30; // x1
  MissionNaviTransitionBoardItem_o *p_selectCallbackFunc; // x19
  struct System_Action_o *v32; // x20
  struct System_Action_o *selectCallbackFunc; // t1

  if ( (byte_596F41B & 1) == 0 )
  {
    sub_2213A60(&Method_NetworkManager_getRequest_TutorialSetRequest___);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_2213A60(&Method_TutorialNotificationMessage_EndTurorialRequest__);
    sub_2213A60(&Method_TutorialNotificationMessage_OnClickClose__);
    sub_2213A60(&StringLiteral_23515/*"ok"*/);
    byte_596F41B = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v3 = Method_TutorialNotificationMessage_OnClickClose__;
    if ( (*((_BYTE *)Method_TutorialNotificationMessage_OnClickClose__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_TutorialNotificationMessage_OnClickClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    v7 = UnityEngine_Object_TypeInfo;
    p_touchObject = &this->fields.touchObject;
    touchObject = (UnityEngine_Object_o *)this->fields.touchObject;
    this->fields.isButtonEnable = 0;
    if ( !*(&v7->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(v7, v5, v6);
    if ( UnityEngine_Object__op_Inequality(touchObject, 0, 0) )
    {
      v17 = (UnityEngine_Object_o *)*p_touchObject;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10, v11);
      UnityEngine_Object__Destroy_83459800(v17, 0);
      *p_touchObject = 0;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.touchObject, 0, v18, v19, v20, v21, v22, v23);
      if ( !byte_5969AE0 )
      {
        sub_2213A60(&UnityEngine_Vector3_TypeInfo);
        byte_5969AE0 = 1;
      }
      static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
      z = static_fields->zeroVector.fields.z;
      *(_QWORD *)&this->fields.touchObjPos.fields.x = *(_QWORD *)&static_fields->zeroVector.fields.x;
      this->fields.touchObjPos.fields.z = z;
    }
    if ( this->fields.flagId == -1 )
    {
      selectCallbackFunc = this->fields.selectCallbackFunc;
      p_selectCallbackFunc = (MissionNaviTransitionBoardItem_o *)&this->fields.selectCallbackFunc;
      v32 = selectCallbackFunc;
      if ( selectCallbackFunc )
      {
        p_selectCallbackFunc->klass = 0;
        sub_2213A04(p_selectCallbackFunc, 0, v11, v12, v13, v14, v15, v16);
        ((void (__fastcall *)(intptr_t, intptr_t))v32->fields.invoke_impl)(v32->fields.method_code, v32->fields.method);
      }
    }
    else
    {
      v26 = (NetworkManager_ResultCallbackFunc_o *)sub_2213CCC(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v26,
        (Il2CppObject *)this,
        Method_TutorialNotificationMessage_EndTurorialRequest__,
        0);
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v27, v28);
      Request_object = NetworkManager__getRequest_object_(
                         v26,
                         (const MethodInfo_38F1B78 *)Method_NetworkManager_getRequest_TutorialSetRequest___);
      if ( !Request_object )
        sub_2213CDC(0, v30);
      TutorialSetRequest__beginRequest((TutorialSetRequest_o *)Request_object, this->fields.flagId, 0);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
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
  float y; // s9
  float x; // s8
  int messageDefaultFontSize; // w22
  __int64 v18; // x1
  __int64 v19; // x2
  UnityEngine_Object_c *v20; // x0
  UnityEngine_Object_o *messageLabel; // x24
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float z; // s1
  __int64 v24; // x1
  const MethodInfo *v25; // x2
  void *transform; // x0
  System_String_o *v27; // x1
  System_Action_c *v28; // x0
  System_Action_o *v29; // x0
  intptr_t *v30; // x8
  System_Action_o *v31; // x21
  struct UnityEngine_Vector2_o localPosition; // kr00_8
  UnityEngine_Vector3_o v33; // 0:s0.4,4:s1.4,8:s2.4

  y = messagePos.fields.y;
  x = messagePos.fields.x;
  messageDefaultFontSize = fontSize;
  if ( (byte_596F416 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_TutorialNotificationMessage_EndOpen__);
    sub_2213A60(&Method_TutorialNotificationMessage__Open_b__13_0__);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596F416 = 1;
  }
  this->fields.selectCallbackFunc = selectCallback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.selectCallbackFunc,
    (int32_t)selectCallback,
    *(System_String_o **)&flagId,
    (System_String_o *)selectCallback,
    maskType,
    fontSize,
    dispTouchSprite,
    (bool)method);
  this->fields.flagId = flagId;
  if ( !byte_5969AE0 )
  {
    sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE0 = 1;
  }
  v20 = UnityEngine_Object_TypeInfo;
  messageLabel = (UnityEngine_Object_o *)this->fields.messageLabel;
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  z = static_fields->zeroVector.fields.z;
  *(_QWORD *)&this->fields.touchObjPos.fields.x = *(_QWORD *)&static_fields->zeroVector.fields.x;
  this->fields.touchObjPos.fields.z = z;
  if ( !*(&v20->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v20, v18, v19);
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
      localPosition = (struct UnityEngine_Vector2_o)UnityEngine_Transform__get_localPosition(
                                                      (UnityEngine_Transform_o *)transform,
                                                      0);
      transform = this->fields.messageLabel;
      this->fields.messageDefaultPosition = localPosition;
      if ( !transform )
        goto LABEL_30;
      this->fields.messageDefaultFontSize = *((_DWORD *)transform + 106);
    }
    else if ( !transform )
    {
      goto LABEL_30;
    }
    if ( message )
      v27 = message;
    else
      v27 = (System_String_o *)StringLiteral_1/*""*/;
    UILabel__set_text((UILabel_o *)transform, v27, 0);
    transform = this->fields.messageLabel;
    if ( messageDefaultFontSize < 1 )
    {
      if ( !transform )
        goto LABEL_30;
      messageDefaultFontSize = this->fields.messageDefaultFontSize;
    }
    else if ( !transform )
    {
      goto LABEL_30;
    }
    UILabel__set_fontSize((UILabel_o *)transform, messageDefaultFontSize, 0);
    transform = this->fields.messageLabel;
    if ( transform )
    {
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0);
      if ( transform )
      {
        v33.fields.y = y + this->fields.messageDefaultPosition.fields.y;
        v33.fields.x = x + this->fields.messageDefaultPosition.fields.x;
        v33.fields.z = 0.0;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v33, 0);
        goto LABEL_26;
      }
    }
LABEL_30:
    sub_2213CDC(transform, v24);
  }
LABEL_26:
  TutorialNotificationMessage__setTutorialMaskActive(this, 1, v25);
  v28 = System_Action_TypeInfo;
  this->fields.isButtonEnable = 0;
  v29 = (System_Action_o *)sub_2213CCC(v28);
  if ( dispTouchSprite )
    v30 = &Method_TutorialNotificationMessage_EndOpen__;
  else
    v30 = (intptr_t *)&Method_TutorialNotificationMessage__Open_b__13_0__;
  v31 = v29;
  System_Action___ctor(v29, (Il2CppObject *)this, *v30, 0);
  BaseDialog__Open((BaseDialog_o *)this, v31, maskType, 0, 0);
}


// local variable allocation has failed, the output may be wrong!
void TutorialNotificationMessage__OpenWithArrow(
        TutorialNotificationMessage_o *this,
        System_String_o *message,
        UnityEngine_Vector2_o messagePos,
        int32_t fontSize,
        const MethodInfo *method)
{
  int32_t v5; // w4
  int32_t v6; // w5
  bool v7; // w6
  bool v8; // w7
  float y; // s9
  float x; // s8
  int32_t messageDefaultFontSize; // w20
  __int64 v14; // x1
  __int64 v15; // x2
  int v16; // w8
  UnityEngine_Object_c *v17; // x0
  UnityEngine_Object_o *messageLabel; // x22
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float z; // s1
  __int64 v21; // x1
  const MethodInfo *v22; // x2
  void *transform; // x0
  System_String_o *v24; // x1
  struct UnityEngine_Vector2_o localPosition; // kr00_8
  UnityEngine_Vector3_o v26; // 0:s0.4,4:s1.4,8:s2.4

  y = messagePos.fields.y;
  x = messagePos.fields.x;
  messageDefaultFontSize = fontSize;
  if ( (byte_596F418 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596F418 = 1;
  }
  this->fields.selectCallbackFunc = 0;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.selectCallbackFunc,
    0,
    *(System_String_o **)&fontSize,
    (System_String_o *)method,
    v5,
    v6,
    v7,
    v8);
  v16 = (unsigned __int8)byte_5969AE0;
  this->fields.flagId = -1;
  if ( !v16 )
  {
    sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE0 = 1;
  }
  v17 = UnityEngine_Object_TypeInfo;
  messageLabel = (UnityEngine_Object_o *)this->fields.messageLabel;
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  z = static_fields->zeroVector.fields.z;
  *(_QWORD *)&this->fields.touchObjPos.fields.x = *(_QWORD *)&static_fields->zeroVector.fields.x;
  this->fields.touchObjPos.fields.z = z;
  if ( !*(&v17->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v17, v14, v15);
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
    localPosition = (struct UnityEngine_Vector2_o)UnityEngine_Transform__get_localPosition(
                                                    (UnityEngine_Transform_o *)transform,
                                                    0);
    transform = this->fields.messageLabel;
    this->fields.messageDefaultPosition = localPosition;
    if ( !transform )
      goto LABEL_27;
    this->fields.messageDefaultFontSize = *((_DWORD *)transform + 106);
  }
  else if ( !transform )
  {
    goto LABEL_27;
  }
  if ( message )
    v24 = message;
  else
    v24 = (System_String_o *)StringLiteral_1/*""*/;
  UILabel__set_text((UILabel_o *)transform, v24, 0);
  transform = this->fields.messageLabel;
  if ( !transform || (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0)) == 0 )
LABEL_27:
    sub_2213CDC(transform, v21);
  v26.fields.y = y + this->fields.messageDefaultPosition.fields.y;
  v26.fields.x = x + this->fields.messageDefaultPosition.fields.x;
  v26.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v26, 0);
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
  TutorialNotificationMessage__setTutorialMaskActive(this, 0, v22);
  this->fields.isButtonEnable = 0;
  BaseDialog__Open((BaseDialog_o *)this, 0, 0, 0, 0);
}


// local variable allocation has failed, the output may be wrong!
void TutorialNotificationMessage__Open_47104524(
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
  float v13; // s9
  float v14; // s8
  int messageDefaultFontSize; // w22
  __int64 v22; // x1
  __int64 v23; // x2
  UnityEngine_Object_c *v24; // x0
  UnityEngine_Object_o *messageLabel; // x25
  int v26; // w8
  __int64 v27; // x1
  const MethodInfo *v28; // x2
  UILabel_o *transform; // x0
  int32_t v30; // w1
  System_String_o *v31; // x1
  ExUITexture_o *backTexture; // x21
  Il2CppObject *v33; // x0
  System_String_o *v34; // x20
  System_Action_o *v35; // x22
  System_Action_o *v36; // x20
  struct UnityEngine_Vector2_o localPosition; // kr00_8
  int32_t v38; // [xsp+Ch] [xbp-74h] BYREF
  UnityEngine_Vector2_o v39; // 0:s0.4,4:s1.4
  UnityEngine_Vector3_o v40; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v41; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v42; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v43; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  z = touchObjPos.fields.z;
  y = touchObjPos.fields.y;
  x = touchObjPos.fields.x;
  v13 = messagePos.fields.y;
  v14 = messagePos.fields.x;
  messageDefaultFontSize = fontSize;
  if ( (byte_596F417 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_TutorialNotificationMessage_EndOpen__);
    sub_2213A60(&Method_TutorialNotificationMessage__Open_b__14_0__);
    sub_2213A60(&StringLiteral_1/*""*/);
    sub_2213A60(&StringLiteral_3154/*"Back/back{0}"*/);
    byte_596F417 = 1;
  }
  this->fields.selectCallbackFunc = callback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.selectCallbackFunc,
    (int32_t)callback,
    *(System_String_o **)&dlgBgId,
    *(System_String_o **)&alignment,
    fontSize,
    (int32_t)callback,
    spacingY,
    (bool)method);
  v24 = UnityEngine_Object_TypeInfo;
  this->fields.touchObjPos.fields.x = x;
  this->fields.touchObjPos.fields.y = y;
  this->fields.touchObjPos.fields.z = z;
  messageLabel = (UnityEngine_Object_o *)this->fields.messageLabel;
  v26 = *(&v24->_2.cctor_finished + 1);
  this->fields.flagId = -1;
  if ( !v26 )
    j_il2cpp_runtime_class_init_0(v24, v22, v23);
  if ( !UnityEngine_Object__op_Inequality(messageLabel, 0, 0) )
    goto LABEL_44;
  transform = this->fields.messageLabel;
  if ( dlgBgId )
  {
    if ( !transform )
      goto LABEL_51;
    UILabel__set_applyGradient(transform, 1, 0);
    transform = this->fields.messageLabel;
    if ( !transform )
      goto LABEL_51;
    v41.fields.a = 1.0;
    v41.fields.g = 0.2902;
    v41.fields.b = 0.031373;
    v41.fields.r = 0.32941;
    UILabel__set_gradientTop(transform, v41, 0);
    transform = this->fields.messageLabel;
    if ( !transform )
      goto LABEL_51;
    v42.fields.g = 0.0;
    v42.fields.b = 0.0;
    v42.fields.a = 1.0;
    v42.fields.r = 0.1098;
    UILabel__set_gradientBottom(transform, v42, 0);
    transform = this->fields.messageLabel;
    if ( !transform )
      goto LABEL_51;
    UILabel__set_spacingY(transform, 11, 0);
    transform = this->fields.messageLabel;
    if ( !transform )
      goto LABEL_51;
    UILabel__set_effectStyle(transform, 2, 0);
    transform = this->fields.messageLabel;
    if ( !transform )
      goto LABEL_51;
    v43.fields.g = 0.32941;
    v43.fields.r = 0.47059;
    v43.fields.b = 0.15294;
    v43.fields.a = 0.058824;
    UILabel__set_effectColor(transform, v43, 0);
    transform = this->fields.messageLabel;
    if ( !transform )
      goto LABEL_51;
    v39.fields.x = 3.0;
    v39.fields.y = 3.0;
    UILabel__set_effectDistance(transform, v39, 0);
    transform = this->fields.messageLabel;
    if ( !transform )
      goto LABEL_51;
    UIWidget__set_height((UIWidget_o *)transform, 543, 0);
    transform = this->fields.messageLabel;
    if ( !transform )
      goto LABEL_51;
    v30 = alignment;
  }
  else
  {
    if ( !transform )
      goto LABEL_51;
    UILabel__set_applyGradient(transform, 0, 0);
    transform = this->fields.messageLabel;
    if ( !transform )
      goto LABEL_51;
    UILabel__set_spacingY(transform, 0, 0);
    transform = this->fields.messageLabel;
    if ( !transform )
      goto LABEL_51;
    UILabel__set_effectStyle(transform, 0, 0);
    transform = this->fields.messageLabel;
    if ( !transform )
      goto LABEL_51;
    UIWidget__set_height((UIWidget_o *)transform, 460, 0);
    transform = this->fields.messageLabel;
    if ( !transform )
      goto LABEL_51;
    v30 = 2;
  }
  UILabel__set_alignment(transform, v30, 0);
  transform = this->fields.messageLabel;
  if ( this->fields.messageDefaultFontSize < 0 )
  {
    if ( !transform )
      goto LABEL_51;
    transform = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0);
    if ( !transform )
      goto LABEL_51;
    localPosition = (struct UnityEngine_Vector2_o)UnityEngine_Transform__get_localPosition(
                                                    (UnityEngine_Transform_o *)transform,
                                                    0);
    transform = this->fields.messageLabel;
    this->fields.messageDefaultPosition = localPosition;
    if ( !transform )
      goto LABEL_51;
    this->fields.messageDefaultFontSize = transform->fields.mFontSize;
  }
  else if ( !transform )
  {
    goto LABEL_51;
  }
  if ( message )
    v31 = message;
  else
    v31 = (System_String_o *)StringLiteral_1/*""*/;
  UILabel__set_text(transform, v31, 0);
  transform = this->fields.messageLabel;
  if ( messageDefaultFontSize < 1 )
  {
    if ( !transform )
      goto LABEL_51;
    messageDefaultFontSize = this->fields.messageDefaultFontSize;
  }
  else if ( !transform )
  {
    goto LABEL_51;
  }
  UILabel__set_fontSize(transform, messageDefaultFontSize, 0);
  if ( spacingY >= 1 )
  {
    transform = this->fields.messageLabel;
    if ( !transform )
      goto LABEL_51;
    UILabel__set_spacingY(transform, spacingY, 0);
  }
  transform = this->fields.messageLabel;
  if ( !transform
    || (transform = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0)) == 0 )
  {
LABEL_51:
    sub_2213CDC(transform, v27);
  }
  v40.fields.y = v13 + this->fields.messageDefaultPosition.fields.y;
  v40.fields.x = v14 + this->fields.messageDefaultPosition.fields.x;
  v40.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v40, 0);
LABEL_44:
  TutorialNotificationMessage__setTutorialMaskActive(this, 1, v28);
  transform = (UILabel_o *)this->fields.maskSprite;
  if ( !transform )
    goto LABEL_51;
  ((void (__fastcall *)(UILabel_o *, const MethodInfo *, float))transform->klass->vtable._8_set_alpha.methodPtr)(
    transform,
    transform->klass->vtable._8_set_alpha.method,
    0.01);
  this->fields.isButtonEnable = 0;
  if ( !dlgBgId )
    goto LABEL_48;
  backTexture = this->fields.backTexture;
  v38 = dlgBgId;
  v33 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v38);
  v34 = System_String__Format((System_String_o *)StringLiteral_3154/*"Back/back{0}"*/, v33, 0);
  v35 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v35, (Il2CppObject *)this, Method_TutorialNotificationMessage__Open_b__14_0__, 0);
  if ( !backTexture )
    goto LABEL_51;
  if ( !ExUITexture__SetAssetImage(backTexture, v34, v35, 0) )
  {
LABEL_48:
    transform = (UILabel_o *)this->fields.backTexture;
    if ( !transform )
      goto LABEL_51;
    ExUITexture__ClearImage((ExUITexture_o *)transform, 0);
    v36 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(v36, (Il2CppObject *)this, Method_TutorialNotificationMessage_EndOpen__, 0);
    BaseDialog__Open((BaseDialog_o *)this, v36, 1, 0, 0);
  }
}


void TutorialNotificationMessage___Open_b__13_0(TutorialNotificationMessage_o *this, const MethodInfo *method)
{
  this->fields.isButtonEnable = 1;
}


void TutorialNotificationMessage___Open_b__14_0(TutorialNotificationMessage_o *this, const MethodInfo *method)
{
  System_Action_o *v3; // x20

  if ( (byte_596F41D & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_TutorialNotificationMessage_EndOpen__);
    byte_596F41D = 1;
  }
  v3 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
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
    sub_2213CDC(maskSprite, active);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskSprite, active, 0);
}