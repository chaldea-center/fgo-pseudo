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
  int32_t v15; // w3

  v3 = this;
  if ( (byte_49FDC07 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, result);
    sub_1B640C8(&DataLostResetManager_TypeInfo, v4);
    sub_1B640C8(&Method_EventInfoRaidResetButton___c__CallbackResetDataLostBattle_b__9_0__, v5);
    this = (EventInfoRaidResetButton_o *)sub_1B640C8(&EventInfoRaidResetButton___c_TypeInfo, v6);
    byte_49FDC07 = 1;
  }
  uiEntity = v3->fields.uiEntity;
  if ( !uiEntity )
    sub_1B64324(this);
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
    _9__9_0 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, result, method);
    System_Action___ctor(_9__9_0, v12, Method_EventInfoRaidResetButton___c__CallbackResetDataLostBattle_b__9_0__, 0LL);
    static_fields = EventInfoRaidResetButton___c_TypeInfo->static_fields;
    static_fields->__9__9_0 = _9__9_0;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__9_0, (int32_t)_9__9_0, v14, v15);
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
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  UILabel_o *buttonLabel; // x20
  System_String_o *v11; // x0
  UnityEngine_Object_o *buttonSprite; // x20
  UISprite_o *v13; // x19

  if ( (byte_49FDC05 & 1) == 0 )
  {
    sub_1B640C8(&AtlasManager_TypeInfo, entity);
    sub_1B640C8(&LocalizationManager_TypeInfo, v6);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v7);
    sub_1B640C8(&StringLiteral_5579/*"EVENT_DATA_LOST_BATTLE_RESET_BUTTON"*/, v8);
    sub_1B640C8(&StringLiteral_17452/*"btn_mission_bg"*/, v9);
    byte_49FDC05 = 1;
  }
  this->fields.uiEntity = entity;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.uiEntity, (int32_t)entity, (int32_t)method, v3);
  buttonLabel = this->fields.buttonLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v11 = LocalizationManager__Get((System_String_o *)StringLiteral_5579/*"EVENT_DATA_LOST_BATTLE_RESET_BUTTON"*/, 0LL);
  if ( !buttonLabel
    || (UILabel__set_text(buttonLabel, v11, 0LL), (v11 = (System_String_o *)this->fields.buttonLabel) == 0LL) )
  {
    sub_1B64324(v11);
  }
  UILabel__SetCondensedScale((UILabel_o *)v11, this->fields.labelWidth, 0LL);
  buttonSprite = (UnityEngine_Object_o *)this->fields.buttonSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(buttonSprite, 0LL, 0LL) )
  {
    v13 = this->fields.buttonSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEventUI(v13, (System_String_o *)StringLiteral_17452/*"btn_mission_bg"*/, 0LL);
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
  __int64 v10; // x2
  struct EventUiEntity_o *uiEntity; // x8
  int32_t eventId; // w20
  int32_t warId; // w21
  DataLostResetManager_ClickDelegate_o *v14; // x22

  if ( (byte_49FDC06 & 1) == 0 )
  {
    sub_1B640C8(&DataLostResetManager_ClickDelegate_TypeInfo, method);
    sub_1B640C8(&DataLostResetManager_TypeInfo, v3);
    sub_1B640C8(&Method_EventInfoRaidResetButton_OnClick__, v4);
    sub_1B640C8(&Method_EventInfoRaidResetButton__OnClick_b__8_0__, v5);
    byte_49FDC06 = 1;
  }
  v6 = Method_EventInfoRaidResetButton_OnClick__;
  if ( (*((_BYTE *)Method_EventInfoRaidResetButton_OnClick__ + 83) & 2) != 0 )
    v6 = (_QWORD *)sub_1B640E0(Method_EventInfoRaidResetButton_OnClick__);
  v7 = (System_Reflection_MethodBase_o *)sub_1B640AC(v6, v6[4]);
  OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0LL);
  uiEntity = this->fields.uiEntity;
  if ( !uiEntity )
    sub_1B64324(v8);
  eventId = uiEntity->fields.eventId;
  warId = uiEntity->fields.warId;
  v14 = (DataLostResetManager_ClickDelegate_o *)sub_1B64314(DataLostResetManager_ClickDelegate_TypeInfo, v9, v10);
  DataLostResetManager_ClickDelegate___ctor(
    v14,
    (Il2CppObject *)this,
    Method_EventInfoRaidResetButton__OnClick_b__8_0__,
    0LL);
  if ( !DataLostResetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataLostResetManager_TypeInfo);
  DataLostResetManager__OpenResetSelectDialog(eventId, warId, 0, v14, 0LL);
}


