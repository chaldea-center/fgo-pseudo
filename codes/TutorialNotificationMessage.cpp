void __fastcall TutorialNotificationMessage___ctor(TutorialNotificationMessage_o *this, const MethodInfo *method)
{
  if ( (byte_49FB119 & 1) == 0 )
  {
    sub_1B640C8(&BaseDialog_TypeInfo, method);
    byte_49FB119 = 1;
  }
  this->fields.messageDefaultFontSize = -1;
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall TutorialNotificationMessage__Close(TutorialNotificationMessage_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  TutorialNotificationMessage__Close_37050068(this, 0LL, v2);
}


void __fastcall TutorialNotificationMessage__Close_37050068(
        TutorialNotificationMessage_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x2
  System_Action_o *v9; // x20

  if ( (byte_49FB117 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, callback);
    sub_1B640C8(&Method_TutorialNotificationMessage_EndClose__, v6);
    byte_49FB117 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.closeCallbackFunc,
    (int32_t)callback,
    (int32_t)method,
    v3);
  this->fields.isButtonEnable = 0;
  v9 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v7, v8);
  System_Action___ctor(v9, (Il2CppObject *)this, Method_TutorialNotificationMessage_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v9, 0LL);
}


void __fastcall TutorialNotificationMessage__EndClose(TutorialNotificationMessage_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  int32_t v4; // w2
  int32_t v5; // w3
  ServantStatusBattleListViewItem_o *p_closeCallbackFunc; // x19
  struct System_Action_o *v7; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  TutorialNotificationMessage__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1B64324(0LL);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (ServantStatusBattleListViewItem_o *)&this->fields.closeCallbackFunc;
  v7 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0LL;
    sub_1B6406C(p_closeCallbackFunc, 0, v4, v5);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v7->fields.m_target)(
      v7->fields.original_method_info,
      *(_QWORD *)&v7->fields.extra_arg);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TutorialNotificationMessage__EndOpen(TutorialNotificationMessage_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *touchObject; // x21
  Il2CppObject *touchPrefab; // x21
  UnityEngine_GameObject_o *touchBase; // x0
  UnityEngine_GameObject_o *v7; // x21
  UnityEngine_Transform_o *transform; // x22
  float x; // s11
  float y; // s12
  float z; // s13
  float v12; // s0
  float v13; // s1
  float v14; // s2
  float v15; // s8
  float v16; // s9
  float v17; // s10
  __int64 v18; // x1
  int32_t v19; // w2
  int32_t v20; // w3
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v22; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v23; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_49FB116 & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_Object_Instantiate_GameObject___, method);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v3);
    byte_49FB116 = 1;
  }
  touchObject = (UnityEngine_Object_o *)this->fields.touchObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(touchObject, 0LL, 0LL) )
  {
    touchPrefab = (Il2CppObject *)this->fields.touchPrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    touchBase = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                              touchPrefab,
                                              (const MethodInfo_2EBBCA0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !touchBase )
      goto LABEL_17;
    v7 = touchBase;
    transform = UnityEngine_GameObject__get_transform(touchBase, 0LL);
    touchBase = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v7, 0LL);
    if ( !touchBase )
      goto LABEL_17;
    localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)touchBase, 0LL);
    x = localPosition.fields.x;
    y = localPosition.fields.y;
    z = localPosition.fields.z;
    touchBase = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v7, 0LL);
    if ( !touchBase
      || (*(UnityEngine_Vector3_o *)&v12 = UnityEngine_Transform__get_localScale(
                                             (UnityEngine_Transform_o *)touchBase,
                                             0LL),
          (touchBase = this->fields.touchBase) == 0LL)
      || (v15 = v12,
          v16 = v13,
          v17 = v14,
          touchBase = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(touchBase, 0LL),
          !transform) )
    {
LABEL_17:
      sub_1B64324(touchBase);
    }
    UnityEngine_Transform__set_parent(transform, (UnityEngine_Transform_o *)touchBase, 0LL);
    v22.fields.x = x + this->fields.touchObjPos.fields.x;
    v22.fields.y = y + this->fields.touchObjPos.fields.y;
    v22.fields.z = z + this->fields.touchObjPos.fields.z;
    UnityEngine_Transform__set_localPosition(transform, v22, 0LL);
    if ( !byte_49F7117 )
    {
      sub_1B640C8(&UnityEngine_Quaternion_TypeInfo, v18);
      byte_49F7117 = 1;
    }
    UnityEngine_Transform__set_localRotation(
      transform,
      UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion,
      0LL);
    v23.fields.x = v15;
    v23.fields.y = v16;
    v23.fields.z = v17;
    UnityEngine_Transform__set_localScale(transform, v23, 0LL);
    this->fields.touchObject = v7;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.touchObject, (int32_t)v7, v19, v20);
  }
  this->fields.isButtonEnable = 1;
}


