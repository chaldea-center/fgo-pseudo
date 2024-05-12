void __fastcall FortificationWarningDialogComponent___ctor(
        FortificationWarningDialogComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_438EA70 & 1) == 0 )
  {
    sub_B775C4(&BaseDialog_TypeInfo);
    byte_438EA70 = 1;
  }
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
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

  if ( (byte_438EA6E & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_FortificationWarningDialogComponent__Close_b__16_0__);
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_438EA6E = 1;
  }
  checkedSp = (UnityEngine_Component_o *)this->fields.checkedSp;
  this->fields.state = 4;
  if ( !checkedSp
    || (checkedSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(checkedSp, 0LL)) == 0LL )
  {
    sub_B7769C(checkedSp, method);
  }
  activeSelf = UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)checkedSp, 0LL);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_43884B1 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_43884B1 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  v5->static_fields->_isFortificationCheck_k__BackingField = activeSelf;
  v6 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
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
    sub_B7769C(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall FortificationWarningDialogComponent__OnClickCancel(
        FortificationWarningDialogComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  if ( (byte_438EA6D & 1) == 0 )
  {
    sub_B775C4(&SoundManager_TypeInfo);
    byte_438EA6D = 1;
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

  if ( (byte_438EA6B & 1) == 0 )
  {
    sub_B775C4(&SoundManager_TypeInfo);
    byte_438EA6B = 1;
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
    sub_B7769C(checkedSp, v3);
  }
  UnityEngine_GameObject__SetActive(v6, ((unsigned __int8)checkedSp & 1) == 0, 0LL);
}


void __fastcall FortificationWarningDialogComponent__OnClickDecide(
        FortificationWarningDialogComponent_o *this,
        const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0
  int32_t EventID; // w20
  EventRewardSceneMaster_o *Master_WarQuestSelectionMaster; // x0
  const MethodInfo *v6; // x1
  struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *list; // x8
  int items_high; // w22
  SceneJumpInfo_o *v9; // x21
  __int64 v10; // x0

  if ( (byte_438EA6C & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMaster_EventRewardSceneMaster___);
    sub_B775C4(&DataManager_TypeInfo);
    sub_B775C4(&SceneJumpInfo_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_B775C4(&SoundManager_TypeInfo);
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    sub_B775C4(&StringLiteral_1/*""*/);
    byte_438EA6C = 1;
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
    if ( !byte_4387465 )
    {
      sub_B775C4(&TerminalPramsManager_TypeInfo);
      byte_4387465 = 1;
    }
    v3 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v3 = TerminalPramsManager_TypeInfo;
    }
    EventID = WarMaster__getEventID(v3->static_fields->_WarId_k__BackingField, 0LL);
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (EventRewardSceneMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_EventRewardSceneMaster___);
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
        FortificationWarningDialogComponent__Close(this, v6);
        return;
      }
      if ( !LODWORD(Master_WarQuestSelectionMaster->fields._MasterName_k__BackingField) )
      {
        v10 = sub_B776C8(Master_WarQuestSelectionMaster);
        sub_B77668(v10, 0LL);
      }
      list = Master_WarQuestSelectionMaster->fields.list;
      if ( list )
      {
        items_high = HIDWORD(list->fields.items);
        v9 = (SceneJumpInfo_o *)sub_B77694(SceneJumpInfo_TypeInfo);
        SceneJumpInfo___ctor_17675072(v9, (System_String_o *)StringLiteral_1/*""*/, EventID, items_high + 1, 0LL);
        if ( v9 )
        {
          SceneJumpInfo__SetReturnNowScene(v9, 0LL);
          Master_WarQuestSelectionMaster = (EventRewardSceneMaster_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
          if ( Master_WarQuestSelectionMaster )
          {
            AvalonSceneManager__transitionScene(
              (AvalonSceneManager_o *)Master_WarQuestSelectionMaster,
              72,
              1,
              (Il2CppObject *)v9,
              0LL);
            goto LABEL_25;
          }
        }
      }
    }
    sub_B7769C(Master_WarQuestSelectionMaster, v6);
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

  if ( (byte_438EA6A & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_FortificationWarningDialogComponent__Open_b__11_0__);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&StringLiteral_6575/*"FORTIFICATION_EXPANSION_DIALOG_DECIDE"*/);
    sub_B775C4(&StringLiteral_6588/*"FORTIFICATION_WARNING_DIALOG_TITLE"*/);
    sub_B775C4(&StringLiteral_3387/*"COMMON_CONFIRM_CLOSE"*/);
    sub_B775C4(&StringLiteral_6587/*"FORTIFICATION_WARNING_DIALOG_DESCRIPTION"*/);
    sub_B775C4(&StringLiteral_6586/*"FORTIFICATION_WARNING_DIALOG_CHECKBOX"*/);
    byte_438EA6A = 1;
  }
  if ( !this->fields.state )
  {
    titleLb = this->fields.titleLb;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v4 = LocalizationManager__Get((System_String_o *)StringLiteral_6588/*"FORTIFICATION_WARNING_DIALOG_TITLE"*/, 0LL);
    if ( !titleLb )
      goto LABEL_13;
    UILabel__set_text(titleLb, v4, 0LL);
    descriptionLb = this->fields.descriptionLb;
    v4 = LocalizationManager__Get((System_String_o *)StringLiteral_6587/*"FORTIFICATION_WARNING_DIALOG_DESCRIPTION"*/, 0LL);
    if ( !descriptionLb )
      goto LABEL_13;
    UILabel__set_text(descriptionLb, v4, 0LL);
    checkBoxLb = this->fields.checkBoxLb;
    v4 = LocalizationManager__Get((System_String_o *)StringLiteral_6586/*"FORTIFICATION_WARNING_DIALOG_CHECKBOX"*/, 0LL);
    if ( !checkBoxLb
      || (UILabel__set_text(checkBoxLb, v4, 0LL),
          decideButtonLb = this->fields.decideButtonLb,
          v4 = LocalizationManager__Get((System_String_o *)StringLiteral_6575/*"FORTIFICATION_EXPANSION_DIALOG_DECIDE"*/, 0LL),
          !decideButtonLb)
      || (UILabel__set_text(decideButtonLb, v4, 0LL),
          cancelButtonLb = this->fields.cancelButtonLb,
          v4 = LocalizationManager__Get((System_String_o *)StringLiteral_3387/*"COMMON_CONFIRM_CLOSE"*/, 0LL),
          !cancelButtonLb) )
    {
LABEL_13:
      sub_B7769C(v4, v5);
    }
    UILabel__set_text(cancelButtonLb, v4, 0LL);
    this->fields.state = 1;
    v10 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
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

  if ( (byte_438EA6F & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438EA6F = 1;
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
    sub_B7769C(0LL, v4);
  return UnityEngine_Component__get_gameObject(v6, 0LL);
}