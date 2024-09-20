void __fastcall EventInfoRaidResetButton___ctor(EventInfoRaidResetButton_o *this, const MethodInfo *method)
{
  this->fields.labelWidth = 94;
  EventInfoUIBase___ctor((EventInfoUIBase_o *)this, 0LL);
}


void __fastcall EventInfoRaidResetButton__Awake(EventInfoRaidResetButton_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall EventInfoRaidResetButton__CallbackResetDataLostBattle(
        EventInfoRaidResetButton_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  EventInfoRaidResetButton_o *v3; // x19
  struct EventUiEntity_o *uiEntity; // x8
  int32_t warId; // w20
  int32_t eventId; // w21
  EventInfoRaidResetButton___c_c *v7; // x0
  System_Action_o *_9__9_0; // x22
  Il2CppObject *v9; // x23
  struct EventInfoRaidResetButton___c_StaticFields *static_fields; // x0
  int32_t v11; // w2
  int32_t v12; // w3

  v3 = this;
  if ( (byte_4A5C7D9 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&DataLostResetManager_TypeInfo);
    sub_1B885B0(&Method_EventInfoRaidResetButton___c__CallbackResetDataLostBattle_b__9_0__);
    this = (EventInfoRaidResetButton_o *)sub_1B885B0(&EventInfoRaidResetButton___c_TypeInfo);
    byte_4A5C7D9 = 1;
  }
  uiEntity = v3->fields.uiEntity;
  if ( !uiEntity )
    sub_1B8880C(this, result);
  eventId = uiEntity->fields.eventId;
  warId = uiEntity->fields.warId;
  v7 = EventInfoRaidResetButton___c_TypeInfo;
  if ( !EventInfoRaidResetButton___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoRaidResetButton___c_TypeInfo);
    v7 = EventInfoRaidResetButton___c_TypeInfo;
  }
  _9__9_0 = v7->static_fields->__9__9_0;
  if ( !_9__9_0 )
  {
    if ( !v7->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v7);
      v7 = EventInfoRaidResetButton___c_TypeInfo;
    }
    v9 = (Il2CppObject *)v7->static_fields->__9;
    _9__9_0 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(_9__9_0, v9, Method_EventInfoRaidResetButton___c__CallbackResetDataLostBattle_b__9_0__, 0LL);
    static_fields = EventInfoRaidResetButton___c_TypeInfo->static_fields;
    static_fields->__9__9_0 = _9__9_0;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__9_0, (int32_t)_9__9_0, v11, v12);
  }
  if ( !DataLostResetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataLostResetManager_TypeInfo);
  DataLostResetManager__PlayResetEffect((UnityEngine_MonoBehaviour_o *)v3, eventId, warId, _9__9_0, 0LL);
}


void __fastcall EventInfoRaidResetButton__Initialization(
        EventInfoRaidResetButton_o *this,
        EventUiEntity_o *entity,
        const MethodInfo *method)
{
  int32_t v3; // w3
  UILabel_o *buttonLabel; // x20
  System_String_o *v7; // x0
  __int64 v8; // x1
  UnityEngine_Object_o *buttonSprite; // x20
  UISprite_o *v10; // x19

  if ( (byte_4A5C7D7 & 1) == 0 )
  {
    sub_1B885B0(&AtlasManager_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StringLiteral_5605/*"EVENT_DATA_LOST_BATTLE_RESET_BUTTON"*/);
    sub_1B885B0(&StringLiteral_17522/*"btn_mission_bg"*/);
    byte_4A5C7D7 = 1;
  }
  this->fields.uiEntity = entity;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.uiEntity, (int32_t)entity, (int32_t)method, v3);
  buttonLabel = this->fields.buttonLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v7 = LocalizationManager__Get((System_String_o *)StringLiteral_5605/*"EVENT_DATA_LOST_BATTLE_RESET_BUTTON"*/, 0LL);
  if ( !buttonLabel
    || (UILabel__set_text(buttonLabel, v7, 0LL), (v7 = (System_String_o *)this->fields.buttonLabel) == 0LL) )
  {
    sub_1B8880C(v7, v8);
  }
  UILabel__SetCondensedScale((UILabel_o *)v7, this->fields.labelWidth, 0LL);
  buttonSprite = (UnityEngine_Object_o *)this->fields.buttonSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(buttonSprite, 0LL, 0LL) )
  {
    v10 = this->fields.buttonSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEventUI(v10, (System_String_o *)StringLiteral_17522/*"btn_mission_bg"*/, 0LL);
  }
}


