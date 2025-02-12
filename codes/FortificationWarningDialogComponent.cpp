void __fastcall FortificationWarningDialogComponent___ctor(
        FortificationWarningDialogComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_4BB86F3 & 1) == 0 )
  {
    sub_1C13D24(&BaseDialog_TypeInfo, method);
    byte_4BB86F3 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall FortificationWarningDialogComponent__Close(
        FortificationWarningDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_Component_o *checkedSp; // x0
  __int64 v6; // x1
  bool activeSelf; // w20
  TerminalPramsManager_c *v8; // x0
  System_Action_o *v9; // x20

  if ( (byte_4BB86F1 & 1) == 0 )
  {
    sub_1C13D24(&System_Action_TypeInfo, method);
    sub_1C13D24(&Method_FortificationWarningDialogComponent__Close_b__16_0__, v3);
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v4);
    byte_4BB86F1 = 1;
  }
  checkedSp = (UnityEngine_Component_o *)this->fields.checkedSp;
  this->fields.state = 4;
  if ( !checkedSp
    || (checkedSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(checkedSp, 0LL)) == 0LL )
  {
    sub_1C13F80(checkedSp, method);
  }
  activeSelf = UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)checkedSp, 0LL);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BB1C9B )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v6);
    byte_4BB1C9B = 1;
  }
  v8 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v8 = TerminalPramsManager_TypeInfo;
  }
  v8->static_fields->_isFortificationCheck_k__BackingField = activeSelf;
  v9 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
  System_Action___ctor(v9, (Il2CppObject *)this, Method_FortificationWarningDialogComponent__Close_b__16_0__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v9, 0LL);
}