void __fastcall TutorialNotificationMessage__EndTurorialRequest(
        TutorialNotificationMessage_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  int32_t v3; // w3
  ServantStatusBattleListViewItem_o *p_selectCallbackFunc; // x0
  struct System_Action_o *v5; // x19
  struct System_Action_o *selectCallbackFunc; // t1

  selectCallbackFunc = this->fields.selectCallbackFunc;
  p_selectCallbackFunc = (ServantStatusBattleListViewItem_o *)&this->fields.selectCallbackFunc;
  v5 = selectCallbackFunc;
  if ( selectCallbackFunc )
  {
    p_selectCallbackFunc->klass = 0LL;
    sub_1B6406C(p_selectCallbackFunc, 0, (int32_t)method, v3);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v5->fields.m_target)(
      v5->fields.original_method_info,
      *(_QWORD *)&v5->fields.extra_arg);
  }
}


void __fastcall TutorialNotificationMessage__Init(TutorialNotificationMessage_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *messageLabel; // x20
  UILabel_o *maskSprite; // x0
  struct UnityEngine_GameObject_o **p_touchObject; // x20
  UnityEngine_Object_o *touchObject; // x21
  UnityEngine_Object_o *v8; // x21
  int32_t v9; // w2
  int32_t v10; // w3
  __int64 v11; // x1
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float z; // s1

  if ( (byte_49FB112 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    sub_1B640C8(&StringLiteral_1/*""*/, v3);
    byte_49FB112 = 1;
  }
  messageLabel = (UnityEngine_Object_o *)this->fields.messageLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(messageLabel, 0LL, 0LL) )
  {
    maskSprite = this->fields.messageLabel;
    if ( !maskSprite )
      goto LABEL_19;
    UILabel__set_text(maskSprite, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  p_touchObject = &this->fields.touchObject;
  touchObject = (UnityEngine_Object_o *)this->fields.touchObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(touchObject, 0LL, 0LL) )
  {
    v8 = (UnityEngine_Object_o *)*p_touchObject;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_69127736(v8, 0LL);
    *p_touchObject = 0LL;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.touchObject, 0, v9, v10);
    if ( !byte_49F7111 )
    {
      sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v11);
      byte_49F7111 = 1;
    }
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    z = static_fields->zeroVector.fields.z;
    *(_QWORD *)&this->fields.touchObjPos.fields.x = *(_QWORD *)&static_fields->zeroVector.fields.x;
    this->fields.touchObjPos.fields.z = z;
  }
  maskSprite = (UILabel_o *)this->fields.maskSprite;
  if ( !maskSprite
    || (((void (__fastcall *)(UILabel_o *, Il2CppMethodPointer, float))maskSprite->klass->vtable._8_set_alpha.method)(
          maskSprite,
          maskSprite->klass->vtable._9_CalculateFinalAlpha.methodPtr,
          1.0),
        this->fields.isButtonEnable = 0,
        (maskSprite = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
LABEL_19:
    sub_1B64324(maskSprite);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskSprite, 0, 0LL);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall TutorialNotificationMessage__OnClickClose(
        TutorialNotificationMessage_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  _QWORD *v9; // x0
  System_Reflection_MethodBase_o *v10; // x0
  struct UnityEngine_GameObject_o **p_touchObject; // x20
  UnityEngine_Object_o *touchObject; // x21
  __int64 v13; // x1
  __int64 v14; // x2
  int32_t v15; // w3
  UnityEngine_Object_o *v16; // x21
  int32_t v17; // w2
  int32_t v18; // w3
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float z; // s1
  NetworkManager_ResultCallbackFunc_o *v21; // x20
  Il2CppObject *Request_object; // x0
  ServantStatusBattleListViewItem_o *p_selectCallbackFunc; // x19
  struct System_Action_o *v24; // x20
  struct System_Action_o *selectCallbackFunc; // t1

  if ( (byte_49FB118 & 1) == 0 )
  {
    sub_1B640C8(&Method_NetworkManager_getRequest_TutorialSetRequest___, method);
    sub_1B640C8(&NetworkManager_TypeInfo, v3);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v4);
    sub_1B640C8(&NetworkManager_ResultCallbackFunc_TypeInfo, v5);
    sub_1B640C8(&Method_TutorialNotificationMessage_EndTurorialRequest__, v6);
    sub_1B640C8(&Method_TutorialNotificationMessage_OnClickClose__, v7);
    sub_1B640C8(&StringLiteral_22137/*"ok"*/, v8);
    byte_49FB118 = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v9 = Method_TutorialNotificationMessage_OnClickClose__;
    if ( (*((_BYTE *)Method_TutorialNotificationMessage_OnClickClose__ + 83) & 2) != 0 )
      v9 = (_QWORD *)sub_1B640E0(Method_TutorialNotificationMessage_OnClickClose__);
    v10 = (System_Reflection_MethodBase_o *)sub_1B640AC(v9, v9[4]);
    OverwriteAssetSoundName__PlaySystemSe(v10, 1, 0LL);
    p_touchObject = &this->fields.touchObject;
    touchObject = (UnityEngine_Object_o *)this->fields.touchObject;
    this->fields.isButtonEnable = 0;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(touchObject, 0LL, 0LL) )
    {
      v16 = (UnityEngine_Object_o *)*p_touchObject;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_69127736(v16, 0LL);
      *p_touchObject = 0LL;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.touchObject, 0, v17, v18);
      if ( !byte_49F7111 )
      {
        sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v13);
        byte_49F7111 = 1;
      }
      static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
      z = static_fields->zeroVector.fields.z;
      *(_QWORD *)&this->fields.touchObjPos.fields.x = *(_QWORD *)&static_fields->zeroVector.fields.x;
      this->fields.touchObjPos.fields.z = z;
    }
    if ( this->fields.flagId == -1 )
    {
      selectCallbackFunc = this->fields.selectCallbackFunc;
      p_selectCallbackFunc = (ServantStatusBattleListViewItem_o *)&this->fields.selectCallbackFunc;
      v24 = selectCallbackFunc;
      if ( selectCallbackFunc )
      {
        p_selectCallbackFunc->klass = 0LL;
        sub_1B6406C(p_selectCallbackFunc, 0, v14, v15);
        ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v24->fields.m_target)(
          v24->fields.original_method_info,
          *(_QWORD *)&v24->fields.extra_arg);
      }
    }
    else
    {
      v21 = (NetworkManager_ResultCallbackFunc_o *)sub_1B64314(NetworkManager_ResultCallbackFunc_TypeInfo, v13, v14);
      NetworkManager_ResultCallbackFunc___ctor(
        v21,
        (Il2CppObject *)this,
        Method_TutorialNotificationMessage_EndTurorialRequest__,
        0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Request_object = NetworkManager__getRequest_object_(
                         v21,
                         (const MethodInfo_2EBA9D0 *)Method_NetworkManager_getRequest_TutorialSetRequest___);
      if ( !Request_object )
        sub_1B64324(0LL);
      TutorialSetRequest__beginRequest((TutorialSetRequest_o *)Request_object, this->fields.flagId, 0LL);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TutorialNotificationMessage__Open(
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
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  UnityEngine_Object_o *messageLabel; // x24
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float z; // s1
  const MethodInfo *v26; // x2
  UnityEngine_Component_o *transform; // x0
  System_String_o *v28; // x1
  __int64 v29; // x1
  __int64 v30; // x2
  System_Action_o *v31; // x0
  __int64 *v32; // x8
  System_Action_o *v33; // x21
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v35; // 0:s0.4,4:s1.4,8:s2.4

  y = messagePos.fields.y;
  x = messagePos.fields.x;
  if ( (byte_49FB113 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, message);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v18);
    sub_1B640C8(&Method_TutorialNotificationMessage_EndOpen__, v19);
    sub_1B640C8(&Method_TutorialNotificationMessage__Open_b__13_0__, v20);
    sub_1B640C8(&StringLiteral_1/*""*/, v21);
    byte_49FB113 = 1;
  }
  this->fields.selectCallbackFunc = selectCallback;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.selectCallbackFunc,
    (int32_t)selectCallback,
    flagId,
    (int32_t)selectCallback);
  this->fields.flagId = flagId;
  if ( !byte_49F7111 )
  {
    sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v22);
    byte_49F7111 = 1;
  }
  messageLabel = (UnityEngine_Object_o *)this->fields.messageLabel;
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  z = static_fields->zeroVector.fields.z;
  *(_QWORD *)&this->fields.touchObjPos.fields.x = *(_QWORD *)&static_fields->zeroVector.fields.x;
  this->fields.touchObjPos.fields.z = z;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(messageLabel, 0LL, 0LL) )
  {
    transform = (UnityEngine_Component_o *)this->fields.messageLabel;
    if ( (this->fields.messageDefaultFontSize & 0x80000000) != 0 )
    {
      if ( !transform )
        goto LABEL_30;
      transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(transform, 0LL);
      if ( !transform )
        goto LABEL_30;
      localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)transform, 0LL);
      transform = (UnityEngine_Component_o *)this->fields.messageLabel;
      this->fields.messageDefaultPosition.fields.x = localPosition.fields.x;
      this->fields.messageDefaultPosition.fields.y = localPosition.fields.y;
      if ( !transform )
        goto LABEL_30;
      this->fields.messageDefaultFontSize = transform[17].fields.m_CachedPtr;
    }
    else if ( !transform )
    {
      goto LABEL_30;
    }
    if ( message )
      v28 = message;
    else
      v28 = (System_String_o *)StringLiteral_1/*""*/;
    UILabel__set_text((UILabel_o *)transform, v28, 0LL);
    transform = (UnityEngine_Component_o *)this->fields.messageLabel;
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
    UILabel__set_fontSize((UILabel_o *)transform, fontSize, 0LL);
    transform = (UnityEngine_Component_o *)this->fields.messageLabel;
    if ( transform )
    {
      transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(transform, 0LL);
      if ( transform )
      {
        v35.fields.y = y + this->fields.messageDefaultPosition.fields.y;
        v35.fields.x = x + this->fields.messageDefaultPosition.fields.x;
        v35.fields.z = 0.0;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v35, 0LL);
        goto LABEL_26;
      }
    }
