void __fastcall EventInfoCommandAssistLevelComponent___cctor(const MethodInfo *method)
{
  int v1; // w1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v15; // x1
  struct EventInfoCommandAssistLevelComponent_StaticFields *v16; // x0
  System_Int32_array **v17; // x1
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7

  if ( (byte_42E9497 & 1) == 0 )
  {
    sub_B5D5C4(&EventInfoCommandAssistLevelComponent_TypeInfo, v1, (_DWORD)v2, v3);
    sub_B5D5C4(&StringLiteral_16795/*"badge_lock"*/, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_15986/*"[ffff00]"*/, v11, v12, v13);
    byte_42E9497 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)EventInfoCommandAssistLevelComponent_TypeInfo->static_fields;
  v15 = (System_Int32_array **)StringLiteral_16795/*"badge_lock"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_16795/*"badge_lock"*/;
  sub_B5D560(static_fields, v15, v2, v3, v4, v5, v6, v7);
  v16 = EventInfoCommandAssistLevelComponent_TypeInfo->static_fields;
  v17 = (System_Int32_array **)StringLiteral_15986/*"[ffff00]"*/;
  v16->MAX_LEVEL_TEXT_COLOR = (struct System_String_o *)StringLiteral_15986/*"[ffff00]"*/;
  sub_B5D560((BattleServantConfConponent_o *)&v16->MAX_LEVEL_TEXT_COLOR, v17, v18, v19, v20, v21, v22, v23);
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
    sub_B5D69C(this, method);
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

  if ( (byte_42E9493 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)control, (_DWORD)data, method);
    byte_42E9493 = 1;
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
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.commandAssistLevelControl,
      (System_Int32_array **)control,
      v8,
      v9,
      v10,
      v11,
      v12,
      v13);
    this->fields.assistData = data;
    sub_B5D560(
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
      sub_B5D69C(v20, v21);
    }
    EventInfoCommandAssistLevelComponent__SetupLevel(this, v25->fields.oldLv, v24);
  }
}


void __fastcall EventInfoCommandAssistLevelComponent__SetupIcon(
        EventInfoCommandAssistLevelComponent_o *this,
        int32_t level,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  struct EventInfoCommandAssistLevelComponent_AssistData_o *assistData; // x8
  System_String_o *ICON_SPRITE_NAME_LOCK; // x20
  EventInfoCommandAssistLevelComponent_c *v11; // x0
  UISprite_o *skillIconSprite; // x19

  if ( (byte_42E9494 & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManager_TypeInfo, level, (_DWORD)method, v3);
    sub_B5D5C4(&EventInfoCommandAssistLevelComponent_TypeInfo, v6, v7, v8);
    byte_42E9494 = 1;
  }
  if ( level >= 1 && (assistData = this->fields.assistData) != 0LL )
  {
    ICON_SPRITE_NAME_LOCK = System_Int32__ToString((int)assistData + 28, 0LL);
  }
  else
  {
    v11 = EventInfoCommandAssistLevelComponent_TypeInfo;
    if ( (BYTE3(EventInfoCommandAssistLevelComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EventInfoCommandAssistLevelComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventInfoCommandAssistLevelComponent_TypeInfo);
      v11 = EventInfoCommandAssistLevelComponent_TypeInfo;
    }
    ICON_SPRITE_NAME_LOCK = v11->static_fields->ICON_SPRITE_NAME_LOCK;
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
  EventInfoCommandAssistLevelComponent_c *v15; // x0
  System_String_o **p_MAX_LEVEL_TEXT_COLOR; // x8
  UILabel_o *levelLabel; // x0
  System_String_o *v18; // x20
  UILabel_o *v19; // x19
  System_String_o *v20; // x21
  System_String_o *v21; // x0
  Il2CppObject *v22; // x0
  int32_t v23; // [xsp+Ch] [xbp-14h] BYREF

  v23 = level;
  if ( (byte_42E9495 & 1) == 0 )
  {
    sub_B5D5C4(&EventInfoCommandAssistLevelComponent_TypeInfo, level, (_DWORD)method, v3);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&StringLiteral_8461/*"LEVEL_INFO"*/, v9, v10, v11);
    sub_B5D5C4(&StringLiteral_1/*""*/, v12, v13, v14);
    byte_42E9495 = 1;
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
    sub_B5D69C(levelLabel, *(_QWORD *)&level);
  }
  if ( level < 10 )
  {
    p_MAX_LEVEL_TEXT_COLOR = (System_String_o **)&StringLiteral_1/*""*/;
  }
  else
  {
    v15 = EventInfoCommandAssistLevelComponent_TypeInfo;
    if ( (BYTE3(EventInfoCommandAssistLevelComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EventInfoCommandAssistLevelComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventInfoCommandAssistLevelComponent_TypeInfo);
      v15 = EventInfoCommandAssistLevelComponent_TypeInfo;
    }
    p_MAX_LEVEL_TEXT_COLOR = &v15->static_fields->MAX_LEVEL_TEXT_COLOR;
  }
  v18 = *p_MAX_LEVEL_TEXT_COLOR;
  v19 = this->fields.levelLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v20 = LocalizationManager__Get((System_String_o *)StringLiteral_8461/*"LEVEL_INFO"*/, 0LL);
  v21 = System_Int32__ToString((int32_t)&v23, 0LL);
  v22 = (Il2CppObject *)System_String__Concat_44577788(v18, v21, 0LL);
  levelLabel = (UILabel_o *)System_String__Format(v20, v22, 0LL);
  if ( !v19 )
    goto LABEL_17;
  UILabel__set_text(v19, (System_String_o *)levelLabel, 0LL);
}


void __fastcall EventInfoCommandAssistLevelComponent__UpdateDisp(
        EventInfoCommandAssistLevelComponent_o *this,
        System_Action_o *endAction,
        const MethodInfo *method)
{
  __int64 v3; // x3
  UnityEngine_Object_o *commandAssistLevelControl; // x21
  const MethodInfo *v7; // x2
  struct EventInfoCommandAssistLevelComponent_AssistData_o *assistData; // x8
  const MethodInfo *v9; // x1

  if ( (byte_42E9496 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)endAction, (_DWORD)method, v3);
    byte_42E9496 = 1;
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
      EventInfoCommandAssistLevelComponent__SetupIcon(this, assistData->fields.lv, v7);
      EventInfoCommandAssistLevelComponent__UpdateDispLevel(this, v9);
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
      sub_B5D69C(this, method);
    EventInfoCommandAssistLevelComponent__SetupLevel(this, v4->fields.lv, v2);
  }
}


void __fastcall EventInfoCommandAssistLevelComponent_AssistData___ctor(
        EventInfoCommandAssistLevelComponent_AssistData_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}