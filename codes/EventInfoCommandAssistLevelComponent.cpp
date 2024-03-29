void __fastcall EventInfoCommandAssistLevelComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v8; // x1
  __int64 v9; // x1
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v11; // x1
  struct EventInfoCommandAssistLevelComponent_StaticFields *v12; // x0
  System_Int32_array **v13; // x1
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7

  if ( (byte_421557B & 1) == 0 )
  {
    sub_B0D8A4(&EventInfoCommandAssistLevelComponent_TypeInfo, v1);
    sub_B0D8A4(&StringLiteral_16644/*"badge_lock"*/, v8);
    sub_B0D8A4(&StringLiteral_15842/*"[ffff00]"*/, v9);
    byte_421557B = 1;
  }
  static_fields = (BattleServantConfConponent_o *)EventInfoCommandAssistLevelComponent_TypeInfo->static_fields;
  v11 = (System_Int32_array **)StringLiteral_16644/*"badge_lock"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_16644/*"badge_lock"*/;
  sub_B0D840(static_fields, v11, v2, v3, v4, v5, v6, v7);
  v12 = EventInfoCommandAssistLevelComponent_TypeInfo->static_fields;
  v13 = (System_Int32_array **)StringLiteral_15842/*"[ffff00]"*/;
  v12->MAX_LEVEL_TEXT_COLOR = (struct System_String_o *)StringLiteral_15842/*"[ffff00]"*/;
  sub_B0D840((BattleServantConfConponent_o *)&v12->MAX_LEVEL_TEXT_COLOR, v13, v14, v15, v16, v17, v18, v19);
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
    sub_B0D97C(this);
  return assistData->fields.oldLv <= 0 && assistData->fields.lv > 0;
}


void __fastcall EventInfoCommandAssistLevelComponent__Setup(
        EventInfoCommandAssistLevelComponent_o *this,
        EventInfoCommandAssistLevelControl_o *control,
        EventInfoCommandAssistLevelComponent_AssistData_o *data,
        const MethodInfo *method)
{
  bool v7; // w0
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  __int64 v20; // x0
  const MethodInfo *v21; // x2
  struct EventInfoCommandAssistLevelComponent_AssistData_o *assistData; // x8
  const MethodInfo *v23; // x2
  struct EventInfoCommandAssistLevelComponent_AssistData_o *v24; // x8

  if ( (byte_4215577 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, control);
    byte_4215577 = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v7 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)control, 0LL, 0LL);
  if ( data && !v7 )
  {
    this->fields.commandAssistLevelControl = control;
    sub_B0D840(
      (BattleServantConfConponent_o *)&this->fields.commandAssistLevelControl,
      (System_Int32_array **)control,
      v8,
      v9,
      v10,
      v11,
      v12,
      v13);
    this->fields.assistData = data;
    sub_B0D840(
      (BattleServantConfConponent_o *)&this->fields.assistData,
      (System_Int32_array **)data,
      v14,
      v15,
      v16,
      v17,
      v18,
      v19);
    assistData = this->fields.assistData;
    if ( !assistData
      || (EventInfoCommandAssistLevelComponent__SetupIcon(this, assistData->fields.oldLv, v21),
          (v24 = this->fields.assistData) == 0LL) )
    {
      sub_B0D97C(v20);
    }
    EventInfoCommandAssistLevelComponent__SetupLevel(this, v24->fields.oldLv, v23);
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

  if ( (byte_4215578 & 1) == 0 )
  {
    sub_B0D8A4(&AtlasManager_TypeInfo, *(_QWORD *)&level);
    sub_B0D8A4(&EventInfoCommandAssistLevelComponent_TypeInfo, v5);
    byte_4215578 = 1;
  }
  if ( level >= 1 && (assistData = this->fields.assistData) != 0LL )
  {
    ICON_SPRITE_NAME_LOCK = System_Int32__ToString((int)assistData + 28, 0LL);
  }
  else
  {
    v8 = EventInfoCommandAssistLevelComponent_TypeInfo;
    if ( (BYTE3(EventInfoCommandAssistLevelComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EventInfoCommandAssistLevelComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventInfoCommandAssistLevelComponent_TypeInfo);
      v8 = EventInfoCommandAssistLevelComponent_TypeInfo;
    }
    ICON_SPRITE_NAME_LOCK = v8->static_fields->ICON_SPRITE_NAME_LOCK;
  }
  skillIconSprite = this->fields.skillIconSprite;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
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
  int32_t v16; // [xsp+Ch] [xbp-14h] BYREF

  v16 = level;
  if ( (byte_4215579 & 1) == 0 )
  {
    sub_B0D8A4(&EventInfoCommandAssistLevelComponent_TypeInfo, *(_QWORD *)&level);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v5);
    sub_B0D8A4(&StringLiteral_8398/*"LEVEL_INFO"*/, v6);
    sub_B0D8A4(&StringLiteral_1/*""*/, v7);
    byte_4215579 = 1;
  }
  if ( level < 1 )
  {
    levelLabel = this->fields.levelLabel;
    if ( levelLabel )
    {
      UILabel__set_text(levelLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
      return;
    }
LABEL_17:
    sub_B0D97C(levelLabel);
  }
  if ( level < 10 )
  {
    p_MAX_LEVEL_TEXT_COLOR = (System_String_o **)&StringLiteral_1/*""*/;
  }
  else
  {
    v8 = EventInfoCommandAssistLevelComponent_TypeInfo;
    if ( (BYTE3(EventInfoCommandAssistLevelComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EventInfoCommandAssistLevelComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventInfoCommandAssistLevelComponent_TypeInfo);
      v8 = EventInfoCommandAssistLevelComponent_TypeInfo;
    }
    p_MAX_LEVEL_TEXT_COLOR = &v8->static_fields->MAX_LEVEL_TEXT_COLOR;
  }
  v11 = *p_MAX_LEVEL_TEXT_COLOR;
  v12 = this->fields.levelLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v13 = LocalizationManager__Get((System_String_o *)StringLiteral_8398/*"LEVEL_INFO"*/, 0LL);
  v14 = System_Int32__ToString((int32_t)&v16, 0LL);
  v15 = (Il2CppObject *)System_String__Concat_43849904(v11, v14, 0LL);
  levelLabel = (UILabel_o *)System_String__Format(v13, v15, 0LL);
  if ( !v12 )
    goto LABEL_17;
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
  const MethodInfo *v8; // x1

  if ( (byte_421557A & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, endAction);
    byte_421557A = 1;
  }
  commandAssistLevelControl = (UnityEngine_Object_o *)this->fields.commandAssistLevelControl;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(commandAssistLevelControl, 0LL, 0LL) )
  {
    assistData = this->fields.assistData;
    if ( assistData )
    {
      EventInfoCommandAssistLevelComponent__SetupIcon(this, assistData->fields.lv, v6);
      EventInfoCommandAssistLevelComponent__UpdateDispLevel(this, v8);
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
  struct EventInfoCommandAssistLevelComponent_AssistData_o *v4; // x8

  assistData = this->fields.assistData;
  if ( assistData )
  {
    assistData->fields.oldLv = assistData->fields.lv;
    v4 = this->fields.assistData;
    if ( !v4 )
      sub_B0D97C(this);
    EventInfoCommandAssistLevelComponent__SetupLevel(this, v4->fields.lv, v2);
  }
}


void __fastcall EventInfoCommandAssistLevelComponent_AssistData___ctor(
        EventInfoCommandAssistLevelComponent_AssistData_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}