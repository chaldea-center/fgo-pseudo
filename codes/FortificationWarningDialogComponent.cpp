void __fastcall FortificationWarningDialogComponent___ctor(
        FortificationWarningDialogComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_418A839 & 1) == 0 )
  {
    sub_B2C35C(&BaseDialog_TypeInfo, method);
    byte_418A839 = 1;
  }
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
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

  if ( (byte_418A837 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_FortificationWarningDialogComponent__Close_b__16_0__, v3);
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v4);
    byte_418A837 = 1;
  }
  checkedSp = (UnityEngine_Component_o *)this->fields.checkedSp;
  this->fields.state = 4;
  if ( !checkedSp
    || (checkedSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(checkedSp, 0LL)) == 0LL )
  {
    sub_B2C434(checkedSp, method);
  }
  activeSelf = UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)checkedSp, 0LL);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_4184710 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v6);
    byte_4184710 = 1;
  }
  v8 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v8 = TerminalPramsManager_TypeInfo;
  }
  v8->static_fields->_isFortificationCheck_k__BackingField = activeSelf;
  v9 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
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
    sub_B2C434(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall FortificationWarningDialogComponent__OnClickCancel(
        FortificationWarningDialogComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  if ( (byte_418A836 & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_418A836 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(1, 0LL);
    FortificationWarningDialogComponent__Close(this, v3);
  }
}


void __fastcall FortificationWarningDialogComponent__OnClickCheckBtn(
        FortificationWarningDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Component_o *checkedSp; // x0
  UnityEngine_Component_o *v5; // x8
  UnityEngine_GameObject_o *v6; // x19

  if ( (byte_418A834 & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_418A834 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  checkedSp = (UnityEngine_Component_o *)this->fields.checkedSp;
  if ( !checkedSp
    || (checkedSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(checkedSp, 0LL),
        (v5 = (UnityEngine_Component_o *)this->fields.checkedSp) == 0LL)
    || (v6 = (UnityEngine_GameObject_o *)checkedSp,
        (checkedSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(v5, 0LL)) == 0LL)
    || (checkedSp = (UnityEngine_Component_o *)UnityEngine_GameObject__get_activeSelf(
                                                 (UnityEngine_GameObject_o *)checkedSp,
                                                 0LL),
        !v6) )
  {
    sub_B2C434(checkedSp, v3);
  }
  UnityEngine_GameObject__SetActive(v6, ((unsigned __int8)checkedSp & 1) == 0, 0LL);
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
  __int64 v9; // x1
  TerminalPramsManager_c *v10; // x0
  int32_t EventID; // w20
  EventRewardSceneMaster_o *Master_WarQuestSelectionMaster; // x0
  const MethodInfo *v13; // x1
  struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *list; // x8
  int items_high; // w22
  SceneJumpInfo_o *v16; // x21
  __int64 v17; // x0

  if ( (byte_418A835 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_EventRewardSceneMaster___, method);
    sub_B2C35C(&DataManager_TypeInfo, v3);
    sub_B2C35C(&SceneJumpInfo_TypeInfo, v4);
    sub_B2C35C(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v5);
    sub_B2C35C(&SoundManager_TypeInfo, v6);
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v7);
    sub_B2C35C(&StringLiteral_1/*""*/, v8);
    byte_418A835 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_4183C67 )
    {
      sub_B2C35C(&TerminalPramsManager_TypeInfo, v9);
      byte_4183C67 = 1;
    }
    v10 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v10 = TerminalPramsManager_TypeInfo;
    }
    EventID = WarMaster__getEventID(v10->static_fields->_WarId_k__BackingField, 0LL);
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (EventRewardSceneMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_EventRewardSceneMaster___);
    if ( Master_WarQuestSelectionMaster )
    {
      Master_WarQuestSelectionMaster = (EventRewardSceneMaster_o *)EventRewardSceneMaster__getEntityFromIdAndEventType(
                                                                     Master_WarQuestSelectionMaster,
                                                                     EventID,
                                                                     15,
                                                                     0LL);
      if ( !Master_WarQuestSelectionMaster )
      {
LABEL_25:
        FortificationWarningDialogComponent__Close(this, v13);
        return;
      }
      if ( !LODWORD(Master_WarQuestSelectionMaster->fields._MasterName_k__BackingField) )
      {
        v17 = sub_B2C460(Master_WarQuestSelectionMaster);
        sub_B2C400(v17, 0LL);
      }
      list = Master_WarQuestSelectionMaster->fields.list;
      if ( list )
      {
        items_high = HIDWORD(list->fields.items);
        v16 = (SceneJumpInfo_o *)sub_B2C42C(SceneJumpInfo_TypeInfo);
        SceneJumpInfo___ctor_17293040(v16, (System_String_o *)StringLiteral_1/*""*/, EventID, items_high + 1, 0LL);
        if ( v16 )
        {
          SceneJumpInfo__SetReturnNowScene(v16, 0LL);
          Master_WarQuestSelectionMaster = (EventRewardSceneMaster_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
          if ( Master_WarQuestSelectionMaster )
          {
            AvalonSceneManager__transitionScene(
              (AvalonSceneManager_o *)Master_WarQuestSelectionMaster,
              72,
              1,
              (Il2CppObject *)v16,
              0LL);
            goto LABEL_25;
          }
        }
      }
    }
    sub_B2C434(Master_WarQuestSelectionMaster, v13);
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

  if ( (byte_418A833 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_FortificationWarningDialogComponent__Open_b__11_0__, v3);
    sub_B2C35C(&LocalizationManager_TypeInfo, v4);
    sub_B2C35C(&StringLiteral_6427/*"FORTIFICATION_EXPANSION_DIALOG_DECIDE"*/, v5);
    sub_B2C35C(&StringLiteral_6440/*"FORTIFICATION_WARNING_DIALOG_TITLE"*/, v6);
    sub_B2C35C(&StringLiteral_3261/*"COMMON_CONFIRM_CLOSE"*/, v7);
    sub_B2C35C(&StringLiteral_6439/*"FORTIFICATION_WARNING_DIALOG_DESCRIPTION"*/, v8);
    sub_B2C35C(&StringLiteral_6438/*"FORTIFICATION_WARNING_DIALOG_CHECKBOX"*/, v9);
    byte_418A833 = 1;
  }
  if ( !this->fields.state )
  {
    titleLb = this->fields.titleLb;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v11 = LocalizationManager__Get((System_String_o *)StringLiteral_6440/*"FORTIFICATION_WARNING_DIALOG_TITLE"*/, 0LL);
    if ( !titleLb )
      goto LABEL_13;
    UILabel__set_text(titleLb, v11, 0LL);
    descriptionLb = this->fields.descriptionLb;
    v11 = LocalizationManager__Get((System_String_o *)StringLiteral_6439/*"FORTIFICATION_WARNING_DIALOG_DESCRIPTION"*/, 0LL);
    if ( !descriptionLb )
      goto LABEL_13;
    UILabel__set_text(descriptionLb, v11, 0LL);
    checkBoxLb = this->fields.checkBoxLb;
    v11 = LocalizationManager__Get((System_String_o *)StringLiteral_6438/*"FORTIFICATION_WARNING_DIALOG_CHECKBOX"*/, 0LL);
    if ( !checkBoxLb
      || (UILabel__set_text(checkBoxLb, v11, 0LL),
          decideButtonLb = this->fields.decideButtonLb,
          v11 = LocalizationManager__Get((System_String_o *)StringLiteral_6427/*"FORTIFICATION_EXPANSION_DIALOG_DECIDE"*/, 0LL),
          !decideButtonLb)
      || (UILabel__set_text(decideButtonLb, v11, 0LL),
          cancelButtonLb = this->fields.cancelButtonLb,
          v11 = LocalizationManager__Get((System_String_o *)StringLiteral_3261/*"COMMON_CONFIRM_CLOSE"*/, 0LL),
          !cancelButtonLb) )
    {
LABEL_13:
      sub_B2C434(v11, v12);
    }
    UILabel__set_text(cancelButtonLb, v11, 0LL);
    this->fields.state = 1;
    v17 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
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

  if ( (byte_418A838 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_418A838 = 1;
  }
  cancelButton = (UnityEngine_Object_o *)this->fields.cancelButton;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(cancelButton, 0LL, 0LL) )
    return 0LL;
  v6 = (UnityEngine_Component_o *)this->fields.cancelButton;
  if ( !v6 )
    sub_B2C434(0LL, v4);
  return UnityEngine_Component__get_gameObject(v6, 0LL);
}