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
  UnityEngine_MonoBehaviour_o *v3; // x19
  _DWORD *monitor; // x8
  int32_t v5; // w20
  int32_t v6; // w21
  EventInfoRaidResetButton___c_c *v7; // x0
  struct EventInfoRaidResetButton___c_StaticFields *static_fields; // x8
  System_Action_o *_9__9_0; // x22
  Il2CppObject *v10; // x23
  struct EventInfoRaidResetButton___c_StaticFields *v11; // x0
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7

  v3 = (UnityEngine_MonoBehaviour_o *)this;
  if ( (byte_4352A69 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&DataLostResetManager_TypeInfo);
    sub_B70694(&Method_EventInfoRaidResetButton___c__CallbackResetDataLostBattle_b__9_0__);
    this = (EventInfoRaidResetButton_o *)sub_B70694(&EventInfoRaidResetButton___c_TypeInfo);
    byte_4352A69 = 1;
  }
  monitor = v3[4].monitor;
  if ( !monitor )
    sub_B7076C(this, result);
  v6 = monitor[6];
  v5 = monitor[7];
  v7 = EventInfoRaidResetButton___c_TypeInfo;
  if ( (BYTE3(EventInfoRaidResetButton___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventInfoRaidResetButton___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoRaidResetButton___c_TypeInfo);
    v7 = EventInfoRaidResetButton___c_TypeInfo;
  }
  static_fields = v7->static_fields;
  _9__9_0 = static_fields->__9__9_0;
  if ( !_9__9_0 )
  {
    if ( (BYTE3(v7->vtable._0_Equals.methodPtr) & 4) != 0 && !v7->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v7);
      static_fields = EventInfoRaidResetButton___c_TypeInfo->static_fields;
    }
    v10 = (Il2CppObject *)static_fields->__9;
    _9__9_0 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
    System_Action___ctor(_9__9_0, v10, Method_EventInfoRaidResetButton___c__CallbackResetDataLostBattle_b__9_0__, 0LL);
    v11 = EventInfoRaidResetButton___c_TypeInfo->static_fields;
    v11->__9__9_0 = _9__9_0;
    sub_B70630(
      (BattleServantConfConponent_o *)&v11->__9__9_0,
      (System_Int32_array **)_9__9_0,
      v12,
      v13,
      v14,
      v15,
      v16,
      v17);
  }
  if ( (BYTE3(DataLostResetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !DataLostResetManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DataLostResetManager_TypeInfo);
  }
  DataLostResetManager__PlayResetEffect(v3, v6, v5, _9__9_0, 0LL);
}