void __fastcall EventInfoRaidResetButton__SwitchSpotState(
        EventInfoRaidResetButton_o *this,
        bool isOpen,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *button; // x0

  button = this->fields.button;
  if ( !button || (button = UnityEngine_GameObject__get_gameObject(button, 0LL)) == 0LL )
    sub_1B64324(button);
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
  __int64 v11; // x2
  struct EventUiEntity_o *uiEntity; // x8
  int32_t eventId; // w21
  int32_t warId; // w22
  NetworkManager_ResultCallbackFunc_o *v15; // x23

  if ( (byte_49FDC08 & 1) == 0 )
  {
    sub_1B640C8(&DataLostResetManager_TypeInfo, *(_QWORD *)&resetIdx);
    sub_1B640C8(&Method_EventInfoRaidResetButton_CallbackResetDataLostBattle__, v5);
    sub_1B640C8(&NetworkManager_ResultCallbackFunc_TypeInfo, v6);
    sub_1B640C8(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v7);
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v8);
    byte_49FDC08 = 1;
  }
  if ( resetIdx != -1 )
  {
    Instance = (MissionNotifyManager_o *)SingletonTemplate_object___get_Instance((const MethodInfo_36EC45C *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    if ( !Instance )
      goto LABEL_16;
    MissionNotifyManager__StartPause(Instance, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_49F9809 )
    {
      sub_1B640C8(&TerminalPramsManager_TypeInfo, v10);
      byte_49F9809 = 1;
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
      sub_1B64324(Instance);
    eventId = uiEntity->fields.eventId;
    warId = uiEntity->fields.warId;
    v15 = (NetworkManager_ResultCallbackFunc_o *)sub_1B64314(NetworkManager_ResultCallbackFunc_TypeInfo, v10, v11);
    NetworkManager_ResultCallbackFunc___ctor(
      v15,
      (Il2CppObject *)this,
      Method_EventInfoRaidResetButton_CallbackResetDataLostBattle__,
      0LL);
    if ( !DataLostResetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataLostResetManager_TypeInfo);
    DataLostResetManager__RequestResetDataLostBattle(eventId, warId, resetIdx, v15, 0LL);
  }
}


void __fastcall EventInfoRaidResetButton___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49FDC09 & 1) == 0 )
  {
    sub_1B640C8(&EventInfoRaidResetButton___c_TypeInfo, v1);
    byte_49FDC09 = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(EventInfoRaidResetButton___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  EventInfoRaidResetButton___c_TypeInfo->static_fields->__9 = (struct EventInfoRaidResetButton___c_o *)v3;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)EventInfoRaidResetButton___c_TypeInfo->static_fields,
    (int32_t)v3,
    v4,
    v5);
}


void __fastcall EventInfoRaidResetButton___c___ctor(EventInfoRaidResetButton___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventInfoRaidResetButton___c___CallbackResetDataLostBattle_b__9_0(
        EventInfoRaidResetButton___c_o *this,
        const MethodInfo *method)
{
  if ( (byte_49FDC0A & 1) == 0 )
  {
    sub_1B640C8(&DataLostResetManager_TypeInfo, method);
    byte_49FDC0A = 1;
  }
  if ( !DataLostResetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataLostResetManager_TypeInfo);
  DataLostResetManager__ResetAfterInit(0LL);
}