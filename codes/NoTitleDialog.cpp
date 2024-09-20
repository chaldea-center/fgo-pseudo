void __fastcall NoTitleDialog___cctor(const MethodInfo *method)
{
  struct NoTitleDialog_StaticFields *static_fields; // x8

  if ( (byte_4A57603 & 1) == 0 )
  {
    sub_1B885B0(&NoTitleDialog_TypeInfo);
    byte_4A57603 = 1;
  }
  static_fields = NoTitleDialog_TypeInfo->static_fields;
  static_fields->MESSAGE_LABEL_POS_Y = 35;
  *(_OWORD *)&static_fields->MESSAGE_WINDOW_SIZE_X_DEF = xmmword_BB4270;
  *(_OWORD *)&static_fields->MESSAGE_LABEL_POS_Y_DEF = xmmword_BB5800;
}


void __fastcall NoTitleDialog___ctor(NoTitleDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4A57602 & 1) == 0 )
  {
    sub_1B885B0(&BaseDialog_TypeInfo);
    byte_4A57602 = 1;
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
    sub_1B88554(p_onClick, 0, (int32_t)method, v3);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, bool, _QWORD))v5->fields.m_target)(
      v5->fields.original_method_info,
      result,
      *(_QWORD *)&v5->fields.extra_arg);
  }
}


void __fastcall NoTitleDialog__Close(NoTitleDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  NoTitleDialog__Close_32708916(this, 0LL, v2);
}


void __fastcall NoTitleDialog__Close_32708916(
        NoTitleDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_Action_o *v6; // x20

  if ( (byte_4A575FC & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_NoTitleDialog_EndClose__);
    byte_4A575FC = 1;
  }
  this->fields.onClose = callback;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.onClose, (int32_t)callback, (int32_t)method, v3);
  this->fields.isButtonEnable = 0;
  v6 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_NoTitleDialog_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v6, 0LL);
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
    sub_1B8880C(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  onClose = this->fields.onClose;
  p_onClose = (ServantStatusBattleListViewItem_o *)&this->fields.onClose;
  v8 = onClose;
  if ( onClose )
  {
    p_onClose->klass = 0LL;
    sub_1B88554(p_onClose, 0, v5, v6);
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
  const MethodInfo *v4; // x3
  const MethodInfo *v5; // x3
  __int64 v6; // x1
  UIWidget_o *messageLabel; // x0
  UIWidget_o *window; // x20
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_4A575F9 & 1) == 0 )
  {
    sub_1B885B0(&NoTitleDialog_TypeInfo);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A575F9 = 1;
  }
  NoTitleDialog__SetLabelText(this, this->fields.messageLabel, (System_String_o *)StringLiteral_1/*""*/, v2);
  NoTitleDialog__SetLabelText(this, this->fields.buttonDecideLabel, (System_String_o *)StringLiteral_1/*""*/, v4);
  NoTitleDialog__SetLabelText(this, this->fields.buttonCancelLabel, (System_String_o *)StringLiteral_1/*""*/, v5);
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
    sub_1B8880C(messageLabel, v6);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)messageLabel, 0, 0LL);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall NoTitleDialog__OnClickCancel(NoTitleDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4A57600 & 1) == 0 )
  {
    sub_1B885B0(&Method_NoTitleDialog_OnClickCancel__);
    byte_4A57600 = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v3 = Method_NoTitleDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_NoTitleDialog_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_NoTitleDialog_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
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

  if ( (byte_4A57601 & 1) == 0 )
  {
    sub_1B885B0(&Method_NoTitleDialog_OnClickClose__);
    byte_4A57601 = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v3 = Method_NoTitleDialog_OnClickClose__;
    if ( (*((_BYTE *)Method_NoTitleDialog_OnClickClose__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_NoTitleDialog_OnClickClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
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

  if ( (byte_4A575FE & 1) == 0 )
  {
    sub_1B885B0(&Method_NoTitleDialog_OnClickDecide__);
    byte_4A575FE = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v3 = Method_NoTitleDialog_OnClickDecide__;
    if ( (*((_BYTE *)Method_NoTitleDialog_OnClickDecide__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_NoTitleDialog_OnClickDecide__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
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

  if ( (byte_4A575FF & 1) == 0 )
  {
    sub_1B885B0(&Method_NoTitleDialog_OnClickDecide2__);
    byte_4A575FF = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v3 = Method_NoTitleDialog_OnClickDecide2__;
    if ( (*((_BYTE *)Method_NoTitleDialog_OnClickDecide2__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_NoTitleDialog_OnClickDecide2__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
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
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v12; // x1
  int32_t v13; // w2
  int32_t v14; // w3
  const MethodInfo *v15; // x3
  System_String_o *v16; // x2
  const MethodInfo *v17; // x3
  const MethodInfo *v18; // x3
  UnityEngine_GameObject_o *v19; // x0
  System_Action_o *v20; // x20

  if ( (byte_4A575FA & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_NoTitleDialog_EndOpen__);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A575FA = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_9;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  this->fields.onClick = onClick;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.onClick, (int32_t)onClick, v13, v14);
  v16 = message ? message : (System_String_o *)StringLiteral_1/*""*/;
  NoTitleDialog__SetLabelText(this, this->fields.messageLabel, v16, v15);
  NoTitleDialog__SetLabelText(this, this->fields.buttonDecideLabel, decideTxt, v17);
  NoTitleDialog__SetLabelText(this, this->fields.buttonCancelLabel, cancleTxt, v18);
  gameObject = (UnityEngine_GameObject_o *)this->fields.closeBtn;
  if ( !gameObject )
LABEL_9:
    sub_1B8880C(gameObject, v12);
  v19 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  AndroidBackKeyManager__AddBackBtn(v19, 0LL);
  this->fields.isButtonEnable = 0;
  v20 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v20, (Il2CppObject *)this, Method_NoTitleDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v20, 0, 0LL);
}


void __fastcall NoTitleDialog__SetLabelText(
        NoTitleDialog_o *this,
        UILabel_o *label,
        System_String_o *text,
        const MethodInfo *method)
{
  UIWidget_o *messageLabel; // x0
  __int64 v8; // x1
  int32_t v9; // w21
  int v10; // w22
  uint16_t Chars; // w0
  UIWidget_o *window; // x20
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_4A575FB & 1) == 0 )
  {
    sub_1B885B0(&NoTitleDialog_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A575FB = 1;
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
      v9 = 0;
      v10 = 0;
      do
      {
        Chars = System_String__get_Chars(text, v9++, 0LL);
        if ( Chars == 10 )
          ++v10;
      }
      while ( v9 < text->fields._stringLength );
      if ( v10 >= 14 )
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
        sub_1B8880C(messageLabel, v8);
      }
    }
  }
}


UnityEngine_GameObject_o *__fastcall NoTitleDialog__get_closeBtnObject(NoTitleDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *closeBtn; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *v6; // x0

  if ( (byte_4A575FD & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A575FD = 1;
  }
  closeBtn = (UnityEngine_Object_o *)this->fields.closeBtn;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(closeBtn, 0LL, 0LL) )
    return 0LL;
  v6 = (UnityEngine_Component_o *)this->fields.closeBtn;
  if ( !v6 )
    sub_1B8880C(0LL, v4);
  return UnityEngine_Component__get_gameObject(v6, 0LL);
}