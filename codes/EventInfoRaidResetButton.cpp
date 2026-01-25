void EventInfoRaidResetButton___ctor(EventInfoRaidResetButton_o *this, const MethodInfo *method)
{
  this->fields.labelWidth = 94;
  EventInfoUIBase___ctor((EventInfoUIBase_o *)this, 0);
}


void EventInfoRaidResetButton__Awake(EventInfoRaidResetButton_o *this, const MethodInfo *method)
{
  ;
}


void EventInfoRaidResetButton__CallbackResetDataLostBattle(
        EventInfoRaidResetButton_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  UnityEngine_MonoBehaviour_o *v3; // x19
  intptr_t m_CachedPtr; // x8
  int32_t v5; // w20
  int32_t v6; // w21
  EventInfoRaidResetButton___c_c *v7; // x0
  System_Action_o *_9__9_0; // x22
  Il2CppObject *v9; // x23
  struct EventInfoRaidResetButton___c_StaticFields *static_fields; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7

  v3 = (UnityEngine_MonoBehaviour_o *)this;
  if ( (byte_4CEFACC & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&DataLostResetManager_TypeInfo);
    sub_1C7BAE8(&Method_EventInfoRaidResetButton___c__CallbackResetDataLostBattle_b__9_0__);
    this = (EventInfoRaidResetButton_o *)sub_1C7BAE8(&EventInfoRaidResetButton___c_TypeInfo);
    byte_4CEFACC = 1;
  }
  m_CachedPtr = v3[3].fields.m_CachedPtr;
  if ( !m_CachedPtr )
    sub_1C7BD40(this, result);
  v6 = *(_DWORD *)(m_CachedPtr + 24);
  v5 = *(_DWORD *)(m_CachedPtr + 28);
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
    _9__9_0 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
    System_Action___ctor(_9__9_0, v9, Method_EventInfoRaidResetButton___c__CallbackResetDataLostBattle_b__9_0__, 0);
    static_fields = EventInfoRaidResetButton___c_TypeInfo->static_fields;
    static_fields->__9__9_0 = _9__9_0;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&static_fields->__9__9_0, (int32_t)_9__9_0, v11, v12, v13, v14, v15, v16);
  }
  if ( !DataLostResetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataLostResetManager_TypeInfo);
  DataLostResetManager__PlayResetEffect(v3, v6, v5, _9__9_0, 0);
}


void EventInfoRaidResetButton__Initialization(
        EventInfoRaidResetButton_o *this,
        EventUiEntity_o *entity,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  UILabel_o *buttonLabel; // x20
  System_String_o *v11; // x0
  __int64 v12; // x1
  UnityEngine_Object_o *buttonSprite; // x20
  UISprite_o *v14; // x19

  if ( (byte_4CEFACA & 1) == 0 )
  {
    sub_1C7BAE8(&AtlasManager_TypeInfo);
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&StringLiteral_5595/*"EVENT_DATA_LOST_BATTLE_RESET_BUTTON"*/);
    sub_1C7BAE8(&StringLiteral_17591/*"btn_mission_bg"*/);
    byte_4CEFACA = 1;
  }
  this->fields.uiEntity = entity;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.uiEntity,
    (int32_t)entity,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  buttonLabel = this->fields.buttonLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v11 = LocalizationManager__Get((System_String_o *)StringLiteral_5595/*"EVENT_DATA_LOST_BATTLE_RESET_BUTTON"*/, 0);
  if ( !buttonLabel
    || (UILabel__set_text(buttonLabel, v11, 0), (v11 = (System_String_o *)this->fields.buttonLabel) == 0) )
  {
    sub_1C7BD40(v11, v12);
  }
  UILabel__SetCondensedScale((UILabel_o *)v11, this->fields.labelWidth, 0, 0);
  buttonSprite = (UnityEngine_Object_o *)this->fields.buttonSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(buttonSprite, 0, 0) )
  {
    v14 = this->fields.buttonSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEventUI(v14, (System_String_o *)StringLiteral_17591/*"btn_mission_bg"*/, 0);
  }
}


