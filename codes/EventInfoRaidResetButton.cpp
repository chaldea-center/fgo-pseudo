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
  UnityEngine_MonoBehaviour_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  _DWORD *monitor; // x8
  int32_t v15; // w20
  int32_t v16; // w21
  EventInfoRaidResetButton___c_c *v17; // x0
  struct EventInfoRaidResetButton___c_StaticFields *static_fields; // x8
  System_Action_o *_9__9_0; // x22
  Il2CppObject *v20; // x23
  struct EventInfoRaidResetButton___c_StaticFields *v21; // x0
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7

  v4 = (UnityEngine_MonoBehaviour_o *)this;
  if ( (byte_42E952E & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)result, (_DWORD)method, v3);
    sub_B5D5C4(&DataLostResetManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_EventInfoRaidResetButton___c__CallbackResetDataLostBattle_b__9_0__, v8, v9, v10);
    this = (EventInfoRaidResetButton_o *)sub_B5D5C4(&EventInfoRaidResetButton___c_TypeInfo, v11, v12, v13);
    byte_42E952E = 1;
  }
  monitor = v4[4].monitor;
  if ( !monitor )
    sub_B5D69C(this, result);
  v16 = monitor[6];
  v15 = monitor[7];
  v17 = EventInfoRaidResetButton___c_TypeInfo;
  if ( (BYTE3(EventInfoRaidResetButton___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventInfoRaidResetButton___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoRaidResetButton___c_TypeInfo);
    v17 = EventInfoRaidResetButton___c_TypeInfo;
  }
  static_fields = v17->static_fields;
  _9__9_0 = static_fields->__9__9_0;
  if ( !_9__9_0 )
  {
    if ( (BYTE3(v17->vtable._0_Equals.methodPtr) & 4) != 0 && !v17->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v17);
      static_fields = EventInfoRaidResetButton___c_TypeInfo->static_fields;
    }
    v20 = (Il2CppObject *)static_fields->__9;
    _9__9_0 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(_9__9_0, v20, Method_EventInfoRaidResetButton___c__CallbackResetDataLostBattle_b__9_0__, 0LL);
    v21 = EventInfoRaidResetButton___c_TypeInfo->static_fields;
    v21->__9__9_0 = _9__9_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v21->__9__9_0,
      (System_Int32_array **)_9__9_0,
      v22,
      v23,
      v24,
      v25,
      v26,
      v27);
  }
  if ( (BYTE3(DataLostResetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !DataLostResetManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DataLostResetManager_TypeInfo);
  }
  DataLostResetManager__PlayResetEffect(v4, v16, v15, _9__9_0, 0LL);
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
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  UILabel_o *buttonLabel; // x20
  System_String_o *v23; // x0
  __int64 v24; // x1
  UnityEngine_Object_o *buttonSprite; // x20
  UISprite_o *v26; // x19

  if ( (byte_42E952C & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManager_TypeInfo, (_DWORD)entity, (_DWORD)method, v3);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&StringLiteral_5690/*"EVENT_DATA_LOST_BATTLE_RESET_BUTTON"*/, v16, v17, v18);
    sub_B5D5C4(&StringLiteral_17212/*"btn_mission_bg"*/, v19, v20, v21);
    byte_42E952C = 1;
  }
  this->fields.uiEntity = entity;
  sub_B5D560(
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
  v23 = LocalizationManager__Get((System_String_o *)StringLiteral_5690/*"EVENT_DATA_LOST_BATTLE_RESET_BUTTON"*/, 0LL);
  if ( !buttonLabel
    || (UILabel__set_text(buttonLabel, v23, 0LL), (v23 = (System_String_o *)this->fields.buttonLabel) == 0LL) )
  {
    sub_B5D69C(v23, v24);
  }
  UILabel__SetCondensedScale((UILabel_o *)v23, this->fields.labelWidth, 0LL);
  buttonSprite = (UnityEngine_Object_o *)this->fields.buttonSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(buttonSprite, 0LL, 0LL) )
  {
    v26 = this->fields.buttonSprite;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetEventUI(v26, (System_String_o *)StringLiteral_17212/*"btn_mission_bg"*/, 0LL);
  }
}


