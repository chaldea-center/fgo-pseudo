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
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  struct EventUiEntity_o *uiEntity; // x8
  int32_t warId; // w20
  int32_t eventId; // w21
  EventInfoRaidResetButton___c_c *v10; // x0
  System_Action_o *_9__9_0; // x22
  Il2CppObject *v12; // x23
  struct EventInfoRaidResetButton___c_StaticFields *static_fields; // x0
  int32_t v14; // w2
  const MethodInfo *v15; // x3

  v3 = this;
  if ( (byte_49BC547 & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_TypeInfo, result);
    sub_1B4CF90(&DataLostResetManager_TypeInfo, v4);
    sub_1B4CF90(&Method_EventInfoRaidResetButton___c__CallbackResetDataLostBattle_b__9_0__, v5);
    this = (EventInfoRaidResetButton_o *)sub_1B4CF90(&EventInfoRaidResetButton___c_TypeInfo, v6);
    byte_49BC547 = 1;
  }
  uiEntity = v3->fields.uiEntity;
  if ( !uiEntity )
    sub_1B4D1EC(this, result);
  eventId = uiEntity->fields.eventId;
  warId = uiEntity->fields.warId;
  v10 = EventInfoRaidResetButton___c_TypeInfo;
  if ( !EventInfoRaidResetButton___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoRaidResetButton___c_TypeInfo);
    v10 = EventInfoRaidResetButton___c_TypeInfo;
  }
  _9__9_0 = v10->static_fields->__9__9_0;
  if ( !_9__9_0 )
  {
    if ( !v10->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v10);
      v10 = EventInfoRaidResetButton___c_TypeInfo;
    }
    v12 = (Il2CppObject *)v10->static_fields->__9;
    _9__9_0 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
    System_Action___ctor(_9__9_0, v12, Method_EventInfoRaidResetButton___c__CallbackResetDataLostBattle_b__9_0__, 0LL);
    static_fields = EventInfoRaidResetButton___c_TypeInfo->static_fields;
    static_fields->__9__9_0 = _9__9_0;
    sub_1B4CF34((CGThumbnailListItem_o *)&static_fields->__9__9_0, (int32_t)_9__9_0, v14, v15);
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
  const MethodInfo *v3; // x3
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  UILabel_o *buttonLabel; // x20
  System_String_o *v11; // x0
  __int64 v12; // x1
  UnityEngine_Object_o *buttonSprite; // x20
  UISprite_o *v14; // x19

  if ( (byte_49BC545 & 1) == 0 )
  {
    sub_1B4CF90(&AtlasManager_TypeInfo, entity);
    sub_1B4CF90(&LocalizationManager_TypeInfo, v6);
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, v7);
    sub_1B4CF90(&StringLiteral_5504/*"EVENT_DATA_LOST_BATTLE_RESET_BUTTON"*/, v8);
    sub_1B4CF90(&StringLiteral_17208/*"btn_mission_bg"*/, v9);
    byte_49BC545 = 1;
  }
  this->fields.uiEntity = entity;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.uiEntity, (int32_t)entity, (int32_t)method, v3);
  buttonLabel = this->fields.buttonLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v11 = LocalizationManager__Get((System_String_o *)StringLiteral_5504/*"EVENT_DATA_LOST_BATTLE_RESET_BUTTON"*/, 0LL);
  if ( !buttonLabel
    || (UILabel__set_text(buttonLabel, v11, 0LL), (v11 = (System_String_o *)this->fields.buttonLabel) == 0LL) )
  {
    sub_1B4D1EC(v11, v12);
  }
  UILabel__SetCondensedScale((UILabel_o *)v11, this->fields.labelWidth, 0, 0LL);
  buttonSprite = (UnityEngine_Object_o *)this->fields.buttonSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(buttonSprite, 0LL, 0LL) )
  {
    v14 = this->fields.buttonSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEventUI(v14, (System_String_o *)StringLiteral_17208/*"btn_mission_bg"*/, 0LL);
  }
}


