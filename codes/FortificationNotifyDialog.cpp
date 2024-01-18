void __fastcall FortificationNotifyDialog___ctor(FortificationNotifyDialog_o *this, const MethodInfo *method)
{
  if ( (byte_418A82F & 1) == 0 )
  {
    sub_B2C35C(&BaseDialog_TypeInfo, method);
    byte_418A82F = 1;
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
  __int64 v9; // x1
  System_Action_o *onClick; // x20
  System_Action_o *v11; // x20

  if ( (byte_418A82D & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_FortificationNotifyDialog__ClickButtonAction_b__13_0__, v9);
    byte_418A82D = 1;
  }
  onClick = this->fields.onClick;
  if ( onClick )
  {
    this->fields.onClick = 0LL;
    sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.onClick, 0LL, v2, v3, v4, v5, v6, v7);
    System_Action__Invoke(onClick, 0LL);
    this->fields.state = 4;
    v11 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(v11, (Il2CppObject *)this, Method_FortificationNotifyDialog__ClickButtonAction_b__13_0__, 0LL);
    BaseDialog__Close((BaseDialog_o *)this, v11, 0LL);
  }
}


void __fastcall FortificationNotifyDialog__Init(FortificationNotifyDialog_o *this, const MethodInfo *method)
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


void __fastcall FortificationNotifyDialog__OnClickCancel(FortificationNotifyDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  if ( (byte_418A82C & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_418A82C = 1;
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

  if ( (byte_418A82B & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_EventRewardSceneMaster___, method);
    sub_B2C35C(&DataManager_TypeInfo, v3);
    sub_B2C35C(&SceneJumpInfo_TypeInfo, v4);
    sub_B2C35C(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v5);
    sub_B2C35C(&SoundManager_TypeInfo, v6);
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v7);
    sub_B2C35C(&StringLiteral_1/*""*/, v8);
    byte_418A82B = 1;
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
        FortificationNotifyDialog__ClickButtonAction(this, v13);
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
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  UILabel_o *descriptionLb; // x0
  UILabel_o *decideButtonLb; // x20
  UILabel_o *cancelButtonLb; // x20
  System_Action_o *v19; // x20

  if ( (byte_418A82A & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, message);
    sub_B2C35C(&Method_FortificationNotifyDialog__Open_b__9_0__, v11);
    sub_B2C35C(&LocalizationManager_TypeInfo, v12);
    sub_B2C35C(&StringLiteral_6427/*"FORTIFICATION_EXPANSION_DIALOG_DECIDE"*/, v13);
    sub_B2C35C(&StringLiteral_3261/*"COMMON_CONFIRM_CLOSE"*/, v14);
    byte_418A82A = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.onClick = onClick;
    sub_B2C2F8(
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
    descriptionLb = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6427/*"FORTIFICATION_EXPANSION_DIALOG_DECIDE"*/, 0LL);
    if ( !decideButtonLb
      || (UILabel__set_text(decideButtonLb, (System_String_o *)descriptionLb, 0LL),
          cancelButtonLb = this->fields.cancelButtonLb,
          descriptionLb = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3261/*"COMMON_CONFIRM_CLOSE"*/, 0LL),
          !cancelButtonLb) )
    {
LABEL_11:
      sub_B2C434(descriptionLb, v15);
    }
    UILabel__set_text(cancelButtonLb, (System_String_o *)descriptionLb, 0LL);
    this->fields.state = 1;
    v19 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(v19, (Il2CppObject *)this, Method_FortificationNotifyDialog__Open_b__9_0__, 0LL);
    BaseDialog__Open((BaseDialog_o *)this, v19, 0, 0LL);
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

  if ( (byte_418A82E & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_418A82E = 1;
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