void __fastcall EventInfoRaidResetButton__OnClick(EventInfoRaidResetButton_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  _QWORD *v14; // x0
  System_Reflection_MethodBase_o *v15; // x0
  __int64 v16; // x0
  __int64 v17; // x1
  struct EventUiEntity_o *uiEntity; // x8
  int32_t eventId; // w20
  int32_t warId; // w21
  DataLostResetManager_ClickDelegate_o *v21; // x22

  if ( (byte_42E952D & 1) == 0 )
  {
    sub_B5D5C4(&DataLostResetManager_ClickDelegate_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&DataLostResetManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_EventInfoRaidResetButton_OnClick__, v8, v9, v10);
    sub_B5D5C4(&Method_EventInfoRaidResetButton__OnClick_b__8_0__, v11, v12, v13);
    byte_42E952D = 1;
  }
  v14 = Method_EventInfoRaidResetButton_OnClick__;
  if ( (*((_BYTE *)Method_EventInfoRaidResetButton_OnClick__ + 75) & 2) != 0 )
    v14 = (_QWORD *)sub_B5D5CC(Method_EventInfoRaidResetButton_OnClick__);
  v15 = (System_Reflection_MethodBase_o *)sub_B5D5A8(v14, v14[3]);
  OverwriteAssetSoundName__PlaySystemSe(v15, 0, 0LL);
  uiEntity = this->fields.uiEntity;
  if ( !uiEntity )
    sub_B5D69C(v16, v17);
  eventId = uiEntity->fields.eventId;
  warId = uiEntity->fields.warId;
  v21 = (DataLostResetManager_ClickDelegate_o *)sub_B5D694(DataLostResetManager_ClickDelegate_TypeInfo);
  DataLostResetManager_ClickDelegate___ctor(
    v21,
    (Il2CppObject *)this,
    Method_EventInfoRaidResetButton__OnClick_b__8_0__,
    0LL);
  if ( (BYTE3(DataLostResetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !DataLostResetManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DataLostResetManager_TypeInfo);
  }
  DataLostResetManager__OpenResetSelectDialog(eventId, warId, 0, v21, 0LL);
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
    sub_B5D69C(button, isOpen);
  UnityEngine_GameObject__SetActive(button, !isOpen, 0LL);
}


void __fastcall EventInfoRaidResetButton___OnClick_b__8_0(
        EventInfoRaidResetButton_o *this,
        int32_t resetIdx,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  MissionNotifyManager_o *v21; // x0
  __int64 v22; // x1
  int v23; // w2
  __int64 v24; // x3
  struct EventUiEntity_o *uiEntity; // x8
  int32_t eventId; // w21
  int32_t warId; // w22
  NetworkManager_ResultCallbackFunc_o *v28; // x23

  if ( (byte_42E952F & 1) == 0 )
  {
    sub_B5D5C4(&DataLostResetManager_TypeInfo, resetIdx, (_DWORD)method, v3);
    sub_B5D5C4(&Method_EventInfoRaidResetButton_CallbackResetDataLostBattle__, v6, v7, v8);
    sub_B5D5C4(&NetworkManager_ResultCallbackFunc_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v12, v13, v14);
    sub_B5D5C4(&SingletonTemplate_MissionNotifyManager__TypeInfo, v15, v16, v17);
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v18, v19, v20);
    byte_42E952F = 1;
  }
  if ( resetIdx != -1 )
  {
    if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
    }
    v21 = (MissionNotifyManager_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    if ( !v21 )
      goto LABEL_22;
    MissionNotifyManager__StartPause(v21, 0LL);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_42E5CC5 )
    {
      sub_B5D5C4(&TerminalPramsManager_TypeInfo, v22, v23, v24);
      byte_42E5CC5 = 1;
    }
    v21 = (MissionNotifyManager_o *)TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v21 = (MissionNotifyManager_o *)TerminalPramsManager_TypeInfo;
    }
    LOBYTE(v21[2].fields.mNoDispInfos[4].klass) = 1;
    uiEntity = this->fields.uiEntity;
    if ( !uiEntity )
LABEL_22:
      sub_B5D69C(v21, v22);
    eventId = uiEntity->fields.eventId;
    warId = uiEntity->fields.warId;
    v28 = (NetworkManager_ResultCallbackFunc_o *)sub_B5D694(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v28,
      (Il2CppObject *)this,
      Method_EventInfoRaidResetButton_CallbackResetDataLostBattle__,
      0LL);
    if ( (BYTE3(DataLostResetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !DataLostResetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(DataLostResetManager_TypeInfo);
    }
    DataLostResetManager__RequestResetDataLostBattle(eventId, warId, resetIdx, v28, 0LL);
  }
}


void __fastcall EventInfoRaidResetButton___c___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct EventInfoRaidResetButton___c_StaticFields *static_fields; // x0

  if ( (byte_42E6544 & 1) == 0 )
  {
    sub_B5D5C4(&EventInfoRaidResetButton___c_TypeInfo, v1, v2, v3);
    byte_42E6544 = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(EventInfoRaidResetButton___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = EventInfoRaidResetButton___c_TypeInfo->static_fields;
  static_fields->__9 = (struct EventInfoRaidResetButton___c_o *)v4;
  sub_B5D560(static_fields);
}


void __fastcall EventInfoRaidResetButton___c___ctor(EventInfoRaidResetButton___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventInfoRaidResetButton___c___CallbackResetDataLostBattle_b__9_0(
        EventInfoRaidResetButton___c_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E6545 & 1) == 0 )
  {
    sub_B5D5C4(&DataLostResetManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E6545 = 1;
  }
  if ( (BYTE3(DataLostResetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !DataLostResetManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DataLostResetManager_TypeInfo);
  }
  DataLostResetManager__ResetAfterInit(0LL);
}