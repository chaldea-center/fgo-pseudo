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
  struct EventInfoRaidResetButton___c_StaticFields *static_fields; // x8
  System_Action_o *_9__9_0; // x22
  Il2CppObject *v10; // x23
  struct EventInfoRaidResetButton___c_StaticFields *v11; // x0
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7

  v3 = (UnityEngine_MonoBehaviour_o *)this;
  if ( (byte_593A429 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&DataLostResetManager_TypeInfo);
    sub_21FFC50(&Method_EventInfoRaidResetButton___c__CallbackResetDataLostBattle_b__9_0__);
    this = (EventInfoRaidResetButton_o *)sub_21FFC50(&EventInfoRaidResetButton___c_TypeInfo);
    byte_593A429 = 1;
  }
  m_CachedPtr = v3[3].fields.m_CachedPtr;
  if ( !m_CachedPtr )
    sub_21FFECC(this, result);
  v5 = *(_DWORD *)(m_CachedPtr + 24);
  v6 = *(_DWORD *)(m_CachedPtr + 28);
  v7 = EventInfoRaidResetButton___c_TypeInfo;
  if ( !*(&EventInfoRaidResetButton___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(EventInfoRaidResetButton___c_TypeInfo, result);
    v7 = EventInfoRaidResetButton___c_TypeInfo;
  }
  static_fields = v7->static_fields;
  _9__9_0 = static_fields->__9__9_0;
  if ( !_9__9_0 )
  {
    if ( !*(&v7->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v7, result);
      static_fields = EventInfoRaidResetButton___c_TypeInfo->static_fields;
    }
    v10 = (Il2CppObject *)static_fields->__9;
    _9__9_0 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    System_Action___ctor(_9__9_0, v10, Method_EventInfoRaidResetButton___c__CallbackResetDataLostBattle_b__9_0__, 0);
    v11 = EventInfoRaidResetButton___c_TypeInfo->static_fields;
    v11->__9__9_0 = _9__9_0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v11->__9__9_0, (int32_t)_9__9_0, v12, v13, v14, v15, v16, v17);
  }
  if ( !*(&DataLostResetManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataLostResetManager_TypeInfo, result);
  DataLostResetManager__PlayResetEffect(v3, v5, v6, _9__9_0, 0);
}