void __fastcall FortificationWarningDialogComponent__Init(
        FortificationWarningDialogComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1C13F80(0LL, v4);
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

  if ( (byte_4BB86F0 & 1) == 0 )
  {
    sub_1C13D24(&Method_FortificationWarningDialogComponent_OnClickCancel__, method);
    byte_4BB86F0 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_FortificationWarningDialogComponent_OnClickCancel__;
    if ( (*((_BYTE *)Method_FortificationWarningDialogComponent_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C13D3C(Method_FortificationWarningDialogComponent_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C13D08(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0LL);
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

  if ( (byte_4BB86EE & 1) == 0 )
  {
    sub_1C13D24(&Method_FortificationWarningDialogComponent_OnClickCheckBtn__, method);
    byte_4BB86EE = 1;
  }
  v3 = Method_FortificationWarningDialogComponent_OnClickCheckBtn__;
  if ( (*((_BYTE *)Method_FortificationWarningDialogComponent_OnClickCheckBtn__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C13D3C(Method_FortificationWarningDialogComponent_OnClickCheckBtn__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C13D08(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
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
    sub_1C13F80(checkedSp, v5);
  }
  UnityEngine_GameObject__SetActive(v8, ((unsigned __int8)checkedSp & 1) == 0, 0LL);
}


void __fastcall FortificationWarningDialogComponent__OnClickDecide(
        FortificationWarningDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  _QWORD *v9; // x0
  System_Reflection_MethodBase_o *v10; // x0
  __int64 v11; // x1
  TerminalPramsManager_c *v12; // x0
  int32_t EventID; // w20
  EventRewardSceneEntity_array *Master_object; // x0
  const MethodInfo *v15; // x1
  EventRewardSceneEntity_o *v16; // x8
  int32_t slot; // w22
  SceneJumpInfo_o *v18; // x21

  if ( (byte_4BB86EF & 1) == 0 )
  {
    sub_1C13D24(&Method_DataManager_GetMaster_EventRewardSceneMaster___, method);
    sub_1C13D24(&DataManager_TypeInfo, v3);
    sub_1C13D24(&Method_FortificationWarningDialogComponent_OnClickDecide__, v4);
    sub_1C13D24(&SceneJumpInfo_TypeInfo, v5);
    sub_1C13D24(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v6);
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v7);
    sub_1C13D24(&StringLiteral_1/*""*/, v8);
    byte_4BB86EF = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v9 = Method_FortificationWarningDialogComponent_OnClickDecide__;
    if ( (*((_BYTE *)Method_FortificationWarningDialogComponent_OnClickDecide__ + 83) & 2) != 0 )
      v9 = (_QWORD *)sub_1C13D3C(Method_FortificationWarningDialogComponent_OnClickDecide__);
    v10 = (System_Reflection_MethodBase_o *)sub_1C13D08(v9, v9[4]);
    OverwriteAssetSoundName__PlaySystemSe(v10, 0, 0, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4BB1250 )
    {
      sub_1C13D24(&TerminalPramsManager_TypeInfo, v11);
      byte_4BB1250 = 1;
    }
    v12 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v12 = TerminalPramsManager_TypeInfo;
    }
    EventID = WarMaster__getEventID(v12->static_fields->_WarId_k__BackingField, 0LL);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (EventRewardSceneEntity_array *)DataManager__GetMaster_object_((const MethodInfo_2F8F418 *)Method_DataManager_GetMaster_EventRewardSceneMaster___);
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
        FortificationWarningDialogComponent__Close(this, v15);
        return;
      }
      if ( !Master_object->max_length )
        sub_1C13F88(Master_object, v15);
      v16 = Master_object->m_Items[0];
      if ( v16 )
      {
        slot = v16->fields.slot;
        v18 = (SceneJumpInfo_o *)sub_1C13F70(SceneJumpInfo_TypeInfo);
        SceneJumpInfo___ctor_39818088(v18, (System_String_o *)StringLiteral_1/*""*/, EventID, slot + 1, 0LL);
        if ( v18 )
        {
          SceneJumpInfo__SetReturnNowScene(v18, 0LL);
          Master_object = (EventRewardSceneEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
          if ( Master_object )
          {
            AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Master_object, 72, 1, (Il2CppObject *)v18, 0LL);
            goto LABEL_21;
          }
        }
      }
    }
    sub_1C13F80(Master_object, v15);
  }
}


void __fastcall FortificationWarningDialogComponent__Open(
        FortificationWarningDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  UILabel_o *titleLb; // x20
  System_String_o *v11; // x0
  __int64 v12; // x1
  UILabel_o *descriptionLb; // x20
  UILabel_o *checkBoxLb; // x20
  UILabel_o *decideButtonLb; // x20
  UILabel_o *cancelButtonLb; // x20
  System_Action_o *v17; // x20

  if ( (byte_4BB86ED & 1) == 0 )
  {
    sub_1C13D24(&System_Action_TypeInfo, method);
    sub_1C13D24(&Method_FortificationWarningDialogComponent__Open_b__11_0__, v3);
    sub_1C13D24(&LocalizationManager_TypeInfo, v4);
    sub_1C13D24(&StringLiteral_6614/*"FORTIFICATION_CONFIRM_DIALOG_POINT_DESCRIPTION"*/, v5);
    sub_1C13D24(&StringLiteral_6627/*"FORTIFICATION_SET_CONFIRM_DIALOG_WARNING_DESCRIPTION"*/, v6);
    sub_1C13D24(&StringLiteral_3799/*"COMMNAD_SPELL_RECV_TXT"*/, v7);
    sub_1C13D24(&StringLiteral_6626/*"FORTIFICATION_SET_CONFIRM_DIALOG_TITLE"*/, v8);
    sub_1C13D24(&StringLiteral_6625/*"FORTIFICATION_SET_CONFIRM_DIALOG_DESCRIPTION"*/, v9);
    byte_4BB86ED = 1;
  }
  if ( !this->fields.state )
  {
    titleLb = this->fields.titleLb;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v11 = LocalizationManager__Get((System_String_o *)StringLiteral_6627/*"FORTIFICATION_SET_CONFIRM_DIALOG_WARNING_DESCRIPTION"*/, 0LL);
    if ( !titleLb )
      goto LABEL_12;
    UILabel__set_text(titleLb, v11, 0LL);
    descriptionLb = this->fields.descriptionLb;
    v11 = LocalizationManager__Get((System_String_o *)StringLiteral_6626/*"FORTIFICATION_SET_CONFIRM_DIALOG_TITLE"*/, 0LL);
    if ( !descriptionLb )
      goto LABEL_12;
    UILabel__set_text(descriptionLb, v11, 0LL);
    checkBoxLb = this->fields.checkBoxLb;
    v11 = LocalizationManager__Get((System_String_o *)StringLiteral_6625/*"FORTIFICATION_SET_CONFIRM_DIALOG_DESCRIPTION"*/, 0LL);
    if ( !checkBoxLb
      || (UILabel__set_text(checkBoxLb, v11, 0LL),
          decideButtonLb = this->fields.decideButtonLb,
          v11 = LocalizationManager__Get((System_String_o *)StringLiteral_6614/*"FORTIFICATION_CONFIRM_DIALOG_POINT_DESCRIPTION"*/, 0LL),
          !decideButtonLb)
      || (UILabel__set_text(decideButtonLb, v11, 0LL),
          cancelButtonLb = this->fields.cancelButtonLb,
          v11 = LocalizationManager__Get((System_String_o *)StringLiteral_3799/*"COMMNAD_SPELL_RECV_TXT"*/, 0LL),
          !cancelButtonLb) )
    {
LABEL_12:
      sub_1C13F80(v11, v12);
    }
    UILabel__set_text(cancelButtonLb, v11, 0LL);
    this->fields.state = 1;
    v17 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
    System_Action___ctor(v17, (Il2CppObject *)this, Method_FortificationWarningDialogComponent__Open_b__11_0__, 0LL);
    BaseDialog__Open((BaseDialog_o *)this, v17, 0, 0LL);
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

  if ( (byte_4BB86F2 & 1) == 0 )
  {
    sub_1C13D24(&UnityEngine_Object_TypeInfo, method);
    byte_4BB86F2 = 1;
  }
  cancelButton = (UnityEngine_Object_o *)this->fields.cancelButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(cancelButton, 0LL, 0LL) )
    return 0LL;
  v6 = (UnityEngine_Component_o *)this->fields.cancelButton;
  if ( !v6 )
    sub_1C13F80(0LL, v4);
  return UnityEngine_Component__get_gameObject(v6, 0LL);
}