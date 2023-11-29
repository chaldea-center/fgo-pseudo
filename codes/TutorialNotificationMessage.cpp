void __fastcall TutorialNotificationMessage___ctor(TutorialNotificationMessage_o *this, const MethodInfo *method)
{
  if ( (byte_40FB92A & 1) == 0 )
  {
    sub_B16FFC(&BaseDialog_TypeInfo, method);
    byte_40FB92A = 1;
  }
  this->fields.messageDefaultFontSize = -1;
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall TutorialNotificationMessage__Close(TutorialNotificationMessage_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  TutorialNotificationMessage__Close_28031728(this, 0LL, v2);
}


void __fastcall TutorialNotificationMessage__Close_28031728(
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
  __int64 v13; // x3
  __int64 v14; // x4
  System_Action_o *v15; // x20

  if ( (byte_40FB928 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, callback);
    sub_B16FFC(&Method_TutorialNotificationMessage_EndClose__, v10);
    byte_40FB928 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.isButtonEnable = 0;
  v15 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v11, v12, v13, v14);
  System_Action___ctor(v15, (Il2CppObject *)this, Method_TutorialNotificationMessage_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v15, 0LL);
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
    sub_B170D4();
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc;
  v11 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0LL;
    sub_B16F98(p_closeCallbackFunc, 0LL, v4, v5, v6, v7, v8, v9);
    System_Action__Invoke(v11, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TutorialNotificationMessage__EndOpen(TutorialNotificationMessage_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *touchObject; // x21
  struct UnityEngine_GameObject_o *touchPrefab; // x21
  UnityEngine_GameObject_o *v6; // x0
  UnityEngine_GameObject_o *v7; // x21
  UnityEngine_Transform_o *transform; // x22
  UnityEngine_Transform_o *v9; // x0
  float x; // s11
  float y; // s12
  float z; // s13
  UnityEngine_Transform_o *v13; // x0
  float v14; // s0
  float v15; // s1
  float v16; // s2
  UnityEngine_GameObject_o *touchBase; // x0
  float v18; // s8
  float v19; // s9
  float v20; // s10
  UnityEngine_Transform_o *v21; // x0
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v29; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v30; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o identity; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_40FB927 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject___, method);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v3);
    byte_40FB927 = 1;
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
    v6 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                       (UnityEngine_UI_Dropdown_DropdownItem_o *)touchPrefab,
                                       (const MethodInfo_19DE20C *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !v6 )
      goto LABEL_17;
    v7 = v6;
    transform = UnityEngine_GameObject__get_transform(v6, 0LL);
    v9 = UnityEngine_GameObject__get_transform(v7, 0LL);
    if ( !v9 )
      goto LABEL_17;
    localPosition = UnityEngine_Transform__get_localPosition(v9, 0LL);
    x = localPosition.fields.x;
    y = localPosition.fields.y;
    z = localPosition.fields.z;
    v13 = UnityEngine_GameObject__get_transform(v7, 0LL);
    if ( !v13
      || (*(UnityEngine_Vector3_o *)&v14 = UnityEngine_Transform__get_localScale(v13, 0LL),
          (touchBase = this->fields.touchBase) == 0LL)
      || (v18 = v14, v19 = v15, v20 = v16, v21 = UnityEngine_GameObject__get_transform(touchBase, 0LL), !transform) )
    {
LABEL_17:
      sub_B170D4();
    }
    UnityEngine_Transform__set_parent(transform, v21, 0LL);
    v29.fields.x = x + this->fields.touchObjPos.fields.x;
    v29.fields.y = y + this->fields.touchObjPos.fields.y;
    v29.fields.z = z + this->fields.touchObjPos.fields.z;
    UnityEngine_Transform__set_localPosition(transform, v29, 0LL);
    identity = UnityEngine_Quaternion__get_identity(0LL);
    UnityEngine_Transform__set_localRotation(transform, identity, 0LL);
    v30.fields.x = v18;
    v30.fields.y = v19;
    v30.fields.z = v20;
    UnityEngine_Transform__set_localScale(transform, v30, 0LL);
    this->fields.touchObject = v7;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.touchObject,
      (System_Int32_array **)v7,
      v22,
      v23,
      v24,
      v25,
      v26,
      v27);
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
    sub_B16F98(p_selectCallbackFunc, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
    System_Action__Invoke(v9, 0LL);
  }
}


