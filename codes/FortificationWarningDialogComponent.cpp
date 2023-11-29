void __fastcall FortificationWarningDialogComponent___ctor(
        FortificationWarningDialogComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_40FA77E & 1) == 0 )
  {
    sub_B16FFC(&BaseDialog_TypeInfo, method);
    byte_40FA77E = 1;
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
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x3
  __int64 v10; // x4
  bool activeSelf; // w20
  TerminalPramsManager_c *v12; // x0
  System_Action_o *v13; // x20

  if ( (byte_40FA77C & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_FortificationWarningDialogComponent__Close_b__16_0__, v3);
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v4);
    byte_40FA77C = 1;
  }
  checkedSp = (UnityEngine_Component_o *)this->fields.checkedSp;
  this->fields.state = 4;
  if ( !checkedSp || (gameObject = UnityEngine_Component__get_gameObject(checkedSp, 0LL)) == 0LL )
    sub_B170D4();
  activeSelf = UnityEngine_GameObject__get_activeSelf(gameObject, 0LL);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_40F6E21 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v7);
    byte_40F6E21 = 1;
  }
  v12 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v12 = TerminalPramsManager_TypeInfo;
  }
  v12->static_fields->_isFortificationCheck_k__BackingField = activeSelf;
  v13 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v7, v8, v9, v10);
  System_Action___ctor(v13, (Il2CppObject *)this, Method_FortificationWarningDialogComponent__Close_b__16_0__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v13, 0LL);
}