LABEL_30:
    sub_1B64324(transform);
  }
LABEL_26:
  TutorialNotificationMessage__setTutorialMaskActive(this, 1, v26);
  this->fields.isButtonEnable = 0;
  v31 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v29, v30);
  if ( dispTouchSprite )
    v32 = &Method_TutorialNotificationMessage_EndOpen__;
  else
    v32 = (__int64 *)&Method_TutorialNotificationMessage__Open_b__13_0__;
  v33 = v31;
  System_Action___ctor(v31, (Il2CppObject *)this, *v32, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v33, maskType, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TutorialNotificationMessage__OpenWithArrow(
        TutorialNotificationMessage_o *this,
        System_String_o *message,
        UnityEngine_Vector2_o messagePos,
        int32_t fontSize,
        const MethodInfo *method)
{
  int32_t messageDefaultFontSize; // w20
  float y; // s8
  float x; // s9
  __int64 v10; // x1
  __int64 v11; // x1
  UnityEngine_Object_o *messageLabel; // x22
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float z; // s1
  const MethodInfo *v15; // x2
  UnityEngine_Component_o *transform; // x0
  System_String_o *v17; // x1
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v19; // 0:s0.4,4:s1.4,8:s2.4

  messageDefaultFontSize = fontSize;
  y = messagePos.fields.y;
  x = messagePos.fields.x;
  if ( (byte_49FB115 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, message);
    sub_1B640C8(&StringLiteral_1/*""*/, v10);
    byte_49FB115 = 1;
  }
  this->fields.selectCallbackFunc = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.selectCallbackFunc, 0, fontSize, (int32_t)method);
  this->fields.flagId = -1;
  if ( !byte_49F7111 )
  {
    sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v11);
    byte_49F7111 = 1;
  }
  messageLabel = (UnityEngine_Object_o *)this->fields.messageLabel;
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  z = static_fields->zeroVector.fields.z;
  *(_QWORD *)&this->fields.touchObjPos.fields.x = *(_QWORD *)&static_fields->zeroVector.fields.x;
  this->fields.touchObjPos.fields.z = z;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(messageLabel, 0LL, 0LL) )
    goto LABEL_26;
  transform = (UnityEngine_Component_o *)this->fields.messageLabel;
  if ( (this->fields.messageDefaultFontSize & 0x80000000) != 0 )
  {
    if ( !transform )
      goto LABEL_27;
    transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(transform, 0LL);
    if ( !transform )
      goto LABEL_27;
    localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)transform, 0LL);
    transform = (UnityEngine_Component_o *)this->fields.messageLabel;
    this->fields.messageDefaultPosition.fields.x = localPosition.fields.x;
    this->fields.messageDefaultPosition.fields.y = localPosition.fields.y;
    if ( !transform )
      goto LABEL_27;
    this->fields.messageDefaultFontSize = transform[17].fields.m_CachedPtr;
  }
  else if ( !transform )
  {
    goto LABEL_27;
  }
  if ( message )
    v17 = message;
  else
    v17 = (System_String_o *)StringLiteral_1/*""*/;
  UILabel__set_text((UILabel_o *)transform, v17, 0LL);
  transform = (UnityEngine_Component_o *)this->fields.messageLabel;
  if ( !transform
    || (transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(transform, 0LL)) == 0LL )
  {
LABEL_27:
    sub_1B64324(transform);
  }
  v19.fields.y = y + this->fields.messageDefaultPosition.fields.y;
  v19.fields.x = x + this->fields.messageDefaultPosition.fields.x;
  v19.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v19, 0LL);
  transform = (UnityEngine_Component_o *)this->fields.messageLabel;
  if ( (messageDefaultFontSize & 0x80000000) != 0 )
  {
    if ( !transform )
      goto LABEL_27;
    messageDefaultFontSize = this->fields.messageDefaultFontSize;
  }
  else if ( !transform )
  {
    goto LABEL_27;
  }
  UILabel__set_fontSize((UILabel_o *)transform, messageDefaultFontSize, 0LL);
