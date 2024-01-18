void __fastcall TutorialNotificationMessage___ctor(TutorialNotificationMessage_o *this, const MethodInfo *method)
{
  if ( (byte_4194A7C & 1) == 0 )
  {
    sub_B2C35C(&BaseDialog_TypeInfo, method);
    byte_4194A7C = 1;
  }
  this->fields.messageDefaultFontSize = -1;
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall TutorialNotificationMessage__Close(TutorialNotificationMessage_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  TutorialNotificationMessage__Close_46821264(this, 0LL, v2);
}


void __fastcall TutorialNotificationMessage__Close_46821264(
        TutorialNotificationMessage_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v10; // x1
  System_Action_o *v11; // x20

  if ( (byte_4194A7A & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, callback);
    sub_B2C35C(&Method_TutorialNotificationMessage_EndClose__, v10);
    byte_4194A7A = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.isButtonEnable = 0;
  v11 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_TutorialNotificationMessage_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v11, 0LL);
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
    sub_B2C434(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc;
  v12 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0LL;
    sub_B2C2F8(p_closeCallbackFunc, 0LL, v5, v6, v7, v8, v9, v10);
    System_Action__Invoke(v12, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TutorialNotificationMessage__EndOpen(TutorialNotificationMessage_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *touchObject; // x21
  struct UnityEngine_GameObject_o *touchPrefab; // x21
  UnityEngine_GameObject_o *touchBase; // x0
  __int64 v7; // x1
  UnityEngine_GameObject_o *v8; // x21
  UnityEngine_Transform_o *transform; // x22
  float x; // s11
  float y; // s12
  float z; // s13
  float v13; // s0
  float v14; // s1
  float v15; // s2
  float v16; // s8
  float v17; // s9
  float v18; // s10
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v26; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v27; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o identity; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4194A79 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_GameObject___, method);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v3);
    byte_4194A79 = 1;
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
                                              (const MethodInfo_2095E38 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !touchBase )
      goto LABEL_17;
    v8 = touchBase;
    transform = UnityEngine_GameObject__get_transform(touchBase, 0LL);
    touchBase = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v8, 0LL);
    if ( !touchBase )
      goto LABEL_17;
    localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)touchBase, 0LL);
    x = localPosition.fields.x;
    y = localPosition.fields.y;
    z = localPosition.fields.z;
    touchBase = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v8, 0LL);
    if ( !touchBase
      || (*(UnityEngine_Vector3_o *)&v13 = UnityEngine_Transform__get_localScale(
                                             (UnityEngine_Transform_o *)touchBase,
                                             0LL),
          (touchBase = this->fields.touchBase) == 0LL)
      || (v16 = v13,
          v17 = v14,
          v18 = v15,
          touchBase = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(touchBase, 0LL),
          !transform) )
    {
LABEL_17:
      sub_B2C434(touchBase, v7);
    }
    UnityEngine_Transform__set_parent(transform, (UnityEngine_Transform_o *)touchBase, 0LL);
    v26.fields.x = x + this->fields.touchObjPos.fields.x;
    v26.fields.y = y + this->fields.touchObjPos.fields.y;
    v26.fields.z = z + this->fields.touchObjPos.fields.z;
    UnityEngine_Transform__set_localPosition(transform, v26, 0LL);
    identity = UnityEngine_Quaternion__get_identity(0LL);
    UnityEngine_Transform__set_localRotation(transform, identity, 0LL);
    v27.fields.x = v16;
    v27.fields.y = v17;
    v27.fields.z = v18;
    UnityEngine_Transform__set_localScale(transform, v27, 0LL);
    this->fields.touchObject = v8;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.touchObject,
      (System_Int32_array **)v8,
      v19,
      v20,
      v21,
      v22,
      v23,
      v24);
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
    sub_B2C2F8(p_selectCallbackFunc, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
    System_Action__Invoke(v9, 0LL);
  }
}