void EventInfoRaidResetButton__Initialization(
        EventInfoRaidResetButton_o *this,
        EventUiEntity_o *entity,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  __int64 v10; // x1
  UILabel_o *buttonLabel; // x20
  System_String_o *v12; // x0
  __int64 v13; // x1
  __int64 v14; // x1
  UnityEngine_Object_o *buttonSprite; // x20
  __int64 v16; // x1
  UISprite_o *v17; // x19

  if ( (byte_593A427 & 1) == 0 )
  {
    sub_21FFC50(&AtlasManager_TypeInfo);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&StringLiteral_5776/*"EVENT_DATA_LOST_BATTLE_RESET_BUTTON"*/);
    sub_21FFC50(&StringLiteral_18234/*"btn_mission_bg"*/);
    byte_593A427 = 1;
  }
  this->fields.uiEntity = entity;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.uiEntity,
    (int32_t)entity,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  buttonLabel = this->fields.buttonLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v10);
  v12 = LocalizationManager__Get((System_String_o *)StringLiteral_5776/*"EVENT_DATA_LOST_BATTLE_RESET_BUTTON"*/, 0);
  if ( !buttonLabel
    || (UILabel__set_text(buttonLabel, v12, 0), (v12 = (System_String_o *)this->fields.buttonLabel) == 0) )
  {
    sub_21FFECC(v12, v13);
  }
  UILabel__SetCondensedScale((UILabel_o *)v12, this->fields.labelWidth, 0, 0);
  buttonSprite = (UnityEngine_Object_o *)this->fields.buttonSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v14);
  if ( UnityEngine_Object__op_Inequality(buttonSprite, 0, 0) )
  {
    v17 = this->fields.buttonSprite;
    if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v16);
    AtlasManager__SetEventUI(v17, (System_String_o *)StringLiteral_18234/*"btn_mission_bg"*/, 0);
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
  __int64 v11; // x1

  if ( (byte_593A428 & 1) == 0 )
  {
    sub_21FFC50(&DataLostResetManager_ClickDelegate_TypeInfo);
    sub_21FFC50(&DataLostResetManager_TypeInfo);
    sub_21FFC50(&Method_EventInfoRaidResetButton_OnClick__);
    sub_21FFC50(&Method_EventInfoRaidResetButton__OnClick_b__8_0__);
    byte_593A428 = 1;
  }
  v3 = Method_EventInfoRaidResetButton_OnClick__;
  if ( (*((_BYTE *)Method_EventInfoRaidResetButton_OnClick__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_21FFC68(Method_EventInfoRaidResetButton_OnClick__);
  v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  uiEntity = this->fields.uiEntity;
  if ( !uiEntity )
    sub_21FFECC(v5, v6);
  eventId = uiEntity->fields.eventId;
  warId = uiEntity->fields.warId;
  v10 = (DataLostResetManager_ClickDelegate_o *)sub_21FFEBC(DataLostResetManager_ClickDelegate_TypeInfo);
  DataLostResetManager_ClickDelegate___ctor(
    v10,
    (Il2CppObject *)this,
    Method_EventInfoRaidResetButton__OnClick_b__8_0__,
    0);
  if ( !*(&DataLostResetManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataLostResetManager_TypeInfo, v11);
  DataLostResetManager__OpenResetSelectDialog(eventId, warId, 0, v10, 0);
}


// local variable allocation has failed, the output may be wrong!
void EventInfoRaidResetButton__SwitchSpotState(EventInfoRaidResetButton_o *this, bool isOpen, const MethodInfo *method)
{
  UnityEngine_GameObject_o *button; // x0

  button = this->fields.button;
  if ( !button || (button = UnityEngine_GameObject__get_gameObject(button, 0)) == 0 )
    sub_21FFECC(button, isOpen);
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
  __int64 v11; // x1

  if ( (byte_593A42A & 1) == 0 )
  {
    sub_21FFC50(&DataLostResetManager_TypeInfo);
    sub_21FFC50(&Method_EventInfoRaidResetButton_CallbackResetDataLostBattle__);
    sub_21FFC50(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_21FFC50(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    byte_593A42A = 1;
  }
  if ( resetIdx != -1 )
  {
    Instance = (MissionNotifyManager_o *)SingletonTemplate_object___get_Instance((const MethodInfo_476EDF8 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    if ( !Instance )
      goto LABEL_16;
    MissionNotifyManager__StartPause(Instance, 0);
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v6);
    if ( !byte_5935781 )
    {
      sub_21FFC50(&TerminalPramsManager_TypeInfo);
      byte_5935781 = 1;
    }
    Instance = (MissionNotifyManager_o *)TerminalPramsManager_TypeInfo;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v6);
      Instance = (MissionNotifyManager_o *)TerminalPramsManager_TypeInfo;
    }
    uiEntity = this->fields.uiEntity;
    LOBYTE(Instance[2].fields.mNoticeNumberComp[2].fields.numberLabel) = 1;
    if ( !uiEntity )
LABEL_16:
      sub_21FFECC(Instance, v6);
    eventId = uiEntity->fields.eventId;
    warId = uiEntity->fields.warId;
    v10 = (NetworkManager_ResultCallbackFunc_o *)sub_21FFEBC(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v10,
      (Il2CppObject *)this,
      Method_EventInfoRaidResetButton_CallbackResetDataLostBattle__,
      0);
    if ( !*(&DataLostResetManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataLostResetManager_TypeInfo, v11);
    DataLostResetManager__RequestResetDataLostBattle(eventId, warId, resetIdx, v10, 0);
  }
}


void EventInfoRaidResetButton___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_593A42B & 1) == 0 )
  {
    sub_21FFC50(&EventInfoRaidResetButton___c_TypeInfo);
    byte_593A42B = 1;
  }
  v1 = (Il2CppObject *)sub_21FFEBC(EventInfoRaidResetButton___c_TypeInfo);
  System_Object___ctor(v1, 0);
  EventInfoRaidResetButton___c_TypeInfo->static_fields->__9 = (struct EventInfoRaidResetButton___c_o *)v1;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)EventInfoRaidResetButton___c_TypeInfo->static_fields,
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
  if ( (byte_593A42C & 1) == 0 )
  {
    sub_21FFC50(&DataLostResetManager_TypeInfo);
    byte_593A42C = 1;
  }
  if ( !*(&DataLostResetManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataLostResetManager_TypeInfo, method);
  DataLostResetManager__ResetAfterInit(0);
}