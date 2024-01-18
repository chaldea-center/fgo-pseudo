void __fastcall MovieConfirmDialog___ctor(MovieConfirmDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4187397 & 1) == 0 )
  {
    sub_B2C35C(&BaseDialog_TypeInfo, method);
    byte_4187397 = 1;
  }
  *(_OWORD *)&this->fields.PLAY_MAIN_LABEL_Y = xmmword_31A1610;
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall MovieConfirmDialog__Close(MovieConfirmDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  MovieConfirmDialog__Close_24471524(this, 0LL, v2);
}


void __fastcall MovieConfirmDialog__Close_24471524(
        MovieConfirmDialog_o *this,
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

  if ( (byte_4187391 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, callback);
    sub_B2C35C(&Method_MovieConfirmDialog_EndClose__, v10);
    byte_4187391 = 1;
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
  System_Action___ctor(v11, (Il2CppObject *)this, Method_MovieConfirmDialog_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v11, 0LL);
}


void __fastcall MovieConfirmDialog__EndClose(MovieConfirmDialog_o *this, const MethodInfo *method)
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

  MovieConfirmDialog__Init(this, method);
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


void __fastcall MovieConfirmDialog__EndOpen(MovieConfirmDialog_o *this, const MethodInfo *method)
{
  this->fields.isButtonEnable = 1;
}


void __fastcall MovieConfirmDialog__Init(MovieConfirmDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *titleLabel; // x20
  __int64 v5; // x1
  UILabel_o *gameObject; // x0
  UnityEngine_Object_o *mainLabel; // x20
  UnityEngine_Object_o *buttonDecideLabel; // x20
  UnityEngine_Object_o *buttonCancelLabel; // x20

  if ( (byte_418738F & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    sub_B2C35C(&StringLiteral_1/*""*/, v3);
    byte_418738F = 1;
  }
  titleLabel = (UnityEngine_Object_o *)this->fields.titleLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(titleLabel, 0LL, 0LL) )
  {
    gameObject = this->fields.titleLabel;
    if ( !gameObject )
      goto LABEL_29;
    UILabel__set_text(gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  mainLabel = (UnityEngine_Object_o *)this->fields.mainLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(mainLabel, 0LL, 0LL) )
  {
    gameObject = this->fields.mainLabel;
    if ( !gameObject )
      goto LABEL_29;
    UILabel__set_text(gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  buttonDecideLabel = (UnityEngine_Object_o *)this->fields.buttonDecideLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(buttonDecideLabel, 0LL, 0LL) )
  {
    gameObject = this->fields.buttonDecideLabel;
    if ( !gameObject )
      goto LABEL_29;
    UILabel__set_text(gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  buttonCancelLabel = (UnityEngine_Object_o *)this->fields.buttonCancelLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(buttonCancelLabel, 0LL, 0LL) )
  {
    gameObject = this->fields.buttonCancelLabel;
    if ( !gameObject )
      goto LABEL_29;
    UILabel__set_text(gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  *(_WORD *)&this->fields.isButtonEnable = 0;
  gameObject = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
LABEL_29:
    sub_B2C434(gameObject, v5);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall MovieConfirmDialog__OnClickCancel(MovieConfirmDialog_o *this, const MethodInfo *method)
{
  CommonConfirmDialog_ClickDelegate_o *clickFunc; // x0

  if ( (byte_4187394 & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_4187394 = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(1, 0LL);
    clickFunc = this->fields.clickFunc;
    this->fields.isButtonEnable = 0;
    if ( clickFunc )
      CommonConfirmDialog_ClickDelegate__Invoke(clickFunc, 0, 0LL);
  }
}


void __fastcall MovieConfirmDialog__OnClickClose(MovieConfirmDialog_o *this, const MethodInfo *method)
{
  CommonConfirmDialog_ClickDelegate_o *clickFunc; // x0

  if ( (byte_4187395 & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_4187395 = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    clickFunc = this->fields.clickFunc;
    this->fields.isButtonEnable = 0;
    if ( clickFunc )
      CommonConfirmDialog_ClickDelegate__Invoke(clickFunc, 0, 0LL);
  }
}


void __fastcall MovieConfirmDialog__OnClickDecide(MovieConfirmDialog_o *this, const MethodInfo *method)
{
  int32_t v3; // w0
  CommonConfirmDialog_ClickDelegate_o *clickFunc; // x0

  if ( (byte_4187392 & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_4187392 = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    if ( this->fields.isDecideBtnSe )
    {
      if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      v3 = 8;
    }
    else
    {
      if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      v3 = 0;
    }
    SoundManager__playSystemSe(v3, 0LL);
    clickFunc = this->fields.clickFunc;
    this->fields.isButtonEnable = 0;
    if ( clickFunc )
      CommonConfirmDialog_ClickDelegate__Invoke(clickFunc, 1, 0LL);
  }
}


void __fastcall MovieConfirmDialog__OnClickDecide2(MovieConfirmDialog_o *this, const MethodInfo *method)
{
  CommonConfirmDialog_ClickDelegate_o *clickFunc; // x0

  if ( (byte_4187393 & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_4187393 = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(8, 0LL);
    clickFunc = this->fields.clickFunc;
    this->fields.isButtonEnable = 0;
    if ( clickFunc )
      CommonConfirmDialog_ClickDelegate__Invoke(clickFunc, 1, 0LL);
  }
}


void __fastcall MovieConfirmDialog__Open(
        MovieConfirmDialog_o *this,
        System_String_o *title,
        System_String_o *message,
        int32_t mode,
        CommonConfirmDialog_ClickDelegate_o *func,
        bool canMaskTouchClose,
        int32_t maskType,
        const MethodInfo *method)
{
  MovieConfirmDialog__Setup(this, title, message, mode, func, canMaskTouchClose, maskType, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MovieConfirmDialog__SetModeParam(
        MovieConfirmDialog_o *this,
        int32_t mode,
        float *mainY,
        float *subY,
        System_String_o **subMessage,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 *v13; // x8
  System_String_o *v14; // x0
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7

  if ( (byte_4187396 & 1) == 0 )
  {
    sub_B2C35C(&LocalizationManager_TypeInfo, *(_QWORD *)&mode);
    sub_B2C35C(&StringLiteral_10952/*"QUEST_MESSAGE_DLG_MOVIE_DOWNLOAD_SUB_MESSAGE"*/, v11);
    sub_B2C35C(&StringLiteral_10954/*"QUEST_MESSAGE_DLG_MOVIE_PLAY_SUB_MESSAGE"*/, v12);
    byte_4187396 = 1;
  }
  if ( mode == 1 )
  {
    *mainY = this->fields.DOWNLOAD_MAIN_LABEL_Y;
    *subY = this->fields.DOWNLOAD_SUB_LABEL_Y;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v13 = &StringLiteral_10952/*"QUEST_MESSAGE_DLG_MOVIE_DOWNLOAD_SUB_MESSAGE"*/;
  }
  else
  {
    *mainY = this->fields.PLAY_MAIN_LABEL_Y;
    *subY = this->fields.PLAY_SUB_LABEL_Y;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v13 = &StringLiteral_10954/*"QUEST_MESSAGE_DLG_MOVIE_PLAY_SUB_MESSAGE"*/;
  }
  v14 = LocalizationManager__Get((System_String_o *)*v13, 0LL);
  *subMessage = v14;
  sub_B2C2F8((BattleServantConfConponent_o *)subMessage, (System_Int32_array **)v14, v15, v16, v17, v18, v19, v20);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MovieConfirmDialog__Setup(
        MovieConfirmDialog_o *this,
        System_String_o *title,
        System_String_o *message,
        int32_t mode,
        CommonConfirmDialog_ClickDelegate_o *func,
        bool canMaskTouchClose,
        int32_t maskType,
        const MethodInfo *method)
{
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  const MethodInfo *v23; // x5
  UnityEngine_Object_o *titleLabel; // x24
  __int64 v25; // x1
  UILabel_o *v26; // x0
  System_String_o *v27; // x1
  UnityEngine_Object_o *mainLabel; // x23
  struct UILabel_o *v29; // x8
  System_String_o *v30; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Object_o *subLabel; // x22
  System_String_o *v33; // x1
  UnityEngine_GameObject_o *v34; // x0
  UnityEngine_Object_o *buttonDecideLabel; // x22
  UILabel_o *v36; // x22
  UnityEngine_Object_o *buttonCancelLabel; // x22
  UILabel_o *v38; // x22
  System_Action_o *v39; // x21
  System_String_o *v40; // [xsp+0h] [xbp-50h] BYREF
  __int64 subY; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4187390 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, title);
    sub_B2C35C(&LocalizationManager_TypeInfo, v15);
    sub_B2C35C(&Method_MovieConfirmDialog_EndOpen__, v16);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v17);
    sub_B2C35C(&StringLiteral_26/*"\n"*/, v18);
    sub_B2C35C(&StringLiteral_10951/*"QUEST_MESSAGE_DLG_MOVIE_DOWNLOAD_DECIDE"*/, v19);
    sub_B2C35C(&StringLiteral_10946/*"QUEST_MESSAGE_DLG_CANCEL"*/, v20);
    sub_B2C35C(&StringLiteral_15854/*"\\n"*/, v21);
    sub_B2C35C(&StringLiteral_1/*""*/, v22);
    byte_4187390 = 1;
  }
  v40 = 0LL;
  subY = 0LL;
  this->fields.clickFunc = func;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.clickFunc,
    (System_Int32_array **)func,
    (System_String_array **)message,
    *(System_String_array ***)&mode,
    (System_Boolean_array **)func,
    (System_Int32_array **)canMaskTouchClose,
    *(System_Int32_array **)&maskType,
    (System_Int32_array *)method);
  MovieConfirmDialog__SetModeParam(this, mode, (float *)&subY + 1, (float *)&subY, &v40, v23);
  titleLabel = (UnityEngine_Object_o *)this->fields.titleLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(titleLabel, 0LL, 0LL) )
  {
    v26 = this->fields.titleLabel;
    if ( !v26 )
      goto LABEL_52;
    if ( title )
      v27 = title;
    else
      v27 = (System_String_o *)StringLiteral_1/*""*/;
    UILabel__set_text(v26, v27, 0LL);
  }
  mainLabel = (UnityEngine_Object_o *)this->fields.mainLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v26 = (UILabel_o *)UnityEngine_Object__op_Inequality(mainLabel, 0LL, 0LL);
  if ( ((unsigned __int8)v26 & 1) != 0 )
  {
    if ( !message )
      goto LABEL_52;
    v26 = (UILabel_o *)System_String__Replace_44312768(
                         message,
                         (System_String_o *)StringLiteral_15854/*"\\n"*/,
                         (System_String_o *)StringLiteral_26/*"\n"*/,
                         0LL);
    v29 = this->fields.mainLabel;
    if ( !v29 )
      goto LABEL_52;
    v30 = v26 ? (System_String_o *)v26 : (System_String_o *)StringLiteral_1/*""*/;
    WrapControlText__textAdjust(this->fields.mainLabel, v30, v29->fields.mFontSize, 0, 0, 0LL);
    v26 = this->fields.mainLabel;
    if ( !v26 )
      goto LABEL_52;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v26, 0LL);
    GameObjectExtensions__SetLocalPositionY(gameObject, *((float *)&subY + 1), 0LL);
  }
  subLabel = (UnityEngine_Object_o *)this->fields.subLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(subLabel, 0LL, 0LL) )
  {
    v26 = this->fields.subLabel;
    if ( !v26 )
      goto LABEL_52;
    v33 = v40 ? v40 : (System_String_o *)StringLiteral_1/*""*/;
    WrapControlText__textAdjust(v26, v33, v26->fields.mFontSize, 0, 0, 0LL);
    v26 = this->fields.subLabel;
    if ( !v26 )
      goto LABEL_52;
    v34 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v26, 0LL);
    GameObjectExtensions__SetLocalPositionY(v34, *(float *)&subY, 0LL);
  }
  buttonDecideLabel = (UnityEngine_Object_o *)this->fields.buttonDecideLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(buttonDecideLabel, 0LL, 0LL) )
  {
    v36 = this->fields.buttonDecideLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v26 = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10951/*"QUEST_MESSAGE_DLG_MOVIE_DOWNLOAD_DECIDE"*/, 0LL);
    if ( !v36 )
      goto LABEL_52;
    UILabel__set_text(v36, (System_String_o *)v26, 0LL);
  }
  buttonCancelLabel = (UnityEngine_Object_o *)this->fields.buttonCancelLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(buttonCancelLabel, 0LL, 0LL) )
  {
    v38 = this->fields.buttonCancelLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v26 = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10946/*"QUEST_MESSAGE_DLG_CANCEL"*/, 0LL);
    if ( v38 )
    {
      UILabel__set_text(v38, (System_String_o *)v26, 0LL);
      goto LABEL_51;
    }
LABEL_52:
    sub_B2C434(v26, v25);
  }
LABEL_51:
  *(_WORD *)&this->fields.isButtonEnable = 256;
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, canMaskTouchClose, 0LL);
  v39 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v39, (Il2CppObject *)this, Method_MovieConfirmDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v39, maskType, 0LL);
}


UILabel_o *__fastcall MovieConfirmDialog__get_ButtonCancelLabel(MovieConfirmDialog_o *this, const MethodInfo *method)
{
  return this->fields.buttonCancelLabel;
}


UILabel_o *__fastcall MovieConfirmDialog__get_ButtonDecideLabel(MovieConfirmDialog_o *this, const MethodInfo *method)
{
  return this->fields.buttonDecideLabel;
}