void __fastcall TutorialNotificationMessage__Init(TutorialNotificationMessage_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *messageLabel; // x20
  __int64 v5; // x1
  UILabel_o *maskSprite; // x0
  UnityEngine_Object_o *touchObject; // x21
  UnityEngine_Object_o *v8; // x21
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_4194A75 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    sub_B2C35C(&StringLiteral_1/*""*/, v3);
    byte_4194A75 = 1;
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
    v8 = (UnityEngine_Object_o *)this->fields.touchObject;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35314896(v8, 0LL);
    this->fields.touchObject = 0LL;
    sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.touchObject, 0LL, v9, v10, v11, v12, v13, v14);
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
    sub_B2C434(maskSprite, v5);
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
  UnityEngine_Object_o *touchObject; // x21
  System_String_o *v10; // x1
  const MethodInfo *v11; // x2
  UnityEngine_Object_o *v12; // x21
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  NetworkManager_ResultCallbackFunc_o *v19; // x20
  TutorialSetRequest_o *Request_WarBoardWallAttackRequest; // x0
  __int64 v21; // x1
  const MethodInfo *v22; // x2

  if ( (byte_4194A7B & 1) == 0 )
  {
    sub_B2C35C(&Method_NetworkManager_getRequest_TutorialSetRequest___, method);
    sub_B2C35C(&NetworkManager_TypeInfo, v3);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v4);
    sub_B2C35C(&NetworkManager_ResultCallbackFunc_TypeInfo, v5);
    sub_B2C35C(&SoundManager_TypeInfo, v6);
    sub_B2C35C(&Method_TutorialNotificationMessage_EndTurorialRequest__, v7);
    sub_B2C35C(&StringLiteral_21218/*"ok"*/, v8);
    byte_4194A7B = 1;
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
      v12 = (UnityEngine_Object_o *)this->fields.touchObject;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_35314896(v12, 0LL);
      this->fields.touchObject = 0LL;
      sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.touchObject, 0LL, v13, v14, v15, v16, v17, v18);
      this->fields.touchObjPos = UnityEngine_Vector3__get_zero(0LL);
    }
    if ( this->fields.flagId == -1 )
    {
      TutorialNotificationMessage__EndTurorialRequest(this, v10, v11);
    }
    else
    {
      v19 = (NetworkManager_ResultCallbackFunc_o *)sub_B2C42C(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v19,
        (Il2CppObject *)this,
        Method_TutorialNotificationMessage_EndTurorialRequest__,
        0LL);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      Request_WarBoardWallAttackRequest = (TutorialSetRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                    v19,
                                                                    (const MethodInfo_1AB4500 *)Method_NetworkManager_getRequest_TutorialSetRequest___);
      if ( !Request_WarBoardWallAttackRequest )
        sub_B2C434(0LL, v21);
      TutorialSetRequest__beginRequest(Request_WarBoardWallAttackRequest, this->fields.flagId, v22);
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
  UnityEngine_Object_o *messageLabel; // x24
  __int64 v23; // x1
  const MethodInfo *v24; // x2
  void *transform; // x0
  System_String_o *v26; // x1
  int32_t messageDefaultFontSize; // w1
  System_Action_o *v28; // x0
  System_Action_o *v29; // x22
  __int64 *v30; // x8
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v32; // 0:s0.4,4:s1.4,8:s2.4

  y = messagePos.fields.y;
  x = messagePos.fields.x;
  if ( (byte_4194A76 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, message);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v18);
    sub_B2C35C(&Method_TutorialNotificationMessage_EndOpen__, v19);
    sub_B2C35C(&Method_TutorialNotificationMessage__Open_b__13_0__, v20);
    sub_B2C35C(&StringLiteral_1/*""*/, v21);
    byte_4194A76 = 1;
  }
  this->fields.selectCallbackFunc = selectCallback;
  sub_B2C2F8(
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
      v26 = message;
    else
      v26 = (System_String_o *)StringLiteral_1/*""*/;
    UILabel__set_text((UILabel_o *)transform, v26, 0LL);
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
        v32.fields.z = 0.0;
        v32.fields.x = x + this->fields.messageDefaultPosition.fields.x;
        v32.fields.y = y + this->fields.messageDefaultPosition.fields.y;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v32, 0LL);
        goto LABEL_25;
      }
    }
LABEL_29:
    sub_B2C434(transform, v23);
  }
