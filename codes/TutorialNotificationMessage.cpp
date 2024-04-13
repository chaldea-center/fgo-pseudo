void __fastcall TutorialNotificationMessage___ctor(TutorialNotificationMessage_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42F5B7C & 1) == 0 )
  {
    sub_B5D5C4(&BaseDialog_TypeInfo, (_DWORD)method, v2, v3);
    byte_42F5B7C = 1;
  }
  this->fields.messageDefaultFontSize = -1;
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall TutorialNotificationMessage__Close(TutorialNotificationMessage_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  TutorialNotificationMessage__Close_47281036(this, 0LL, v2);
}


void __fastcall TutorialNotificationMessage__Close_47281036(
        TutorialNotificationMessage_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  System_Action_o *v13; // x20

  if ( (byte_42F5B7A & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)callback, (_DWORD)method, v3);
    sub_B5D5C4(&Method_TutorialNotificationMessage_EndClose__, v10, v11, v12);
    byte_42F5B7A = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.isButtonEnable = 0;
  v13 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v13, (Il2CppObject *)this, Method_TutorialNotificationMessage_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v13, 0LL);
}


void __fastcall TutorialNotificationMessage__EndClose(TutorialNotificationMessage_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  BattleServantConfConponent_o *p_closeCallbackFunc; // x19
  System_Action_o *v12; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  TutorialNotificationMessage__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B5D69C(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc;
  v12 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0LL;
    sub_B5D560(p_closeCallbackFunc, 0LL, v5, v6, v7, v8, v9, v10);
    System_Action__Invoke(v12, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TutorialNotificationMessage__EndOpen(TutorialNotificationMessage_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UnityEngine_Object_o *touchObject; // x21
  struct UnityEngine_GameObject_o *touchPrefab; // x21
  UnityEngine_GameObject_o *touchBase; // x0
  __int64 v11; // x1
  UnityEngine_GameObject_o *v12; // x21
  UnityEngine_Transform_o *transform; // x22
  float x; // s11
  float y; // s12
  float z; // s13
  float v17; // s0
  float v18; // s1
  float v19; // s2
  float v20; // s8
  float v21; // s9
  float v22; // s10
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v30; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v31; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o identity; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_42F5B79 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v5, v6, v7);
    byte_42F5B79 = 1;
  }
  touchObject = (UnityEngine_Object_o *)this->fields.touchObject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(touchObject, 0LL, 0LL) )
  {
    touchPrefab = this->fields.touchPrefab;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    touchBase = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                              (UnityEngine_UI_Dropdown_DropdownItem_o *)touchPrefab,
                                              (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !touchBase )
      goto LABEL_17;
    v12 = touchBase;
    transform = UnityEngine_GameObject__get_transform(touchBase, 0LL);
    touchBase = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v12, 0LL);
    if ( !touchBase )
      goto LABEL_17;
    localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)touchBase, 0LL);
    x = localPosition.fields.x;
    y = localPosition.fields.y;
    z = localPosition.fields.z;
    touchBase = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v12, 0LL);
    if ( !touchBase
      || (*(UnityEngine_Vector3_o *)&v17 = UnityEngine_Transform__get_localScale(
                                             (UnityEngine_Transform_o *)touchBase,
                                             0LL),
          (touchBase = this->fields.touchBase) == 0LL)
      || (v20 = v17,
          v21 = v18,
          v22 = v19,
          touchBase = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(touchBase, 0LL),
          !transform) )
    {
LABEL_17:
      sub_B5D69C(touchBase, v11);
    }
    UnityEngine_Transform__set_parent(transform, (UnityEngine_Transform_o *)touchBase, 0LL);
    v30.fields.x = x + this->fields.touchObjPos.fields.x;
    v30.fields.y = y + this->fields.touchObjPos.fields.y;
    v30.fields.z = z + this->fields.touchObjPos.fields.z;
    UnityEngine_Transform__set_localPosition(transform, v30, 0LL);
    identity = UnityEngine_Quaternion__get_identity(0LL);
    UnityEngine_Transform__set_localRotation(transform, identity, 0LL);
    v31.fields.x = v20;
    v31.fields.y = v21;
    v31.fields.z = v22;
    UnityEngine_Transform__set_localScale(transform, v31, 0LL);
    this->fields.touchObject = v12;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.touchObject,
      (System_Int32_array **)v12,
      v23,
      v24,
      v25,
      v26,
      v27,
      v28);
  }
  this->fields.isButtonEnable = 1;
}


