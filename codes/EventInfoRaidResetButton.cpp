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
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  struct EventUiEntity_o *uiEntity; // x8
  int32_t warId; // w20
  int32_t eventId; // w21
  EventInfoRaidResetButton___c_c *v12; // x0
  struct EventInfoRaidResetButton___c_StaticFields *static_fields; // x8
  System_Action_o *_9__9_0; // x22
  Il2CppObject *v15; // x23
  struct EventInfoRaidResetButton___c_StaticFields *v16; // x0
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7

  if ( (byte_40FA165 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, result);
    sub_B16FFC(&DataLostResetManager_TypeInfo, v6);
    sub_B16FFC(&Method_EventInfoRaidResetButton___c__CallbackResetDataLostBattle_b__9_0__, v7);
    sub_B16FFC(&EventInfoRaidResetButton___c_TypeInfo, v8);
    byte_40FA165 = 1;
  }
  uiEntity = this->fields.uiEntity;
  if ( !uiEntity )
    sub_B170D4();
  eventId = uiEntity->fields.eventId;
  warId = uiEntity->fields.warId;
  v12 = EventInfoRaidResetButton___c_TypeInfo;
  if ( (BYTE3(EventInfoRaidResetButton___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventInfoRaidResetButton___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoRaidResetButton___c_TypeInfo);
    v12 = EventInfoRaidResetButton___c_TypeInfo;
  }
  static_fields = v12->static_fields;
  _9__9_0 = static_fields->__9__9_0;
  if ( !_9__9_0 )
  {
    if ( (BYTE3(v12->vtable._0_Equals.methodPtr) & 4) != 0 && !v12->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v12);
      static_fields = EventInfoRaidResetButton___c_TypeInfo->static_fields;
    }
    v15 = (Il2CppObject *)static_fields->__9;
    _9__9_0 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, result, method, v3, v4);
    System_Action___ctor(_9__9_0, v15, Method_EventInfoRaidResetButton___c__CallbackResetDataLostBattle_b__9_0__, 0LL);
    v16 = EventInfoRaidResetButton___c_TypeInfo->static_fields;
    v16->__9__9_0 = _9__9_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v16->__9__9_0,
      (System_Int32_array **)_9__9_0,
      v17,
      v18,
      v19,
      v20,
      v21,
      v22);
  }
  if ( (BYTE3(DataLostResetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !DataLostResetManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DataLostResetManager_TypeInfo);
  }
  DataLostResetManager__PlayResetEffect((UnityEngine_MonoBehaviour_o *)this, eventId, warId, _9__9_0, 0LL);
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
  UILabel_o *v16; // x0
  UnityEngine_Object_o *buttonSprite; // x20
  UISprite_o *v18; // x19

  if ( (byte_40FA163 & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, entity);
    sub_B16FFC(&LocalizationManager_TypeInfo, v10);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v11);
    sub_B16FFC(&StringLiteral_5598, v12);
    sub_B16FFC(&StringLiteral_16937, v13);
    byte_40FA163 = 1;
  }
  this->fields.uiEntity = entity;
  sub_B16F98(
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
  v15 = LocalizationManager__Get((System_String_o *)StringLiteral_5598, 0LL);
  if ( !buttonLabel || (UILabel__set_text(buttonLabel, v15, 0LL), (v16 = this->fields.buttonLabel) == 0LL) )
    sub_B170D4();
  UILabel__SetCondensedScale(v16, this->fields.labelWidth, 0LL);
  buttonSprite = (UnityEngine_Object_o *)this->fields.buttonSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(buttonSprite, 0LL, 0LL) )
  {
    v18 = this->fields.buttonSprite;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetEventUI(v18, (System_String_o *)StringLiteral_16937, 0LL);
  }
}


void __fastcall EventInfoRaidResetButton__OnClick(EventInfoRaidResetButton_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x4
  struct EventUiEntity_o *uiEntity; // x8
  int32_t eventId; // w20
  int32_t warId; // w21
  DataLostResetManager_ClickDelegate_o *v15; // x22

  if ( (byte_40FA164 & 1) == 0 )
  {
    sub_B16FFC(&DataLostResetManager_ClickDelegate_TypeInfo, method);
    sub_B16FFC(&DataLostResetManager_TypeInfo, v3);
    sub_B16FFC(&Method_EventInfoRaidResetButton_OnClick__, v4);
    sub_B16FFC(&Method_EventInfoRaidResetButton__OnClick_b__8_0__, v5);
    byte_40FA164 = 1;
  }
  v6 = Method_EventInfoRaidResetButton_OnClick__;
  if ( (*((_BYTE *)Method_EventInfoRaidResetButton_OnClick__ + 75) & 2) != 0 )
    v6 = (_QWORD *)sub_B17004(Method_EventInfoRaidResetButton_OnClick__);
  v7 = (System_Reflection_MethodBase_o *)sub_B16FE0(v6, v6[3]);
  OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0LL);
  uiEntity = this->fields.uiEntity;
  if ( !uiEntity )
    sub_B170D4();
  eventId = uiEntity->fields.eventId;
  warId = uiEntity->fields.warId;
  v15 = (DataLostResetManager_ClickDelegate_o *)sub_B170CC(
                                                  DataLostResetManager_ClickDelegate_TypeInfo,
                                                  v8,
                                                  v9,
                                                  v10,
                                                  v11);
  DataLostResetManager_ClickDelegate___ctor(
    v15,
    (Il2CppObject *)this,
    Method_EventInfoRaidResetButton__OnClick_b__8_0__,
    0LL);
  if ( (BYTE3(DataLostResetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !DataLostResetManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DataLostResetManager_TypeInfo);
  }
  DataLostResetManager__OpenResetSelectDialog(eventId, warId, 0, v15, 0LL);
}