void EventInfoRaidResetButton__OnClick(EventInfoRaidResetButton_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x0
  __int64 v6; // x1
  struct EventUiEntity_o *uiEntity; // x8
  int32_t eventId; // w20
  int32_t warId; // w21
  DataLostResetManager_ClickDelegate_o *v10; // x22

  if ( (byte_4CEFACB & 1) == 0 )
  {
    sub_1C7BAE8(&DataLostResetManager_ClickDelegate_TypeInfo);
    sub_1C7BAE8(&DataLostResetManager_TypeInfo);
    sub_1C7BAE8(&Method_EventInfoRaidResetButton_OnClick__);
    sub_1C7BAE8(&Method_EventInfoRaidResetButton__OnClick_b__8_0__);
    byte_4CEFACB = 1;
  }
  v3 = Method_EventInfoRaidResetButton_OnClick__;
  if ( (*((_BYTE *)Method_EventInfoRaidResetButton_OnClick__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C7BB00(Method_EventInfoRaidResetButton_OnClick__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C7BACC(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  uiEntity = this->fields.uiEntity;
  if ( !uiEntity )
    sub_1C7BD40(v5, v6);
  eventId = uiEntity->fields.eventId;
  warId = uiEntity->fields.warId;
  v10 = (DataLostResetManager_ClickDelegate_o *)sub_1C7BD34(DataLostResetManager_ClickDelegate_TypeInfo);
  DataLostResetManager_ClickDelegate___ctor(
    v10,
    (Il2CppObject *)this,
    Method_EventInfoRaidResetButton__OnClick_b__8_0__,
    0);
  if ( !DataLostResetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataLostResetManager_TypeInfo);
  DataLostResetManager__OpenResetSelectDialog(eventId, warId, 0, v10, 0);
}


// local variable allocation has failed, the output may be wrong!
void EventInfoRaidResetButton__SwitchSpotState(EventInfoRaidResetButton_o *this, bool isOpen, const MethodInfo *method)
{
  UnityEngine_GameObject_o *button; // x0

  button = this->fields.button;
  if ( !button || (button = UnityEngine_GameObject__get_gameObject(button, 0)) == 0 )
    sub_1C7BD40(button, isOpen);
  UnityEngine_GameObject__SetActive(button, !isOpen, 0);
}


void EventInfoRaidResetButton___OnClick_b__8_0(
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

  if ( (byte_4CEFACD & 1) == 0 )
  {
    sub_1C7BAE8(&DataLostResetManager_TypeInfo);
    sub_1C7BAE8(&Method_EventInfoRaidResetButton_CallbackResetDataLostBattle__);
    sub_1C7BAE8(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1C7BAE8(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_1C7BAE8(&TerminalPramsManager_TypeInfo);
    byte_4CEFACD = 1;
  }
  if ( resetIdx != -1 )
  {
    Instance = (MissionNotifyManager_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3A8CA98 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    if ( !Instance )
      goto LABEL_16;
    MissionNotifyManager__StartPause(Instance, 0);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4CEB802 )
    {
      sub_1C7BAE8(&TerminalPramsManager_TypeInfo);
      byte_4CEB802 = 1;
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
      sub_1C7BD40(Instance, v6);
    eventId = uiEntity->fields.eventId;
    warId = uiEntity->fields.warId;
    v10 = (NetworkManager_ResultCallbackFunc_o *)sub_1C7BD34(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v10,
      (Il2CppObject *)this,
      Method_EventInfoRaidResetButton_CallbackResetDataLostBattle__,
      0);
    if ( !DataLostResetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataLostResetManager_TypeInfo);
    DataLostResetManager__RequestResetDataLostBattle(eventId, warId, resetIdx, v10, 0);
  }
}


void EventInfoRaidResetButton___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4CEFACE & 1) == 0 )
  {
    sub_1C7BAE8(&EventInfoRaidResetButton___c_TypeInfo);
    byte_4CEFACE = 1;
  }
  v1 = (Il2CppObject *)sub_1C7BD34(EventInfoRaidResetButton___c_TypeInfo);
  System_Object___ctor(v1, 0);
  EventInfoRaidResetButton___c_TypeInfo->static_fields->__9 = (struct EventInfoRaidResetButton___c_o *)v1;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)EventInfoRaidResetButton___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void EventInfoRaidResetButton___c___ctor(EventInfoRaidResetButton___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventInfoRaidResetButton___c___CallbackResetDataLostBattle_b__9_0(
        EventInfoRaidResetButton___c_o *this,
        const MethodInfo *method)
{
  if ( (byte_4CEFACF & 1) == 0 )
  {
    sub_1C7BAE8(&DataLostResetManager_TypeInfo);
    byte_4CEFACF = 1;
  }
  if ( !DataLostResetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataLostResetManager_TypeInfo);
  DataLostResetManager__ResetAfterInit(0);
}