LABEL_26:
  TutorialNotificationMessage__setTutorialMaskActive(this, 0, v15);
  this->fields.isButtonEnable = 0;
  BaseDialog__Open((BaseDialog_o *)this, 0LL, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TutorialNotificationMessage__Open_37048028(
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
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  UnityEngine_Object_o *messageLabel; // x25
  const MethodInfo *v29; // x2
  UILabel_o *transform; // x0
  int32_t v31; // w1
  System_String_o *v32; // x1
  ExUITexture_o *backTexture; // x21
  Il2CppObject *v34; // x0
  System_String_o *v35; // x20
  __int64 v36; // x1
  __int64 v37; // x2
  System_Action_o *v38; // x22
  __int64 v39; // x1
  __int64 v40; // x2
  System_Action_o *v41; // x20
  int32_t v42; // [xsp+Ch] [xbp-74h] BYREF
  UnityEngine_Vector2_o v43; // 0:s0.4,4:s1.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v45; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v46; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v47; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v48; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  z = touchObjPos.fields.z;
  y = touchObjPos.fields.y;
  x = touchObjPos.fields.x;
  v18 = messagePos.fields.y;
  v19 = messagePos.fields.x;
  if ( (byte_49FB114 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, message);
    sub_1B640C8(&int_TypeInfo, v22);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v23);
    sub_1B640C8(&Method_TutorialNotificationMessage_EndOpen__, v24);
    sub_1B640C8(&Method_TutorialNotificationMessage__Open_b__14_0__, v25);
    sub_1B640C8(&StringLiteral_1/*""*/, v26);
    sub_1B640C8(&StringLiteral_3114/*"Back/back{0}"*/, v27);
    byte_49FB114 = 1;
  }
  this->fields.selectCallbackFunc = callback;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.selectCallbackFunc,
    (int32_t)callback,
    dlgBgId,
    alignment);
  this->fields.touchObjPos.fields.x = x;
  this->fields.touchObjPos.fields.y = y;
  this->fields.flagId = -1;
  this->fields.touchObjPos.fields.z = z;
  messageLabel = (UnityEngine_Object_o *)this->fields.messageLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(messageLabel, 0LL, 0LL) )
    goto LABEL_43;
  transform = this->fields.messageLabel;
  if ( !transform )
    goto LABEL_50;
  if ( dlgBgId )
  {
    UILabel__set_applyGradient(transform, 1, 0LL);
    transform = this->fields.messageLabel;
    if ( !transform )
      goto LABEL_50;
    v46.fields.g = 0.2902;
    v46.fields.b = 0.031373;
    v46.fields.a = 1.0;
    v46.fields.r = 0.32941;
    UILabel__set_gradientTop(transform, v46, 0LL);
    transform = this->fields.messageLabel;
    if ( !transform )
      goto LABEL_50;
    v47.fields.r = 0.1098;
    v47.fields.g = 0.0;
    v47.fields.b = 0.0;
    v47.fields.a = 1.0;
    UILabel__set_gradientBottom(transform, v47, 0LL);
    transform = this->fields.messageLabel;
    if ( !transform )
      goto LABEL_50;
    UILabel__set_spacingY(transform, 11, 0LL);
    transform = this->fields.messageLabel;
    if ( !transform )
      goto LABEL_50;
    UILabel__set_effectStyle(transform, 2, 0LL);
    transform = this->fields.messageLabel;
    if ( !transform )
      goto LABEL_50;
    v48.fields.r = 0.47059;
    v48.fields.b = 0.15294;
    v48.fields.a = 0.058824;
    v48.fields.g = 0.32941;
    UILabel__set_effectColor(transform, v48, 0LL);
    transform = this->fields.messageLabel;
    if ( !transform )
      goto LABEL_50;
    v43.fields.x = 3.0;
    v43.fields.y = 3.0;
    UILabel__set_effectDistance(transform, v43, 0LL);
    transform = this->fields.messageLabel;
    if ( !transform )
      goto LABEL_50;
    UIWidget__set_height((UIWidget_o *)transform, 543, 0LL);
    transform = this->fields.messageLabel;
    if ( !transform )
      goto LABEL_50;
    v31 = alignment;
  }
  else
  {
    UILabel__set_applyGradient(transform, 0, 0LL);
    transform = this->fields.messageLabel;
    if ( !transform )
      goto LABEL_50;
    UILabel__set_spacingY(transform, 0, 0LL);
    transform = this->fields.messageLabel;
    if ( !transform )
      goto LABEL_50;
    UILabel__set_effectStyle(transform, 0, 0LL);
    transform = this->fields.messageLabel;
    if ( !transform )
      goto LABEL_50;
    UIWidget__set_height((UIWidget_o *)transform, 460, 0LL);
    transform = this->fields.messageLabel;
    if ( !transform )
      goto LABEL_50;
    v31 = 2;
  }
  UILabel__set_alignment(transform, v31, 0LL);
  transform = this->fields.messageLabel;
  if ( (this->fields.messageDefaultFontSize & 0x80000000) != 0 )
  {
    if ( !transform )
      goto LABEL_50;
    transform = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0LL);
    if ( !transform )
      goto LABEL_50;
    localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)transform, 0LL);
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
    v32 = message;
  else
    v32 = (System_String_o *)StringLiteral_1/*""*/;
  UILabel__set_text(transform, v32, 0LL);
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
  UILabel__set_fontSize(transform, fontSize, 0LL);
  if ( spacingY >= 1 )
  {
    transform = this->fields.messageLabel;
    if ( !transform )
      goto LABEL_50;
    UILabel__set_spacingY(transform, spacingY, 0LL);
  }
  transform = this->fields.messageLabel;
  if ( !transform
    || (transform = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0LL)) == 0LL )
  {
LABEL_50:
    sub_1B64324(transform);
  }
  v45.fields.y = v18 + this->fields.messageDefaultPosition.fields.y;
  v45.fields.x = v19 + this->fields.messageDefaultPosition.fields.x;
  v45.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v45, 0LL);