LABEL_25:
  TutorialNotificationMessage__setTutorialMaskActive(this, 1, v24);
  this->fields.isButtonEnable = 0;
  v28 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  v29 = v28;
  if ( dispTouchSprite )
    v30 = &Method_TutorialNotificationMessage_EndOpen__;
  else
    v30 = &Method_TutorialNotificationMessage__Open_b__13_0__;
  System_Action___ctor(v28, (Il2CppObject *)this, *v30, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v29, maskType, 0LL);
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
  __int64 v14; // x1
  UnityEngine_Object_o *messageLabel; // x22
  __int64 v16; // x1
  const MethodInfo *v17; // x2
  void *transform; // x0
  System_String_o *v19; // x1
  int32_t messageDefaultFontSize; // w1
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v22; // 0:s0.4,4:s1.4,8:s2.4

  y = messagePos.fields.y;
  x = messagePos.fields.x;
  if ( (byte_4194A78 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, message);
    sub_B2C35C(&StringLiteral_1/*""*/, v14);
    byte_4194A78 = 1;
  }
  this->fields.selectCallbackFunc = 0LL;
  sub_B2C2F8(
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
    v19 = message;
  else
    v19 = (System_String_o *)StringLiteral_1/*""*/;
  UILabel__set_text((UILabel_o *)transform, v19, 0LL);
  transform = this->fields.messageLabel;
  if ( !transform
    || (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0LL)) == 0LL )
  {
LABEL_26:
    sub_B2C434(transform, v16);
  }
  v22.fields.z = 0.0;
  v22.fields.x = x + this->fields.messageDefaultPosition.fields.x;
  v22.fields.y = y + this->fields.messageDefaultPosition.fields.y;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v22, 0LL);
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
  TutorialNotificationMessage__setTutorialMaskActive(this, 0, v17);
  this->fields.isButtonEnable = 0;
  BaseDialog__Open((BaseDialog_o *)this, 0LL, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TutorialNotificationMessage__Open_46819196(
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
  __int64 v29; // x1
  const MethodInfo *v30; // x2
  UILabel_o *transform; // x0
  UILabel_o *v32; // x25
  int v33; // s0
  UILabel_o *v37; // x25
  int v38; // s0
  UILabel_o *v42; // x25
  int v43; // s0
  int32_t v47; // w1
  System_String_o *v48; // x1
  int32_t messageDefaultFontSize; // w1
  ExUITexture_o *backTexture; // x21
  Il2CppObject *v51; // x0
  System_String_o *v52; // x20
  System_Action_o *v53; // x22
  System_Action_o *v54; // x20
  UnityEngine_Color32_o v55; // [xsp+0h] [xbp-80h] BYREF
  UnityEngine_Color32_o v56; // [xsp+8h] [xbp-78h] BYREF
  UnityEngine_Color32_o c; // [xsp+18h] [xbp-68h] BYREF
  UnityEngine_Color32_o p_c; // 0:x0.8
  UnityEngine_Color32_o rgba; // 0:x0.8
  UnityEngine_Color32_o v60; // 0:x0.8
  UnityEngine_Color32_o v61; // 0:x0.8
  UnityEngine_Color32_o v62; // 0:x0.8
  UnityEngine_Color32_o v63; // 0:x0.8
  UnityEngine_Vector2_o v64; // 0:s0.4,4:s1.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v66; // 0:s0.4,4:s1.4,8:s2.4

  z = touchObjPos.fields.z;
  y = touchObjPos.fields.y;
  x = touchObjPos.fields.x;
  v18 = messagePos.fields.y;
  v19 = messagePos.fields.x;
  if ( (byte_4194A77 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, message);
    sub_B2C35C(&int_TypeInfo, v22);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v23);
    sub_B2C35C(&Method_TutorialNotificationMessage_EndOpen__, v24);
    sub_B2C35C(&Method_TutorialNotificationMessage__Open_b__14_0__, v25);
    sub_B2C35C(&StringLiteral_1/*""*/, v26);
    sub_B2C35C(&StringLiteral_2654/*"Back/back{0}"*/, v27);
    byte_4194A77 = 1;
  }
  this->fields.selectCallbackFunc = callback;
  sub_B2C2F8(
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
    v32 = this->fields.messageLabel;
    p_c = (UnityEngine_Color32_o)&c;
    c.fields.rgba = 0;
    UnityEngine_Color32___ctor(p_c, 0x54u, 0x4Au, 8u, 0xFFu, 0LL);
    rgba = (UnityEngine_Color32_o)(unsigned int)c.fields.rgba;
    *(UnityEngine_Color_o *)&v33 = UnityEngine_Color32__op_Implicit_40636156(rgba, 0LL);
    if ( !v32 )
      goto LABEL_51;
    UILabel__set_gradientTop(v32, *(UnityEngine_Color_o *)&v33, 0LL);
    v37 = this->fields.messageLabel;
    v60 = (UnityEngine_Color32_o)&v56;
    v56.fields.rgba = 0;
    UnityEngine_Color32___ctor(v60, 0x1Cu, 0, 0, 0xFFu, 0LL);
    v61 = (UnityEngine_Color32_o)(unsigned int)v56.fields.rgba;
    *(UnityEngine_Color_o *)&v38 = UnityEngine_Color32__op_Implicit_40636156(v61, 0LL);
    if ( !v37 )
      goto LABEL_51;
    UILabel__set_gradientBottom(v37, *(UnityEngine_Color_o *)&v38, 0LL);
    transform = this->fields.messageLabel;
    if ( !transform )
      goto LABEL_51;
    UILabel__set_spacingY(transform, 11, 0LL);
    transform = this->fields.messageLabel;
    if ( !transform )
      goto LABEL_51;
    UILabel__set_effectStyle(transform, 2, 0LL);
    v42 = this->fields.messageLabel;
    v62 = (UnityEngine_Color32_o)&v55;
    v55.fields.rgba = 0;
    UnityEngine_Color32___ctor(v62, 0x78u, 0x54u, 0x27u, 0xFu, 0LL);
    v63 = (UnityEngine_Color32_o)(unsigned int)v55.fields.rgba;
    *(UnityEngine_Color_o *)&v43 = UnityEngine_Color32__op_Implicit_40636156(v63, 0LL);
    if ( !v42 )
      goto LABEL_51;
    UILabel__set_effectColor(v42, *(UnityEngine_Color_o *)&v43, 0LL);
    transform = this->fields.messageLabel;
    if ( !transform )
      goto LABEL_51;
    v64.fields.x = 3.0;
    v64.fields.y = 3.0;
    UILabel__set_effectDistance(transform, v64, 0LL);
    transform = this->fields.messageLabel;
    if ( !transform )
      goto LABEL_51;
    UIWidget__set_height((UIWidget_o *)transform, 543, 0LL);
    transform = this->fields.messageLabel;
    if ( !transform )
      goto LABEL_51;
    v47 = alignment;
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
    v47 = 2;
  }
  UILabel__set_alignment(transform, v47, 0LL);
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
    v48 = message;
  else
    v48 = (System_String_o *)StringLiteral_1/*""*/;
  UILabel__set_text(transform, v48, 0LL);
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
    sub_B2C434(transform, v29);
  }
  v66.fields.z = 0.0;
  v66.fields.x = v19 + this->fields.messageDefaultPosition.fields.x;
  v66.fields.y = v18 + this->fields.messageDefaultPosition.fields.y;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v66, 0LL);
