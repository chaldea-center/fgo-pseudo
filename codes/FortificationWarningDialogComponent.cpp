void __fastcall FortificationWarningDialogComponent___ctor(
        FortificationWarningDialogComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EBDBC & 1) == 0 )
  {
    sub_B5D5C4(&BaseDialog_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EBDBC = 1;
  }
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall FortificationWarningDialogComponent__Close(
        FortificationWarningDialogComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  UnityEngine_Component_o *checkedSp; // x0
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  bool activeSelf; // w20
  TerminalPramsManager_c *v16; // x0
  System_Action_o *v17; // x20

  if ( (byte_42EBDBA & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_FortificationWarningDialogComponent__Close_b__16_0__, v5, v6, v7);
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v8, v9, v10);
    byte_42EBDBA = 1;
  }
  checkedSp = (UnityEngine_Component_o *)this->fields.checkedSp;
  this->fields.state = 4;
  if ( !checkedSp
    || (checkedSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(checkedSp, 0LL)) == 0LL )
  {
    sub_B5D69C(checkedSp, method);
  }
  activeSelf = UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)checkedSp, 0LL);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_42E5CC1 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v12, v13, v14);
    byte_42E5CC1 = 1;
  }
  v16 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v16 = TerminalPramsManager_TypeInfo;
  }
  v16->static_fields->_isFortificationCheck_k__BackingField = activeSelf;
  v17 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v17, (Il2CppObject *)this, Method_FortificationWarningDialogComponent__Close_b__16_0__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v17, 0LL);
}


