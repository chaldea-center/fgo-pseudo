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
  UnityEngine_MonoBehaviour_c *klass; // x8
  int32_t namespaze_high; // w20
  int32_t namespaze; // w21
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
  if ( (byte_4188698 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, result);
    sub_B2C35C(&DataLostResetManager_TypeInfo, v4);
    sub_B2C35C(&Method_EventInfoRaidResetButton___c__CallbackResetDataLostBattle_b__9_0__, v5);
    this = (EventInfoRaidResetButton_o *)sub_B2C35C(&EventInfoRaidResetButton___c_TypeInfo, v6);
    byte_4188698 = 1;
  }
  klass = v3[4].klass;
  if ( !klass )
    sub_B2C434(this, result);
  namespaze = (int32_t)klass->_1.namespaze;
  namespaze_high = HIDWORD(klass->_1.namespaze);
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
    _9__9_0 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(_9__9_0, v13, Method_EventInfoRaidResetButton___c__CallbackResetDataLostBattle_b__9_0__, 0LL);
    v14 = EventInfoRaidResetButton___c_TypeInfo->static_fields;
    v14->__9__9_0 = _9__9_0;
    sub_B2C2F8(
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
  DataLostResetManager__PlayResetEffect(v3, namespaze, namespaze_high, _9__9_0, 0LL);
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
  __int64 v16; // x1
  UnityEngine_Object_o *buttonSprite; // x20
  UISprite_o *v18; // x19

  if ( (byte_4188696 & 1) == 0 )
  {
    sub_B2C35C(&AtlasManager_TypeInfo, entity);
    sub_B2C35C(&LocalizationManager_TypeInfo, v10);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v11);
    sub_B2C35C(&StringLiteral_5613/*"EVENT_DATA_LOST_BATTLE_RESET_BUTTON"*/, v12);
    sub_B2C35C(&StringLiteral_17003/*"btn_mission_bg"*/, v13);
    byte_4188696 = 1;
  }
  this->fields.uiEntity = entity;
  sub_B2C2F8(
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
  v15 = LocalizationManager__Get((System_String_o *)StringLiteral_5613/*"EVENT_DATA_LOST_BATTLE_RESET_BUTTON"*/, 0LL);
  if ( !buttonLabel
    || (UILabel__set_text(buttonLabel, v15, 0LL), (v15 = (System_String_o *)this->fields.buttonLabel) == 0LL) )
  {
    sub_B2C434(v15, v16);
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
    v18 = this->fields.buttonSprite;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetEventUI(v18, (System_String_o *)StringLiteral_17003/*"btn_mission_bg"*/, 0LL);
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

  if ( (byte_4188697 & 1) == 0 )
  {
    sub_B2C35C(&DataLostResetManager_ClickDelegate_TypeInfo, method);
    sub_B2C35C(&DataLostResetManager_TypeInfo, v3);
    sub_B2C35C(&Method_EventInfoRaidResetButton_OnClick__, v4);
    sub_B2C35C(&Method_EventInfoRaidResetButton__OnClick_b__8_0__, v5);
    byte_4188697 = 1;
  }
  v6 = Method_EventInfoRaidResetButton_OnClick__;
  if ( (*((_BYTE *)Method_EventInfoRaidResetButton_OnClick__ + 75) & 2) != 0 )
    v6 = (_QWORD *)sub_B2C364(Method_EventInfoRaidResetButton_OnClick__);
  v7 = (System_Reflection_MethodBase_o *)sub_B2C340(v6, v6[3]);
  OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0LL);
  uiEntity = this->fields.uiEntity;
  if ( !uiEntity )
    sub_B2C434(v8, v9);
  eventId = uiEntity->fields.eventId;
  warId = uiEntity->fields.warId;
  v13 = (DataLostResetManager_ClickDelegate_o *)sub_B2C42C(DataLostResetManager_ClickDelegate_TypeInfo);
  DataLostResetManager_ClickDelegate___ctor(
    v13,
    (Il2CppObject *)this,
    Method_EventInfoRaidResetButton__OnClick_b__8_0__,
    0LL);
  if ( (BYTE3(DataLostResetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !DataLostResetManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DataLostResetManager_TypeInfo);
  }
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
    sub_B2C434(button, isOpen);
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
  struct EventUiEntity_o *uiEntity; // x8
  int32_t eventId; // w21
  int32_t warId; // w22
  NetworkManager_ResultCallbackFunc_o *v15; // x23

  if ( (byte_4188699 & 1) == 0 )
  {
    sub_B2C35C(&DataLostResetManager_TypeInfo, *(_QWORD *)&resetIdx);
    sub_B2C35C(&Method_EventInfoRaidResetButton_CallbackResetDataLostBattle__, v5);
    sub_B2C35C(&NetworkManager_ResultCallbackFunc_TypeInfo, v6);
    sub_B2C35C(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v7);
    sub_B2C35C(&SingletonTemplate_MissionNotifyManager__TypeInfo, v8);
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v9);
    byte_4188699 = 1;
  }
  if ( resetIdx != -1 )
  {
    if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
    }
    v10 = (MissionNotifyManager_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    if ( !v10 )
      goto LABEL_22;
    MissionNotifyManager__StartPause(v10, 0LL);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_4184716 )
    {
      sub_B2C35C(&TerminalPramsManager_TypeInfo, v11);
      byte_4184716 = 1;
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
      sub_B2C434(v10, v11);
    eventId = uiEntity->fields.eventId;
    warId = uiEntity->fields.warId;
    v15 = (NetworkManager_ResultCallbackFunc_o *)sub_B2C42C(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v15,
      (Il2CppObject *)this,
      Method_EventInfoRaidResetButton_CallbackResetDataLostBattle__,
      0LL);
    if ( (BYTE3(DataLostResetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !DataLostResetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(DataLostResetManager_TypeInfo);
    }
    DataLostResetManager__RequestResetDataLostBattle(eventId, warId, resetIdx, v15, 0LL);
  }
}


void __fastcall EventInfoRaidResetButton___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  struct EventInfoRaidResetButton___c_StaticFields *static_fields; // x0

  if ( (byte_4184B0D & 1) == 0 )
  {
    sub_B2C35C(&EventInfoRaidResetButton___c_TypeInfo, v1);
    byte_4184B0D = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(EventInfoRaidResetButton___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = EventInfoRaidResetButton___c_TypeInfo->static_fields;
  static_fields->__9 = (struct EventInfoRaidResetButton___c_o *)v2;
  sub_B2C2F8(static_fields, v2);
}


void __fastcall EventInfoRaidResetButton___c___ctor(EventInfoRaidResetButton___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventInfoRaidResetButton___c___CallbackResetDataLostBattle_b__9_0(
        EventInfoRaidResetButton___c_o *this,
        const MethodInfo *method)
{
  if ( (byte_4184B0E & 1) == 0 )
  {
    sub_B2C35C(&DataLostResetManager_TypeInfo, method);
    byte_4184B0E = 1;
  }
  if ( (BYTE3(DataLostResetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !DataLostResetManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DataLostResetManager_TypeInfo);
  }
  DataLostResetManager__ResetAfterInit(0LL);
}