LABEL_44:
  TutorialNotificationMessage__setTutorialMaskActive(this, 1, v30);
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
  v51 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &c);
  v52 = System_String__Format((System_String_o *)StringLiteral_2654/*"Back/back{0}"*/, v51, 0LL);
  v53 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v53, (Il2CppObject *)this, Method_TutorialNotificationMessage__Open_b__14_0__, 0LL);
  if ( !backTexture )
    goto LABEL_51;
  if ( !ExUITexture__SetAssetImage(backTexture, v52, v53, 0LL) )
  {
LABEL_48:
    transform = (UILabel_o *)this->fields.backTexture;
    if ( !transform )
      goto LABEL_51;
    ExUITexture__ClearImage((ExUITexture_o *)transform, 0LL);
    v54 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(v54, (Il2CppObject *)this, Method_TutorialNotificationMessage_EndOpen__, 0LL);
    BaseDialog__Open((BaseDialog_o *)this, v54, 1, 0LL);
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
  __int64 v3; // x1
  System_Action_o *v4; // x20

  if ( (byte_4194A7D & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_TutorialNotificationMessage_EndOpen__, v3);
    byte_4194A7D = 1;
  }
  v4 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_TutorialNotificationMessage_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v4, 1, 0LL);
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
    sub_B2C434(maskSprite, active);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskSprite, active, 0LL);
}