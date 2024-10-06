void __fastcall NoTitleDialog___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  struct NoTitleDialog_StaticFields *static_fields; // x8

  if ( (byte_4A6C2E4 & 1) == 0 )
  {
    sub_1B90010(&NoTitleDialog_TypeInfo, v1);
    byte_4A6C2E4 = 1;
  }
  static_fields = NoTitleDialog_TypeInfo->static_fields;
  static_fields->MESSAGE_LABEL_POS_Y = 35;
  *(_OWORD *)&static_fields->MESSAGE_WINDOW_SIZE_X_DEF = xmmword_BB70F0;
  *(_OWORD *)&static_fields->MESSAGE_LABEL_POS_Y_DEF = xmmword_BB8690;
}


void __fastcall NoTitleDialog___ctor(NoTitleDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4A6C2E3 & 1) == 0 )
  {
    sub_1B90010(&BaseDialog_TypeInfo, method);
    byte_4A6C2E3 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall NoTitleDialog__CallOnClick(NoTitleDialog_o *this, bool result, const MethodInfo *method)
{
  int32_t v3; // w3
  ServantStatusBattleListViewItem_o *p_onClick; // x0
  struct System_Action_bool__o *v5; // x20
  struct System_Action_bool__o *onClick; // t1

  onClick = this->fields.onClick;
  p_onClick = (ServantStatusBattleListViewItem_o *)&this->fields.onClick;
  v5 = onClick;
  if ( onClick )
  {
    p_onClick->klass = 0LL;
    sub_1B8FFB4(p_onClick, 0, (int32_t)method, v3);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, bool, _QWORD))v5->fields.m_target)(
      v5->fields.original_method_info,
      result,
      *(_QWORD *)&v5->fields.extra_arg);
  }
}


void __fastcall NoTitleDialog__Close(NoTitleDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  NoTitleDialog__Close_32741856(this, 0LL, v2);
}


void __fastcall NoTitleDialog__Close_32741856(
        NoTitleDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  __int64 v6; // x1
  System_Action_o *v7; // x20

  if ( (byte_4A6C2DD & 1) == 0 )
  {
    sub_1B90010(&System_Action_TypeInfo, callback);
    sub_1B90010(&Method_NoTitleDialog_EndClose__, v6);
    byte_4A6C2DD = 1;
  }
  this->fields.onClose = callback;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.onClose, (int32_t)callback, (int32_t)method, v3);
  this->fields.isButtonEnable = 0;
  v7 = (System_Action_o *)sub_1B9025C(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_NoTitleDialog_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v7, 0LL);
}


void __fastcall NoTitleDialog__EndClose(NoTitleDialog_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  int32_t v5; // w2
  int32_t v6; // w3
  ServantStatusBattleListViewItem_o *p_onClose; // x19
  struct System_Action_o *v8; // x20
  struct System_Action_o *onClose; // t1

  NoTitleDialog__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1B9026C(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  onClose = this->fields.onClose;
  p_onClose = (ServantStatusBattleListViewItem_o *)&this->fields.onClose;
  v8 = onClose;
  if ( onClose )
  {
    p_onClose->klass = 0LL;
    sub_1B8FFB4(p_onClose, 0, v5, v6);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v8->fields.m_target)(
      v8->fields.original_method_info,
      *(_QWORD *)&v8->fields.extra_arg);
  }
}


void __fastcall NoTitleDialog__EndOpen(NoTitleDialog_o *this, const MethodInfo *method)
{
  this->fields.isButtonEnable = 1;
}


