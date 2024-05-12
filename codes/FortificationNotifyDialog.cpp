void __fastcall FortificationNotifyDialog___ctor(FortificationNotifyDialog_o *this, const MethodInfo *method)
{
  if ( (byte_438EA66 & 1) == 0 )
  {
    sub_B775C4(&BaseDialog_TypeInfo);
    byte_438EA66 = 1;
  }
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall FortificationNotifyDialog__ClickButtonAction(
        FortificationNotifyDialog_o *this,
        const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_Action_o *onClick; // x20
  System_Action_o *v10; // x20

  if ( (byte_438EA64 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_FortificationNotifyDialog__ClickButtonAction_b__13_0__);
    byte_438EA64 = 1;
  }
  onClick = this->fields.onClick;
  if ( onClick )
  {
    this->fields.onClick = 0LL;
    sub_B77560((BattleServantConfConponent_o *)&this->fields.onClick, 0LL, v2, v3, v4, v5, v6, v7);
    System_Action__Invoke(onClick, 0LL);
    this->fields.state = 4;
    v10 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
    System_Action___ctor(v10, (Il2CppObject *)this, Method_FortificationNotifyDialog__ClickButtonAction_b__13_0__, 0LL);
    BaseDialog__Close((BaseDialog_o *)this, v10, 0LL);
  }
}


void __fastcall FortificationNotifyDialog__Init(FortificationNotifyDialog_o *this, const MethodInfo *method)
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


void __fastcall FortificationNotifyDialog__OnClickCancel(FortificationNotifyDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  if ( (byte_438EA63 & 1) == 0 )
  {
    sub_B775C4(&SoundManager_TypeInfo);
    byte_438EA63 = 1;
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
    FortificationNotifyDialog__ClickButtonAction(this, v3);
  }
}


void __fastcall FortificationNotifyDialog__OnClickDecide(FortificationNotifyDialog_o *this, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0
  int32_t EventID; // w20
  EventRewardSceneMaster_o *Master_WarQuestSelectionMaster; // x0
  const MethodInfo *v6; // x1
  struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *list; // x8
  int items_high; // w22
  SceneJumpInfo_o *v9; // x21
  __int64 v10; // x0

  if ( (byte_438EA62 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMaster_EventRewardSceneMaster___);
    sub_B775C4(&DataManager_TypeInfo);
    sub_B775C4(&SceneJumpInfo_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_B775C4(&SoundManager_TypeInfo);
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    sub_B775C4(&StringLiteral_1/*""*/);
    byte_438EA62 = 1;
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
        FortificationNotifyDialog__ClickButtonAction(this, v6);
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


void __fastcall FortificationNotifyDialog__Open(
        FortificationNotifyDialog_o *this,
        System_String_o *message,
        System_Action_o *onClick,
        const MethodInfo *method)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v11; // x1
  UILabel_o *descriptionLb; // x0
  UILabel_o *decideButtonLb; // x20
  UILabel_o *cancelButtonLb; // x20
  System_Action_o *v15; // x20

  if ( (byte_438EA61 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_FortificationNotifyDialog__Open_b__9_0__);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&StringLiteral_6575/*"FORTIFICATION_EXPANSION_DIALOG_DECIDE"*/);
    sub_B775C4(&StringLiteral_3387/*"COMMON_CONFIRM_CLOSE"*/);
    byte_438EA61 = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.onClick = onClick;
    sub_B77560(
      (BattleServantConfConponent_o *)&this->fields.onClick,
      (System_Int32_array **)onClick,
      (System_String_array **)onClick,
      (System_String_array **)method,
      v4,
      v5,
      v6,
      v7);
    descriptionLb = this->fields.descriptionLb;
    if ( !descriptionLb )
      goto LABEL_11;
    UILabel__set_text(descriptionLb, message, 0LL);
    decideButtonLb = this->fields.decideButtonLb;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    descriptionLb = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6575/*"FORTIFICATION_EXPANSION_DIALOG_DECIDE"*/, 0LL);
    if ( !decideButtonLb
      || (UILabel__set_text(decideButtonLb, (System_String_o *)descriptionLb, 0LL),
          cancelButtonLb = this->fields.cancelButtonLb,
          descriptionLb = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3387/*"COMMON_CONFIRM_CLOSE"*/, 0LL),
          !cancelButtonLb) )
    {
LABEL_11:
      sub_B7769C(descriptionLb, v11);
    }
    UILabel__set_text(cancelButtonLb, (System_String_o *)descriptionLb, 0LL);
    this->fields.state = 1;
    v15 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
    System_Action___ctor(v15, (Il2CppObject *)this, Method_FortificationNotifyDialog__Open_b__9_0__, 0LL);
    BaseDialog__Open((BaseDialog_o *)this, v15, 0, 0LL);
  }
}


void __fastcall FortificationNotifyDialog__SerializeFieldNotNullCheck(
        FortificationNotifyDialog_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall FortificationNotifyDialog___Open_b__9_0(FortificationNotifyDialog_o *this, const MethodInfo *method)
{
  this->fields.state = 2;
}


UnityEngine_GameObject_o *__fastcall FortificationNotifyDialog__get_closeBtnObject(
        FortificationNotifyDialog_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *cancelButton; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *v6; // x0

  if ( (byte_438EA65 & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438EA65 = 1;
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