void __fastcall TutorialNotificationMessage__EndTurorialRequest(
        TutorialNotificationMessage_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  BattleServantConfConponent_o *p_selectCallbackFunc; // x0
  System_Action_o *v9; // x19
  struct System_Action_o *selectCallbackFunc; // t1

  selectCallbackFunc = this->fields.selectCallbackFunc;
  p_selectCallbackFunc = (BattleServantConfConponent_o *)&this->fields.selectCallbackFunc;
  v9 = selectCallbackFunc;
  if ( selectCallbackFunc )
  {
    p_selectCallbackFunc->klass = 0LL;
    sub_B5D560(p_selectCallbackFunc, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
    System_Action__Invoke(v9, 0LL);
  }
}


void __fastcall TutorialNotificationMessage__Init(TutorialNotificationMessage_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UnityEngine_Object_o *messageLabel; // x20
  __int64 v9; // x1
  UILabel_o *maskSprite; // x0
  UnityEngine_Object_o *touchObject; // x21
  UnityEngine_Object_o *v12; // x21
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7

  if ( (byte_42F5B75 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_1/*""*/, v5, v6, v7);
    byte_42F5B75 = 1;
  }
  messageLabel = (UnityEngine_Object_o *)this->fields.messageLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(messageLabel, 0LL, 0LL) )
  {
    maskSprite = this->fields.messageLabel;
    if ( !maskSprite )
      goto LABEL_20;
    UILabel__set_text(maskSprite, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  touchObject = (UnityEngine_Object_o *)this->fields.touchObject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(touchObject, 0LL, 0LL) )
  {
    v12 = (UnityEngine_Object_o *)this->fields.touchObject;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35620236(v12, 0LL);
    this->fields.touchObject = 0LL;
    sub_B5D560((BattleServantConfConponent_o *)&this->fields.touchObject, 0LL, v13, v14, v15, v16, v17, v18);
    this->fields.touchObjPos = UnityEngine_Vector3__get_zero(0LL);
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
LABEL_20:
    sub_B5D69C(maskSprite, v9);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskSprite, 0, 0LL);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall TutorialNotificationMessage__OnClickClose(
        TutorialNotificationMessage_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  UnityEngine_Object_o *touchObject; // x21
  System_String_o *v24; // x1
  const MethodInfo *v25; // x2
  UnityEngine_Object_o *v26; // x21
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  NetworkManager_ResultCallbackFunc_o *v33; // x20
  TutorialSetRequest_o *Request_WarBoardWallAttackRequest; // x0
  __int64 v35; // x1
  const MethodInfo *v36; // x2

  if ( (byte_42F5B7B & 1) == 0 )
  {
    sub_B5D5C4(&Method_NetworkManager_getRequest_TutorialSetRequest___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&NetworkManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&NetworkManager_ResultCallbackFunc_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&SoundManager_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&Method_TutorialNotificationMessage_EndTurorialRequest__, v17, v18, v19);
    sub_B5D5C4(&StringLiteral_21497/*"ok"*/, v20, v21, v22);
    byte_42F5B7B = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(1, 0LL);
    touchObject = (UnityEngine_Object_o *)this->fields.touchObject;
    this->fields.isButtonEnable = 0;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(touchObject, 0LL, 0LL) )
    {
      v26 = (UnityEngine_Object_o *)this->fields.touchObject;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_35620236(v26, 0LL);
      this->fields.touchObject = 0LL;
      sub_B5D560((BattleServantConfConponent_o *)&this->fields.touchObject, 0LL, v27, v28, v29, v30, v31, v32);
      this->fields.touchObjPos = UnityEngine_Vector3__get_zero(0LL);
    }
    if ( this->fields.flagId == -1 )
    {
      TutorialNotificationMessage__EndTurorialRequest(this, v24, v25);
    }
    else
    {
      v33 = (NetworkManager_ResultCallbackFunc_o *)sub_B5D694(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v33,
        (Il2CppObject *)this,
        Method_TutorialNotificationMessage_EndTurorialRequest__,
        0LL);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      Request_WarBoardWallAttackRequest = (TutorialSetRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                    v33,
                                                                    (const MethodInfo_1E656EC *)Method_NetworkManager_getRequest_TutorialSetRequest___);
      if ( !Request_WarBoardWallAttackRequest )
        sub_B5D69C(0LL, v35);
      TutorialSetRequest__beginRequest(Request_WarBoardWallAttackRequest, this->fields.flagId, v36);
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
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  UnityEngine_Object_o *messageLabel; // x24
  __int64 v31; // x1
  const MethodInfo *v32; // x2
  void *transform; // x0
  System_String_o *v34; // x1
  int32_t messageDefaultFontSize; // w1
  System_Action_o *v36; // x0
  System_Action_o *v37; // x22
  __int64 *v38; // x8
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v40; // 0:s0.4,4:s1.4,8:s2.4

  y = messagePos.fields.y;
  x = messagePos.fields.x;
  if ( (byte_42F5B76 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)message, flagId, selectCallback);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&Method_TutorialNotificationMessage_EndOpen__, v21, v22, v23);
    sub_B5D5C4(&Method_TutorialNotificationMessage__Open_b__13_0__, v24, v25, v26);
    sub_B5D5C4(&StringLiteral_1/*""*/, v27, v28, v29);
    byte_42F5B76 = 1;
  }
  this->fields.selectCallbackFunc = selectCallback;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.selectCallbackFunc,
    (System_Int32_array **)selectCallback,
    *(System_String_array ***)&flagId,
    (System_String_array **)selectCallback,
    *(System_Boolean_array ***)&maskType,
    *(System_Int32_array ***)&fontSize,
    (System_Int32_array *)dispTouchSprite,
    (System_Int32_array *)method);
  this->fields.flagId = flagId;
  this->fields.touchObjPos = UnityEngine_Vector3__get_zero(0LL);
  messageLabel = (UnityEngine_Object_o *)this->fields.messageLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(messageLabel, 0LL, 0LL) )
  {
    transform = this->fields.messageLabel;
    if ( (this->fields.messageDefaultFontSize & 0x80000000) != 0 )
    {
      if ( !transform )
        goto LABEL_29;
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0LL);
      if ( !transform )
        goto LABEL_29;
      localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)transform, 0LL);
      transform = this->fields.messageLabel;
      this->fields.messageDefaultPosition.fields.x = localPosition.fields.x;
      this->fields.messageDefaultPosition.fields.y = localPosition.fields.y;
      if ( !transform )
        goto LABEL_29;
      this->fields.messageDefaultFontSize = *((_DWORD *)transform + 104);
    }
    else if ( !transform )
    {
      goto LABEL_29;
    }
    if ( message )
      v34 = message;
    else
      v34 = (System_String_o *)StringLiteral_1/*""*/;
    UILabel__set_text((UILabel_o *)transform, v34, 0LL);
    transform = this->fields.messageLabel;
    if ( fontSize < 1 )
    {
      if ( !transform )
        goto LABEL_29;
      messageDefaultFontSize = this->fields.messageDefaultFontSize;
    }
    else
    {
      if ( !transform )
        goto LABEL_29;
      messageDefaultFontSize = fontSize;
    }
    UILabel__set_fontSize((UILabel_o *)transform, messageDefaultFontSize, 0LL);
    transform = this->fields.messageLabel;
    if ( transform )
    {
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0LL);
      if ( transform )
      {
        v40.fields.z = 0.0;
        v40.fields.x = x + this->fields.messageDefaultPosition.fields.x;
        v40.fields.y = y + this->fields.messageDefaultPosition.fields.y;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v40, 0LL);
        goto LABEL_25;
      }
    }
