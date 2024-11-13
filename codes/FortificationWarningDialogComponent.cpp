void __fastcall FortificationWarningDialogComponent___ctor(
        FortificationWarningDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B1A158 & 1) == 0 )
  {
    sub_1BCA7E0(&BaseDialog_TypeInfo, method, v2);
    byte_4B1A158 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, method);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall FortificationWarningDialogComponent__Close(
        FortificationWarningDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  UnityEngine_Component_o *checkedSp; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  bool activeSelf; // w20
  TerminalPramsManager_c *v13; // x0
  System_Action_o *v14; // x20

  if ( (byte_4B1A156 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_FortificationWarningDialogComponent__Close_b__16_0__, v4, v5);
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v6, v7);
    byte_4B1A156 = 1;
  }
  checkedSp = (UnityEngine_Component_o *)this->fields.checkedSp;
  this->fields.state = 4;
  if ( !checkedSp
    || (checkedSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(checkedSp, 0LL)) == 0LL )
  {
    sub_1BCAA3C(checkedSp, method);
  }
  activeSelf = UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)checkedSp, 0LL);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v9);
  if ( !byte_4B13803 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v9, v10);
    byte_4B13803 = 1;
  }
  v13 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v9);
    v13 = TerminalPramsManager_TypeInfo;
  }
  v13->static_fields->_isFortificationCheck_k__BackingField = activeSelf;
  v14 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v9, v10, v11);
  System_Action___ctor(v14, (Il2CppObject *)this, Method_FortificationWarningDialogComponent__Close_b__16_0__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v14, 0LL);
}


void __fastcall FortificationWarningDialogComponent__Init(
        FortificationWarningDialogComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1BCAA3C(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall FortificationWarningDialogComponent__OnClickCancel(
        FortificationWarningDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x1

  if ( (byte_4B1A155 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_FortificationWarningDialogComponent_OnClickCancel__, method, v2);
    byte_4B1A155 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v4 = Method_FortificationWarningDialogComponent_OnClickCancel__;
    if ( (*((_BYTE *)Method_FortificationWarningDialogComponent_OnClickCancel__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_FortificationWarningDialogComponent_OnClickCancel__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 1, 0LL);
    FortificationWarningDialogComponent__Close(this, v6);
  }
}


void __fastcall FortificationWarningDialogComponent__OnClickCheckBtn(
        FortificationWarningDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  __int64 v6; // x1
  UnityEngine_Component_o *checkedSp; // x0
  UnityEngine_Component_o *v8; // x8
  UnityEngine_GameObject_o *v9; // x19

  if ( (byte_4B1A153 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_FortificationWarningDialogComponent_OnClickCheckBtn__, method, v2);
    byte_4B1A153 = 1;
  }
  v4 = Method_FortificationWarningDialogComponent_OnClickCheckBtn__;
  if ( (*((_BYTE *)Method_FortificationWarningDialogComponent_OnClickCheckBtn__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1BCA7F8(Method_FortificationWarningDialogComponent_OnClickCheckBtn__);
  v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
  checkedSp = (UnityEngine_Component_o *)this->fields.checkedSp;
  if ( !checkedSp
    || (checkedSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(checkedSp, 0LL),
        (v8 = (UnityEngine_Component_o *)this->fields.checkedSp) == 0LL)
    || (v9 = (UnityEngine_GameObject_o *)checkedSp,
        (checkedSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(v8, 0LL)) == 0LL)
    || (checkedSp = (UnityEngine_Component_o *)UnityEngine_GameObject__get_activeSelf(
                                                 (UnityEngine_GameObject_o *)checkedSp,
                                                 0LL),
        !v9) )
  {
    sub_1BCAA3C(checkedSp, v6);
  }
  UnityEngine_GameObject__SetActive(v9, ((unsigned __int8)checkedSp & 1) == 0, 0LL);
}


void __fastcall FortificationWarningDialogComponent__OnClickDecide(
        FortificationWarningDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  _QWORD *v16; // x0
  System_Reflection_MethodBase_o *v17; // x0
  __int64 v18; // x1
  __int64 v19; // x2
  TerminalPramsManager_c *v20; // x0
  __int64 v21; // x1
  int32_t EventID; // w20
  EventRewardSceneEntity_array *Master_object; // x0
  const MethodInfo *v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  EventRewardSceneEntity_o *v27; // x8
  int32_t slot; // w22
  SceneJumpInfo_o *v29; // x21

  if ( (byte_4B1A154 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_EventRewardSceneMaster___, method, v2);
    sub_1BCA7E0(&DataManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_FortificationWarningDialogComponent_OnClickDecide__, v6, v7);
    sub_1BCA7E0(&SceneJumpInfo_TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v10, v11);
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v12, v13);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v14, v15);
    byte_4B1A154 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v16 = Method_FortificationWarningDialogComponent_OnClickDecide__;
    if ( (*((_BYTE *)Method_FortificationWarningDialogComponent_OnClickDecide__ + 83) & 2) != 0 )
      v16 = (_QWORD *)sub_1BCA7F8(Method_FortificationWarningDialogComponent_OnClickDecide__);
    v17 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v16, v16[4]);
    OverwriteAssetSoundName__PlaySystemSe(v17, 0, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v18);
    if ( !byte_4B12DC6 )
    {
      sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v18, v19);
      byte_4B12DC6 = 1;
    }
    v20 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v18);
      v20 = TerminalPramsManager_TypeInfo;
    }
    EventID = WarMaster__getEventID(v20->static_fields->_WarId_k__BackingField, 0LL);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v21);
    Master_object = (EventRewardSceneEntity_array *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_EventRewardSceneMaster___);
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
        FortificationWarningDialogComponent__Close(this, v24);
        return;
      }
      if ( !Master_object->max_length )
        sub_1BCAA44(Master_object, v24);
      v27 = Master_object->m_Items[0];
      if ( v27 )
      {
        slot = v27->fields.slot;
        v29 = (SceneJumpInfo_o *)sub_1BCAA2C(SceneJumpInfo_TypeInfo, v24, v25, v26);
        SceneJumpInfo___ctor_39380944(v29, (System_String_o *)StringLiteral_1/*""*/, EventID, slot + 1, 0LL);
        if ( v29 )
        {
          SceneJumpInfo__SetReturnNowScene(v29, 0LL);
          Master_object = (EventRewardSceneEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
          if ( Master_object )
          {
            AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Master_object, 72, 1, (Il2CppObject *)v29, 0LL);
            goto LABEL_21;
          }
        }
      }
    }
    sub_1BCAA3C(Master_object, v24);
  }
}


