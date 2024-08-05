void __fastcall SetSmoothnessControl___ctor(SetSmoothnessControl_o *this, const MethodInfo *method)
{
  GameOptionContentBase___ctor((GameOptionContentBase_o *)this, 0LL);
}


void __fastcall SetSmoothnessControl__Awake(SetSmoothnessControl_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall SetSmoothnessControl__Init(SetSmoothnessControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  UISprite_o *titleSptite; // x20
  UILabel_o *attentionLabel; // x20
  System_String_o *fpsRadioButtonGroup; // x0
  __int64 v15; // x1
  System_String_array *v16; // x20
  GameOptionRadioButtonGroup_o *v17; // x20
  struct GameOptionRadioButtonGroup_o *v18; // x20
  System_Action_int__o *v19; // x21

  if ( (byte_49F9B63 & 1) == 0 )
  {
    sub_1B64870(&System_Action_int__TypeInfo, method);
    sub_1B64870(&AtlasManager_TypeInfo, v3);
    sub_1B64870(&LocalizationManager_TypeInfo, v4);
    sub_1B64870(&OptionManager_TypeInfo, v5);
    sub_1B64870(&Method_SetSmoothnessControl__Init_b__5_0__, v6);
    sub_1B64870(&string___TypeInfo, v7);
    sub_1B64870(&StringLiteral_9659/*"OPTION_SMOOTHNESS_BUTTON_2"*/, v8);
    sub_1B64870(&StringLiteral_9658/*"OPTION_SMOOTHNESS_BUTTON_1"*/, v9);
    sub_1B64870(&StringLiteral_9657/*"OPTION_SMOOTHNESS_ATTENTION"*/, v10);
    sub_1B64870(&StringLiteral_20464/*"img_txt_framerate"*/, v11);
    byte_49F9B63 = 1;
  }
  this->fields.isHighQuality = 0;
  titleSptite = this->fields.titleSptite;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetMyRoomImage(titleSptite, (System_String_o *)StringLiteral_20464/*"img_txt_framerate"*/, 0LL);
  attentionLabel = this->fields.attentionLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  fpsRadioButtonGroup = LocalizationManager__Get((System_String_o *)StringLiteral_9657/*"OPTION_SMOOTHNESS_ATTENTION"*/, 0LL);
  if ( !attentionLabel )
    goto LABEL_18;
  UILabel__set_text(attentionLabel, fpsRadioButtonGroup, 0LL);
  v16 = (System_String_array *)sub_1B64918(string___TypeInfo, 2LL);
  fpsRadioButtonGroup = LocalizationManager__Get((System_String_o *)StringLiteral_9658/*"OPTION_SMOOTHNESS_BUTTON_1"*/, 0LL);
  if ( !v16 )
    goto LABEL_18;
  if ( !v16->max_length
    || (v16->m_Items[0] = fpsRadioButtonGroup,
        sub_1B64814(v16->m_Items),
        fpsRadioButtonGroup = LocalizationManager__Get((System_String_o *)StringLiteral_9659/*"OPTION_SMOOTHNESS_BUTTON_2"*/, 0LL),
        v16->max_length <= 1) )
  {
    sub_1B64AD4(fpsRadioButtonGroup, v15);
  }
  v16->m_Items[1] = fpsRadioButtonGroup;
  sub_1B64814(&v16->m_Items[1]);
  fpsRadioButtonGroup = (System_String_o *)this->fields.fpsRadioButtonGroup;
  if ( !fpsRadioButtonGroup )
    goto LABEL_18;
  GameOptionRadioButtonGroup__Init((GameOptionRadioButtonGroup_o *)fpsRadioButtonGroup, 0LL);
  fpsRadioButtonGroup = (System_String_o *)this->fields.fpsRadioButtonGroup;
  if ( !fpsRadioButtonGroup )
    goto LABEL_18;
  GameOptionRadioButtonGroup__SetLabels((GameOptionRadioButtonGroup_o *)fpsRadioButtonGroup, v16, 0LL);
  v17 = this->fields.fpsRadioButtonGroup;
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  fpsRadioButtonGroup = (System_String_o *)OptionManager__IsBattleFpsHigh(0LL);
  if ( !v17
    || (GameOptionRadioButtonGroup__SelectButtonByIndex(v17, (unsigned __int8)fpsRadioButtonGroup & 1, 1, 0LL),
        v18 = this->fields.fpsRadioButtonGroup,
        v19 = (System_Action_int__o *)sub_1B64ABC(System_Action_int__TypeInfo),
        System_Action_int____ctor(v19, (Il2CppObject *)this, (intptr_t)Method_SetSmoothnessControl__Init_b__5_0__, 0LL),
        !v18) )
  {
LABEL_18:
    sub_1B64ACC(fpsRadioButtonGroup, v15);
  }
  v18->fields.selectedCallback = v19;
  sub_1B64814(&v18->fields.selectedCallback);
}


void __fastcall SetSmoothnessControl__Reflection(SetSmoothnessControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_Nullable_bool__o v5; // w19
  _BOOL4 hasValue; // t1
  bool Value; // w19
  System_Nullable_bool__o v8; // 0:w0.2

  if ( (byte_49F9B64 & 1) == 0 )
  {
    sub_1B64870(&Method_System_Nullable_bool__get_HasValue__, method);
    sub_1B64870(&Method_System_Nullable_bool__get_Value__, v3);
    sub_1B64870(&OptionManager_TypeInfo, v4);
    byte_49F9B64 = 1;
  }
  hasValue = this->fields.isHighQuality.fields.hasValue;
  v5 = (System_Nullable_bool__o)((_WORD)this + 64);
  if ( hasValue )
  {
    v8 = v5;
    Value = System_Nullable_bool___get_Value(v8, (const MethodInfo_35CC524 *)Method_System_Nullable_bool__get_Value__);
    if ( !OptionManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    OptionManager__SetBattleFpsHighOrNot(Value, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SetSmoothnessControl___Init_b__5_0(
        SetSmoothnessControl_o *this,
        int32_t selectedIndex,
        const MethodInfo *method)
{
  __int64 v5; // x1
  struct System_Nullable_bool__o *v6; // x0
  _QWORD *v7; // x0
  System_Reflection_MethodBase_o *v8; // x0
  struct System_Nullable_bool__o v9; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_49F9B65 & 1) == 0 )
  {
    sub_1B64870(&Method_System_Nullable_bool___ctor__, *(_QWORD *)&selectedIndex);
    sub_1B64870(&Method_SetSmoothnessControl__Init_b__5_0__, v5);
    byte_49F9B65 = 1;
  }
  v6 = &v9;
  v9 = 0;
  System_Nullable_bool____ctor(
    (System_Nullable_bool__o)v6,
    selectedIndex > 0,
    (const MethodInfo_35CC508 *)Method_System_Nullable_bool___ctor__);
  this->fields.isHighQuality = v9;
  v7 = Method_SetSmoothnessControl__Init_b__5_0__;
  if ( (*((_BYTE *)Method_SetSmoothnessControl__Init_b__5_0__ + 83) & 2) != 0 )
    v7 = (_QWORD *)sub_1B64888(Method_SetSmoothnessControl__Init_b__5_0__);
  v8 = (System_Reflection_MethodBase_o *)sub_1B64854(v7, v7[4]);
  OverwriteAssetSoundName__PlaySystemSe(v8, 0, 0LL);
}