void __fastcall TutorialNotificationMessage___ctor(TutorialNotificationMessage_o *this, const MethodInfo *method)
{
  if ( (byte_4221F86 & 1) == 0 )
  {
    sub_B0D8A4(&BaseDialog_TypeInfo, method);
    byte_4221F86 = 1;
  }
  this->fields.messageDefaultFontSize = -1;
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall TutorialNotificationMessage__Close(TutorialNotificationMessage_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  TutorialNotificationMessage__Close_47115264(this, 0LL, v2);
}


void __fastcall TutorialNotificationMessage__Close_47115264(
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
  __int64 v11; // x1
  __int64 v12; // x2
  System_Action_o *v13; // x20

  if ( (byte_4221F84 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, callback);
    sub_B0D8A4(&Method_TutorialNotificationMessage_EndClose__, v10);
    byte_4221F84 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.isButtonEnable = 0;
  v13 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v11, v12);
  System_Action___ctor(v13, (Il2CppObject *)this, Method_TutorialNotificationMessage_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v13, 0LL);
}


void __fastcall TutorialNotificationMessage__EndClose(TutorialNotificationMessage_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  BattleServantConfConponent_o *p_closeCallbackFunc; // x19
  System_Action_o *v11; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  TutorialNotificationMessage__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B0D97C(0LL);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc;
  v11 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0LL;
    sub_B0D840(p_closeCallbackFunc, 0LL, v4, v5, v6, v7, v8, v9);
    System_Action__Invoke(v11, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TutorialNotificationMessage__EndOpen(TutorialNotificationMessage_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *touchObject; // x21
  struct UnityEngine_GameObject_o *touchPrefab; // x21
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
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v25; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v26; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o identity; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4221F83 & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_Object_Instantiate_GameObject___, method);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v3);
    byte_4221F83 = 1;
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
                                              (const MethodInfo_204A984 *)Method_UnityEngine_Object_Instantiate_GameObject___);
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
      sub_B0D97C(touchBase);
    }
    UnityEngine_Transform__set_parent(transform, (UnityEngine_Transform_o *)touchBase, 0LL);
    v25.fields.x = x + this->fields.touchObjPos.fields.x;
    v25.fields.y = y + this->fields.touchObjPos.fields.y;
    v25.fields.z = z + this->fields.touchObjPos.fields.z;
    UnityEngine_Transform__set_localPosition(transform, v25, 0LL);
    identity = UnityEngine_Quaternion__get_identity(0LL);
    UnityEngine_Transform__set_localRotation(transform, identity, 0LL);
    v26.fields.x = v15;
    v26.fields.y = v16;
    v26.fields.z = v17;
    UnityEngine_Transform__set_localScale(transform, v26, 0LL);
    this->fields.touchObject = v7;
    sub_B0D840(
      (BattleServantConfConponent_o *)&this->fields.touchObject,
      (System_Int32_array **)v7,
      v18,
      v19,
      v20,
      v21,
      v22,
      v23);
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
    sub_B0D840(p_selectCallbackFunc, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
    System_Action__Invoke(v9, 0LL);
  }
}