LABEL_29:
    sub_B5D69C(transform, v31);
  }
LABEL_25:
  TutorialNotificationMessage__setTutorialMaskActive(this, 1, v32);
  this->fields.isButtonEnable = 0;
  v36 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  v37 = v36;
  if ( dispTouchSprite )
    v38 = &Method_TutorialNotificationMessage_EndOpen__;
  else
    v38 = &Method_TutorialNotificationMessage__Open_b__13_0__;
  System_Action___ctor(v36, (Il2CppObject *)this, *v38, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v37, maskType, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TutorialNotificationMessage__OpenWithArrow(
        TutorialNotificationMessage_o *this,
        System_String_o *message,
        UnityEngine_Vector2_o messagePos,
        int32_t fontSize,
        const MethodInfo *method)
{
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7
  float y; // s8
  float x; // s9
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  UnityEngine_Object_o *messageLabel; // x22
  __int64 v18; // x1
  const MethodInfo *v19; // x2
  void *transform; // x0
  System_String_o *v21; // x1
  int32_t messageDefaultFontSize; // w1
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v24; // 0:s0.4,4:s1.4,8:s2.4

  y = messagePos.fields.y;
  x = messagePos.fields.x;
  if ( (byte_42F5B78 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)message, fontSize, method);
    sub_B5D5C4(&StringLiteral_1/*""*/, v14, v15, v16);
    byte_42F5B78 = 1;
  }
  this->fields.selectCallbackFunc = 0LL;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.selectCallbackFunc,
    0LL,
    *(System_String_array ***)&fontSize,
    (System_String_array **)method,
    v5,
    v6,
    v7,
    v8);
  this->fields.flagId = -1;
  this->fields.touchObjPos = UnityEngine_Vector3__get_zero(0LL);
  messageLabel = (UnityEngine_Object_o *)this->fields.messageLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(messageLabel, 0LL, 0LL) )
    goto LABEL_25;
  transform = this->fields.messageLabel;
  if ( (this->fields.messageDefaultFontSize & 0x80000000) != 0 )
  {
    if ( !transform )
      goto LABEL_26;
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0LL);
    if ( !transform )
      goto LABEL_26;
    localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)transform, 0LL);
    transform = this->fields.messageLabel;
    this->fields.messageDefaultPosition.fields.x = localPosition.fields.x;
    this->fields.messageDefaultPosition.fields.y = localPosition.fields.y;
    if ( !transform )
      goto LABEL_26;
    this->fields.messageDefaultFontSize = *((_DWORD *)transform + 104);
  }
  else if ( !transform )
  {
    goto LABEL_26;
  }
  if ( message )
    v21 = message;
  else
    v21 = (System_String_o *)StringLiteral_1/*""*/;
  UILabel__set_text((UILabel_o *)transform, v21, 0LL);
  transform = this->fields.messageLabel;
  if ( !transform
    || (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0LL)) == 0LL )
  {
LABEL_26:
    sub_B5D69C(transform, v18);
  }
  v24.fields.z = 0.0;
  v24.fields.x = x + this->fields.messageDefaultPosition.fields.x;
  v24.fields.y = y + this->fields.messageDefaultPosition.fields.y;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v24, 0LL);
  transform = this->fields.messageLabel;
  if ( (fontSize & 0x80000000) != 0 )
  {
    if ( !transform )
      goto LABEL_26;
    messageDefaultFontSize = this->fields.messageDefaultFontSize;
  }
  else
  {
    if ( !transform )
      goto LABEL_26;
    messageDefaultFontSize = fontSize;
  }
  UILabel__set_fontSize((UILabel_o *)transform, messageDefaultFontSize, 0LL);
