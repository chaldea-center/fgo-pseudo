void __fastcall MovieConfirmDialog___ctor(MovieConfirmDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4A01FB9 & 1) == 0 )
  {
    sub_1B64870(&BaseDialog_TypeInfo, method);
    byte_4A01FB9 = 1;
  }
  *(_OWORD *)&this->fields.PLAY_MAIN_LABEL_Y = xmmword_BA2880;
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall MovieConfirmDialog__Close(MovieConfirmDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  MovieConfirmDialog__Close_44965216(this, 0LL, v2);
}


void __fastcall MovieConfirmDialog__Close_44965216(
        MovieConfirmDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  __int64 v6; // x1
  System_Action_o *v7; // x20

  if ( (byte_4A01FB3 & 1) == 0 )
  {
    sub_1B64870(&System_Action_TypeInfo, callback);
    sub_1B64870(&Method_MovieConfirmDialog_EndClose__, v6);
    byte_4A01FB3 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1B64814(
    (ServantStatusBattleListViewItem_o *)&this->fields.closeCallbackFunc,
    (int32_t)callback,
    (int32_t)method,
    v3);
  this->fields.isButtonEnable = 0;
  v7 = (System_Action_o *)sub_1B64ABC(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_MovieConfirmDialog_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v7, 0LL);
}


void __fastcall MovieConfirmDialog__EndClose(MovieConfirmDialog_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  int32_t v5; // w2
  int32_t v6; // w3
  ServantStatusBattleListViewItem_o *p_closeCallbackFunc; // x19
  struct System_Action_o *v8; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  MovieConfirmDialog__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1B64ACC(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (ServantStatusBattleListViewItem_o *)&this->fields.closeCallbackFunc;
  v8 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0LL;
    sub_1B64814(p_closeCallbackFunc, 0, v5, v6);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v8->fields.m_target)(
      v8->fields.original_method_info,
      *(_QWORD *)&v8->fields.extra_arg);
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

  if ( (byte_4A01FB1 & 1) == 0 )
  {
    sub_1B64870(&UnityEngine_Object_TypeInfo, method);
    sub_1B64870(&StringLiteral_1/*""*/, v3);
    byte_4A01FB1 = 1;
  }
  titleLabel = (UnityEngine_Object_o *)this->fields.titleLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(titleLabel, 0LL, 0LL) )
  {
    gameObject = this->fields.titleLabel;
    if ( !gameObject )
      goto LABEL_25;
    UILabel__set_text(gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  mainLabel = (UnityEngine_Object_o *)this->fields.mainLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mainLabel, 0LL, 0LL) )
  {
    gameObject = this->fields.mainLabel;
    if ( !gameObject )
      goto LABEL_25;
    UILabel__set_text(gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  buttonDecideLabel = (UnityEngine_Object_o *)this->fields.buttonDecideLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(buttonDecideLabel, 0LL, 0LL) )
  {
    gameObject = this->fields.buttonDecideLabel;
    if ( !gameObject )
      goto LABEL_25;
    UILabel__set_text(gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  buttonCancelLabel = (UnityEngine_Object_o *)this->fields.buttonCancelLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(buttonCancelLabel, 0LL, 0LL) )
  {
    gameObject = this->fields.buttonCancelLabel;
    if ( !gameObject )
      goto LABEL_25;
    UILabel__set_text(gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  *(_WORD *)&this->fields.isButtonEnable = 0;
  gameObject = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
LABEL_25:
    sub_1B64ACC(gameObject, v5);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall MovieConfirmDialog__OnClickCancel(MovieConfirmDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  struct CommonConfirmDialog_ClickDelegate_o *clickFunc; // x8

  if ( (byte_4A01FB6 & 1) == 0 )
  {
    sub_1B64870(&Method_MovieConfirmDialog_OnClickCancel__, method);
    byte_4A01FB6 = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v3 = Method_MovieConfirmDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_MovieConfirmDialog_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B64888(Method_MovieConfirmDialog_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B64854(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0LL);
    clickFunc = this->fields.clickFunc;
    this->fields.isButtonEnable = 0;
    if ( clickFunc )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))clickFunc->fields.m_target)(
        clickFunc->fields.original_method_info,
        0LL,
        *(_QWORD *)&clickFunc->fields.extra_arg);
  }
}


void __fastcall MovieConfirmDialog__OnClickClose(MovieConfirmDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  struct CommonConfirmDialog_ClickDelegate_o *clickFunc; // x8

  if ( (byte_4A01FB7 & 1) == 0 )
  {
    sub_1B64870(&Method_MovieConfirmDialog_OnClickClose__, method);
    byte_4A01FB7 = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v3 = Method_MovieConfirmDialog_OnClickClose__;
    if ( (*((_BYTE *)Method_MovieConfirmDialog_OnClickClose__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B64888(Method_MovieConfirmDialog_OnClickClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B64854(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    clickFunc = this->fields.clickFunc;
    this->fields.isButtonEnable = 0;
    if ( clickFunc )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))clickFunc->fields.m_target)(
        clickFunc->fields.original_method_info,
        0LL,
        *(_QWORD *)&clickFunc->fields.extra_arg);
  }
}


void __fastcall MovieConfirmDialog__OnClickDecide(MovieConfirmDialog_o *this, const MethodInfo *method)
{
  _BOOL4 isDecideBtnSe; // w20
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  struct CommonConfirmDialog_ClickDelegate_o *clickFunc; // x8

  if ( (byte_4A01FB4 & 1) == 0 )
  {
    sub_1B64870(&Method_MovieConfirmDialog_OnClickDecide__, method);
    byte_4A01FB4 = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    isDecideBtnSe = this->fields.isDecideBtnSe;
    v4 = Method_MovieConfirmDialog_OnClickDecide__;
    if ( (*((_BYTE *)Method_MovieConfirmDialog_OnClickDecide__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1B64888(Method_MovieConfirmDialog_OnClickDecide__);
    v5 = (System_Reflection_MethodBase_o *)sub_1B64854(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 8 * isDecideBtnSe, 0LL);
    clickFunc = this->fields.clickFunc;
    this->fields.isButtonEnable = 0;
    if ( clickFunc )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))clickFunc->fields.m_target)(
        clickFunc->fields.original_method_info,
        1LL,
        *(_QWORD *)&clickFunc->fields.extra_arg);
  }
}


void __fastcall MovieConfirmDialog__OnClickDecide2(MovieConfirmDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  struct CommonConfirmDialog_ClickDelegate_o *clickFunc; // x8

  if ( (byte_4A01FB5 & 1) == 0 )
  {
    sub_1B64870(&Method_MovieConfirmDialog_OnClickDecide2__, method);
    byte_4A01FB5 = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v3 = Method_MovieConfirmDialog_OnClickDecide2__;
    if ( (*((_BYTE *)Method_MovieConfirmDialog_OnClickDecide2__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B64888(Method_MovieConfirmDialog_OnClickDecide2__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B64854(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 8, 0LL);
    clickFunc = this->fields.clickFunc;
    this->fields.isButtonEnable = 0;
    if ( clickFunc )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))clickFunc->fields.m_target)(
        clickFunc->fields.original_method_info,
        1LL,
        *(_QWORD *)&clickFunc->fields.extra_arg);
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
  int32_t v15; // w2
  int32_t v16; // w3

  if ( (byte_4A01FB8 & 1) == 0 )
  {
    sub_1B64870(&LocalizationManager_TypeInfo, *(_QWORD *)&mode);
    sub_1B64870(&StringLiteral_10839/*"QUEST_MESSAGE_DLG_MOVIE_DOWNLOAD_SUB_MESSAGE"*/, v11);
    sub_1B64870(&StringLiteral_10841/*"QUEST_MESSAGE_DLG_MOVIE_PLAY_SUB_MESSAGE"*/, v12);
    byte_4A01FB8 = 1;
  }
  if ( mode == 1 )
  {
    *mainY = this->fields.DOWNLOAD_MAIN_LABEL_Y;
    *subY = this->fields.DOWNLOAD_SUB_LABEL_Y;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v13 = &StringLiteral_10839/*"QUEST_MESSAGE_DLG_MOVIE_DOWNLOAD_SUB_MESSAGE"*/;
  }
  else
  {
    *mainY = this->fields.PLAY_MAIN_LABEL_Y;
    *subY = this->fields.PLAY_SUB_LABEL_Y;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v13 = &StringLiteral_10841/*"QUEST_MESSAGE_DLG_MOVIE_PLAY_SUB_MESSAGE"*/;
  }
  v14 = LocalizationManager__Get((System_String_o *)*v13, 0LL);
  *subMessage = v14;
  sub_1B64814((ServantStatusBattleListViewItem_o *)subMessage, (int32_t)v14, v15, v16);
}


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
  System_String_o *v40; // [xsp+0h] [xbp-60h] BYREF
  __int64 subY; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4A01FB2 & 1) == 0 )
  {
    sub_1B64870(&System_Action_TypeInfo, title);
    sub_1B64870(&LocalizationManager_TypeInfo, v15);
    sub_1B64870(&Method_MovieConfirmDialog_EndOpen__, v16);
    sub_1B64870(&UnityEngine_Object_TypeInfo, v17);
    sub_1B64870(&StringLiteral_43/*"\n"*/, v18);
    sub_1B64870(&StringLiteral_10838/*"QUEST_MESSAGE_DLG_MOVIE_DOWNLOAD_DECIDE"*/, v19);
    sub_1B64870(&StringLiteral_10833/*"QUEST_MESSAGE_DLG_CANCEL"*/, v20);
    sub_1B64870(&StringLiteral_15986/*"\\n"*/, v21);
    sub_1B64870(&StringLiteral_1/*""*/, v22);
    byte_4A01FB2 = 1;
  }
  v40 = 0LL;
  subY = 0LL;
  this->fields.clickFunc = func;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.clickFunc, (int32_t)func, (int32_t)message, mode);
  MovieConfirmDialog__SetModeParam(this, mode, (float *)&subY + 1, (float *)&subY, &v40, v23);
  titleLabel = (UnityEngine_Object_o *)this->fields.titleLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(titleLabel, 0LL, 0LL) )
  {
    v26 = this->fields.titleLabel;
    if ( !v26 )
      goto LABEL_45;
    if ( title )
      v27 = title;
    else
      v27 = (System_String_o *)StringLiteral_1/*""*/;
    UILabel__set_text(v26, v27, 0LL);
  }
  mainLabel = (UnityEngine_Object_o *)this->fields.mainLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v26 = (UILabel_o *)UnityEngine_Object__op_Inequality(mainLabel, 0LL, 0LL);
  if ( ((unsigned __int8)v26 & 1) != 0 )
  {
    if ( !message )
      goto LABEL_45;
    v26 = (UILabel_o *)System_String__Replace_61403196(
                         message,
                         (System_String_o *)StringLiteral_15986/*"\\n"*/,
                         (System_String_o *)StringLiteral_43/*"\n"*/,
                         0LL);
    v29 = this->fields.mainLabel;
    if ( !v29 )
      goto LABEL_45;
    v30 = v26 ? (System_String_o *)v26 : (System_String_o *)StringLiteral_1/*""*/;
    WrapControlText__textAdjust(this->fields.mainLabel, v30, v29->fields.mFontSize, 0, 0, 0LL);
    v26 = this->fields.mainLabel;
    if ( !v26 )
      goto LABEL_45;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v26, 0LL);
    GameObjectExtensions__SetLocalPositionY(gameObject, *((float *)&subY + 1), 0LL);
  }
  subLabel = (UnityEngine_Object_o *)this->fields.subLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(subLabel, 0LL, 0LL) )
  {
    v26 = this->fields.subLabel;
    if ( !v26 )
      goto LABEL_45;
    v33 = v40 ? v40 : (System_String_o *)StringLiteral_1/*""*/;
    WrapControlText__textAdjust(v26, v33, v26->fields.mFontSize, 0, 0, 0LL);
    v26 = this->fields.subLabel;
    if ( !v26 )
      goto LABEL_45;
    v34 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v26, 0LL);
    GameObjectExtensions__SetLocalPositionY(v34, *(float *)&subY, 0LL);
  }
  buttonDecideLabel = (UnityEngine_Object_o *)this->fields.buttonDecideLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(buttonDecideLabel, 0LL, 0LL) )
  {
    v36 = this->fields.buttonDecideLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v26 = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10838/*"QUEST_MESSAGE_DLG_MOVIE_DOWNLOAD_DECIDE"*/, 0LL);
    if ( !v36 )
      goto LABEL_45;
    UILabel__set_text(v36, (System_String_o *)v26, 0LL);
  }
  buttonCancelLabel = (UnityEngine_Object_o *)this->fields.buttonCancelLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(buttonCancelLabel, 0LL, 0LL) )
  {
    v38 = this->fields.buttonCancelLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v26 = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10833/*"QUEST_MESSAGE_DLG_CANCEL"*/, 0LL);
    if ( v38 )
    {
      UILabel__set_text(v38, (System_String_o *)v26, 0LL);
      goto LABEL_44;
    }
LABEL_45:
    sub_1B64ACC(v26, v25);
  }
LABEL_44:
  *(_WORD *)&this->fields.isButtonEnable = 256;
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, canMaskTouchClose, 0LL);
  v39 = (System_Action_o *)sub_1B64ABC(System_Action_TypeInfo);
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