void __fastcall EventInfoRaidResetButton__OnClick(EventInfoRaidResetButton_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  __int64 v8; // x0
  __int64 v9; // x1
  struct EventUiEntity_o *uiEntity; // x8
  int32_t eventId; // w20
  int32_t warId; // w21
  DataLostResetManager_ClickDelegate_o *v13; // x22

  if ( (byte_49BC546 & 1) == 0 )
  {
    sub_1B4CF90(&DataLostResetManager_ClickDelegate_TypeInfo, method);
    sub_1B4CF90(&DataLostResetManager_TypeInfo, v3);
    sub_1B4CF90(&Method_EventInfoRaidResetButton_OnClick__, v4);
    sub_1B4CF90(&Method_EventInfoRaidResetButton__OnClick_b__8_0__, v5);
    byte_49BC546 = 1;
  }
  v6 = Method_EventInfoRaidResetButton_OnClick__;
  if ( (*((_BYTE *)Method_EventInfoRaidResetButton_OnClick__ + 83) & 2) != 0 )
    v6 = (_QWORD *)sub_1B4CFA8(Method_EventInfoRaidResetButton_OnClick__);
  v7 = (System_Reflection_MethodBase_o *)sub_1B4CF74(v6, v6[4]);
  OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0, 0LL);
  uiEntity = this->fields.uiEntity;
  if ( !uiEntity )
    sub_1B4D1EC(v8, v9);
  eventId = uiEntity->fields.eventId;
  warId = uiEntity->fields.warId;
  v13 = (DataLostResetManager_ClickDelegate_o *)sub_1B4D1DC(DataLostResetManager_ClickDelegate_TypeInfo);
  DataLostResetManager_ClickDelegate___ctor(
    v13,
    (Il2CppObject *)this,
    Method_EventInfoRaidResetButton__OnClick_b__8_0__,
    0LL);
  if ( !DataLostResetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataLostResetManager_TypeInfo);
  DataLostResetManager__OpenResetSelectDialog(eventId, warId, 0, v13, 0LL);
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
    sub_1B4D1EC(button, isOpen);
  UnityEngine_GameObject__SetActive(button, !isOpen, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventInfoRaidResetButton___OnClick_b__8_0(
        EventInfoRaidResetButton_o *this,
        int32_t resetIdx,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  MissionNotifyManager_o *Instance; // x0
  __int64 v10; // x1
  struct EventUiEntity_o *uiEntity; // x8
  int32_t eventId; // w21
  int32_t warId; // w22
  NetworkManager_ResultCallbackFunc_o *v14; // x23

  if ( (byte_49BC548 & 1) == 0 )
  {
    sub_1B4CF90(&DataLostResetManager_TypeInfo, *(_QWORD *)&resetIdx);
    sub_1B4CF90(&Method_EventInfoRaidResetButton_CallbackResetDataLostBattle__, v5);
    sub_1B4CF90(&NetworkManager_ResultCallbackFunc_TypeInfo, v6);
    sub_1B4CF90(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v7);
    sub_1B4CF90(&TerminalPramsManager_TypeInfo, v8);
    byte_49BC548 = 1;
  }
  if ( resetIdx != -1 )
  {
    Instance = (MissionNotifyManager_o *)SingletonTemplate_object___get_Instance((const MethodInfo_37B4830 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    if ( !Instance )
      goto LABEL_16;
    MissionNotifyManager__StartPause(Instance, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_49B8112 )
    {
      sub_1B4CF90(&TerminalPramsManager_TypeInfo, v10);
      byte_49B8112 = 1;
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
      sub_1B4D1EC(Instance, v10);
    eventId = uiEntity->fields.eventId;
    warId = uiEntity->fields.warId;
    v14 = (NetworkManager_ResultCallbackFunc_o *)sub_1B4D1DC(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v14,
      (Il2CppObject *)this,
      Method_EventInfoRaidResetButton_CallbackResetDataLostBattle__,
      0LL);
    if ( !DataLostResetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataLostResetManager_TypeInfo);
    DataLostResetManager__RequestResetDataLostBattle(eventId, warId, resetIdx, v14, 0LL);
  }
}


void __fastcall EventInfoRaidResetButton___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_49BC549 & 1) == 0 )
  {
    sub_1B4CF90(&EventInfoRaidResetButton___c_TypeInfo, v1);
    byte_49BC549 = 1;
  }
  v2 = (Il2CppObject *)sub_1B4D1DC(EventInfoRaidResetButton___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  EventInfoRaidResetButton___c_TypeInfo->static_fields->__9 = (struct EventInfoRaidResetButton___c_o *)v2;
  sub_1B4CF34((CGThumbnailListItem_o *)EventInfoRaidResetButton___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
}


void __fastcall EventInfoRaidResetButton___c___ctor(EventInfoRaidResetButton___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventInfoRaidResetButton___c___CallbackResetDataLostBattle_b__9_0(
        EventInfoRaidResetButton___c_o *this,
        const MethodInfo *method)
{
  if ( (byte_49BC54A & 1) == 0 )
  {
    sub_1B4CF90(&DataLostResetManager_TypeInfo, method);
    byte_49BC54A = 1;
  }
  if ( !DataLostResetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataLostResetManager_TypeInfo);
  DataLostResetManager__ResetAfterInit(0LL);
}