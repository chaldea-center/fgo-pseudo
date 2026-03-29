void EventInfoCommandAssistLevelComponent___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3
  System_String_o *v3; // x4
  int32_t v4; // w5
  int64_t v5; // x6
  System_String_o *v6; // x7
  int32_t v7; // w1
  struct EventInfoCommandAssistLevelComponent_StaticFields *static_fields; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7

  if ( (byte_4D30C72 & 1) == 0 )
  {
    sub_1C93AD4(&EventInfoCommandAssistLevelComponent_TypeInfo);
    sub_1C93AD4(&StringLiteral_17141/*"badge_lock"*/);
    sub_1C93AD4(&StringLiteral_16082/*"[ffff00]"*/);
    byte_4D30C72 = 1;
  }
  EventInfoCommandAssistLevelComponent_TypeInfo->static_fields->ICON_SPRITE_NAME_LOCK = (struct System_String_o *)StringLiteral_17141/*"badge_lock"*/;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)EventInfoCommandAssistLevelComponent_TypeInfo->static_fields,
    StringLiteral_17141/*"badge_lock"*/,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
  v7 = StringLiteral_16082/*"[ffff00]"*/;
  static_fields = EventInfoCommandAssistLevelComponent_TypeInfo->static_fields;
  static_fields->MAX_LEVEL_TEXT_COLOR = (struct System_String_o *)StringLiteral_16082/*"[ffff00]"*/;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&static_fields->MAX_LEVEL_TEXT_COLOR, v7, v9, v10, v11, v12, v13, v14);
}


void EventInfoCommandAssistLevelComponent___ctor(
        EventInfoCommandAssistLevelComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void EventInfoCommandAssistLevelComponent__Awake(
        EventInfoCommandAssistLevelComponent_o *this,
        const MethodInfo *method)
{
  ;
}


EventInfoCommandAssistLevelComponent_AssistData_o *EventInfoCommandAssistLevelComponent__GetAssistData(
        EventInfoCommandAssistLevelComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.assistData;
}


bool EventInfoCommandAssistLevelComponent__IsReleasedNow(
        EventInfoCommandAssistLevelComponent_o *this,
        const MethodInfo *method)
{
  struct EventInfoCommandAssistLevelComponent_AssistData_o *assistData; // x8

  assistData = this->fields.assistData;
  if ( !assistData )
    sub_1C93D2C(this, method);
  return assistData->fields.oldLv <= 0 && assistData->fields.lv > 0;
}


void EventInfoCommandAssistLevelComponent__Setup(
        EventInfoCommandAssistLevelComponent_o *this,
        EventInfoCommandAssistLevelControl_o *control,
        EventInfoCommandAssistLevelComponent_AssistData_o *data,
        const MethodInfo *method)
{
  bool v7; // w0
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  __int64 v20; // x0
  __int64 v21; // x1
  const MethodInfo *v22; // x2
  struct EventInfoCommandAssistLevelComponent_AssistData_o *assistData; // x8
  const MethodInfo *v24; // x2
  struct EventInfoCommandAssistLevelComponent_AssistData_o *v25; // x8

  if ( (byte_4D30C6E & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D30C6E = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v7 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)control, 0, 0);
  if ( data && !v7 )
  {
    this->fields.commandAssistLevelControl = control;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&this->fields.commandAssistLevelControl,
      (int32_t)control,
      v8,
      v9,
      v10,
      v11,
      v12,
      v13);
    this->fields.assistData = data;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.assistData, (int32_t)data, v14, v15, v16, v17, v18, v19);
    assistData = this->fields.assistData;
    if ( !assistData
      || (EventInfoCommandAssistLevelComponent__SetupIcon(this, assistData->fields.oldLv, v22),
          (v25 = this->fields.assistData) == 0) )
    {
      sub_1C93D2C(v20, v21);
    }
    EventInfoCommandAssistLevelComponent__SetupLevel(this, v25->fields.oldLv, v24);
  }
}


