void SetSmoothnessControl___ctor(SetSmoothnessControl_o *this, const MethodInfo *method)
{
  GameOptionContentBase___ctor((GameOptionContentBase_o *)this, 0);
}


void SetSmoothnessControl__Awake(SetSmoothnessControl_o *this, const MethodInfo *method)
{
  ;
}


void SetSmoothnessControl__Init(SetSmoothnessControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  AtlasManager_c *v4; // x0
  UISprite_o *titleSptite; // x20
  __int64 v6; // x1
  __int64 v7; // x2
  UILabel_o *attentionLabel; // x20
  System_String_o *fpsRadioButtonGroup; // x0
  __int64 v10; // x1
  __int64 v11; // x20
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  __int64 v24; // x1
  __int64 v25; // x2
  GameOptionRadioButtonGroup_o *v26; // x20
  struct GameOptionRadioButtonGroup_o *v27; // x20
  System_Action_int__o *v28; // x21
  System_String_o *v29; // x2
  System_String_o *v30; // x3
  int32_t v31; // w4
  int32_t v32; // w5
  bool v33; // w6
  bool v34; // w7

  if ( (byte_59334C2 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_int__TypeInfo);
    sub_21FFC50(&AtlasManager_TypeInfo);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&OptionManager_TypeInfo);
    sub_21FFC50(&Method_SetSmoothnessControl__Init_b__5_0__);
    sub_21FFC50(&string___TypeInfo);
    sub_21FFC50(&StringLiteral_10094/*"OPTION_SMOOTHNESS_BUTTON_2"*/);
    sub_21FFC50(&StringLiteral_10093/*"OPTION_SMOOTHNESS_BUTTON_1"*/);
    sub_21FFC50(&StringLiteral_10092/*"OPTION_SMOOTHNESS_ATTENTION"*/);
    sub_21FFC50(&StringLiteral_21621/*"img_txt_framerate"*/);
    byte_59334C2 = 1;
  }
  v4 = AtlasManager_TypeInfo;
  this->fields.isHighQuality = 0;
  titleSptite = this->fields.titleSptite;
  if ( !*(&v4->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v4, method, v2);
  AtlasManager__SetMyRoomImage(titleSptite, (System_String_o *)StringLiteral_21621/*"img_txt_framerate"*/, 0);
  attentionLabel = this->fields.attentionLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v6, v7);
  fpsRadioButtonGroup = LocalizationManager__Get((System_String_o *)StringLiteral_10092/*"OPTION_SMOOTHNESS_ATTENTION"*/, 0);
  if ( !attentionLabel )
    goto LABEL_18;
  UILabel__set_text(attentionLabel, fpsRadioButtonGroup, 0);
  v11 = sub_21FFD10(string___TypeInfo, 2);
  fpsRadioButtonGroup = LocalizationManager__Get((System_String_o *)StringLiteral_10093/*"OPTION_SMOOTHNESS_BUTTON_1"*/, 0);
  if ( !v11 )
    goto LABEL_18;
  if ( !*(_DWORD *)(v11 + 24)
    || (*(_QWORD *)(v11 + 32) = fpsRadioButtonGroup,
        sub_21FFBF4(
          (MissionNaviTransitionBoardItem_o *)(v11 + 32),
          (int32_t)fpsRadioButtonGroup,
          v12,
          v13,
          v14,
          v15,
          v16,
          v17),
        fpsRadioButtonGroup = LocalizationManager__Get((System_String_o *)StringLiteral_10094/*"OPTION_SMOOTHNESS_BUTTON_2"*/, 0),
        (*(_DWORD *)(v11 + 24) & 0xFFFFFFFE) == 0) )
  {
    sub_21FFED4(fpsRadioButtonGroup);
  }
  *(_QWORD *)(v11 + 40) = fpsRadioButtonGroup;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)(v11 + 40),
    (int32_t)fpsRadioButtonGroup,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  fpsRadioButtonGroup = (System_String_o *)this->fields.fpsRadioButtonGroup;
  if ( !fpsRadioButtonGroup )
    goto LABEL_18;
  GameOptionRadioButtonGroup__Init((GameOptionRadioButtonGroup_o *)fpsRadioButtonGroup, 0);
  fpsRadioButtonGroup = (System_String_o *)this->fields.fpsRadioButtonGroup;
  if ( !fpsRadioButtonGroup )
    goto LABEL_18;
  GameOptionRadioButtonGroup__SetLabels(
    (GameOptionRadioButtonGroup_o *)fpsRadioButtonGroup,
    (System_String_array *)v11,
    0);
  v26 = this->fields.fpsRadioButtonGroup;
  if ( !*(&OptionManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo, v24, v25);
  fpsRadioButtonGroup = (System_String_o *)OptionManager__IsBattleFpsHigh(0);
  if ( !v26
    || (GameOptionRadioButtonGroup__SelectButtonByIndex(v26, (unsigned __int8)fpsRadioButtonGroup & 1, 1, 0),
        v27 = this->fields.fpsRadioButtonGroup,
        v28 = (System_Action_int__o *)sub_21FFEBC(System_Action_int__TypeInfo),
        System_Action_int____ctor(v28, (Il2CppObject *)this, (intptr_t)Method_SetSmoothnessControl__Init_b__5_0__, 0),
        !v27) )
  {
LABEL_18:
    sub_21FFECC(fpsRadioButtonGroup, v10);
  }
  v27->fields.selectedCallback = v28;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v27->fields.selectedCallback,
    (int32_t)v28,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
}


void SetSmoothnessControl__Reflection(SetSmoothnessControl_o *this, const MethodInfo *method)
{
  System_Nullable_bool__o v3; // w19
  _BOOL4 hasValue; // t1
  System_Nullable_bool__o v5; // w0
  __int64 v6; // x1
  __int64 v7; // x2
  bool Value; // w19

  if ( (byte_59334C3 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Nullable_bool__get_HasValue__);
    sub_21FFC50(&Method_System_Nullable_bool__get_Value__);
    sub_21FFC50(&OptionManager_TypeInfo);
    byte_59334C3 = 1;
  }
  hasValue = this->fields.isHighQuality.fields.hasValue;
  v3 = (System_Nullable_bool__o)((_WORD)this + 64);
  if ( hasValue )
  {
    v5 = v3;
    Value = System_Nullable_bool___get_Value(v5, (const MethodInfo_45AC820 *)Method_System_Nullable_bool__get_Value__);
    if ( !*(&OptionManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo, v6, v7);
    OptionManager__SetBattleFpsHighOrNot(Value, 0);
  }
}


void SetSmoothnessControl___Init_b__5_0(SetSmoothnessControl_o *this, int32_t selectedIndex, const MethodInfo *method)
{
  struct System_Nullable_bool__o *v5; // x0
  _BYTE *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  struct System_Nullable_bool__o v8; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_59334C4 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Nullable_bool___ctor__);
    sub_21FFC50(&Method_SetSmoothnessControl__Init_b__5_0__);
    byte_59334C4 = 1;
  }
  v5 = &v8;
  v8 = 0;
  System_Nullable_bool____ctor(
    (System_Nullable_bool__o)v5,
    selectedIndex > 0,
    (const MethodInfo_45AC808 *)Method_System_Nullable_bool___ctor__);
  v6 = Method_SetSmoothnessControl__Init_b__5_0__;
  this->fields.isHighQuality = v8;
  if ( (v6[83] & 2) != 0 )
    v6 = (_BYTE *)sub_21FFC68(v6);
  v7 = (System_Reflection_MethodBase_o *)sub_21FFC34(v6, *((_QWORD *)v6 + 4));
  OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0, 0);
}