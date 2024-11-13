void __fastcall EventInfoCommandAssistLevelComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  int64_t v12; // x1
  struct EventInfoCommandAssistLevelComponent_StaticFields *static_fields; // x0
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7

  if ( (byte_4B16A10 & 1) == 0 )
  {
    sub_1BCA7E0(&EventInfoCommandAssistLevelComponent_TypeInfo, v1, v2);
    sub_1BCA7E0(&StringLiteral_17225/*"badge_lock"*/, v8, v9);
    sub_1BCA7E0(&StringLiteral_16159/*"[ffff00]"*/, v10, v11);
    byte_4B16A10 = 1;
  }
  EventInfoCommandAssistLevelComponent_TypeInfo->static_fields->ICON_SPRITE_NAME_LOCK = (struct System_String_o *)StringLiteral_17225/*"badge_lock"*/;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)EventInfoCommandAssistLevelComponent_TypeInfo->static_fields,
    StringLiteral_17225/*"badge_lock"*/,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  v12 = StringLiteral_16159/*"[ffff00]"*/;
  static_fields = EventInfoCommandAssistLevelComponent_TypeInfo->static_fields;
  static_fields->MAX_LEVEL_TEXT_COLOR = (struct System_String_o *)StringLiteral_16159/*"[ffff00]"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->MAX_LEVEL_TEXT_COLOR, v12, v14, v15, v16, v17, v18, v19);
}


void __fastcall EventInfoCommandAssistLevelComponent___ctor(
        EventInfoCommandAssistLevelComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall EventInfoCommandAssistLevelComponent__Awake(
        EventInfoCommandAssistLevelComponent_o *this,
        const MethodInfo *method)
{
  ;
}


EventInfoCommandAssistLevelComponent_AssistData_o *__fastcall EventInfoCommandAssistLevelComponent__GetAssistData(
        EventInfoCommandAssistLevelComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.assistData;
}


bool __fastcall EventInfoCommandAssistLevelComponent__IsReleasedNow(
        EventInfoCommandAssistLevelComponent_o *this,
        const MethodInfo *method)
{
  struct EventInfoCommandAssistLevelComponent_AssistData_o *assistData; // x8

  assistData = this->fields.assistData;
  if ( !assistData )
    sub_1BCAA3C(this, method);
  return assistData->fields.oldLv <= 0 && assistData->fields.lv > 0;
}


void __fastcall EventInfoCommandAssistLevelComponent__Setup(
        EventInfoCommandAssistLevelComponent_o *this,
        EventInfoCommandAssistLevelControl_o *control,
        EventInfoCommandAssistLevelComponent_AssistData_o *data,
        const MethodInfo *method)
{
  bool v7; // w0
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  __int64 v20; // x0
  __int64 v21; // x1
  const MethodInfo *v22; // x2
  struct EventInfoCommandAssistLevelComponent_AssistData_o *assistData; // x8
  const MethodInfo *v24; // x2
  struct EventInfoCommandAssistLevelComponent_AssistData_o *v25; // x8

  if ( (byte_4B16A0C & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, control, data);
    byte_4B16A0C = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, control);
  v7 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)control, 0LL, 0LL);
  if ( data && !v7 )
  {
    this->fields.commandAssistLevelControl = control;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.commandAssistLevelControl,
      (int64_t)control,
      v8,
      v9,
      v10,
      v11,
      v12,
      v13);
    this->fields.assistData = data;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.assistData, (int64_t)data, v14, v15, v16, v17, v18, v19);
    assistData = this->fields.assistData;
    if ( !assistData
      || (EventInfoCommandAssistLevelComponent__SetupIcon(this, assistData->fields.oldLv, v22),
          (v25 = this->fields.assistData) == 0LL) )
    {
      sub_1BCAA3C(v20, v21);
    }
    EventInfoCommandAssistLevelComponent__SetupLevel(this, v25->fields.oldLv, v24);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventInfoCommandAssistLevelComponent__SetupIcon(
        EventInfoCommandAssistLevelComponent_o *this,
        int32_t level,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  struct EventInfoCommandAssistLevelComponent_AssistData_o *assistData; // x8
  System_String_o *ICON_SPRITE_NAME_LOCK; // x20
  EventInfoCommandAssistLevelComponent_c *v9; // x0
  UISprite_o *skillIconSprite; // x19

  if ( (byte_4B16A0D & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, *(_QWORD *)&level, method);
    sub_1BCA7E0(&EventInfoCommandAssistLevelComponent_TypeInfo, v5, v6);
    byte_4B16A0D = 1;
  }
  if ( level >= 1 && (assistData = this->fields.assistData) != 0LL )
  {
    ICON_SPRITE_NAME_LOCK = System_Int32__ToString((int)assistData + 28, 0LL);
  }
  else
  {
    v9 = EventInfoCommandAssistLevelComponent_TypeInfo;
    if ( !EventInfoCommandAssistLevelComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventInfoCommandAssistLevelComponent_TypeInfo, *(_QWORD *)&level);
      v9 = EventInfoCommandAssistLevelComponent_TypeInfo;
    }
    ICON_SPRITE_NAME_LOCK = v9->static_fields->ICON_SPRITE_NAME_LOCK;
  }
  skillIconSprite = this->fields.skillIconSprite;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, *(_QWORD *)&level);
  AtlasManager__SetEventSprite(skillIconSprite, ICON_SPRITE_NAME_LOCK, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventInfoCommandAssistLevelComponent__SetupLevel(
        EventInfoCommandAssistLevelComponent_o *this,
        int32_t level,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  EventInfoCommandAssistLevelComponent_c *v11; // x0
  System_String_o **p_MAX_LEVEL_TEXT_COLOR; // x8
  UILabel_o *levelLabel; // x0
  System_String_o *v14; // x20
  UILabel_o *v15; // x19
  System_String_o *v16; // x21
  System_String_o *v17; // x0
  Il2CppObject *v18; // x0
  int32_t v19; // [xsp+Ch] [xbp-24h] BYREF

  v19 = level;
  if ( (byte_4B16A0E & 1) == 0 )
  {
    sub_1BCA7E0(&EventInfoCommandAssistLevelComponent_TypeInfo, *(_QWORD *)&level, method);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&StringLiteral_8362/*"LEVEL_INFO"*/, v7, v8);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v9, v10);
    byte_4B16A0E = 1;
  }
  if ( level < 1 )
  {
    levelLabel = this->fields.levelLabel;
    if ( levelLabel )
    {
      UILabel__set_text(levelLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
      return;
    }
LABEL_15:
    sub_1BCAA3C(levelLabel, *(_QWORD *)&level);
  }
  if ( level < 10 )
  {
    p_MAX_LEVEL_TEXT_COLOR = (System_String_o **)&StringLiteral_1/*""*/;
  }
  else
  {
    v11 = EventInfoCommandAssistLevelComponent_TypeInfo;
    if ( !EventInfoCommandAssistLevelComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventInfoCommandAssistLevelComponent_TypeInfo, *(_QWORD *)&level);
      v11 = EventInfoCommandAssistLevelComponent_TypeInfo;
    }
    p_MAX_LEVEL_TEXT_COLOR = &v11->static_fields->MAX_LEVEL_TEXT_COLOR;
  }
  v14 = *p_MAX_LEVEL_TEXT_COLOR;
  v15 = this->fields.levelLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&level);
  v16 = LocalizationManager__Get((System_String_o *)StringLiteral_8362/*"LEVEL_INFO"*/, 0LL);
  v17 = System_Int32__ToString((int32_t)&v19, 0LL);
  v18 = (Il2CppObject *)System_String__Concat_62401220(v14, v17, 0LL);
  levelLabel = (UILabel_o *)System_String__Format(v16, v18, 0LL);
  if ( !v15 )
    goto LABEL_15;
  UILabel__set_text(v15, (System_String_o *)levelLabel, 0LL);
}