void __fastcall TutorialNotificationMessage__Init(TutorialNotificationMessage_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *messageLabel; // x20
  UILabel_o *maskSprite; // x0
  UnityEngine_Object_o *touchObject; // x21
  UnityEngine_Object_o *v7; // x21
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_4221F7F & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    sub_B0D8A4(&StringLiteral_1/*""*/, v3);
    byte_4221F7F = 1;
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
    v7 = (UnityEngine_Object_o *)this->fields.touchObject;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_34935276(v7, 0LL);
    this->fields.touchObject = 0LL;
    sub_B0D840((BattleServantConfConponent_o *)&this->fields.touchObject, 0LL, v8, v9, v10, v11, v12, v13);
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
    sub_B0D97C(maskSprite);
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
  const MethodInfo *v21; // x2

  if ( (byte_4221F85 & 1) == 0 )
  {
    sub_B0D8A4(&Method_NetworkManager_getRequest_TutorialSetRequest___, method);
    sub_B0D8A4(&NetworkManager_TypeInfo, v3);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v4);
    sub_B0D8A4(&NetworkManager_ResultCallbackFunc_TypeInfo, v5);
    sub_B0D8A4(&SoundManager_TypeInfo, v6);
    sub_B0D8A4(&Method_TutorialNotificationMessage_EndTurorialRequest__, v7);
    sub_B0D8A4(&StringLiteral_21287/*"ok"*/, v8);
    byte_4221F85 = 1;
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
      UnityEngine_Object__Destroy_34935276(v12, 0LL);
      this->fields.touchObject = 0LL;
      sub_B0D840((BattleServantConfConponent_o *)&this->fields.touchObject, 0LL, v13, v14, v15, v16, v17, v18);
      this->fields.touchObjPos = UnityEngine_Vector3__get_zero(0LL);
    }
    if ( this->fields.flagId == -1 )
    {
      TutorialNotificationMessage__EndTurorialRequest(this, v10, v11);
    }
    else
    {
      v19 = (NetworkManager_ResultCallbackFunc_o *)sub_B0D974(NetworkManager_ResultCallbackFunc_TypeInfo, v10, v11);
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
                                                                    (const MethodInfo_2049D98 *)Method_NetworkManager_getRequest_TutorialSetRequest___);
      if ( !Request_WarBoardWallAttackRequest )
        sub_B0D97C(0LL);
      TutorialSetRequest__beginRequest(Request_WarBoardWallAttackRequest, this->fields.flagId, v21);
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
  const MethodInfo *v23; // x2
  void *transform; // x0
  System_String_o *v25; // x1
  int32_t messageDefaultFontSize; // w1
  __int64 v27; // x1
  __int64 v28; // x2
  System_Action_o *v29; // x0
  System_Action_o *v30; // x22
  __int64 *v31; // x8
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v33; // 0:s0.4,4:s1.4,8:s2.4

  y = messagePos.fields.y;
  x = messagePos.fields.x;
  if ( (byte_4221F80 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, message);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v18);
    sub_B0D8A4(&Method_TutorialNotificationMessage_EndOpen__, v19);
    sub_B0D8A4(&Method_TutorialNotificationMessage__Open_b__13_0__, v20);
    sub_B0D8A4(&StringLiteral_1/*""*/, v21);
    byte_4221F80 = 1;
  }
  this->fields.selectCallbackFunc = selectCallback;
  sub_B0D840(
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
      v25 = message;
    else
      v25 = (System_String_o *)StringLiteral_1/*""*/;
    UILabel__set_text((UILabel_o *)transform, v25, 0LL);
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
        v33.fields.z = 0.0;
        v33.fields.x = x + this->fields.messageDefaultPosition.fields.x;
        v33.fields.y = y + this->fields.messageDefaultPosition.fields.y;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v33, 0LL);
        goto LABEL_25;
      }
    }
LABEL_29:
    sub_B0D97C(transform);
  }
