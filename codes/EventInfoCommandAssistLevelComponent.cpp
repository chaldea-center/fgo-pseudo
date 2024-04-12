void __fastcall EventInfoCommandAssistLevelComponent___cctor(const MethodInfo *method)
{
  System_String_array **v1; // x2
  System_String_array **v2; // x3
  System_Boolean_array **v3; // x4
  System_Int32_array **v4; // x5
  System_Int32_array *v5; // x6
  System_Int32_array *v6; // x7
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v8; // x1
  struct EventInfoCommandAssistLevelComponent_StaticFields *v9; // x0
  System_Int32_array **v10; // x1
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7

  if ( (byte_42B0DA6 & 1) == 0 )
  {
    sub_B52984(&EventInfoCommandAssistLevelComponent_TypeInfo);
    sub_B52984(&StringLiteral_16710/*"badge_lock"*/);
    sub_B52984(&StringLiteral_15901/*"[ffff00]"*/);
    byte_42B0DA6 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)EventInfoCommandAssistLevelComponent_TypeInfo->static_fields;
  v8 = (System_Int32_array **)StringLiteral_16710/*"badge_lock"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_16710/*"badge_lock"*/;
  sub_B52920(static_fields, v8, v1, v2, v3, v4, v5, v6);
  v9 = EventInfoCommandAssistLevelComponent_TypeInfo->static_fields;
  v10 = (System_Int32_array **)StringLiteral_15901/*"[ffff00]"*/;
  v9->MAX_LEVEL_TEXT_COLOR = (struct System_String_o *)StringLiteral_15901/*"[ffff00]"*/;
  sub_B52920((BattleServantConfConponent_o *)&v9->MAX_LEVEL_TEXT_COLOR, v10, v11, v12, v13, v14, v15, v16);
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
    sub_B52A5C(this, method);
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
  __int64 v21; // x1
  const MethodInfo *v22; // x2
  struct EventInfoCommandAssistLevelComponent_AssistData_o *assistData; // x8
  const MethodInfo *v24; // x2
  struct EventInfoCommandAssistLevelComponent_AssistData_o *v25; // x8

  if ( (byte_42B0DA2 & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B0DA2 = 1;
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
    sub_B52920(
      (BattleServantConfConponent_o *)&this->fields.commandAssistLevelControl,
      (System_Int32_array **)control,
      v8,
      v9,
      v10,
      v11,
      v12,
      v13);
    this->fields.assistData = data;
    sub_B52920(
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
      || (EventInfoCommandAssistLevelComponent__SetupIcon(this, assistData->fields.oldLv, v22),
          (v25 = this->fields.assistData) == 0LL) )
    {
      sub_B52A5C(v20, v21);
    }
    EventInfoCommandAssistLevelComponent__SetupLevel(this, v25->fields.oldLv, v24);
  }
}


void __fastcall EventInfoCommandAssistLevelComponent__SetupIcon(
        EventInfoCommandAssistLevelComponent_o *this,
        int32_t level,
        const MethodInfo *method)
{
  struct EventInfoCommandAssistLevelComponent_AssistData_o *assistData; // x8
  System_String_o *ICON_SPRITE_NAME_LOCK; // x20
  EventInfoCommandAssistLevelComponent_c *v7; // x0
  UISprite_o *skillIconSprite; // x19

  if ( (byte_42B0DA3 & 1) == 0 )
  {
    sub_B52984(&AtlasManager_TypeInfo);
    sub_B52984(&EventInfoCommandAssistLevelComponent_TypeInfo);
    byte_42B0DA3 = 1;
  }
  if ( level >= 1 && (assistData = this->fields.assistData) != 0LL )
  {
    ICON_SPRITE_NAME_LOCK = System_Int32__ToString((int)assistData + 28, 0LL);
  }
  else
  {
    v7 = EventInfoCommandAssistLevelComponent_TypeInfo;
    if ( (BYTE3(EventInfoCommandAssistLevelComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EventInfoCommandAssistLevelComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventInfoCommandAssistLevelComponent_TypeInfo);
      v7 = EventInfoCommandAssistLevelComponent_TypeInfo;
    }
    ICON_SPRITE_NAME_LOCK = v7->static_fields->ICON_SPRITE_NAME_LOCK;
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
  EventInfoCommandAssistLevelComponent_c *v5; // x0
  System_String_o **p_MAX_LEVEL_TEXT_COLOR; // x8
  UILabel_o *levelLabel; // x0
  System_String_o *v8; // x20
  UILabel_o *v9; // x19
  System_String_o *v10; // x21
  System_String_o *v11; // x0
  Il2CppObject *v12; // x0
  int32_t v13; // [xsp+Ch] [xbp-14h] BYREF

  v13 = level;
  if ( (byte_42B0DA4 & 1) == 0 )
  {
    sub_B52984(&EventInfoCommandAssistLevelComponent_TypeInfo);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&StringLiteral_8424/*"LEVEL_INFO"*/);
    sub_B52984(&StringLiteral_1/*""*/);
    byte_42B0DA4 = 1;
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
    sub_B52A5C(levelLabel, *(_QWORD *)&level);
  }
  if ( level < 10 )
  {
    p_MAX_LEVEL_TEXT_COLOR = (System_String_o **)&StringLiteral_1/*""*/;
  }
  else
  {
    v5 = EventInfoCommandAssistLevelComponent_TypeInfo;
    if ( (BYTE3(EventInfoCommandAssistLevelComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EventInfoCommandAssistLevelComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventInfoCommandAssistLevelComponent_TypeInfo);
      v5 = EventInfoCommandAssistLevelComponent_TypeInfo;
    }
    p_MAX_LEVEL_TEXT_COLOR = &v5->static_fields->MAX_LEVEL_TEXT_COLOR;
  }
  v8 = *p_MAX_LEVEL_TEXT_COLOR;
  v9 = this->fields.levelLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v10 = LocalizationManager__Get((System_String_o *)StringLiteral_8424/*"LEVEL_INFO"*/, 0LL);
  v11 = System_Int32__ToString((int32_t)&v13, 0LL);
  v12 = (Il2CppObject *)System_String__Concat_44568316(v8, v11, 0LL);
  levelLabel = (UILabel_o *)System_String__Format(v10, v12, 0LL);
  if ( !v9 )
    goto LABEL_17;
  UILabel__set_text(v9, (System_String_o *)levelLabel, 0LL);
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

  if ( (byte_42B0DA5 & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B0DA5 = 1;
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
      sub_B52A5C(this, method);
    EventInfoCommandAssistLevelComponent__SetupLevel(this, v4->fields.lv, v2);
  }
}


void __fastcall EventInfoCommandAssistLevelComponent_AssistData___ctor(
        EventInfoCommandAssistLevelComponent_AssistData_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}