void __fastcall TutorialNotificationMessage__Init(TutorialNotificationMessage_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *messageLabel; // x20
  UILabel_o *v5; // x0
  UnityEngine_Object_o *touchObject; // x21
  UnityEngine_Object_o *v7; // x21
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  struct UISprite_o *maskSprite; // x0
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_40FB923 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    sub_B16FFC(&StringLiteral_1, v3);
    byte_40FB923 = 1;
  }
  messageLabel = (UnityEngine_Object_o *)this->fields.messageLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(messageLabel, 0LL, 0LL) )
  {
    v5 = this->fields.messageLabel;
    if ( !v5 )
      goto LABEL_20;
    UILabel__set_text(v5, (System_String_o *)StringLiteral_1, 0LL);
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
    UnityEngine_Object__Destroy_34809464(v7, 0LL);
    this->fields.touchObject = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)&this->fields.touchObject, 0LL, v8, v9, v10, v11, v12, v13);
    this->fields.touchObjPos = UnityEngine_Vector3__get_zero(0LL);
  }
  maskSprite = this->fields.maskSprite;
  if ( !maskSprite
    || (((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer, float))maskSprite->klass->vtable._8_set_alpha.method)(
          maskSprite,
          maskSprite->klass->vtable._9_CalculateFinalAlpha.methodPtr,
          1.0),
        this->fields.isButtonEnable = 0,
        (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
LABEL_20:
    sub_B170D4();
  }
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
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
  __int64 v12; // x3
  __int64 v13; // x4
  UnityEngine_Object_o *v14; // x21
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  NetworkManager_ResultCallbackFunc_o *v21; // x20
  TutorialSetRequest_o *Request_WarBoardWallAttackRequest; // x0

  if ( (byte_40FB929 & 1) == 0 )
  {
    sub_B16FFC(&Method_NetworkManager_getRequest_TutorialSetRequest___, method);
    sub_B16FFC(&NetworkManager_TypeInfo, v3);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v4);
    sub_B16FFC(&NetworkManager_ResultCallbackFunc_TypeInfo, v5);
    sub_B16FFC(&SoundManager_TypeInfo, v6);
    sub_B16FFC(&Method_TutorialNotificationMessage_EndTurorialRequest__, v7);
    sub_B16FFC(&StringLiteral_21129, v8);
    byte_40FB929 = 1;
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
      v14 = (UnityEngine_Object_o *)this->fields.touchObject;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_34809464(v14, 0LL);
      this->fields.touchObject = 0LL;
      sub_B16F98((BattleServantConfConponent_o *)&this->fields.touchObject, 0LL, v15, v16, v17, v18, v19, v20);
      this->fields.touchObjPos = UnityEngine_Vector3__get_zero(0LL);
    }
    if ( this->fields.flagId == -1 )
    {
      TutorialNotificationMessage__EndTurorialRequest(this, v10, v11);
    }
    else
    {
      v21 = (NetworkManager_ResultCallbackFunc_o *)sub_B170CC(
                                                     NetworkManager_ResultCallbackFunc_TypeInfo,
                                                     v10,
                                                     v11,
                                                     v12,
                                                     v13);
      NetworkManager_ResultCallbackFunc___ctor(
        v21,
        (Il2CppObject *)this,
        Method_TutorialNotificationMessage_EndTurorialRequest__,
        0LL);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      Request_WarBoardWallAttackRequest = (TutorialSetRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                    v21,
                                                                    (const MethodInfo_19DD960 *)Method_NetworkManager_getRequest_TutorialSetRequest___);
      if ( !Request_WarBoardWallAttackRequest )
        sub_B170D4();
      TutorialSetRequest__beginRequest(Request_WarBoardWallAttackRequest, this->fields.flagId, 0LL);
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
  struct UILabel_o *v24; // x0
  UnityEngine_Transform_o *transform; // x0
  System_String_o *v26; // x1
  UILabel_o *v27; // x0
  int32_t messageDefaultFontSize; // w1
  UnityEngine_Component_o *v29; // x0
  UnityEngine_Transform_o *v30; // x0
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x3
  __int64 v34; // x4
  System_Action_o *v35; // x0
  System_Action_o *v36; // x22
  __int64 *v37; // x8
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v39; // 0:s0.4,4:s1.4,8:s2.4

  y = messagePos.fields.y;
  x = messagePos.fields.x;
  if ( (byte_40FB924 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, message);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v18);
    sub_B16FFC(&Method_TutorialNotificationMessage_EndOpen__, v19);
    sub_B16FFC(&Method_TutorialNotificationMessage__Open_b__13_0__, v20);
    sub_B16FFC(&StringLiteral_1, v21);
    byte_40FB924 = 1;
  }
  this->fields.selectCallbackFunc = selectCallback;
  sub_B16F98(
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
    v24 = this->fields.messageLabel;
    if ( (this->fields.messageDefaultFontSize & 0x80000000) != 0 )
    {
      if ( !v24 )
        goto LABEL_29;
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v24, 0LL);
      if ( !transform )
        goto LABEL_29;
      localPosition = UnityEngine_Transform__get_localPosition(transform, 0LL);
      v24 = this->fields.messageLabel;
      this->fields.messageDefaultPosition.fields.x = localPosition.fields.x;
      this->fields.messageDefaultPosition.fields.y = localPosition.fields.y;
      if ( !v24 )
        goto LABEL_29;
      this->fields.messageDefaultFontSize = v24->fields.mFontSize;
    }
    else if ( !v24 )
    {
      goto LABEL_29;
    }
    if ( message )
      v26 = message;
    else
      v26 = (System_String_o *)StringLiteral_1;
    UILabel__set_text(v24, v26, 0LL);
    v27 = this->fields.messageLabel;
    if ( fontSize < 1 )
    {
      if ( !v27 )
        goto LABEL_29;
      messageDefaultFontSize = this->fields.messageDefaultFontSize;
    }
    else
    {
      if ( !v27 )
        goto LABEL_29;
      messageDefaultFontSize = fontSize;
    }
    UILabel__set_fontSize(v27, messageDefaultFontSize, 0LL);
    v29 = (UnityEngine_Component_o *)this->fields.messageLabel;
    if ( v29 )
    {
      v30 = UnityEngine_Component__get_transform(v29, 0LL);
      if ( v30 )
      {
        v39.fields.z = 0.0;
        v39.fields.x = x + this->fields.messageDefaultPosition.fields.x;
        v39.fields.y = y + this->fields.messageDefaultPosition.fields.y;
        UnityEngine_Transform__set_localPosition(v30, v39, 0LL);
        goto LABEL_25;
      }
    }
