void __fastcall EventInfoCommandAssistLevelComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  __int64 v4; // x1
  __int64 v5; // x1
  int32_t v6; // w1
  struct EventInfoCommandAssistLevelComponent_StaticFields *static_fields; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_4B1C966 & 1) == 0 )
  {
    sub_1BCAFF8(&EventInfoCommandAssistLevelComponent_TypeInfo, v1);
    sub_1BCAFF8(&StringLiteral_16880/*"badge_lock"*/, v4);
    sub_1BCAFF8(&StringLiteral_15849/*"[ffff00]"*/, v5);
    byte_4B1C966 = 1;
  }
  EventInfoCommandAssistLevelComponent_TypeInfo->static_fields->ICON_SPRITE_NAME_LOCK = (struct System_String_o *)StringLiteral_16880/*"badge_lock"*/;
  sub_1BCAF9C(
    (CGThumbnailListItem_o *)EventInfoCommandAssistLevelComponent_TypeInfo->static_fields,
    StringLiteral_16880/*"badge_lock"*/,
    v2,
    v3);
  v6 = StringLiteral_15849/*"[ffff00]"*/;
  static_fields = EventInfoCommandAssistLevelComponent_TypeInfo->static_fields;
  static_fields->MAX_LEVEL_TEXT_COLOR = (struct System_String_o *)StringLiteral_15849/*"[ffff00]"*/;
  sub_1BCAF9C((CGThumbnailListItem_o *)&static_fields->MAX_LEVEL_TEXT_COLOR, v6, v8, v9);
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
    sub_1BCB254(this, method);
  return assistData->fields.oldLv <= 0 && assistData->fields.lv > 0;
}


void __fastcall EventInfoCommandAssistLevelComponent__Setup(
        EventInfoCommandAssistLevelComponent_o *this,
        EventInfoCommandAssistLevelControl_o *control,
        EventInfoCommandAssistLevelComponent_AssistData_o *data,
        const MethodInfo *method)
{
  bool v7; // w0
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  __int64 v12; // x0
  __int64 v13; // x1
  const MethodInfo *v14; // x2
  struct EventInfoCommandAssistLevelComponent_AssistData_o *assistData; // x8
  const MethodInfo *v16; // x2
  struct EventInfoCommandAssistLevelComponent_AssistData_o *v17; // x8

  if ( (byte_4B1C962 & 1) == 0 )
  {
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, control);
    byte_4B1C962 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v7 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)control, 0LL, 0LL);
  if ( data && !v7 )
  {
    this->fields.commandAssistLevelControl = control;
    sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.commandAssistLevelControl, (int32_t)control, v8, v9);
    this->fields.assistData = data;
    sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.assistData, (int32_t)data, v10, v11);
    assistData = this->fields.assistData;
    if ( !assistData
      || (EventInfoCommandAssistLevelComponent__SetupIcon(this, assistData->fields.oldLv, v14),
          (v17 = this->fields.assistData) == 0LL) )
    {
      sub_1BCB254(v12, v13);
    }
    EventInfoCommandAssistLevelComponent__SetupLevel(this, v17->fields.oldLv, v16);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventInfoCommandAssistLevelComponent__SetupIcon(
        EventInfoCommandAssistLevelComponent_o *this,
        int32_t level,
        const MethodInfo *method)
{
  __int64 v5; // x1
  struct EventInfoCommandAssistLevelComponent_AssistData_o *assistData; // x8
  System_String_o *ICON_SPRITE_NAME_LOCK; // x20
  EventInfoCommandAssistLevelComponent_c *v8; // x0
  UISprite_o *skillIconSprite; // x19

  if ( (byte_4B1C963 & 1) == 0 )
  {
    sub_1BCAFF8(&AtlasManager_TypeInfo, *(_QWORD *)&level);
    sub_1BCAFF8(&EventInfoCommandAssistLevelComponent_TypeInfo, v5);
    byte_4B1C963 = 1;
  }
  if ( level >= 1 && (assistData = this->fields.assistData) != 0LL )
  {
    ICON_SPRITE_NAME_LOCK = System_Int32__ToString((int)assistData + 28, 0LL);
  }
  else
  {
    v8 = EventInfoCommandAssistLevelComponent_TypeInfo;
    if ( !EventInfoCommandAssistLevelComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventInfoCommandAssistLevelComponent_TypeInfo);
      v8 = EventInfoCommandAssistLevelComponent_TypeInfo;
    }
    ICON_SPRITE_NAME_LOCK = v8->static_fields->ICON_SPRITE_NAME_LOCK;
  }
  skillIconSprite = this->fields.skillIconSprite;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventSprite(skillIconSprite, ICON_SPRITE_NAME_LOCK, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventInfoCommandAssistLevelComponent__SetupLevel(
        EventInfoCommandAssistLevelComponent_o *this,
        int32_t level,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  EventInfoCommandAssistLevelComponent_c *v8; // x0
  System_String_o **p_MAX_LEVEL_TEXT_COLOR; // x8
  UILabel_o *levelLabel; // x0
  System_String_o *v11; // x20
  UILabel_o *v12; // x19
  System_String_o *v13; // x21
  System_String_o *v14; // x0
  Il2CppObject *v15; // x0
  int32_t v16; // [xsp+Ch] [xbp-24h] BYREF

  v16 = level;
  if ( (byte_4B1C964 & 1) == 0 )
  {
    sub_1BCAFF8(&EventInfoCommandAssistLevelComponent_TypeInfo, *(_QWORD *)&level);
    sub_1BCAFF8(&LocalizationManager_TypeInfo, v5);
    sub_1BCAFF8(&StringLiteral_8193/*"LEVEL_INFO"*/, v6);
    sub_1BCAFF8(&StringLiteral_1/*""*/, v7);
    byte_4B1C964 = 1;
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
    sub_1BCB254(levelLabel, *(_QWORD *)&level);
  }
  if ( level < 10 )
  {
    p_MAX_LEVEL_TEXT_COLOR = (System_String_o **)&StringLiteral_1/*""*/;
  }
  else
  {
    v8 = EventInfoCommandAssistLevelComponent_TypeInfo;
    if ( !EventInfoCommandAssistLevelComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventInfoCommandAssistLevelComponent_TypeInfo);
      v8 = EventInfoCommandAssistLevelComponent_TypeInfo;
    }
    p_MAX_LEVEL_TEXT_COLOR = &v8->static_fields->MAX_LEVEL_TEXT_COLOR;
  }
  v11 = *p_MAX_LEVEL_TEXT_COLOR;
  v12 = this->fields.levelLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v13 = LocalizationManager__Get((System_String_o *)StringLiteral_8193/*"LEVEL_INFO"*/, 0LL);
  v14 = System_Int32__ToString((int32_t)&v16, 0LL);
  v15 = (Il2CppObject *)System_String__Concat_62450424(v11, v14, 0LL);
  levelLabel = (UILabel_o *)System_String__Format(v13, v15, 0LL);
  if ( !v12 )
    goto LABEL_15;
  UILabel__set_text(v12, (System_String_o *)levelLabel, 0LL);
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

  if ( (byte_4B1C965 & 1) == 0 )
  {
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, endAction);
    byte_4B1C965 = 1;
  }
  commandAssistLevelControl = (UnityEngine_Object_o *)this->fields.commandAssistLevelControl;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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