LABEL_25:
  TutorialNotificationMessage__setTutorialMaskActive(this, 0, v19);
  this->fields.isButtonEnable = 0;
  BaseDialog__Open((BaseDialog_o *)this, 0LL, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TutorialNotificationMessage__Open_47278968(
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
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  int v34; // w1
  int v35; // w2
  __int64 v36; // x3
  int v37; // w1
  int v38; // w2
  __int64 v39; // x3
  UnityEngine_Object_o *messageLabel; // x25
  __int64 v41; // x1
  const MethodInfo *v42; // x2
  UILabel_o *transform; // x0
  UILabel_o *v44; // x25
  int v45; // s0
  UILabel_o *v49; // x25
  int v50; // s0
  UILabel_o *v54; // x25
  int v55; // s0
  int32_t v59; // w1
  System_String_o *v60; // x1
  int32_t messageDefaultFontSize; // w1
  ExUITexture_o *backTexture; // x21
  Il2CppObject *v63; // x0
  System_String_o *v64; // x20
  System_Action_o *v65; // x22
  System_Action_o *v66; // x20
  UnityEngine_Color32_o v67; // [xsp+0h] [xbp-80h] BYREF
  UnityEngine_Color32_o v68; // [xsp+8h] [xbp-78h] BYREF
  UnityEngine_Color32_o c; // [xsp+18h] [xbp-68h] BYREF
  UnityEngine_Color32_o p_c; // 0:x0.8
  UnityEngine_Color32_o rgba; // 0:x0.8
  UnityEngine_Color32_o v72; // 0:x0.8
  UnityEngine_Color32_o v73; // 0:x0.8
  UnityEngine_Color32_o v74; // 0:x0.8
  UnityEngine_Color32_o v75; // 0:x0.8
  UnityEngine_Vector2_o v76; // 0:s0.4,4:s1.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v78; // 0:s0.4,4:s1.4,8:s2.4

  z = touchObjPos.fields.z;
  y = touchObjPos.fields.y;
  x = touchObjPos.fields.x;
  v18 = messagePos.fields.y;
  v19 = messagePos.fields.x;
  if ( (byte_42F5B77 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)message, dlgBgId, *(_QWORD *)&alignment);
    sub_B5D5C4(&int_TypeInfo, v22, v23, v24);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v25, v26, v27);
    sub_B5D5C4(&Method_TutorialNotificationMessage_EndOpen__, v28, v29, v30);
    sub_B5D5C4(&Method_TutorialNotificationMessage__Open_b__14_0__, v31, v32, v33);
    sub_B5D5C4(&StringLiteral_1/*""*/, v34, v35, v36);
    sub_B5D5C4(&StringLiteral_2708/*"Back/back{0}"*/, v37, v38, v39);
    byte_42F5B77 = 1;
  }
  this->fields.selectCallbackFunc = callback;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.selectCallbackFunc,
    (System_Int32_array **)callback,
    *(System_String_array ***)&dlgBgId,
    *(System_String_array ***)&alignment,
    *(System_Boolean_array ***)&fontSize,
    (System_Int32_array **)callback,
    *(System_Int32_array **)&spacingY,
    (System_Int32_array *)method);
  this->fields.touchObjPos.fields.x = x;
  this->fields.touchObjPos.fields.y = y;
  this->fields.touchObjPos.fields.z = z;
  this->fields.flagId = -1;
  messageLabel = (UnityEngine_Object_o *)this->fields.messageLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(messageLabel, 0LL, 0LL) )
    goto LABEL_44;
  transform = this->fields.messageLabel;
  if ( !transform )
    goto LABEL_51;
  if ( dlgBgId )
  {
    UILabel__set_applyGradient(transform, 1, 0LL);
    v44 = this->fields.messageLabel;
    p_c = (UnityEngine_Color32_o)&c;
    c.fields.rgba = 0;
    UnityEngine_Color32___ctor(p_c, 0x54u, 0x4Au, 8u, 0xFFu, 0LL);
    rgba = (UnityEngine_Color32_o)(unsigned int)c.fields.rgba;
    *(UnityEngine_Color_o *)&v45 = UnityEngine_Color32__op_Implicit_41570788(rgba, 0LL);
    if ( !v44 )
      goto LABEL_51;
    UILabel__set_gradientTop(v44, *(UnityEngine_Color_o *)&v45, 0LL);
    v49 = this->fields.messageLabel;
    v72 = (UnityEngine_Color32_o)&v68;
    v68.fields.rgba = 0;
    UnityEngine_Color32___ctor(v72, 0x1Cu, 0, 0, 0xFFu, 0LL);
    v73 = (UnityEngine_Color32_o)(unsigned int)v68.fields.rgba;
    *(UnityEngine_Color_o *)&v50 = UnityEngine_Color32__op_Implicit_41570788(v73, 0LL);
    if ( !v49 )
      goto LABEL_51;
    UILabel__set_gradientBottom(v49, *(UnityEngine_Color_o *)&v50, 0LL);
    transform = this->fields.messageLabel;
    if ( !transform )
      goto LABEL_51;
    UILabel__set_spacingY(transform, 11, 0LL);
    transform = this->fields.messageLabel;
    if ( !transform )
      goto LABEL_51;
    UILabel__set_effectStyle(transform, 2, 0LL);
    v54 = this->fields.messageLabel;
    v74 = (UnityEngine_Color32_o)&v67;
    v67.fields.rgba = 0;
    UnityEngine_Color32___ctor(v74, 0x78u, 0x54u, 0x27u, 0xFu, 0LL);
    v75 = (UnityEngine_Color32_o)(unsigned int)v67.fields.rgba;
    *(UnityEngine_Color_o *)&v55 = UnityEngine_Color32__op_Implicit_41570788(v75, 0LL);
    if ( !v54 )
      goto LABEL_51;
    UILabel__set_effectColor(v54, *(UnityEngine_Color_o *)&v55, 0LL);
    transform = this->fields.messageLabel;
    if ( !transform )
      goto LABEL_51;
    v76.fields.x = 3.0;
    v76.fields.y = 3.0;
    UILabel__set_effectDistance(transform, v76, 0LL);
    transform = this->fields.messageLabel;
    if ( !transform )
      goto LABEL_51;
    UIWidget__set_height((UIWidget_o *)transform, 543, 0LL);
    transform = this->fields.messageLabel;
    if ( !transform )
      goto LABEL_51;
    v59 = alignment;
  }
  else
  {
    UILabel__set_applyGradient(transform, 0, 0LL);
    transform = this->fields.messageLabel;
    if ( !transform )
      goto LABEL_51;
    UILabel__set_spacingY(transform, 0, 0LL);
    transform = this->fields.messageLabel;
    if ( !transform )
      goto LABEL_51;
    UILabel__set_effectStyle(transform, 0, 0LL);
    transform = this->fields.messageLabel;
    if ( !transform )
      goto LABEL_51;
    UIWidget__set_height((UIWidget_o *)transform, 460, 0LL);
    transform = this->fields.messageLabel;
    if ( !transform )
      goto LABEL_51;
    v59 = 2;
  }
  UILabel__set_alignment(transform, v59, 0LL);
  transform = this->fields.messageLabel;
  if ( (this->fields.messageDefaultFontSize & 0x80000000) != 0 )
  {
    if ( !transform )
      goto LABEL_51;
    transform = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0LL);
    if ( !transform )
      goto LABEL_51;
    localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)transform, 0LL);
    transform = this->fields.messageLabel;
    this->fields.messageDefaultPosition.fields.x = localPosition.fields.x;
    this->fields.messageDefaultPosition.fields.y = localPosition.fields.y;
    if ( !transform )
      goto LABEL_51;
    this->fields.messageDefaultFontSize = transform->fields.mFontSize;
  }
  else if ( !transform )
  {
    goto LABEL_51;
  }
  if ( message )
    v60 = message;
  else
    v60 = (System_String_o *)StringLiteral_1/*""*/;
  UILabel__set_text(transform, v60, 0LL);
  transform = this->fields.messageLabel;
  if ( fontSize < 1 )
  {
    if ( !transform )
      goto LABEL_51;
    messageDefaultFontSize = this->fields.messageDefaultFontSize;
  }
  else
  {
    if ( !transform )
      goto LABEL_51;
    messageDefaultFontSize = fontSize;
  }
  UILabel__set_fontSize(transform, messageDefaultFontSize, 0LL);
  if ( spacingY >= 1 )
  {
    transform = this->fields.messageLabel;
    if ( !transform )
      goto LABEL_51;
    UILabel__set_spacingY(transform, spacingY, 0LL);
  }
  transform = this->fields.messageLabel;
  if ( !transform
    || (transform = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0LL)) == 0LL )
  {
LABEL_51:
    sub_B5D69C(transform, v41);
  }
  v78.fields.z = 0.0;
  v78.fields.x = v19 + this->fields.messageDefaultPosition.fields.x;
  v78.fields.y = v18 + this->fields.messageDefaultPosition.fields.y;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v78, 0LL);