void __fastcall NoTitleDialog__Init(NoTitleDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  __int64 v4; // x1
  const MethodInfo *v5; // x3
  const MethodInfo *v6; // x3
  __int64 v7; // x1
  UIWidget_o *messageLabel; // x0
  UIWidget_o *window; // x20
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_4A6C2DA & 1) == 0 )
  {
    sub_1B90010(&NoTitleDialog_TypeInfo, method);
    sub_1B90010(&StringLiteral_1/*""*/, v4);
    byte_4A6C2DA = 1;
  }
  NoTitleDialog__SetLabelText(this, this->fields.messageLabel, (System_String_o *)StringLiteral_1/*""*/, v2);
  NoTitleDialog__SetLabelText(this, this->fields.buttonDecideLabel, (System_String_o *)StringLiteral_1/*""*/, v5);
  NoTitleDialog__SetLabelText(this, this->fields.buttonCancelLabel, (System_String_o *)StringLiteral_1/*""*/, v6);
  messageLabel = (UIWidget_o *)NoTitleDialog_TypeInfo;
  window = (UIWidget_o *)this->fields.window;
  if ( !NoTitleDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NoTitleDialog_TypeInfo);
  if ( !window )
    goto LABEL_12;
  UIWidget__set_width(window, NoTitleDialog_TypeInfo->static_fields->MESSAGE_WINDOW_SIZE_X_DEF, 0LL);
  messageLabel = (UIWidget_o *)this->fields.window;
  if ( !messageLabel )
    goto LABEL_12;
  UIWidget__set_height(messageLabel, NoTitleDialog_TypeInfo->static_fields->MESSAGE_WINDOW_SIZE_Y_DEF, 0LL);
  messageLabel = (UIWidget_o *)this->fields.messageLabel;
  if ( !messageLabel )
    goto LABEL_12;
  UIWidget__set_width(messageLabel, NoTitleDialog_TypeInfo->static_fields->MESSAGE_LABEL_SIZE_X_DEF, 0LL);
  messageLabel = (UIWidget_o *)this->fields.messageLabel;
  if ( !messageLabel
    || (UIWidget__set_height(messageLabel, NoTitleDialog_TypeInfo->static_fields->MESSAGE_LABEL_SIZE_Y_DEF, 0LL),
        (messageLabel = (UIWidget_o *)this->fields.messageLabel) == 0LL)
    || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)messageLabel, 0LL),
        GameObjectExtensions__SetLocalPositionY(
          gameObject,
          (float)NoTitleDialog_TypeInfo->static_fields->MESSAGE_LABEL_POS_Y_DEF,
          0LL),
        this->fields.isButtonEnable = 0,
        (messageLabel = (UIWidget_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
LABEL_12:
    sub_1B9026C(messageLabel, v7);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)messageLabel, 0, 0LL);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall NoTitleDialog__OnClickCancel(NoTitleDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4A6C2E1 & 1) == 0 )
  {
    sub_1B90010(&Method_NoTitleDialog_OnClickCancel__, method);
    byte_4A6C2E1 = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v3 = Method_NoTitleDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_NoTitleDialog_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B90028(Method_NoTitleDialog_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B8FFF4(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0LL);
    this->fields.isButtonEnable = 0;
    NoTitleDialog__CallOnClick(this, 0, v5);
  }
}