LABEL_29:
    sub_B170D4();
  }
LABEL_25:
  TutorialNotificationMessage__setTutorialMaskActive(this, 1, v23);
  this->fields.isButtonEnable = 0;
  v35 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v31, v32, v33, v34);
  v36 = v35;
  if ( dispTouchSprite )
    v37 = &Method_TutorialNotificationMessage_EndOpen__;
  else
    v37 = &Method_TutorialNotificationMessage__Open_b__13_0__;
  System_Action___ctor(v35, (Il2CppObject *)this, *v37, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v36, maskType, 0LL);
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
  struct UILabel_o *v17; // x0
  UnityEngine_Transform_o *transform; // x0
  System_String_o *v19; // x1
  UnityEngine_Component_o *v20; // x0
  UnityEngine_Transform_o *v21; // x0
  UILabel_o *v22; // x0
  int32_t messageDefaultFontSize; // w1
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v25; // 0:s0.4,4:s1.4,8:s2.4

  y = messagePos.fields.y;
  x = messagePos.fields.x;
  if ( (byte_40FB926 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, message);
    sub_B16FFC(&StringLiteral_1, v14);
    byte_40FB926 = 1;
  }
  this->fields.selectCallbackFunc = 0LL;
  sub_B16F98(
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
  v17 = this->fields.messageLabel;
  if ( (this->fields.messageDefaultFontSize & 0x80000000) != 0 )
  {
    if ( !v17 )
      goto LABEL_26;
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v17, 0LL);
    if ( !transform )
      goto LABEL_26;
    localPosition = UnityEngine_Transform__get_localPosition(transform, 0LL);
    v17 = this->fields.messageLabel;
    this->fields.messageDefaultPosition.fields.x = localPosition.fields.x;
    this->fields.messageDefaultPosition.fields.y = localPosition.fields.y;
    if ( !v17 )
      goto LABEL_26;
    this->fields.messageDefaultFontSize = v17->fields.mFontSize;
  }
  else if ( !v17 )
  {
    goto LABEL_26;
  }
  if ( message )
    v19 = message;
  else
    v19 = (System_String_o *)StringLiteral_1;
  UILabel__set_text(v17, v19, 0LL);
  v20 = (UnityEngine_Component_o *)this->fields.messageLabel;
  if ( !v20 || (v21 = UnityEngine_Component__get_transform(v20, 0LL)) == 0LL )