LABEL_25:
  TutorialNotificationMessage__setTutorialMaskActive(this, 1, v23);
  this->fields.isButtonEnable = 0;
  v29 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v27, v28);
  v30 = v29;
  if ( dispTouchSprite )
    v31 = &Method_TutorialNotificationMessage_EndOpen__;
  else
    v31 = &Method_TutorialNotificationMessage__Open_b__13_0__;
  System_Action___ctor(v29, (Il2CppObject *)this, *v31, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v30, maskType, 0LL);
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
  const MethodInfo *v16; // x2
  void *transform; // x0
  System_String_o *v18; // x1
  int32_t messageDefaultFontSize; // w1
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v21; // 0:s0.4,4:s1.4,8:s2.4

  y = messagePos.fields.y;
  x = messagePos.fields.x;
  if ( (byte_4221F82 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, message);
    sub_B0D8A4(&StringLiteral_1/*""*/, v14);
    byte_4221F82 = 1;
  }
  this->fields.selectCallbackFunc = 0LL;
  sub_B0D840(
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
    v18 = message;
  else
    v18 = (System_String_o *)StringLiteral_1/*""*/;
  UILabel__set_text((UILabel_o *)transform, v18, 0LL);
  transform = this->fields.messageLabel;
  if ( !transform
    || (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0LL)) == 0LL )
  {
LABEL_26:
    sub_B0D97C(transform);
  }
  v21.fields.z = 0.0;
  v21.fields.x = x + this->fields.messageDefaultPosition.fields.x;
  v21.fields.y = y + this->fields.messageDefaultPosition.fields.y;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v21, 0LL);
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
  TutorialNotificationMessage__setTutorialMaskActive(this, 0, v16);
  this->fields.isButtonEnable = 0;
  BaseDialog__Open((BaseDialog_o *)this, 0LL, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TutorialNotificationMessage__Open_47113196(
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
  UILabel_o *v31; // x25
  int v32; // s0
  UILabel_o *v36; // x25
  int v37; // s0
  UILabel_o *v41; // x25
  int v42; // s0
  int32_t v46; // w1
  System_String_o *v47; // x1
  int32_t messageDefaultFontSize; // w1
  ExUITexture_o *backTexture; // x21
  Il2CppObject *v50; // x0
  System_String_o *v51; // x20
  __int64 v52; // x1
  __int64 v53; // x2
  System_Action_o *v54; // x22
  __int64 v55; // x1
  __int64 v56; // x2
  System_Action_o *v57; // x20
  UnityEngine_Color32_o v58; // [xsp+0h] [xbp-80h] BYREF
  UnityEngine_Color32_o v59; // [xsp+8h] [xbp-78h] BYREF
  UnityEngine_Color32_o c; // [xsp+18h] [xbp-68h] BYREF
  UnityEngine_Color32_o p_c; // 0:x0.8
  UnityEngine_Color32_o rgba; // 0:x0.8
  UnityEngine_Color32_o v63; // 0:x0.8
  UnityEngine_Color32_o v64; // 0:x0.8
  UnityEngine_Color32_o v65; // 0:x0.8
  UnityEngine_Color32_o v66; // 0:x0.8
  UnityEngine_Vector2_o v67; // 0:s0.4,4:s1.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v69; // 0:s0.4,4:s1.4,8:s2.4

  z = touchObjPos.fields.z;
  y = touchObjPos.fields.y;
  x = touchObjPos.fields.x;
  v18 = messagePos.fields.y;
  v19 = messagePos.fields.x;
  if ( (byte_4221F81 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, message);
    sub_B0D8A4(&int_TypeInfo, v22);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v23);
    sub_B0D8A4(&Method_TutorialNotificationMessage_EndOpen__, v24);
    sub_B0D8A4(&Method_TutorialNotificationMessage__Open_b__14_0__, v25);
    sub_B0D8A4(&StringLiteral_1/*""*/, v26);
    sub_B0D8A4(&StringLiteral_2665/*"Back/back{0}"*/, v27);
    byte_4221F81 = 1;
  }
  this->fields.selectCallbackFunc = callback;
  sub_B0D840(
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
    v31 = this->fields.messageLabel;
    p_c = (UnityEngine_Color32_o)&c;
    c.fields.rgba = 0;
    UnityEngine_Color32___ctor(p_c, 0x54u, 0x4Au, 8u, 0xFFu, 0LL);
    rgba = (UnityEngine_Color32_o)(unsigned int)c.fields.rgba;
    *(UnityEngine_Color_o *)&v32 = UnityEngine_Color32__op_Implicit_40760496(rgba, 0LL);
    if ( !v31 )
      goto LABEL_51;
    UILabel__set_gradientTop(v31, *(UnityEngine_Color_o *)&v32, 0LL);
    v36 = this->fields.messageLabel;
    v63 = (UnityEngine_Color32_o)&v59;
    v59.fields.rgba = 0;
    UnityEngine_Color32___ctor(v63, 0x1Cu, 0, 0, 0xFFu, 0LL);
    v64 = (UnityEngine_Color32_o)(unsigned int)v59.fields.rgba;
    *(UnityEngine_Color_o *)&v37 = UnityEngine_Color32__op_Implicit_40760496(v64, 0LL);
    if ( !v36 )
      goto LABEL_51;
    UILabel__set_gradientBottom(v36, *(UnityEngine_Color_o *)&v37, 0LL);
    transform = this->fields.messageLabel;
    if ( !transform )
      goto LABEL_51;
    UILabel__set_spacingY(transform, 11, 0LL);
    transform = this->fields.messageLabel;
    if ( !transform )
      goto LABEL_51;
    UILabel__set_effectStyle(transform, 2, 0LL);
    v41 = this->fields.messageLabel;
    v65 = (UnityEngine_Color32_o)&v58;
    v58.fields.rgba = 0;
    UnityEngine_Color32___ctor(v65, 0x78u, 0x54u, 0x27u, 0xFu, 0LL);
    v66 = (UnityEngine_Color32_o)(unsigned int)v58.fields.rgba;
    *(UnityEngine_Color_o *)&v42 = UnityEngine_Color32__op_Implicit_40760496(v66, 0LL);
    if ( !v41 )
      goto LABEL_51;
    UILabel__set_effectColor(v41, *(UnityEngine_Color_o *)&v42, 0LL);
    transform = this->fields.messageLabel;
    if ( !transform )
      goto LABEL_51;
    v67.fields.x = 3.0;
    v67.fields.y = 3.0;
    UILabel__set_effectDistance(transform, v67, 0LL);
    transform = this->fields.messageLabel;
    if ( !transform )
      goto LABEL_51;
    UIWidget__set_height((UIWidget_o *)transform, 543, 0LL);
    transform = this->fields.messageLabel;
    if ( !transform )
      goto LABEL_51;
    v46 = alignment;
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
    v46 = 2;
  }
  UILabel__set_alignment(transform, v46, 0LL);
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
    v47 = message;
  else
    v47 = (System_String_o *)StringLiteral_1/*""*/;
  UILabel__set_text(transform, v47, 0LL);
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
    sub_B0D97C(transform);
  }
  v69.fields.z = 0.0;
  v69.fields.x = v19 + this->fields.messageDefaultPosition.fields.x;
  v69.fields.y = v18 + this->fields.messageDefaultPosition.fields.y;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v69, 0LL);
