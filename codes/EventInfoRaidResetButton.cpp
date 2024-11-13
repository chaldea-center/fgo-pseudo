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
  __int64 v3; // x3
  EventInfoRaidResetButton_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  struct EventUiEntity_o *uiEntity; // x8
  int32_t warId; // w20
  int32_t eventId; // w21
  EventInfoRaidResetButton___c_c *v14; // x0
  System_Action_o *_9__9_0; // x22
  Il2CppObject *v16; // x23
  struct EventInfoRaidResetButton___c_StaticFields *static_fields; // x0
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7

  v4 = this;
  if ( (byte_4B177DB & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, result, method);
    sub_1BCA7E0(&DataLostResetManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_EventInfoRaidResetButton___c__CallbackResetDataLostBattle_b__9_0__, v7, v8);
    this = (EventInfoRaidResetButton_o *)sub_1BCA7E0(&EventInfoRaidResetButton___c_TypeInfo, v9, v10);
    byte_4B177DB = 1;
  }
  uiEntity = v4->fields.uiEntity;
  if ( !uiEntity )
    sub_1BCAA3C(this, result);
  eventId = uiEntity->fields.eventId;
  warId = uiEntity->fields.warId;
  v14 = EventInfoRaidResetButton___c_TypeInfo;
  if ( !EventInfoRaidResetButton___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoRaidResetButton___c_TypeInfo, result);
    v14 = EventInfoRaidResetButton___c_TypeInfo;
  }
  _9__9_0 = v14->static_fields->__9__9_0;
  if ( !_9__9_0 )
  {
    if ( !v14->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v14, result);
      v14 = EventInfoRaidResetButton___c_TypeInfo;
    }
    v16 = (Il2CppObject *)v14->static_fields->__9;
    _9__9_0 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, result, method, v3);
    System_Action___ctor(_9__9_0, v16, Method_EventInfoRaidResetButton___c__CallbackResetDataLostBattle_b__9_0__, 0LL);
    static_fields = EventInfoRaidResetButton___c_TypeInfo->static_fields;
    static_fields->__9__9_0 = _9__9_0;
    sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->__9__9_0, (int64_t)_9__9_0, v18, v19, v20, v21, v22, v23);
  }
  if ( !DataLostResetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataLostResetManager_TypeInfo, result);
  DataLostResetManager__PlayResetEffect((UnityEngine_MonoBehaviour_o *)v4, eventId, warId, _9__9_0, 0LL);
}


void __fastcall EventInfoRaidResetButton__Initialization(
        EventInfoRaidResetButton_o *this,
        EventUiEntity_o *entity,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  UILabel_o *buttonLabel; // x20
  System_String_o *v20; // x0
  __int64 v21; // x1
  __int64 v22; // x1
  UnityEngine_Object_o *buttonSprite; // x20
  __int64 v24; // x1
  UISprite_o *v25; // x19

  if ( (byte_4B177D9 & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, entity, method);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v10, v11);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v12, v13);
    sub_1BCA7E0(&StringLiteral_5689/*"EVENT_DATA_LOST_BATTLE_RESET_BUTTON"*/, v14, v15);
    sub_1BCA7E0(&StringLiteral_17699/*"btn_mission_bg"*/, v16, v17);
    byte_4B177D9 = 1;
  }
  this->fields.uiEntity = entity;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.uiEntity,
    (int64_t)entity,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  buttonLabel = this->fields.buttonLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v18);
  v20 = LocalizationManager__Get((System_String_o *)StringLiteral_5689/*"EVENT_DATA_LOST_BATTLE_RESET_BUTTON"*/, 0LL);
  if ( !buttonLabel
    || (UILabel__set_text(buttonLabel, v20, 0LL), (v20 = (System_String_o *)this->fields.buttonLabel) == 0LL) )
  {
    sub_1BCAA3C(v20, v21);
  }
  UILabel__SetCondensedScale((UILabel_o *)v20, this->fields.labelWidth, 0LL);
  buttonSprite = (UnityEngine_Object_o *)this->fields.buttonSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v22);
  if ( UnityEngine_Object__op_Inequality(buttonSprite, 0LL, 0LL) )
  {
    v25 = this->fields.buttonSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v24);
    AtlasManager__SetEventUI(v25, (System_String_o *)StringLiteral_17699/*"btn_mission_bg"*/, 0LL);
  }
}