void __fastcall FortificationWarningDialogComponent__Open(
        FortificationWarningDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  UILabel_o *titleLb; // x20
  System_String_o *v19; // x0
  __int64 v20; // x1
  UILabel_o *descriptionLb; // x20
  UILabel_o *checkBoxLb; // x20
  UILabel_o *decideButtonLb; // x20
  UILabel_o *cancelButtonLb; // x20
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x3
  System_Action_o *v28; // x20

  if ( (byte_4B1A152 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_FortificationWarningDialogComponent__Open_b__11_0__, v4, v5);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&StringLiteral_6579/*"FORTIFICATION_EXPANSION_DIALOG_DECIDE"*/, v8, v9);
    sub_1BCA7E0(&StringLiteral_6592/*"FORTIFICATION_WARNING_DIALOG_TITLE"*/, v10, v11);
    sub_1BCA7E0(&StringLiteral_3787/*"COMMON_CONFIRM_CLOSE"*/, v12, v13);
    sub_1BCA7E0(&StringLiteral_6591/*"FORTIFICATION_WARNING_DIALOG_DESCRIPTION"*/, v14, v15);
    sub_1BCA7E0(&StringLiteral_6590/*"FORTIFICATION_WARNING_DIALOG_CHECKBOX"*/, v16, v17);
    byte_4B1A152 = 1;
  }
  if ( !this->fields.state )
  {
    titleLb = this->fields.titleLb;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
    v19 = LocalizationManager__Get((System_String_o *)StringLiteral_6592/*"FORTIFICATION_WARNING_DIALOG_TITLE"*/, 0LL);
    if ( !titleLb )
      goto LABEL_12;
    UILabel__set_text(titleLb, v19, 0LL);
    descriptionLb = this->fields.descriptionLb;
    v19 = LocalizationManager__Get((System_String_o *)StringLiteral_6591/*"FORTIFICATION_WARNING_DIALOG_DESCRIPTION"*/, 0LL);
    if ( !descriptionLb )
      goto LABEL_12;
    UILabel__set_text(descriptionLb, v19, 0LL);
    checkBoxLb = this->fields.checkBoxLb;
    v19 = LocalizationManager__Get((System_String_o *)StringLiteral_6590/*"FORTIFICATION_WARNING_DIALOG_CHECKBOX"*/, 0LL);
    if ( !checkBoxLb
      || (UILabel__set_text(checkBoxLb, v19, 0LL),
          decideButtonLb = this->fields.decideButtonLb,
          v19 = LocalizationManager__Get((System_String_o *)StringLiteral_6579/*"FORTIFICATION_EXPANSION_DIALOG_DECIDE"*/, 0LL),
          !decideButtonLb)
      || (UILabel__set_text(decideButtonLb, v19, 0LL),
          cancelButtonLb = this->fields.cancelButtonLb,
          v19 = LocalizationManager__Get((System_String_o *)StringLiteral_3787/*"COMMON_CONFIRM_CLOSE"*/, 0LL),
          !cancelButtonLb) )
    {
LABEL_12:
      sub_1BCAA3C(v19, v20);
    }
    UILabel__set_text(cancelButtonLb, v19, 0LL);
    this->fields.state = 1;
    v28 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v25, v26, v27);
    System_Action___ctor(v28, (Il2CppObject *)this, Method_FortificationWarningDialogComponent__Open_b__11_0__, 0LL);
    BaseDialog__Open((BaseDialog_o *)this, v28, 0, 0LL);
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
  __int64 v2; // x2
  UnityEngine_Object_o *cancelButton; // x20
  __int64 v5; // x1
  UnityEngine_Component_o *v7; // x0

  if ( (byte_4B1A157 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B1A157 = 1;
  }
  cancelButton = (UnityEngine_Object_o *)this->fields.cancelButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Equality(cancelButton, 0LL, 0LL) )
    return 0LL;
  v7 = (UnityEngine_Component_o *)this->fields.cancelButton;
  if ( !v7 )
    sub_1BCAA3C(0LL, v5);
  return UnityEngine_Component__get_gameObject(v7, 0LL);
}