void __fastcall FortificationWarningDialogComponent__Init(
        FortificationWarningDialogComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B170D4();
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall FortificationWarningDialogComponent__OnClickCancel(
        FortificationWarningDialogComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  if ( (byte_40FA77B & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40FA77B = 1;
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
  UnityEngine_Component_o *checkedSp; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *v5; // x8
  UnityEngine_GameObject_o *v6; // x19
  UnityEngine_GameObject_o *v7; // x0
  bool activeSelf; // w0

  if ( (byte_40FA779 & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40FA779 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  checkedSp = (UnityEngine_Component_o *)this->fields.checkedSp;
  if ( !checkedSp
    || (gameObject = UnityEngine_Component__get_gameObject(checkedSp, 0LL),
        (v5 = (UnityEngine_Component_o *)this->fields.checkedSp) == 0LL)
    || (v6 = gameObject, (v7 = UnityEngine_Component__get_gameObject(v5, 0LL)) == 0LL)
    || (activeSelf = UnityEngine_GameObject__get_activeSelf(v7, 0LL), !v6) )
  {
    sub_B170D4();
  }
  UnityEngine_GameObject__SetActive(v6, !activeSelf, 0LL);
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
  EventRewardSceneEntity_array *EntityFromIdAndEventType; // x0
  const MethodInfo *v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  EventRewardSceneEntity_o *v18; // x8
  int32_t slot; // w22
  SceneJumpInfo_o *v20; // x21
  AvalonSceneManager_o *Instance; // x0

  if ( (byte_40FA77A & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_EventRewardSceneMaster___, method);
    sub_B16FFC(&DataManager_TypeInfo, v3);
    sub_B16FFC(&SceneJumpInfo_TypeInfo, v4);
    sub_B16FFC(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v5);
    sub_B16FFC(&SoundManager_TypeInfo, v6);
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v7);
    sub_B16FFC(&StringLiteral_1, v8);
    byte_40FA77A = 1;
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
    if ( !byte_40F6044 )
    {
      sub_B16FFC(&TerminalPramsManager_TypeInfo, v9);
      byte_40F6044 = 1;
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
    Master_WarQuestSelectionMaster = (EventRewardSceneMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_EventRewardSceneMaster___);
    if ( Master_WarQuestSelectionMaster )
    {
      EntityFromIdAndEventType = EventRewardSceneMaster__getEntityFromIdAndEventType(
                                   Master_WarQuestSelectionMaster,
                                   EventID,
                                   15,
                                   0LL);
      if ( !EntityFromIdAndEventType )
      {
LABEL_25:
        FortificationWarningDialogComponent__Close(this, v14);
        return;
      }
      if ( !EntityFromIdAndEventType->max_length )
      {
        sub_B17100(EntityFromIdAndEventType, v14, v15);
        sub_B170A0();
      }
      v18 = EntityFromIdAndEventType->m_Items[0];
      if ( v18 )
      {
        slot = v18->fields.slot;
        v20 = (SceneJumpInfo_o *)sub_B170CC(SceneJumpInfo_TypeInfo, v14, v15, v16, v17);
        SceneJumpInfo___ctor_29748100(v20, (System_String_o *)StringLiteral_1, EventID, slot + 1, 0LL);
        if ( v20 )
        {
          SceneJumpInfo__SetReturnNowScene(v20, 0LL);
          Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
          if ( Instance )
          {
            AvalonSceneManager__transitionScene(Instance, 72, 1, (Il2CppObject *)v20, 0LL);
            goto LABEL_25;
          }
        }
      }
    }
    sub_B170D4();
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
  UILabel_o *descriptionLb; // x20
  System_String_o *v13; // x0
  UILabel_o *checkBoxLb; // x20
  System_String_o *v15; // x0
  UILabel_o *decideButtonLb; // x20
  System_String_o *v17; // x0
  UILabel_o *cancelButtonLb; // x20
  System_String_o *v19; // x0
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  __int64 v23; // x4
  System_Action_o *v24; // x20

  if ( (byte_40FA778 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_FortificationWarningDialogComponent__Open_b__11_0__, v3);
    sub_B16FFC(&LocalizationManager_TypeInfo, v4);
    sub_B16FFC(&StringLiteral_6409, v5);
    sub_B16FFC(&StringLiteral_6422, v6);
    sub_B16FFC(&StringLiteral_3252, v7);
    sub_B16FFC(&StringLiteral_6421, v8);
    sub_B16FFC(&StringLiteral_6420, v9);
    byte_40FA778 = 1;
  }
  if ( !this->fields.state )
  {
    titleLb = this->fields.titleLb;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v11 = LocalizationManager__Get((System_String_o *)StringLiteral_6422, 0LL);
    if ( !titleLb )
      goto LABEL_13;
    UILabel__set_text(titleLb, v11, 0LL);
    descriptionLb = this->fields.descriptionLb;
    v13 = LocalizationManager__Get((System_String_o *)StringLiteral_6421, 0LL);
    if ( !descriptionLb )
      goto LABEL_13;
    UILabel__set_text(descriptionLb, v13, 0LL);
    checkBoxLb = this->fields.checkBoxLb;
    v15 = LocalizationManager__Get((System_String_o *)StringLiteral_6420, 0LL);
    if ( !checkBoxLb
      || (UILabel__set_text(checkBoxLb, v15, 0LL),
          decideButtonLb = this->fields.decideButtonLb,
          v17 = LocalizationManager__Get((System_String_o *)StringLiteral_6409, 0LL),
          !decideButtonLb)
      || (UILabel__set_text(decideButtonLb, v17, 0LL),
          cancelButtonLb = this->fields.cancelButtonLb,
          v19 = LocalizationManager__Get((System_String_o *)StringLiteral_3252, 0LL),
          !cancelButtonLb) )
    {
LABEL_13:
      sub_B170D4();
    }
    UILabel__set_text(cancelButtonLb, v19, 0LL);
    this->fields.state = 1;
    v24 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v20, v21, v22, v23);
    System_Action___ctor(v24, (Il2CppObject *)this, Method_FortificationWarningDialogComponent__Open_b__11_0__, 0LL);
    BaseDialog__Open((BaseDialog_o *)this, v24, 0, 0LL);
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
  UnityEngine_Component_o *v5; // x0

  if ( (byte_40FA77D & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40FA77D = 1;
  }
  cancelButton = (UnityEngine_Object_o *)this->fields.cancelButton;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(cancelButton, 0LL, 0LL) )
    return 0LL;
  v5 = (UnityEngine_Component_o *)this->fields.cancelButton;
  if ( !v5 )
    sub_B170D4();
  return UnityEngine_Component__get_gameObject(v5, 0LL);
}