void __fastcall NoTitleDialog__OnClickClose(NoTitleDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4A6C2E2 & 1) == 0 )
  {
    sub_1B90010(&Method_NoTitleDialog_OnClickClose__, method);
    byte_4A6C2E2 = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v3 = Method_NoTitleDialog_OnClickClose__;
    if ( (*((_BYTE *)Method_NoTitleDialog_OnClickClose__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B90028(Method_NoTitleDialog_OnClickClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B8FFF4(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    this->fields.isButtonEnable = 0;
    NoTitleDialog__CallOnClick(this, 0, v5);
  }
}


void __fastcall NoTitleDialog__OnClickDecide(NoTitleDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4A6C2DF & 1) == 0 )
  {
    sub_1B90010(&Method_NoTitleDialog_OnClickDecide__, method);
    byte_4A6C2DF = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v3 = Method_NoTitleDialog_OnClickDecide__;
    if ( (*((_BYTE *)Method_NoTitleDialog_OnClickDecide__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B90028(Method_NoTitleDialog_OnClickDecide__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B8FFF4(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    this->fields.isButtonEnable = 0;
    NoTitleDialog__CallOnClick(this, 1, v5);
  }
}


void __fastcall NoTitleDialog__OnClickDecide2(NoTitleDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4A6C2E0 & 1) == 0 )
  {
    sub_1B90010(&Method_NoTitleDialog_OnClickDecide2__, method);
    byte_4A6C2E0 = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v3 = Method_NoTitleDialog_OnClickDecide2__;
    if ( (*((_BYTE *)Method_NoTitleDialog_OnClickDecide2__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B90028(Method_NoTitleDialog_OnClickDecide2__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B8FFF4(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 8, 0LL);
    this->fields.isButtonEnable = 0;
    NoTitleDialog__CallOnClick(this, 1, v5);
  }
}


void __fastcall NoTitleDialog__Open(
        NoTitleDialog_o *this,
        System_String_o *message,
        System_String_o *decideTxt,
        System_String_o *cancleTxt,
        System_Action_bool__o *onClick,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v14; // x1
  int32_t v15; // w2
  int32_t v16; // w3
  const MethodInfo *v17; // x3
  System_String_o *v18; // x2
  const MethodInfo *v19; // x3
  const MethodInfo *v20; // x3
  UnityEngine_GameObject_o *v21; // x0
  System_Action_o *v22; // x20

  if ( (byte_4A6C2DB & 1) == 0 )
  {
    sub_1B90010(&System_Action_TypeInfo, message);
    sub_1B90010(&Method_NoTitleDialog_EndOpen__, v11);
    sub_1B90010(&StringLiteral_1/*""*/, v12);
    byte_4A6C2DB = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_9;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  this->fields.onClick = onClick;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.onClick, (int32_t)onClick, v15, v16);
  v18 = message ? message : (System_String_o *)StringLiteral_1/*""*/;
  NoTitleDialog__SetLabelText(this, this->fields.messageLabel, v18, v17);
  NoTitleDialog__SetLabelText(this, this->fields.buttonDecideLabel, decideTxt, v19);
  NoTitleDialog__SetLabelText(this, this->fields.buttonCancelLabel, cancleTxt, v20);
  gameObject = (UnityEngine_GameObject_o *)this->fields.closeBtn;
  if ( !gameObject )
LABEL_9:
    sub_1B9026C(gameObject, v14);
  v21 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  AndroidBackKeyManager__AddBackBtn(v21, 0LL);
  this->fields.isButtonEnable = 0;
  v22 = (System_Action_o *)sub_1B9025C(System_Action_TypeInfo);
  System_Action___ctor(v22, (Il2CppObject *)this, Method_NoTitleDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v22, 0, 0LL);
}


void __fastcall NoTitleDialog__SetLabelText(
        NoTitleDialog_o *this,
        UILabel_o *label,
        System_String_o *text,
        const MethodInfo *method)
{
  __int64 v7; // x1
  UIWidget_o *messageLabel; // x0
  __int64 v9; // x1
  int32_t v10; // w21
  int v11; // w22
  uint16_t Chars; // w0
  UIWidget_o *window; // x20
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_4A6C2DC & 1) == 0 )
  {
    sub_1B90010(&NoTitleDialog_TypeInfo, label);
    sub_1B90010(&UnityEngine_Object_TypeInfo, v7);
    byte_4A6C2DC = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  messageLabel = (UIWidget_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)label, 0LL, 0LL);
  if ( ((unsigned __int8)messageLabel & 1) == 0 )
  {
    if ( !label )
      goto LABEL_22;
    UILabel__set_text(label, text, 0LL);
    if ( !text )
      goto LABEL_22;
    if ( text->fields._stringLength >= 1 )
    {
      v10 = 0;
      v11 = 0;
      do
      {
        Chars = System_String__get_Chars(text, v10++, 0LL);
        if ( Chars == 10 )
          ++v11;
      }
      while ( v10 < text->fields._stringLength );
      if ( v11 >= 14 )
      {
        window = (UIWidget_o *)this->fields.window;
        messageLabel = (UIWidget_o *)NoTitleDialog_TypeInfo;
        if ( !NoTitleDialog_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NoTitleDialog_TypeInfo);
        if ( window )
        {
          UIWidget__set_width(window, NoTitleDialog_TypeInfo->static_fields->MESSAGE_WINDOW_SIZE_X, 0LL);
          messageLabel = (UIWidget_o *)this->fields.messageLabel;
          if ( messageLabel )
          {
            UIWidget__set_width(messageLabel, NoTitleDialog_TypeInfo->static_fields->MESSAGE_LABEL_SIZE_X, 0LL);
            messageLabel = (UIWidget_o *)this->fields.messageLabel;
            if ( messageLabel )
            {
              UIWidget__set_height(messageLabel, NoTitleDialog_TypeInfo->static_fields->MESSAGE_LABEL_SIZE_Y, 0LL);
              messageLabel = (UIWidget_o *)this->fields.messageLabel;
              if ( messageLabel )
              {
                gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)messageLabel, 0LL);
                GameObjectExtensions__SetLocalPositionY(
                  gameObject,
                  (float)NoTitleDialog_TypeInfo->static_fields->MESSAGE_LABEL_POS_Y,
                  0LL);
                return;
              }
            }
          }
        }
LABEL_22:
        sub_1B9026C(messageLabel, v9);
      }
    }
  }
}


UnityEngine_GameObject_o *__fastcall NoTitleDialog__get_closeBtnObject(NoTitleDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *closeBtn; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *v6; // x0

  if ( (byte_4A6C2DE & 1) == 0 )
  {
    sub_1B90010(&UnityEngine_Object_TypeInfo, method);
    byte_4A6C2DE = 1;
  }
  closeBtn = (UnityEngine_Object_o *)this->fields.closeBtn;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(closeBtn, 0LL, 0LL) )
    return 0LL;
  v6 = (UnityEngine_Component_o *)this->fields.closeBtn;
  if ( !v6 )
    sub_1B9026C(0LL, v4);
  return UnityEngine_Component__get_gameObject(v6, 0LL);
}