LABEL_26:
    sub_B170D4();
  v25.fields.z = 0.0;
  v25.fields.x = x + this->fields.messageDefaultPosition.fields.x;
  v25.fields.y = y + this->fields.messageDefaultPosition.fields.y;
  UnityEngine_Transform__set_localPosition(v21, v25, 0LL);
  v22 = this->fields.messageLabel;
  if ( (fontSize & 0x80000000) != 0 )
  {
    if ( !v22 )
      goto LABEL_26;
    messageDefaultFontSize = this->fields.messageDefaultFontSize;
  }
  else
  {
    if ( !v22 )
      goto LABEL_26;
    messageDefaultFontSize = fontSize;
  }
  UILabel__set_fontSize(v22, messageDefaultFontSize, 0LL);
LABEL_25:
  TutorialNotificationMessage__setTutorialMaskActive(this, 0, v16);
  this->fields.isButtonEnable = 0;
  BaseDialog__Open((BaseDialog_o *)this, 0LL, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TutorialNotificationMessage__Open_28029660(
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
  UILabel_o *v30; // x0
  UILabel_o *v31; // x25
  int v32; // s0
  UILabel_o *v36; // x25
  int v37; // s0
  UILabel_o *v41; // x0
  UILabel_o *v42; // x0
  UILabel_o *v43; // x25
  int v44; // s0
  UILabel_o *v48; // x0
  UIWidget_o *v49; // x0
  UILabel_o *v50; // x0
  int32_t v51; // w1
  UILabel_o *v52; // x0
  UILabel_o *v53; // x0
  UIWidget_o *v54; // x0
  struct UILabel_o *v55; // x0
  UnityEngine_Transform_o *transform; // x0
  System_String_o *v57; // x1
  UILabel_o *v58; // x0
  int32_t messageDefaultFontSize; // w1
  UILabel_o *v60; // x0
  UnityEngine_Component_o *v61; // x0
  UnityEngine_Transform_o *v62; // x0
  struct UISprite_o *maskSprite; // x0
  ExUITexture_o *backTexture; // x21
  Il2CppObject *v65; // x0
  System_String_o *v66; // x20
  __int64 v67; // x1
  __int64 v68; // x2
  __int64 v69; // x3
  __int64 v70; // x4
  System_Action_o *v71; // x22
  ExUITexture_o *v72; // x0
  __int64 v73; // x1
  __int64 v74; // x2
  __int64 v75; // x3
  __int64 v76; // x4
  System_Action_o *v77; // x20
  UnityEngine_Color32_o v78; // [xsp+0h] [xbp-80h] BYREF
  UnityEngine_Color32_o v79; // [xsp+8h] [xbp-78h] BYREF
  UnityEngine_Color32_o c; // [xsp+18h] [xbp-68h] BYREF
  UnityEngine_Color32_o p_c; // 0:x0.8
  UnityEngine_Color32_o rgba; // 0:x0.8
  UnityEngine_Color32_o v83; // 0:x0.8
  UnityEngine_Color32_o v84; // 0:x0.8
  UnityEngine_Color32_o v85; // 0:x0.8
  UnityEngine_Color32_o v86; // 0:x0.8
  UnityEngine_Vector2_o v87; // 0:s0.4,4:s1.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v89; // 0:s0.4,4:s1.4,8:s2.4

  z = touchObjPos.fields.z;
  y = touchObjPos.fields.y;
  x = touchObjPos.fields.x;
  v18 = messagePos.fields.y;
  v19 = messagePos.fields.x;
  if ( (byte_40FB925 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, message);
    sub_B16FFC(&int_TypeInfo, v22);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v23);
    sub_B16FFC(&Method_TutorialNotificationMessage_EndOpen__, v24);
    sub_B16FFC(&Method_TutorialNotificationMessage__Open_b__14_0__, v25);
    sub_B16FFC(&StringLiteral_1, v26);
    sub_B16FFC(&StringLiteral_2643, v27);
    byte_40FB925 = 1;
  }
  this->fields.selectCallbackFunc = callback;
  sub_B16F98(
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
  v30 = this->fields.messageLabel;
  if ( !v30 )
    goto LABEL_51;
  if ( dlgBgId )
  {
    UILabel__set_applyGradient(v30, 1, 0LL);
    v31 = this->fields.messageLabel;
    p_c = (UnityEngine_Color32_o)&c;
    c.fields.rgba = 0;
    UnityEngine_Color32___ctor(p_c, 0x54u, 0x4Au, 8u, 0xFFu, 0LL);
    rgba = (UnityEngine_Color32_o)(unsigned int)c.fields.rgba;
    *(UnityEngine_Color_o *)&v32 = UnityEngine_Color32__op_Implicit_40668984(rgba, 0LL);
    if ( !v31 )
      goto LABEL_51;
    UILabel__set_gradientTop(v31, *(UnityEngine_Color_o *)&v32, 0LL);
    v36 = this->fields.messageLabel;
    v83 = (UnityEngine_Color32_o)&v79;
    v79.fields.rgba = 0;
    UnityEngine_Color32___ctor(v83, 0x1Cu, 0, 0, 0xFFu, 0LL);
    v84 = (UnityEngine_Color32_o)(unsigned int)v79.fields.rgba;
    *(UnityEngine_Color_o *)&v37 = UnityEngine_Color32__op_Implicit_40668984(v84, 0LL);
    if ( !v36 )
      goto LABEL_51;
    UILabel__set_gradientBottom(v36, *(UnityEngine_Color_o *)&v37, 0LL);
    v41 = this->fields.messageLabel;
    if ( !v41 )
      goto LABEL_51;
    UILabel__set_spacingY(v41, 11, 0LL);
    v42 = this->fields.messageLabel;
    if ( !v42 )
      goto LABEL_51;
    UILabel__set_effectStyle(v42, 2, 0LL);
    v43 = this->fields.messageLabel;
    v85 = (UnityEngine_Color32_o)&v78;
    v78.fields.rgba = 0;
    UnityEngine_Color32___ctor(v85, 0x78u, 0x54u, 0x27u, 0xFu, 0LL);
    v86 = (UnityEngine_Color32_o)(unsigned int)v78.fields.rgba;
    *(UnityEngine_Color_o *)&v44 = UnityEngine_Color32__op_Implicit_40668984(v86, 0LL);
    if ( !v43 )
      goto LABEL_51;
    UILabel__set_effectColor(v43, *(UnityEngine_Color_o *)&v44, 0LL);
    v48 = this->fields.messageLabel;
    if ( !v48 )
      goto LABEL_51;
    v87.fields.x = 3.0;
    v87.fields.y = 3.0;
    UILabel__set_effectDistance(v48, v87, 0LL);
    v49 = (UIWidget_o *)this->fields.messageLabel;
    if ( !v49 )
      goto LABEL_51;
    UIWidget__set_height(v49, 543, 0LL);
    v50 = this->fields.messageLabel;
    if ( !v50 )
      goto LABEL_51;
    v51 = alignment;
  }
  else
  {
    UILabel__set_applyGradient(v30, 0, 0LL);
    v52 = this->fields.messageLabel;
    if ( !v52 )
      goto LABEL_51;
    UILabel__set_spacingY(v52, 0, 0LL);
    v53 = this->fields.messageLabel;
    if ( !v53 )
      goto LABEL_51;
    UILabel__set_effectStyle(v53, 0, 0LL);
    v54 = (UIWidget_o *)this->fields.messageLabel;
    if ( !v54 )
      goto LABEL_51;
    UIWidget__set_height(v54, 460, 0LL);
    v50 = this->fields.messageLabel;
    if ( !v50 )
      goto LABEL_51;
    v51 = 2;
  }
  UILabel__set_alignment(v50, v51, 0LL);
  v55 = this->fields.messageLabel;
  if ( (this->fields.messageDefaultFontSize & 0x80000000) != 0 )
  {
    if ( !v55 )
      goto LABEL_51;
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v55, 0LL);
    if ( !transform )
      goto LABEL_51;
    localPosition = UnityEngine_Transform__get_localPosition(transform, 0LL);
    v55 = this->fields.messageLabel;
    this->fields.messageDefaultPosition.fields.x = localPosition.fields.x;
    this->fields.messageDefaultPosition.fields.y = localPosition.fields.y;
    if ( !v55 )
      goto LABEL_51;
    this->fields.messageDefaultFontSize = v55->fields.mFontSize;
  }
  else if ( !v55 )
  {
    goto LABEL_51;
  }
  if ( message )
    v57 = message;
  else
    v57 = (System_String_o *)StringLiteral_1;
  UILabel__set_text(v55, v57, 0LL);
  v58 = this->fields.messageLabel;
  if ( fontSize < 1 )
  {
    if ( !v58 )
      goto LABEL_51;
    messageDefaultFontSize = this->fields.messageDefaultFontSize;
  }
  else
  {
    if ( !v58 )
      goto LABEL_51;
    messageDefaultFontSize = fontSize;
  }
  UILabel__set_fontSize(v58, messageDefaultFontSize, 0LL);
  if ( spacingY >= 1 )
  {
    v60 = this->fields.messageLabel;
    if ( !v60 )
      goto LABEL_51;
    UILabel__set_spacingY(v60, spacingY, 0LL);
  }
  v61 = (UnityEngine_Component_o *)this->fields.messageLabel;
  if ( !v61 || (v62 = UnityEngine_Component__get_transform(v61, 0LL)) == 0LL )
LABEL_51:
    sub_B170D4();
  v89.fields.z = 0.0;
  v89.fields.x = v19 + this->fields.messageDefaultPosition.fields.x;
  v89.fields.y = v18 + this->fields.messageDefaultPosition.fields.y;
  UnityEngine_Transform__set_localPosition(v62, v89, 0LL);
LABEL_44:
  TutorialNotificationMessage__setTutorialMaskActive(this, 1, v29);
  maskSprite = this->fields.maskSprite;
  if ( !maskSprite )
    goto LABEL_51;
  ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer, float))maskSprite->klass->vtable._8_set_alpha.method)(
    maskSprite,
    maskSprite->klass->vtable._9_CalculateFinalAlpha.methodPtr,
    0.01);
  this->fields.isButtonEnable = 0;
  if ( !dlgBgId )
    goto LABEL_48;
  backTexture = this->fields.backTexture;
  c.fields.rgba = dlgBgId;
  v65 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &c);
  v66 = System_String__Format((System_String_o *)StringLiteral_2643, v65, 0LL);
  v71 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v67, v68, v69, v70);
  System_Action___ctor(v71, (Il2CppObject *)this, Method_TutorialNotificationMessage__Open_b__14_0__, 0LL);
  if ( !backTexture )
    goto LABEL_51;
  if ( !ExUITexture__SetAssetImage(backTexture, v66, v71, 0LL) )
  {
LABEL_48:
    v72 = this->fields.backTexture;
    if ( !v72 )
      goto LABEL_51;
    ExUITexture__ClearImage(v72, 0LL);
    v77 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v73, v74, v75, v76);
    System_Action___ctor(v77, (Il2CppObject *)this, Method_TutorialNotificationMessage_EndOpen__, 0LL);
    BaseDialog__Open((BaseDialog_o *)this, v77, 1, 0LL);
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
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  System_Action_o *v7; // x20

  if ( (byte_40FB92B & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_TutorialNotificationMessage_EndOpen__, v6);
    byte_40FB92B = 1;
  }
  v7 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, method, v2, v3, v4);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_TutorialNotificationMessage_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v7, 1, 0LL);
}


void __fastcall TutorialNotificationMessage__setTutorialMaskActive(
        TutorialNotificationMessage_o *this,
        bool active,
        const MethodInfo *method)
{
  UnityEngine_Component_o *maskSprite; // x0
  UnityEngine_GameObject_o *gameObject; // x0

  maskSprite = (UnityEngine_Component_o *)this->fields.maskSprite;
  if ( !maskSprite || (gameObject = UnityEngine_Component__get_gameObject(maskSprite, 0LL)) == 0LL )
    sub_B170D4();
  UnityEngine_GameObject__SetActive(gameObject, active, 0LL);
}