void __fastcall EventInfoRaidResetButton__OnClick(EventInfoRaidResetButton_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  _QWORD *v10; // x0
  System_Reflection_MethodBase_o *v11; // x0
  __int64 v12; // x0
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  struct EventUiEntity_o *uiEntity; // x8
  int32_t eventId; // w20
  int32_t warId; // w21
  DataLostResetManager_ClickDelegate_o *v19; // x22
  __int64 v20; // x1

  if ( (byte_4B177DA & 1) == 0 )
  {
    sub_1BCA7E0(&DataLostResetManager_ClickDelegate_TypeInfo, method, v2);
    sub_1BCA7E0(&DataLostResetManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_EventInfoRaidResetButton_OnClick__, v6, v7);
    sub_1BCA7E0(&Method_EventInfoRaidResetButton__OnClick_b__8_0__, v8, v9);
    byte_4B177DA = 1;
  }
  v10 = Method_EventInfoRaidResetButton_OnClick__;
  if ( (*((_BYTE *)Method_EventInfoRaidResetButton_OnClick__ + 83) & 2) != 0 )
    v10 = (_QWORD *)sub_1BCA7F8(Method_EventInfoRaidResetButton_OnClick__);
  v11 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v10, v10[4]);
  OverwriteAssetSoundName__PlaySystemSe(v11, 0, 0LL);
  uiEntity = this->fields.uiEntity;
  if ( !uiEntity )
    sub_1BCAA3C(v12, v13);
  eventId = uiEntity->fields.eventId;
  warId = uiEntity->fields.warId;
  v19 = (DataLostResetManager_ClickDelegate_o *)sub_1BCAA2C(DataLostResetManager_ClickDelegate_TypeInfo, v13, v14, v15);
  DataLostResetManager_ClickDelegate___ctor(
    v19,
    (Il2CppObject *)this,
    Method_EventInfoRaidResetButton__OnClick_b__8_0__,
    0LL);
  if ( !DataLostResetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataLostResetManager_TypeInfo, v20);
  DataLostResetManager__OpenResetSelectDialog(eventId, warId, 0, v19, 0LL);
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
    sub_1BCAA3C(button, isOpen);
  UnityEngine_GameObject__SetActive(button, !isOpen, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventInfoRaidResetButton___OnClick_b__8_0(
        EventInfoRaidResetButton_o *this,
        int32_t resetIdx,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  MissionNotifyManager_o *Instance; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  struct EventUiEntity_o *uiEntity; // x8
  int32_t eventId; // w21
  int32_t warId; // w22
  NetworkManager_ResultCallbackFunc_o *v20; // x23
  __int64 v21; // x1

  if ( (byte_4B177DC & 1) == 0 )
  {
    sub_1BCA7E0(&DataLostResetManager_TypeInfo, *(_QWORD *)&resetIdx, method);
    sub_1BCA7E0(&Method_EventInfoRaidResetButton_CallbackResetDataLostBattle__, v5, v6);
    sub_1BCA7E0(&NetworkManager_ResultCallbackFunc_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v9, v10);
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v11, v12);
    byte_4B177DC = 1;
  }
  if ( resetIdx != -1 )
  {
    Instance = (MissionNotifyManager_o *)SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    if ( !Instance )
      goto LABEL_16;
    MissionNotifyManager__StartPause(Instance, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v14);
    if ( !byte_4B13536 )
    {
      sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v14, v15);
      byte_4B13536 = 1;
    }
    Instance = (MissionNotifyManager_o *)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v14);
      Instance = (MissionNotifyManager_o *)TerminalPramsManager_TypeInfo;
    }
    LOBYTE(Instance[2].fields.mNoticeNumberComp[2].fields.numberLabel) = 1;
    uiEntity = this->fields.uiEntity;
    if ( !uiEntity )
LABEL_16:
      sub_1BCAA3C(Instance, v14);
    eventId = uiEntity->fields.eventId;
    warId = uiEntity->fields.warId;
    v20 = (NetworkManager_ResultCallbackFunc_o *)sub_1BCAA2C(NetworkManager_ResultCallbackFunc_TypeInfo, v14, v15, v16);
    NetworkManager_ResultCallbackFunc___ctor(
      v20,
      (Il2CppObject *)this,
      Method_EventInfoRaidResetButton_CallbackResetDataLostBattle__,
      0LL);
    if ( !DataLostResetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataLostResetManager_TypeInfo, v21);
    DataLostResetManager__RequestResetDataLostBattle(eventId, warId, resetIdx, v20, 0LL);
  }
}


void __fastcall EventInfoRaidResetButton___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B177DD & 1) == 0 )
  {
    sub_1BCA7E0(&EventInfoRaidResetButton___c_TypeInfo, v1, v2);
    byte_4B177DD = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(EventInfoRaidResetButton___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  EventInfoRaidResetButton___c_TypeInfo->static_fields->__9 = (struct EventInfoRaidResetButton___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)EventInfoRaidResetButton___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
}


void __fastcall EventInfoRaidResetButton___c___ctor(EventInfoRaidResetButton___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventInfoRaidResetButton___c___CallbackResetDataLostBattle_b__9_0(
        EventInfoRaidResetButton___c_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B177DE & 1) == 0 )
  {
    sub_1BCA7E0(&DataLostResetManager_TypeInfo, method, v2);
    byte_4B177DE = 1;
  }
  if ( !DataLostResetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataLostResetManager_TypeInfo, method);
  DataLostResetManager__ResetAfterInit(0LL);
}