void EventInfoCommandAssistLevelComponent__SetupIcon(
        EventInfoCommandAssistLevelComponent_o *this,
        int32_t level,
        const MethodInfo *method)
{
  struct EventInfoCommandAssistLevelComponent_AssistData_o *assistData; // x8
  System_String_o *ICON_SPRITE_NAME_LOCK; // x20
  EventInfoCommandAssistLevelComponent_c *v7; // x0
  UISprite_o *skillIconSprite; // x19

  if ( (byte_4D30C6F & 1) == 0 )
  {
    sub_1C93AD4(&AtlasManager_TypeInfo);
    sub_1C93AD4(&EventInfoCommandAssistLevelComponent_TypeInfo);
    byte_4D30C6F = 1;
  }
  if ( level >= 1 && (assistData = this->fields.assistData) != 0 )
  {
    ICON_SPRITE_NAME_LOCK = System_Int32__ToString((int)assistData + 28, 0);
  }
  else
  {
    v7 = EventInfoCommandAssistLevelComponent_TypeInfo;
    if ( !EventInfoCommandAssistLevelComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventInfoCommandAssistLevelComponent_TypeInfo);
      v7 = EventInfoCommandAssistLevelComponent_TypeInfo;
    }
    ICON_SPRITE_NAME_LOCK = v7->static_fields->ICON_SPRITE_NAME_LOCK;
  }
  skillIconSprite = this->fields.skillIconSprite;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventSprite(skillIconSprite, ICON_SPRITE_NAME_LOCK, 0);
}


// local variable allocation has failed, the output may be wrong!
void EventInfoCommandAssistLevelComponent__SetupLevel(
        EventInfoCommandAssistLevelComponent_o *this,
        int32_t level,
        const MethodInfo *method)
{
  EventInfoCommandAssistLevelComponent_c *v5; // x0
  System_String_o **p_MAX_LEVEL_TEXT_COLOR; // x8
  UILabel_o *levelLabel; // x0
  System_String_o *v8; // x20
  UILabel_o *v9; // x19
  System_String_o *v10; // x21
  System_String_o *v11; // x0
  Il2CppObject *v12; // x0
  int32_t v13; // [xsp+Ch] [xbp-24h] BYREF

  v13 = level;
  if ( (byte_4D30C70 & 1) == 0 )
  {
    sub_1C93AD4(&EventInfoCommandAssistLevelComponent_TypeInfo);
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&StringLiteral_8311/*"LEVEL_INFO"*/);
    sub_1C93AD4(&StringLiteral_1/*""*/);
    byte_4D30C70 = 1;
  }
  if ( level < 1 )
  {
    levelLabel = this->fields.levelLabel;
    if ( levelLabel )
    {
      UILabel__set_text(levelLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
      return;
    }
LABEL_15:
    sub_1C93D2C(levelLabel, *(_QWORD *)&level);
  }
  if ( level < 10 )
  {
    p_MAX_LEVEL_TEXT_COLOR = (System_String_o **)&StringLiteral_1/*""*/;
  }
  else
  {
    v5 = EventInfoCommandAssistLevelComponent_TypeInfo;
    if ( !EventInfoCommandAssistLevelComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventInfoCommandAssistLevelComponent_TypeInfo);
      v5 = EventInfoCommandAssistLevelComponent_TypeInfo;
    }
    p_MAX_LEVEL_TEXT_COLOR = &v5->static_fields->MAX_LEVEL_TEXT_COLOR;
  }
  v8 = *p_MAX_LEVEL_TEXT_COLOR;
  v9 = this->fields.levelLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v10 = LocalizationManager__Get((System_String_o *)StringLiteral_8311/*"LEVEL_INFO"*/, 0);
  v11 = System_Int32__ToString((int32_t)&v13, 0);
  v12 = (Il2CppObject *)System_String__Concat_64425724(v8, v11, 0);
  levelLabel = (UILabel_o *)System_String__Format(v10, v12, 0);
  if ( !v9 )
    goto LABEL_15;
  UILabel__set_text(v9, (System_String_o *)levelLabel, 0);
}


void EventInfoCommandAssistLevelComponent__UpdateDisp(
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

  if ( (byte_4D30C71 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D30C71 = 1;
  }
  commandAssistLevelControl = (UnityEngine_Object_o *)this->fields.commandAssistLevelControl;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(commandAssistLevelControl, 0, 0) )
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
      ActionExtensions__Call(endAction, 0);
    }
  }
}


void EventInfoCommandAssistLevelComponent__UpdateDispIcon(
        EventInfoCommandAssistLevelComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  struct EventInfoCommandAssistLevelComponent_AssistData_o *assistData; // x8

  assistData = this->fields.assistData;
  if ( assistData )
    EventInfoCommandAssistLevelComponent__SetupIcon(this, assistData->fields.lv, v2);
}


void EventInfoCommandAssistLevelComponent__UpdateDispLevel(
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


void EventInfoCommandAssistLevelComponent_AssistData___ctor(
        EventInfoCommandAssistLevelComponent_AssistData_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}