void __fastcall EventInfoCommandAssistLevelComponent__UpdateDisp(
        EventInfoCommandAssistLevelComponent_o *this,
        System_Action_o *endAction,
        const MethodInfo *method)
{
  UnityEngine_Object_o *commandAssistLevelControl; // x21
  const MethodInfo *v6; // x2
  struct EventInfoCommandAssistLevelComponent_AssistData_o *assistData; // x8
  const MethodInfo *v8; // x2
  struct EventInfoCommandAssistLevelComponent_AssistData_o *v9; // x8
  int32_t lv; // w1

  if ( (byte_4B16A0F & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, endAction, method);
    byte_4B16A0F = 1;
  }
  commandAssistLevelControl = (UnityEngine_Object_o *)this->fields.commandAssistLevelControl;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, endAction);
  if ( !UnityEngine_Object__op_Equality(commandAssistLevelControl, 0LL, 0LL) )
  {
    assistData = this->fields.assistData;
    if ( assistData )
    {
      EventInfoCommandAssistLevelComponent__SetupIcon(this, assistData->fields.lv, v6);
      v9 = this->fields.assistData;
      if ( v9 )
      {
        lv = v9->fields.lv;
        v9->fields.oldLv = lv;
        EventInfoCommandAssistLevelComponent__SetupLevel(this, lv, v8);
      }
      ActionExtensions__Call(endAction, 0LL);
    }
  }
}


void __fastcall EventInfoCommandAssistLevelComponent__UpdateDispIcon(
        EventInfoCommandAssistLevelComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  struct EventInfoCommandAssistLevelComponent_AssistData_o *assistData; // x8

  assistData = this->fields.assistData;
  if ( assistData )
    EventInfoCommandAssistLevelComponent__SetupIcon(this, assistData->fields.lv, v2);
}


void __fastcall EventInfoCommandAssistLevelComponent__UpdateDispLevel(
        EventInfoCommandAssistLevelComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  struct EventInfoCommandAssistLevelComponent_AssistData_o *assistData; // x8
  int32_t lv; // w1

  assistData = this->fields.assistData;
  if ( assistData )
  {
    lv = assistData->fields.lv;
    assistData->fields.oldLv = lv;
    EventInfoCommandAssistLevelComponent__SetupLevel(this, lv, v2);
  }
}


void __fastcall EventInfoCommandAssistLevelComponent_AssistData___ctor(
        EventInfoCommandAssistLevelComponent_AssistData_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}