void __fastcall EventInfoRaidResetButton__Initialization(
        EventInfoRaidResetButton_o *this,
        EventUiEntity_o *entity,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  UILabel_o *buttonLabel; // x20
  System_String_o *v11; // x0
  __int64 v12; // x1
  UnityEngine_Object_o *buttonSprite; // x20
  UISprite_o *v14; // x19

  if ( (byte_4352A67 & 1) == 0 )
  {
    sub_B70694(&AtlasManager_TypeInfo);
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&StringLiteral_5701/*"EVENT_DATA_LOST_BATTLE_RESET_BUTTON"*/);
    sub_B70694(&StringLiteral_17259/*"btn_mission_bg"*/);
    byte_4352A67 = 1;
  }
  this->fields.uiEntity = entity;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.uiEntity,
    (System_Int32_array **)entity,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  buttonLabel = this->fields.buttonLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v11 = LocalizationManager__Get((System_String_o *)StringLiteral_5701/*"EVENT_DATA_LOST_BATTLE_RESET_BUTTON"*/, 0LL);
  if ( !buttonLabel
    || (UILabel__set_text(buttonLabel, v11, 0LL), (v11 = (System_String_o *)this->fields.buttonLabel) == 0LL) )
  {
    sub_B7076C(v11, v12);
  }
  UILabel__SetCondensedScale((UILabel_o *)v11, this->fields.labelWidth, 0LL);
  buttonSprite = (UnityEngine_Object_o *)this->fields.buttonSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(buttonSprite, 0LL, 0LL) )
  {
    v14 = this->fields.buttonSprite;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetEventUI(v14, (System_String_o *)StringLiteral_17259/*"btn_mission_bg"*/, 0LL);
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

  if ( (byte_4352A68 & 1) == 0 )
  {
    sub_B70694(&DataLostResetManager_ClickDelegate_TypeInfo);
    sub_B70694(&DataLostResetManager_TypeInfo);
    sub_B70694(&Method_EventInfoRaidResetButton_OnClick__);
    sub_B70694(&Method_EventInfoRaidResetButton__OnClick_b__8_0__);
    byte_4352A68 = 1;
  }
  v3 = Method_EventInfoRaidResetButton_OnClick__;
  if ( (*((_BYTE *)Method_EventInfoRaidResetButton_OnClick__ + 75) & 2) != 0 )
    v3 = (_QWORD *)sub_B7069C(Method_EventInfoRaidResetButton_OnClick__);
  v4 = (System_Reflection_MethodBase_o *)sub_B70678(v3, v3[3]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
  uiEntity = this->fields.uiEntity;
  if ( !uiEntity )
    sub_B7076C(v5, v6);
  eventId = uiEntity->fields.eventId;
  warId = uiEntity->fields.warId;
  v10 = (DataLostResetManager_ClickDelegate_o *)sub_B70764(DataLostResetManager_ClickDelegate_TypeInfo);
  DataLostResetManager_ClickDelegate___ctor(
    v10,
    (Il2CppObject *)this,
    Method_EventInfoRaidResetButton__OnClick_b__8_0__,
    0LL);
  if ( (BYTE3(DataLostResetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !DataLostResetManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DataLostResetManager_TypeInfo);
  }
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
    sub_B7076C(button, isOpen);
  UnityEngine_GameObject__SetActive(button, !isOpen, 0LL);
}


void __fastcall EventInfoRaidResetButton___OnClick_b__8_0(
        EventInfoRaidResetButton_o *this,
        int32_t resetIdx,
        const MethodInfo *method)
{
  MissionNotifyManager_o *v5; // x0
  __int64 v6; // x1
  struct EventUiEntity_o *uiEntity; // x8
  int32_t eventId; // w21
  int32_t warId; // w22
  NetworkManager_ResultCallbackFunc_o *v10; // x23

  if ( (byte_4352A6A & 1) == 0 )
  {
    sub_B70694(&DataLostResetManager_TypeInfo);
    sub_B70694(&Method_EventInfoRaidResetButton_CallbackResetDataLostBattle__);
    sub_B70694(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_B70694(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_B70694(&SingletonTemplate_MissionNotifyManager__TypeInfo);
    sub_B70694(&TerminalPramsManager_TypeInfo);
    byte_4352A6A = 1;
  }
  if ( resetIdx != -1 )
  {
    if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
    }
    v5 = (MissionNotifyManager_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2CE9CB0 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    if ( !v5 )
      goto LABEL_22;
    MissionNotifyManager__StartPause(v5, 0LL);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_434EFAD )
    {
      sub_B70694(&TerminalPramsManager_TypeInfo);
      byte_434EFAD = 1;
    }
    v5 = (MissionNotifyManager_o *)TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v5 = (MissionNotifyManager_o *)TerminalPramsManager_TypeInfo;
    }
    LOBYTE(v5[2].fields.mNoDispInfos[4].klass) = 1;
    uiEntity = this->fields.uiEntity;
    if ( !uiEntity )
LABEL_22:
      sub_B7076C(v5, v6);
    eventId = uiEntity->fields.eventId;
    warId = uiEntity->fields.warId;
    v10 = (NetworkManager_ResultCallbackFunc_o *)sub_B70764(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v10,
      (Il2CppObject *)this,
      Method_EventInfoRaidResetButton_CallbackResetDataLostBattle__,
      0LL);
    if ( (BYTE3(DataLostResetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !DataLostResetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(DataLostResetManager_TypeInfo);
    }
    DataLostResetManager__RequestResetDataLostBattle(eventId, warId, resetIdx, v10, 0LL);
  }
}


void __fastcall EventInfoRaidResetButton___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  struct EventInfoRaidResetButton___c_StaticFields *static_fields; // x0

  if ( (byte_434F090 & 1) == 0 )
  {
    sub_B70694(&EventInfoRaidResetButton___c_TypeInfo);
    byte_434F090 = 1;
  }
  v1 = (Il2CppObject *)sub_B70764(EventInfoRaidResetButton___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = EventInfoRaidResetButton___c_TypeInfo->static_fields;
  static_fields->__9 = (struct EventInfoRaidResetButton___c_o *)v1;
  sub_B70630(static_fields);
}


void __fastcall EventInfoRaidResetButton___c___ctor(EventInfoRaidResetButton___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventInfoRaidResetButton___c___CallbackResetDataLostBattle_b__9_0(
        EventInfoRaidResetButton___c_o *this,
        const MethodInfo *method)
{
  if ( (byte_434F091 & 1) == 0 )
  {
    sub_B70694(&DataLostResetManager_TypeInfo);
    byte_434F091 = 1;
  }
  if ( (BYTE3(DataLostResetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !DataLostResetManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DataLostResetManager_TypeInfo);
  }
  DataLostResetManager__ResetAfterInit(0LL);
}