LABEL_43:
  TutorialNotificationMessage__setTutorialMaskActive(this, 1, v29);
  transform = (UILabel_o *)this->fields.maskSprite;
  if ( !transform )
    goto LABEL_50;
  ((void (__fastcall *)(UILabel_o *, Il2CppMethodPointer, float))transform->klass->vtable._8_set_alpha.method)(
    transform,
    transform->klass->vtable._9_CalculateFinalAlpha.methodPtr,
    0.01);
  this->fields.isButtonEnable = 0;
  if ( !dlgBgId )
    goto LABEL_47;
  backTexture = this->fields.backTexture;
  v42 = dlgBgId;
  v34 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v42);
  v35 = System_String__Format((System_String_o *)StringLiteral_3114/*"Back/back{0}"*/, v34, 0LL);
  v38 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v36, v37);
  System_Action___ctor(v38, (Il2CppObject *)this, Method_TutorialNotificationMessage__Open_b__14_0__, 0LL);
  if ( !backTexture )
    goto LABEL_50;
  if ( !ExUITexture__SetAssetImage(backTexture, v35, v38, 0LL) )
  {
LABEL_47:
    transform = (UILabel_o *)this->fields.backTexture;
    if ( !transform )
      goto LABEL_50;
    ExUITexture__ClearImage((ExUITexture_o *)transform, 0LL);
    v41 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v39, v40);
    System_Action___ctor(v41, (Il2CppObject *)this, Method_TutorialNotificationMessage_EndOpen__, 0LL);
    BaseDialog__Open((BaseDialog_o *)this, v41, 1, 0LL);
  }
}


void __fastcall TutorialNotificationMessage___Open_b__13_0(
        TutorialNotificationMessage_o *this,
        const MethodInfo *method)
{
  this->fields.isButtonEnable = 1;
}


void __fastcall TutorialNotificationMessage___Open_b__14_0(
        TutorialNotificationMessage_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  System_Action_o *v5; // x20

  if ( (byte_49FB11A & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&Method_TutorialNotificationMessage_EndOpen__, v4);
    byte_49FB11A = 1;
  }
  v5 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, method, v2);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_TutorialNotificationMessage_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v5, 1, 0LL);
}


void __fastcall TutorialNotificationMessage__setTutorialMaskActive(
        TutorialNotificationMessage_o *this,
        bool active,
        const MethodInfo *method)
{
  UnityEngine_Component_o *maskSprite; // x0

  maskSprite = (UnityEngine_Component_o *)this->fields.maskSprite;
  if ( !maskSprite
    || (maskSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(maskSprite, 0LL)) == 0LL )
  {
    sub_1B64324(maskSprite);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskSprite, active, 0LL);
}