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
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  _DWORD *monitor; // x8
  int32_t v8; // w20
  int32_t v9; // w21
  EventInfoRaidResetButton___c_c *v10; // x0
  struct EventInfoRaidResetButton___c_StaticFields *static_fields; // x8
  System_Action_o *_9__9_0; // x22
  Il2CppObject *v13; // x23
  struct EventInfoRaidResetButton___c_StaticFields *v14; // x0
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7

  v3 = (UnityEngine_MonoBehaviour_o *)this;
  if ( (byte_4215612 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, result);
    sub_B0D8A4(&DataLostResetManager_TypeInfo, v4);
    sub_B0D8A4(&Method_EventInfoRaidResetButton___c__CallbackResetDataLostBattle_b__9_0__, v5);
    this = (EventInfoRaidResetButton_o *)sub_B0D8A4(&EventInfoRaidResetButton___c_TypeInfo, v6);
    byte_4215612 = 1;
  }
  monitor = v3[4].monitor;
  if ( !monitor )
    sub_B0D97C(this);
  v9 = monitor[6];
  v8 = monitor[7];
  v10 = EventInfoRaidResetButton___c_TypeInfo;
  if ( (BYTE3(EventInfoRaidResetButton___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventInfoRaidResetButton___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoRaidResetButton___c_TypeInfo);
    v10 = EventInfoRaidResetButton___c_TypeInfo;
  }
  static_fields = v10->static_fields;
  _9__9_0 = static_fields->__9__9_0;
  if ( !_9__9_0 )
  {
    if ( (BYTE3(v10->vtable._0_Equals.methodPtr) & 4) != 0 && !v10->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v10);
      static_fields = EventInfoRaidResetButton___c_TypeInfo->static_fields;
    }
    v13 = (Il2CppObject *)static_fields->__9;
    _9__9_0 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, result, method);
    System_Action___ctor(_9__9_0, v13, Method_EventInfoRaidResetButton___c__CallbackResetDataLostBattle_b__9_0__, 0LL);
    v14 = EventInfoRaidResetButton___c_TypeInfo->static_fields;
    v14->__9__9_0 = _9__9_0;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v14->__9__9_0,
      (System_Int32_array **)_9__9_0,
      v15,
      v16,
      v17,
      v18,
      v19,
      v20);
  }
  if ( (BYTE3(DataLostResetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !DataLostResetManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DataLostResetManager_TypeInfo);
  }
  DataLostResetManager__PlayResetEffect(v3, v9, v8, _9__9_0, 0LL);
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
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  UILabel_o *buttonLabel; // x20
  System_String_o *v15; // x0
  UnityEngine_Object_o *buttonSprite; // x20
  UISprite_o *v17; // x19

  if ( (byte_4215610 & 1) == 0 )
  {
    sub_B0D8A4(&AtlasManager_TypeInfo, entity);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v10);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v11);
    sub_B0D8A4(&StringLiteral_5629/*"EVENT_DATA_LOST_BATTLE_RESET_BUTTON"*/, v12);
    sub_B0D8A4(&StringLiteral_17054/*"btn_mission_bg"*/, v13);
    byte_4215610 = 1;
  }
  this->fields.uiEntity = entity;
  sub_B0D840(
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
  v15 = LocalizationManager__Get((System_String_o *)StringLiteral_5629/*"EVENT_DATA_LOST_BATTLE_RESET_BUTTON"*/, 0LL);
  if ( !buttonLabel
    || (UILabel__set_text(buttonLabel, v15, 0LL), (v15 = (System_String_o *)this->fields.buttonLabel) == 0LL) )
  {
    sub_B0D97C(v15);
  }
  UILabel__SetCondensedScale((UILabel_o *)v15, this->fields.labelWidth, 0LL);
  buttonSprite = (UnityEngine_Object_o *)this->fields.buttonSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(buttonSprite, 0LL, 0LL) )
  {
    v17 = this->fields.buttonSprite;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetEventUI(v17, (System_String_o *)StringLiteral_17054/*"btn_mission_bg"*/, 0LL);
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

  if ( (byte_4215611 & 1) == 0 )
  {
    sub_B0D8A4(&DataLostResetManager_ClickDelegate_TypeInfo, method);
    sub_B0D8A4(&DataLostResetManager_TypeInfo, v3);
    sub_B0D8A4(&Method_EventInfoRaidResetButton_OnClick__, v4);
    sub_B0D8A4(&Method_EventInfoRaidResetButton__OnClick_b__8_0__, v5);
    byte_4215611 = 1;
  }
  v6 = Method_EventInfoRaidResetButton_OnClick__;
  if ( (*((_BYTE *)Method_EventInfoRaidResetButton_OnClick__ + 75) & 2) != 0 )
    v6 = (_QWORD *)sub_B0D8AC(Method_EventInfoRaidResetButton_OnClick__);
  v7 = (System_Reflection_MethodBase_o *)sub_B0D888(v6, v6[3]);
  OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0LL);
  uiEntity = this->fields.uiEntity;
  if ( !uiEntity )
    sub_B0D97C(v8);
  eventId = uiEntity->fields.eventId;
  warId = uiEntity->fields.warId;
  v14 = (DataLostResetManager_ClickDelegate_o *)sub_B0D974(DataLostResetManager_ClickDelegate_TypeInfo, v9, v10);
  DataLostResetManager_ClickDelegate___ctor(
    v14,
    (Il2CppObject *)this,
    Method_EventInfoRaidResetButton__OnClick_b__8_0__,
    0LL);
  if ( (BYTE3(DataLostResetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !DataLostResetManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DataLostResetManager_TypeInfo);
  }
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
    sub_B0D97C(button);
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
  __int64 v9; // x1
  MissionNotifyManager_o *v10; // x0
  __int64 v11; // x1
  __int64 v12; // x2
  struct EventUiEntity_o *uiEntity; // x8
  int32_t eventId; // w21
  int32_t warId; // w22
  NetworkManager_ResultCallbackFunc_o *v16; // x23

  if ( (byte_4215613 & 1) == 0 )
  {
    sub_B0D8A4(&DataLostResetManager_TypeInfo, *(_QWORD *)&resetIdx);
    sub_B0D8A4(&Method_EventInfoRaidResetButton_CallbackResetDataLostBattle__, v5);
    sub_B0D8A4(&NetworkManager_ResultCallbackFunc_TypeInfo, v6);
    sub_B0D8A4(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v7);
    sub_B0D8A4(&SingletonTemplate_MissionNotifyManager__TypeInfo, v8);
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v9);
    byte_4215613 = 1;
  }
  if ( resetIdx != -1 )
  {
    if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
    }
    v10 = (MissionNotifyManager_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    if ( !v10 )
      goto LABEL_22;
    MissionNotifyManager__StartPause(v10, 0LL);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_4211AC3 )
    {
      sub_B0D8A4(&TerminalPramsManager_TypeInfo, v11);
      byte_4211AC3 = 1;
    }
    v10 = (MissionNotifyManager_o *)TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v10 = (MissionNotifyManager_o *)TerminalPramsManager_TypeInfo;
    }
    LOBYTE(v10[2].fields.mNoDispInfos[3].fields._size) = 1;
    uiEntity = this->fields.uiEntity;
    if ( !uiEntity )