void __fastcall EventInfoRaidResetButton__SwitchSpotState(
        EventInfoRaidResetButton_o *this,
        bool isOpen,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *button; // x0
  UnityEngine_GameObject_o *gameObject; // x0

  button = this->fields.button;
  if ( !button || (gameObject = UnityEngine_GameObject__get_gameObject(button, 0LL)) == 0LL )
    sub_B170D4();
  UnityEngine_GameObject__SetActive(gameObject, !isOpen, 0LL);
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
  __int64 v13; // x3
  __int64 v14; // x4
  TerminalPramsManager_c *v15; // x0
  struct EventUiEntity_o *uiEntity; // x8
  int32_t eventId; // w21
  int32_t warId; // w22
  NetworkManager_ResultCallbackFunc_o *v19; // x23

  if ( (byte_40FA166 & 1) == 0 )
  {
    sub_B16FFC(&DataLostResetManager_TypeInfo, *(_QWORD *)&resetIdx);
    sub_B16FFC(&Method_EventInfoRaidResetButton_CallbackResetDataLostBattle__, v5);
    sub_B16FFC(&NetworkManager_ResultCallbackFunc_TypeInfo, v6);
    sub_B16FFC(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v7);
    sub_B16FFC(&SingletonTemplate_MissionNotifyManager__TypeInfo, v8);
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v9);
    byte_40FA166 = 1;
  }
  if ( resetIdx != -1 )
  {
    if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
    }
    v10 = (MissionNotifyManager_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    if ( !v10 )
      goto LABEL_22;
    MissionNotifyManager__StartPause(v10, 0LL);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_40F6E27 )
    {
      sub_B16FFC(&TerminalPramsManager_TypeInfo, v11);
      byte_40F6E27 = 1;
    }
    v15 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v15 = TerminalPramsManager_TypeInfo;
    }
    v15->static_fields->_IsStopMasterFaceOverwrite_k__BackingField = 1;
    uiEntity = this->fields.uiEntity;
    if ( !uiEntity )
LABEL_22:
      sub_B170D4();
    eventId = uiEntity->fields.eventId;
    warId = uiEntity->fields.warId;
    v19 = (NetworkManager_ResultCallbackFunc_o *)sub_B170CC(
                                                   NetworkManager_ResultCallbackFunc_TypeInfo,
                                                   v11,
                                                   v12,
                                                   v13,
                                                   v14);
    NetworkManager_ResultCallbackFunc___ctor(
      v19,
      (Il2CppObject *)this,
      Method_EventInfoRaidResetButton_CallbackResetDataLostBattle__,
      0LL);
    if ( (BYTE3(DataLostResetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !DataLostResetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(DataLostResetManager_TypeInfo);
    }
    DataLostResetManager__RequestResetDataLostBattle(eventId, warId, resetIdx, v19, 0LL);
  }
}


void __fastcall EventInfoRaidResetButton___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v5; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40F6FDA & 1) == 0 )
  {
    sub_B16FFC(&EventInfoRaidResetButton___c_TypeInfo, v1);
    byte_40F6FDA = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(EventInfoRaidResetButton___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)EventInfoRaidResetButton___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
}


void __fastcall EventInfoRaidResetButton___c___ctor(EventInfoRaidResetButton___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventInfoRaidResetButton___c___CallbackResetDataLostBattle_b__9_0(
        EventInfoRaidResetButton___c_o *this,
        const MethodInfo *method)
{
  if ( (byte_40F6FDB & 1) == 0 )
  {
    sub_B16FFC(&DataLostResetManager_TypeInfo, method);
    byte_40F6FDB = 1;
  }
  if ( (BYTE3(DataLostResetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !DataLostResetManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DataLostResetManager_TypeInfo);
  }
  DataLostResetManager__ResetAfterInit(0LL);
}