LABEL_44:
  TutorialNotificationMessage__setTutorialMaskActive(this, 1, v42);
  transform = (UILabel_o *)this->fields.maskSprite;
  if ( !transform )
    goto LABEL_51;
  ((void (__fastcall *)(UILabel_o *, Il2CppMethodPointer, float))transform->klass->vtable._8_set_alpha.method)(
    transform,
    transform->klass->vtable._9_CalculateFinalAlpha.methodPtr,
    0.01);
  this->fields.isButtonEnable = 0;
  if ( !dlgBgId )
    goto LABEL_48;
  backTexture = this->fields.backTexture;
  c.fields.rgba = dlgBgId;
  v63 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &c);
  v64 = System_String__Format((System_String_o *)StringLiteral_2708/*"Back/back{0}"*/, v63, 0LL);
  v65 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v65, (Il2CppObject *)this, Method_TutorialNotificationMessage__Open_b__14_0__, 0LL);
  if ( !backTexture )
    goto LABEL_51;
  if ( !ExUITexture__SetAssetImage(backTexture, v64, v65, 0LL) )
  {
LABEL_48:
    transform = (UILabel_o *)this->fields.backTexture;
    if ( !transform )
      goto LABEL_51;
    ExUITexture__ClearImage((ExUITexture_o *)transform, 0LL);
    v66 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(v66, (Il2CppObject *)this, Method_TutorialNotificationMessage_EndOpen__, 0LL);
    BaseDialog__Open((BaseDialog_o *)this, v66, 1, 0LL);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_Action_o *v8; // x20

  if ( (byte_42F5B7D & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_TutorialNotificationMessage_EndOpen__, v5, v6, v7);
    byte_42F5B7D = 1;
  }
  v8 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_TutorialNotificationMessage_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v8, 1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
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
    sub_B5D69C(maskSprite, active);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskSprite, active, 0LL);
}