LABEL_22:
      sub_B0D97C(v10);
    eventId = uiEntity->fields.eventId;
    warId = uiEntity->fields.warId;
    v16 = (NetworkManager_ResultCallbackFunc_o *)sub_B0D974(NetworkManager_ResultCallbackFunc_TypeInfo, v11, v12);
    NetworkManager_ResultCallbackFunc___ctor(
      v16,
      (Il2CppObject *)this,
      Method_EventInfoRaidResetButton_CallbackResetDataLostBattle__,
      0LL);
    if ( (BYTE3(DataLostResetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !DataLostResetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(DataLostResetManager_TypeInfo);
    }
    DataLostResetManager__RequestResetDataLostBattle(eventId, warId, resetIdx, v16, 0LL);
  }
}


void __fastcall EventInfoRaidResetButton___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  struct EventInfoRaidResetButton___c_StaticFields *static_fields; // x0

  if ( (byte_4211B6F & 1) == 0 )
  {
    sub_B0D8A4(&EventInfoRaidResetButton___c_TypeInfo, v1);
    byte_4211B6F = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(EventInfoRaidResetButton___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = EventInfoRaidResetButton___c_TypeInfo->static_fields;
  static_fields->__9 = (struct EventInfoRaidResetButton___c_o *)v3;
  sub_B0D840(static_fields, v3);
}


void __fastcall EventInfoRaidResetButton___c___ctor(EventInfoRaidResetButton___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventInfoRaidResetButton___c___CallbackResetDataLostBattle_b__9_0(
        EventInfoRaidResetButton___c_o *this,
        const MethodInfo *method)
{
  if ( (byte_4211B70 & 1) == 0 )
  {
    sub_B0D8A4(&DataLostResetManager_TypeInfo, method);
    byte_4211B70 = 1;
  }
  if ( (BYTE3(DataLostResetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !DataLostResetManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DataLostResetManager_TypeInfo);
  }
  DataLostResetManager__ResetAfterInit(0LL);
}