LABEL_44:
  TutorialNotificationMessage__setTutorialMaskActive(this, 1, v29);
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
  v50 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &c);
  v51 = System_String__Format((System_String_o *)StringLiteral_2665/*"Back/back{0}"*/, v50, 0LL);
  v54 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v52, v53);
  System_Action___ctor(v54, (Il2CppObject *)this, Method_TutorialNotificationMessage__Open_b__14_0__, 0LL);
  if ( !backTexture )
    goto LABEL_51;
  if ( !ExUITexture__SetAssetImage(backTexture, v51, v54, 0LL) )
  {
LABEL_48:
    transform = (UILabel_o *)this->fields.backTexture;
    if ( !transform )
      goto LABEL_51;
    ExUITexture__ClearImage((ExUITexture_o *)transform, 0LL);
    v57 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v55, v56);
    System_Action___ctor(v57, (Il2CppObject *)this, Method_TutorialNotificationMessage_EndOpen__, 0LL);
    BaseDialog__Open((BaseDialog_o *)this, v57, 1, 0LL);
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

  if ( (byte_4221F87 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&Method_TutorialNotificationMessage_EndOpen__, v4);
    byte_4221F87 = 1;
  }
  v5 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, method, v2);
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
    sub_B0D97C(maskSprite);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskSprite, active, 0LL);
}