void __fastcall FortificationWarningDialogComponent__Init(
        FortificationWarningDialogComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B5D69C(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall FortificationWarningDialogComponent__OnClickCancel(
        FortificationWarningDialogComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  const MethodInfo *v5; // x1

  if ( (byte_42EBDB9 & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EBDB9 = 1;
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
    FortificationWarningDialogComponent__Close(this, v5);
  }
}


void __fastcall FortificationWarningDialogComponent__OnClickCheckBtn(
        FortificationWarningDialogComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  __int64 v5; // x1
  UnityEngine_Component_o *checkedSp; // x0
  UnityEngine_Component_o *v7; // x8
  UnityEngine_GameObject_o *v8; // x19

  if ( (byte_42EBDB7 & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EBDB7 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
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
    sub_B5D69C(checkedSp, v5);
  }
  UnityEngine_GameObject__SetActive(v8, ((unsigned __int8)checkedSp & 1) == 0, 0LL);
}


void __fastcall FortificationWarningDialogComponent__OnClickDecide(
        FortificationWarningDialogComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  TerminalPramsManager_c *v26; // x0
  int32_t EventID; // w20
  EventRewardSceneMaster_o *Master_WarQuestSelectionMaster; // x0
  const MethodInfo *v29; // x1
  struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *list; // x8
  int items_high; // w22
  SceneJumpInfo_o *v32; // x21
  __int64 v33; // x0

  if ( (byte_42EBDB8 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_EventRewardSceneMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&DataManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&SceneJumpInfo_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v11, v12, v13);
    sub_B5D5C4(&SoundManager_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&StringLiteral_1/*""*/, v20, v21, v22);
    byte_42EBDB8 = 1;
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
    if ( !byte_42E4B20 )
    {
      sub_B5D5C4(&TerminalPramsManager_TypeInfo, v23, v24, v25);
      byte_42E4B20 = 1;
    }
    v26 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v26 = TerminalPramsManager_TypeInfo;
    }
    EventID = WarMaster__getEventID(v26->static_fields->_WarId_k__BackingField, 0LL);
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (EventRewardSceneMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_EventRewardSceneMaster___);
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
        FortificationWarningDialogComponent__Close(this, v29);
        return;
      }
      if ( !LODWORD(Master_WarQuestSelectionMaster->fields._MasterName_k__BackingField) )
      {
        v33 = sub_B5D6C8(Master_WarQuestSelectionMaster);
        sub_B5D668(v33, 0LL);
      }
      list = Master_WarQuestSelectionMaster->fields.list;
      if ( list )
      {
        items_high = HIDWORD(list->fields.items);
        v32 = (SceneJumpInfo_o *)sub_B5D694(SceneJumpInfo_TypeInfo);
        SceneJumpInfo___ctor_17509152(v32, (System_String_o *)StringLiteral_1/*""*/, EventID, items_high + 1, 0LL);
        if ( v32 )
        {
          SceneJumpInfo__SetReturnNowScene(v32, 0LL);
          Master_WarQuestSelectionMaster = (EventRewardSceneMaster_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
          if ( Master_WarQuestSelectionMaster )
          {
            AvalonSceneManager__transitionScene(
              (AvalonSceneManager_o *)Master_WarQuestSelectionMaster,
              72,
              1,
              (Il2CppObject *)v32,
              0LL);
            goto LABEL_25;
          }
        }
      }
    }
    sub_B5D69C(Master_WarQuestSelectionMaster, v29);
  }
}


void __fastcall FortificationWarningDialogComponent__Open(
        FortificationWarningDialogComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  UILabel_o *titleLb; // x20
  System_String_o *v27; // x0
  __int64 v28; // x1
  UILabel_o *descriptionLb; // x20
  UILabel_o *checkBoxLb; // x20
  UILabel_o *decideButtonLb; // x20
  UILabel_o *cancelButtonLb; // x20
  System_Action_o *v33; // x20

  if ( (byte_42EBDB6 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_FortificationWarningDialogComponent__Open_b__11_0__, v5, v6, v7);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_6506/*"FORTIFICATION_EXPANSION_DIALOG_DECIDE"*/, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_6519/*"FORTIFICATION_WARNING_DIALOG_TITLE"*/, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_3327/*"COMMON_CONFIRM_CLOSE"*/, v17, v18, v19);
    sub_B5D5C4(&StringLiteral_6518/*"FORTIFICATION_WARNING_DIALOG_DESCRIPTION"*/, v20, v21, v22);
    sub_B5D5C4(&StringLiteral_6517/*"FORTIFICATION_WARNING_DIALOG_CHECKBOX"*/, v23, v24, v25);
    byte_42EBDB6 = 1;
  }
  if ( !this->fields.state )
  {
    titleLb = this->fields.titleLb;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v27 = LocalizationManager__Get((System_String_o *)StringLiteral_6519/*"FORTIFICATION_WARNING_DIALOG_TITLE"*/, 0LL);
    if ( !titleLb )
      goto LABEL_13;
    UILabel__set_text(titleLb, v27, 0LL);
    descriptionLb = this->fields.descriptionLb;
    v27 = LocalizationManager__Get((System_String_o *)StringLiteral_6518/*"FORTIFICATION_WARNING_DIALOG_DESCRIPTION"*/, 0LL);
    if ( !descriptionLb )
      goto LABEL_13;
    UILabel__set_text(descriptionLb, v27, 0LL);
    checkBoxLb = this->fields.checkBoxLb;
    v27 = LocalizationManager__Get((System_String_o *)StringLiteral_6517/*"FORTIFICATION_WARNING_DIALOG_CHECKBOX"*/, 0LL);
    if ( !checkBoxLb
      || (UILabel__set_text(checkBoxLb, v27, 0LL),
          decideButtonLb = this->fields.decideButtonLb,
          v27 = LocalizationManager__Get((System_String_o *)StringLiteral_6506/*"FORTIFICATION_EXPANSION_DIALOG_DECIDE"*/, 0LL),
          !decideButtonLb)
      || (UILabel__set_text(decideButtonLb, v27, 0LL),
          cancelButtonLb = this->fields.cancelButtonLb,
          v27 = LocalizationManager__Get((System_String_o *)StringLiteral_3327/*"COMMON_CONFIRM_CLOSE"*/, 0LL),
          !cancelButtonLb) )
    {
LABEL_13:
      sub_B5D69C(v27, v28);
    }
    UILabel__set_text(cancelButtonLb, v27, 0LL);
    this->fields.state = 1;
    v33 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(v33, (Il2CppObject *)this, Method_FortificationWarningDialogComponent__Open_b__11_0__, 0LL);
    BaseDialog__Open((BaseDialog_o *)this, v33, 0, 0LL);
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
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Object_o *cancelButton; // x20
  __int64 v6; // x1
  UnityEngine_Component_o *v8; // x0

  if ( (byte_42EBDBB & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EBDBB = 1;
  }
  cancelButton = (UnityEngine_Object_o *)this->fields.cancelButton;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(cancelButton, 0LL, 0LL) )
    return 0LL;
  v8 = (UnityEngine_Component_o *)this->fields.cancelButton;
  if ( !v8 )
    sub_B5D69C(0LL, v6);
  return UnityEngine_Component__get_gameObject(v8, 0LL);
}