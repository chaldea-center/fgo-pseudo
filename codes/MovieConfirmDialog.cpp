void MovieConfirmDialog___ctor(MovieConfirmDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  BaseDialog_c *v4; // x0
  int v5; // w8

  if ( (byte_596A134 & 1) == 0 )
  {
    sub_2213A60(&BaseDialog_TypeInfo);
    byte_596A134 = 1;
  }
  v4 = BaseDialog_TypeInfo;
  v5 = *(&BaseDialog_TypeInfo->_2.cctor_finished + 1);
  *(_OWORD *)&this->fields.PLAY_MAIN_LABEL_Y = xmmword_E9BDC0;
  if ( !v5 )
    j_il2cpp_runtime_class_init_0(v4, method, v2);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void MovieConfirmDialog__Close(MovieConfirmDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  MovieConfirmDialog__Close_37564236(this, 0, v2);
}


void MovieConfirmDialog__Close_37564236(
        MovieConfirmDialog_o *this,
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

  if ( (byte_596A12D & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_MovieConfirmDialog_EndClose__);
    byte_596A12D = 1;
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
  System_Action___ctor(v11, (Il2CppObject *)this, Method_MovieConfirmDialog_EndClose__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v11, 0);
}


void MovieConfirmDialog__EndClose(MovieConfirmDialog_o *this, const MethodInfo *method)
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

  MovieConfirmDialog__Init(this, method);
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


void MovieConfirmDialog__EndOpen(MovieConfirmDialog_o *this, const MethodInfo *method)
{
  this->fields.isButtonEnable = 1;
}


void MovieConfirmDialog__Init(MovieConfirmDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *titleLabel; // x20
  __int64 v5; // x1
  __int64 v6; // x2
  UILabel_o *gameObject; // x0
  UnityEngine_Object_o *mainLabel; // x20
  __int64 v9; // x2
  UnityEngine_Object_o *buttonDecideLabel; // x20
  __int64 v11; // x2
  UnityEngine_Object_o *buttonCancelLabel; // x20

  if ( (byte_596A12B & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596A12B = 1;
  }
  titleLabel = (UnityEngine_Object_o *)this->fields.titleLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Inequality(titleLabel, 0, 0) )
  {
    gameObject = this->fields.titleLabel;
    if ( !gameObject )
      goto LABEL_25;
    UILabel__set_text(gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
  }
  mainLabel = (UnityEngine_Object_o *)this->fields.mainLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v6);
  if ( UnityEngine_Object__op_Inequality(mainLabel, 0, 0) )
  {
    gameObject = this->fields.mainLabel;
    if ( !gameObject )
      goto LABEL_25;
    UILabel__set_text(gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
  }
  buttonDecideLabel = (UnityEngine_Object_o *)this->fields.buttonDecideLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v9);
  if ( UnityEngine_Object__op_Inequality(buttonDecideLabel, 0, 0) )
  {
    gameObject = this->fields.buttonDecideLabel;
    if ( !gameObject )
      goto LABEL_25;
    UILabel__set_text(gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
  }
  buttonCancelLabel = (UnityEngine_Object_o *)this->fields.buttonCancelLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v11);
  if ( UnityEngine_Object__op_Inequality(buttonCancelLabel, 0, 0) )
  {
    gameObject = this->fields.buttonCancelLabel;
    if ( !gameObject )
      goto LABEL_25;
    UILabel__set_text(gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
  }
  *(_WORD *)&this->fields.isButtonEnable = 0;
  gameObject = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
LABEL_25:
    sub_2213CDC(gameObject, v5);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


void MovieConfirmDialog__OnClickCancel(MovieConfirmDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  struct CommonConfirmDialog_ClickDelegate_o *clickFunc; // x8

  if ( (byte_596A130 & 1) == 0 )
  {
    sub_2213A60(&Method_MovieConfirmDialog_OnClickCancel__);
    byte_596A130 = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v3 = Method_MovieConfirmDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_MovieConfirmDialog_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_MovieConfirmDialog_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    clickFunc = this->fields.clickFunc;
    this->fields.isButtonEnable = 0;
    if ( clickFunc )
      ((void (__fastcall *)(intptr_t, _QWORD, intptr_t))clickFunc->fields.invoke_impl)(
        clickFunc->fields.method_code,
        0,
        clickFunc->fields.method);
  }
}


void MovieConfirmDialog__OnClickClose(MovieConfirmDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  struct CommonConfirmDialog_ClickDelegate_o *clickFunc; // x8

  if ( (byte_596A131 & 1) == 0 )
  {
    sub_2213A60(&Method_MovieConfirmDialog_OnClickClose__);
    byte_596A131 = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v3 = Method_MovieConfirmDialog_OnClickClose__;
    if ( (*((_BYTE *)Method_MovieConfirmDialog_OnClickClose__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_MovieConfirmDialog_OnClickClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    clickFunc = this->fields.clickFunc;
    this->fields.isButtonEnable = 0;
    if ( clickFunc )
      ((void (__fastcall *)(intptr_t, _QWORD, intptr_t))clickFunc->fields.invoke_impl)(
        clickFunc->fields.method_code,
        0,
        clickFunc->fields.method);
  }
}


void MovieConfirmDialog__OnClickDecide(MovieConfirmDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  int32_t v4; // w20
  System_Reflection_MethodBase_o *v5; // x0
  struct CommonConfirmDialog_ClickDelegate_o *clickFunc; // x8

  if ( (byte_596A12E & 1) == 0 )
  {
    sub_2213A60(&Method_MovieConfirmDialog_OnClickDecide__);
    byte_596A12E = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v3 = Method_MovieConfirmDialog_OnClickDecide__;
    v4 = 8 * this->fields.isDecideBtnSe;
    if ( (*((_BYTE *)Method_MovieConfirmDialog_OnClickDecide__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_MovieConfirmDialog_OnClickDecide__);
    v5 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, v4, 0, 0);
    clickFunc = this->fields.clickFunc;
    this->fields.isButtonEnable = 0;
    if ( clickFunc )
      ((void (__fastcall *)(intptr_t, __int64, intptr_t))clickFunc->fields.invoke_impl)(
        clickFunc->fields.method_code,
        1,
        clickFunc->fields.method);
  }
}


void MovieConfirmDialog__OnClickDecide2(MovieConfirmDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  struct CommonConfirmDialog_ClickDelegate_o *clickFunc; // x8

  if ( (byte_596A12F & 1) == 0 )
  {
    sub_2213A60(&Method_MovieConfirmDialog_OnClickDecide2__);
    byte_596A12F = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v3 = Method_MovieConfirmDialog_OnClickDecide2__;
    if ( (*((_BYTE *)Method_MovieConfirmDialog_OnClickDecide2__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_MovieConfirmDialog_OnClickDecide2__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 8, 0, 0);
    clickFunc = this->fields.clickFunc;
    this->fields.isButtonEnable = 0;
    if ( clickFunc )
      ((void (__fastcall *)(intptr_t, __int64, intptr_t))clickFunc->fields.invoke_impl)(
        clickFunc->fields.method_code,
        1,
        clickFunc->fields.method);
  }
}


void MovieConfirmDialog__OnEnable(MovieConfirmDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0

  if ( (byte_596A133 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_16259/*"Window/CancelButton"*/);
    byte_596A133 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  AndroidBackKeyManager__AddBackBtn_51984988(transform, (System_String_o *)StringLiteral_16259/*"Window/CancelButton"*/, 0);
}


// local variable allocation has failed, the output may be wrong!
void MovieConfirmDialog__SetModeParam(
        MovieConfirmDialog_o *this,
        int32_t mode,
        float *mainY,
        float *subY,
        System_String_o **subMessage,
        const MethodInfo *method)
{
  LocalizationManager_c *v11; // x0
  int v12; // w8
  float DOWNLOAD_SUB_LABEL_Y; // s0
  __int64 *v14; // x21
  System_String_o *v15; // x1
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7

  if ( (byte_596A132 & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_11363/*"QUEST_MESSAGE_DLG_MOVIE_DOWNLOAD_SUB_MESSAGE"*/);
    sub_2213A60(&StringLiteral_11365/*"QUEST_MESSAGE_DLG_MOVIE_PLAY_SUB_MESSAGE"*/);
    byte_596A132 = 1;
  }
  v11 = LocalizationManager_TypeInfo;
  if ( mode == 1 )
  {
    *mainY = this->fields.DOWNLOAD_MAIN_LABEL_Y;
    v12 = *(&v11->_2.cctor_finished + 1);
    DOWNLOAD_SUB_LABEL_Y = this->fields.DOWNLOAD_SUB_LABEL_Y;
    v14 = &StringLiteral_11363/*"QUEST_MESSAGE_DLG_MOVIE_DOWNLOAD_SUB_MESSAGE"*/;
  }
  else
  {
    *mainY = this->fields.PLAY_MAIN_LABEL_Y;
    v12 = *(&v11->_2.cctor_finished + 1);
    DOWNLOAD_SUB_LABEL_Y = this->fields.PLAY_SUB_LABEL_Y;
    v14 = &StringLiteral_11365/*"QUEST_MESSAGE_DLG_MOVIE_PLAY_SUB_MESSAGE"*/;
  }
  *subY = DOWNLOAD_SUB_LABEL_Y;
  if ( !v12 )
    j_il2cpp_runtime_class_init_0(v11, *(_QWORD *)&mode, mainY);
  v15 = LocalizationManager__Get((System_String_o *)*v14, 0);
  *subMessage = v15;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)subMessage, (int32_t)v15, v16, v17, v18, v19, v20, v21);
}


// local variable allocation has failed, the output may be wrong!
void MovieConfirmDialog__Setup(
        MovieConfirmDialog_o *this,
        System_String_o *title,
        System_String_o *message,
        int32_t mode,
        CommonConfirmDialog_ClickDelegate_o *func,
        bool canMaskTouchClose,
        int32_t maskType,
        const MethodInfo *method)
{
  const MethodInfo *v15; // x5
  __int64 v16; // x1
  __int64 v17; // x2
  UnityEngine_Object_o *titleLabel; // x24
  __int64 v19; // x1
  __int64 v20; // x2
  UILabel_o *v21; // x0
  System_String_o *v22; // x1
  UnityEngine_Object_o *mainLabel; // x23
  __int64 v24; // x2
  struct UILabel_o *v25; // x8
  System_String_o *v26; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Object_o *subLabel; // x22
  __int64 v29; // x2
  System_String_o *v30; // x1
  UnityEngine_GameObject_o *v31; // x0
  UnityEngine_Object_o *buttonDecideLabel; // x22
  __int64 v33; // x1
  __int64 v34; // x2
  UILabel_o *v35; // x22
  UnityEngine_Object_o *buttonCancelLabel; // x22
  __int64 v37; // x1
  __int64 v38; // x2
  UILabel_o *v39; // x22
  System_Action_o *v40; // x21
  System_String_o *v41; // [xsp+0h] [xbp-60h] BYREF
  __int64 subY; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_596A12C & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&Method_MovieConfirmDialog_EndOpen__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_43/*"\n"*/);
    sub_2213A60(&StringLiteral_11362/*"QUEST_MESSAGE_DLG_MOVIE_DOWNLOAD_DECIDE"*/);
    sub_2213A60(&StringLiteral_11357/*"QUEST_MESSAGE_DLG_CANCEL"*/);
    sub_2213A60(&StringLiteral_16677/*"\\n"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596A12C = 1;
  }
  v41 = 0;
  subY = 0;
  this->fields.clickFunc = func;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.clickFunc,
    (int32_t)func,
    message,
    *(System_String_o **)&mode,
    (int32_t)func,
    canMaskTouchClose,
    maskType,
    (bool)method);
  MovieConfirmDialog__SetModeParam(this, mode, (float *)&subY + 1, (float *)&subY, &v41, v15);
  titleLabel = (UnityEngine_Object_o *)this->fields.titleLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v16, v17);
  if ( UnityEngine_Object__op_Inequality(titleLabel, 0, 0) )
  {
    v21 = this->fields.titleLabel;
    if ( !v21 )
      goto LABEL_45;
    if ( title )
      v22 = title;
    else
      v22 = (System_String_o *)StringLiteral_1/*""*/;
    UILabel__set_text(v21, v22, 0);
  }
  mainLabel = (UnityEngine_Object_o *)this->fields.mainLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v19, v20);
  v21 = (UILabel_o *)UnityEngine_Object__op_Inequality(mainLabel, 0, 0);
  if ( ((unsigned __int8)v21 & 1) != 0 )
  {
    if ( !message )
      goto LABEL_45;
    v21 = (UILabel_o *)System_String__Replace_75703400(
                         message,
                         (System_String_o *)StringLiteral_16677/*"\\n"*/,
                         (System_String_o *)StringLiteral_43/*"\n"*/,
                         0);
    v25 = this->fields.mainLabel;
    if ( !v25 )
      goto LABEL_45;
    v26 = v21 ? (System_String_o *)v21 : (System_String_o *)StringLiteral_1/*""*/;
    WrapControlText__textAdjust(this->fields.mainLabel, v26, v25->fields.mFontSize, 0, 0);
    v21 = this->fields.mainLabel;
    if ( !v21 )
      goto LABEL_45;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v21, 0);
    GameObjectExtensions__SetLocalPositionY(gameObject, *((float *)&subY + 1), 0);
  }
  subLabel = (UnityEngine_Object_o *)this->fields.subLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v19, v24);
  if ( UnityEngine_Object__op_Inequality(subLabel, 0, 0) )
  {
    v21 = this->fields.subLabel;
    if ( !v21 )
      goto LABEL_45;
    v30 = v41 ? v41 : (System_String_o *)StringLiteral_1/*""*/;
    WrapControlText__textAdjust(v21, v30, v21->fields.mFontSize, 0, 0);
    v21 = this->fields.subLabel;
    if ( !v21 )
      goto LABEL_45;
    v31 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v21, 0);
    GameObjectExtensions__SetLocalPositionY(v31, *(float *)&subY, 0);
  }
  buttonDecideLabel = (UnityEngine_Object_o *)this->fields.buttonDecideLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v19, v29);
  if ( UnityEngine_Object__op_Inequality(buttonDecideLabel, 0, 0) )
  {
    v35 = this->fields.buttonDecideLabel;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v33, v34);
    v21 = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11362/*"QUEST_MESSAGE_DLG_MOVIE_DOWNLOAD_DECIDE"*/, 0);
    if ( !v35 )
      goto LABEL_45;
    UILabel__set_text(v35, (System_String_o *)v21, 0);
  }
  buttonCancelLabel = (UnityEngine_Object_o *)this->fields.buttonCancelLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v33, v34);
  if ( UnityEngine_Object__op_Inequality(buttonCancelLabel, 0, 0) )
  {
    v39 = this->fields.buttonCancelLabel;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v37, v38);
    v21 = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11357/*"QUEST_MESSAGE_DLG_CANCEL"*/, 0);
    if ( v39 )
    {
      UILabel__set_text(v39, (System_String_o *)v21, 0);
      goto LABEL_44;
    }
LABEL_45:
    sub_2213CDC(v21, v19);
  }
LABEL_44:
  *(_WORD *)&this->fields.isButtonEnable = 256;
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, canMaskTouchClose, 0);
  v40 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v40, (Il2CppObject *)this, Method_MovieConfirmDialog_EndOpen__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v40, maskType, 0, 0);
}


UILabel_o *MovieConfirmDialog__get_ButtonCancelLabel(MovieConfirmDialog_o *this, const MethodInfo *method)
{
  return this->fields.buttonCancelLabel;
}


UILabel_o *MovieConfirmDialog__get_ButtonDecideLabel(MovieConfirmDialog_o *this, const MethodInfo *method)
{
  return this->fields.buttonDecideLabel;
}