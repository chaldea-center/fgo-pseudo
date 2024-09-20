void __fastcall FortificationWarningDialogComponent___ctor(
        FortificationWarningDialogComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A5EF68 & 1) == 0 )
  {
    sub_1B885B0(&BaseDialog_TypeInfo);
    byte_4A5EF68 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall FortificationWarningDialogComponent__Close(
        FortificationWarningDialogComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *checkedSp; // x0
  bool activeSelf; // w20
  TerminalPramsManager_c *v5; // x0
  System_Action_o *v6; // x20

  if ( (byte_4A5EF66 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_FortificationWarningDialogComponent__Close_b__16_0__);
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A5EF66 = 1;
  }
  checkedSp = (UnityEngine_Component_o *)this->fields.checkedSp;
  this->fields.state = 4;
  if ( !checkedSp
    || (checkedSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(checkedSp, 0LL)) == 0LL )
  {
    sub_1B8880C(checkedSp, method);
  }
  activeSelf = UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)checkedSp, 0LL);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A588D1 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A588D1 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  v5->static_fields->_isFortificationCheck_k__BackingField = activeSelf;
  v6 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_FortificationWarningDialogComponent__Close_b__16_0__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v6, 0LL);
}


void __fastcall FortificationWarningDialogComponent__Init(
        FortificationWarningDialogComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1B8880C(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall FortificationWarningDialogComponent__OnClickCancel(
        FortificationWarningDialogComponent_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1

  if ( (byte_4A5EF65 & 1) == 0 )
  {
    sub_1B885B0(&Method_FortificationWarningDialogComponent_OnClickCancel__);
    byte_4A5EF65 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_FortificationWarningDialogComponent_OnClickCancel__;
    if ( (*((_BYTE *)Method_FortificationWarningDialogComponent_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_FortificationWarningDialogComponent_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0LL);
    FortificationWarningDialogComponent__Close(this, v5);
  }
}


void __fastcall FortificationWarningDialogComponent__OnClickCheckBtn(
        FortificationWarningDialogComponent_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  UnityEngine_Component_o *checkedSp; // x0
  UnityEngine_Component_o *v7; // x8
  UnityEngine_GameObject_o *v8; // x19

  if ( (byte_4A5EF63 & 1) == 0 )
  {
    sub_1B885B0(&Method_FortificationWarningDialogComponent_OnClickCheckBtn__);
    byte_4A5EF63 = 1;
  }
  v3 = Method_FortificationWarningDialogComponent_OnClickCheckBtn__;
  if ( (*((_BYTE *)Method_FortificationWarningDialogComponent_OnClickCheckBtn__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1B885C8(Method_FortificationWarningDialogComponent_OnClickCheckBtn__);
  v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
  checkedSp = (UnityEngine_Component_o *)this->fields.checkedSp;
  if ( !checkedSp
    || (checkedSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(checkedSp, 0LL),
        (v7 = (UnityEngine_Component_o *)this->fields.checkedSp) == 0LL)
    || (v8 = (UnityEngine_GameObject_o *)checkedSp,
        (checkedSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(v7, 0LL)) == 0LL)
    || (checkedSp = (UnityEngine_Component_o *)UnityEngine_GameObject__get_activeSelf(
                                                 (UnityEngine_GameObject_o *)checkedSp,
                                                 0LL),
        !v8) )
  {
    sub_1B8880C(checkedSp, v5);
  }
  UnityEngine_GameObject__SetActive(v8, ((unsigned __int8)checkedSp & 1) == 0, 0LL);
}


void __fastcall FortificationWarningDialogComponent__OnClickDecide(
        FortificationWarningDialogComponent_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  TerminalPramsManager_c *v5; // x0
  int32_t EventID; // w20
  EventRewardSceneEntity_array *Master_object; // x0
  const MethodInfo *v8; // x1
  EventRewardSceneEntity_o *v9; // x8
  int32_t slot; // w22
  SceneJumpInfo_o *v11; // x21

  if ( (byte_4A5EF64 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_EventRewardSceneMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_FortificationWarningDialogComponent_OnClickDecide__);
    sub_1B885B0(&SceneJumpInfo_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5EF64 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_FortificationWarningDialogComponent_OnClickDecide__;
    if ( (*((_BYTE *)Method_FortificationWarningDialogComponent_OnClickDecide__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_FortificationWarningDialogComponent_OnClickDecide__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4A57DC3 )
    {
      sub_1B885B0(&TerminalPramsManager_TypeInfo);
      byte_4A57DC3 = 1;
    }
    v5 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v5 = TerminalPramsManager_TypeInfo;
    }
    EventID = WarMaster__getEventID(v5->static_fields->_WarId_k__BackingField, 0LL);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (EventRewardSceneEntity_array *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_EventRewardSceneMaster___);
    if ( Master_object )
    {
      Master_object = EventRewardSceneMaster__getEntityFromIdAndEventType(
                        (EventRewardSceneMaster_o *)Master_object,
                        EventID,
                        15,
                        0LL);
      if ( !Master_object )
      {
LABEL_21:
        FortificationWarningDialogComponent__Close(this, v8);
        return;
      }
      if ( !Master_object->max_length )
        sub_1B88814(Master_object, v8);
      v9 = Master_object->m_Items[0];
      if ( v9 )
      {
        slot = v9->fields.slot;
        v11 = (SceneJumpInfo_o *)sub_1B887FC(SceneJumpInfo_TypeInfo);
        SceneJumpInfo___ctor_38664492(v11, (System_String_o *)StringLiteral_1/*""*/, EventID, slot + 1, 0LL);
        if ( v11 )
        {
          SceneJumpInfo__SetReturnNowScene(v11, 0LL);
          Master_object = (EventRewardSceneEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
          if ( Master_object )
          {
            AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Master_object, 72, 1, (Il2CppObject *)v11, 0LL);
            goto LABEL_21;
          }
        }
      }
    }
    sub_1B8880C(Master_object, v8);
  }
}


void __fastcall FortificationWarningDialogComponent__Open(
        FortificationWarningDialogComponent_o *this,
        const MethodInfo *method)
{
  UILabel_o *titleLb; // x20
  System_String_o *v4; // x0
  __int64 v5; // x1
  UILabel_o *descriptionLb; // x20
  UILabel_o *checkBoxLb; // x20
  UILabel_o *decideButtonLb; // x20
  UILabel_o *cancelButtonLb; // x20
  System_Action_o *v10; // x20

  if ( (byte_4A5EF62 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_FortificationWarningDialogComponent__Open_b__11_0__);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&StringLiteral_6460/*"FORTIFICATION_EXPANSION_DIALOG_DECIDE"*/);
    sub_1B885B0(&StringLiteral_6473/*"FORTIFICATION_WARNING_DIALOG_TITLE"*/);
    sub_1B885B0(&StringLiteral_3756/*"COMMON_CONFIRM_CLOSE"*/);
    sub_1B885B0(&StringLiteral_6472/*"FORTIFICATION_WARNING_DIALOG_DESCRIPTION"*/);
    sub_1B885B0(&StringLiteral_6471/*"FORTIFICATION_WARNING_DIALOG_CHECKBOX"*/);
    byte_4A5EF62 = 1;
  }
  if ( !this->fields.state )
  {
    titleLb = this->fields.titleLb;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v4 = LocalizationManager__Get((System_String_o *)StringLiteral_6473/*"FORTIFICATION_WARNING_DIALOG_TITLE"*/, 0LL);
    if ( !titleLb )
      goto LABEL_12;
    UILabel__set_text(titleLb, v4, 0LL);
    descriptionLb = this->fields.descriptionLb;
    v4 = LocalizationManager__Get((System_String_o *)StringLiteral_6472/*"FORTIFICATION_WARNING_DIALOG_DESCRIPTION"*/, 0LL);
    if ( !descriptionLb )
      goto LABEL_12;
    UILabel__set_text(descriptionLb, v4, 0LL);
    checkBoxLb = this->fields.checkBoxLb;
    v4 = LocalizationManager__Get((System_String_o *)StringLiteral_6471/*"FORTIFICATION_WARNING_DIALOG_CHECKBOX"*/, 0LL);
    if ( !checkBoxLb
      || (UILabel__set_text(checkBoxLb, v4, 0LL),
          decideButtonLb = this->fields.decideButtonLb,
          v4 = LocalizationManager__Get((System_String_o *)StringLiteral_6460/*"FORTIFICATION_EXPANSION_DIALOG_DECIDE"*/, 0LL),
          !decideButtonLb)
      || (UILabel__set_text(decideButtonLb, v4, 0LL),
          cancelButtonLb = this->fields.cancelButtonLb,
          v4 = LocalizationManager__Get((System_String_o *)StringLiteral_3756/*"COMMON_CONFIRM_CLOSE"*/, 0LL),
          !cancelButtonLb) )
    {
LABEL_12:
      sub_1B8880C(v4, v5);
    }
    UILabel__set_text(cancelButtonLb, v4, 0LL);
    this->fields.state = 1;
    v10 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(v10, (Il2CppObject *)this, Method_FortificationWarningDialogComponent__Open_b__11_0__, 0LL);
    BaseDialog__Open((BaseDialog_o *)this, v10, 0, 0LL);
  }
}


void __fastcall FortificationWarningDialogComponent__SerializeFieldNotNullCheck(
        FortificationWarningDialogComponent_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall FortificationWarningDialogComponent___Open_b__11_0(
        FortificationWarningDialogComponent_o *this,
        const MethodInfo *method)
{
  this->fields.state = 2;
}


UnityEngine_GameObject_o *__fastcall FortificationWarningDialogComponent__get_closeBtnObject(
        FortificationWarningDialogComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *cancelButton; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *v6; // x0

  if ( (byte_4A5EF67 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5EF67 = 1;
  }
  cancelButton = (UnityEngine_Object_o *)this->fields.cancelButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(cancelButton, 0LL, 0LL) )
    return 0LL;
  v6 = (UnityEngine_Component_o *)this->fields.cancelButton;
  if ( !v6 )
    sub_1B8880C(0LL, v4);
  return UnityEngine_Component__get_gameObject(v6, 0LL);
}