void __fastcall EventInfoRaidResetButton__OnClick(EventInfoRaidResetButton_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x0
  __int64 v6; // x1
  struct EventUiEntity_o *uiEntity; // x8
  int32_t eventId; // w20
  int32_t warId; // w21
  DataLostResetManager_ClickDelegate_o *v10; // x22

  if ( (byte_4A5C7D8 & 1) == 0 )
  {
    sub_1B885B0(&DataLostResetManager_ClickDelegate_TypeInfo);
    sub_1B885B0(&DataLostResetManager_TypeInfo);
    sub_1B885B0(&Method_EventInfoRaidResetButton_OnClick__);
    sub_1B885B0(&Method_EventInfoRaidResetButton__OnClick_b__8_0__);
    byte_4A5C7D8 = 1;
  }
  v3 = Method_EventInfoRaidResetButton_OnClick__;
  if ( (*((_BYTE *)Method_EventInfoRaidResetButton_OnClick__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1B885C8(Method_EventInfoRaidResetButton_OnClick__);
  v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
  uiEntity = this->fields.uiEntity;
  if ( !uiEntity )
    sub_1B8880C(v5, v6);
  eventId = uiEntity->fields.eventId;
  warId = uiEntity->fields.warId;
  v10 = (DataLostResetManager_ClickDelegate_o *)sub_1B887FC(DataLostResetManager_ClickDelegate_TypeInfo);
  DataLostResetManager_ClickDelegate___ctor(
    v10,
    (Il2CppObject *)this,
    Method_EventInfoRaidResetButton__OnClick_b__8_0__,
    0LL);
  if ( !DataLostResetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataLostResetManager_TypeInfo);
  DataLostResetManager__OpenResetSelectDialog(eventId, warId, 0, v10, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventInfoRaidResetButton__SwitchSpotState(
        EventInfoRaidResetButton_o *this,
        bool isOpen,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *button; // x0

  button = this->fields.button;
  if ( !button || (button = UnityEngine_GameObject__get_gameObject(button, 0LL)) == 0LL )
    sub_1B8880C(button, isOpen);
  UnityEngine_GameObject__SetActive(button, !isOpen, 0LL);
}


void __fastcall EventInfoRaidResetButton___OnClick_b__8_0(
        EventInfoRaidResetButton_o *this,
        int32_t resetIdx,
        const MethodInfo *method)
{
  MissionNotifyManager_o *Instance; // x0
  __int64 v6; // x1
  struct EventUiEntity_o *uiEntity; // x8
  int32_t eventId; // w21
  int32_t warId; // w22
  NetworkManager_ResultCallbackFunc_o *v10; // x23

  if ( (byte_4A5C7DA & 1) == 0 )
  {
    sub_1B885B0(&DataLostResetManager_TypeInfo);
    sub_1B885B0(&Method_EventInfoRaidResetButton_CallbackResetDataLostBattle__);
    sub_1B885B0(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1B885B0(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A5C7DA = 1;
  }
  if ( resetIdx != -1 )
  {
    Instance = (MissionNotifyManager_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    if ( !Instance )
      goto LABEL_16;
    MissionNotifyManager__StartPause(Instance, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4A58543 )
    {
      sub_1B885B0(&TerminalPramsManager_TypeInfo);
      byte_4A58543 = 1;
    }
    Instance = (MissionNotifyManager_o *)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      Instance = (MissionNotifyManager_o *)TerminalPramsManager_TypeInfo;
    }
    LOBYTE(Instance[2].fields.mNoticeNumberComp[2].fields.numberLabel) = 1;
    uiEntity = this->fields.uiEntity;
    if ( !uiEntity )
LABEL_16:
      sub_1B8880C(Instance, v6);
    eventId = uiEntity->fields.eventId;
    warId = uiEntity->fields.warId;
    v10 = (NetworkManager_ResultCallbackFunc_o *)sub_1B887FC(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v10,
      (Il2CppObject *)this,
      Method_EventInfoRaidResetButton_CallbackResetDataLostBattle__,
      0LL);
    if ( !DataLostResetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataLostResetManager_TypeInfo);
    DataLostResetManager__RequestResetDataLostBattle(eventId, warId, resetIdx, v10, 0LL);
  }
}


void __fastcall EventInfoRaidResetButton___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A5C7DB & 1) == 0 )
  {
    sub_1B885B0(&EventInfoRaidResetButton___c_TypeInfo);
    byte_4A5C7DB = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(EventInfoRaidResetButton___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  EventInfoRaidResetButton___c_TypeInfo->static_fields->__9 = (struct EventInfoRaidResetButton___c_o *)v1;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)EventInfoRaidResetButton___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3);
}


void __fastcall EventInfoRaidResetButton___c___ctor(EventInfoRaidResetButton___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventInfoRaidResetButton___c___CallbackResetDataLostBattle_b__9_0(
        EventInfoRaidResetButton___c_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A5C7DC & 1) == 0 )
  {
    sub_1B885B0(&DataLostResetManager_TypeInfo);
    byte_4A5C7DC = 1;
  }
  if ( !DataLostResetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataLostResetManager_TypeInfo);
  DataLostResetManager__ResetAfterInit(0LL);
}