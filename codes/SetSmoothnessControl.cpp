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
  UISprite_o *titleSptite; // x20
  UILabel_o *attentionLabel; // x20
  System_String_o *fpsRadioButtonGroup; // x0
  __int64 v6; // x1
  __int64 v7; // x20
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
  GameOptionRadioButtonGroup_o *v20; // x20
  struct GameOptionRadioButtonGroup_o *v21; // x20
  System_Action_int__o *v22; // x21
  int32_t v23; // w2
  int32_t v24; // w3
  System_String_o *v25; // x4
  int32_t v26; // w5
  int64_t v27; // x6
  System_String_o *v28; // x7

  if ( (byte_4D2B97A & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_int__TypeInfo);
    sub_1C93AD4(&AtlasManager_TypeInfo);
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&OptionManager_TypeInfo);
    sub_1C93AD4(&Method_SetSmoothnessControl__Init_b__5_0__);
    sub_1C93AD4(&string___TypeInfo);
    sub_1C93AD4(&StringLiteral_9764/*"OPTION_SMOOTHNESS_BUTTON_2"*/);
    sub_1C93AD4(&StringLiteral_9763/*"OPTION_SMOOTHNESS_BUTTON_1"*/);
    sub_1C93AD4(&StringLiteral_9762/*"OPTION_SMOOTHNESS_ATTENTION"*/);
    sub_1C93AD4(&StringLiteral_20898/*"img_txt_framerate"*/);
    byte_4D2B97A = 1;
  }
  this->fields.isHighQuality = 0;
  titleSptite = this->fields.titleSptite;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetMyRoomImage(titleSptite, (System_String_o *)StringLiteral_20898/*"img_txt_framerate"*/, 0);
  attentionLabel = this->fields.attentionLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  fpsRadioButtonGroup = LocalizationManager__Get((System_String_o *)StringLiteral_9762/*"OPTION_SMOOTHNESS_ATTENTION"*/, 0);
  if ( !attentionLabel )
    goto LABEL_18;
  UILabel__set_text(attentionLabel, fpsRadioButtonGroup, 0);
  v7 = sub_1C93B7C(string___TypeInfo, 2);
  fpsRadioButtonGroup = LocalizationManager__Get((System_String_o *)StringLiteral_9763/*"OPTION_SMOOTHNESS_BUTTON_1"*/, 0);
  if ( !v7 )
    goto LABEL_18;
  if ( !*(_DWORD *)(v7 + 24)
    || (*(_QWORD *)(v7 + 32) = fpsRadioButtonGroup,
        sub_1C93A78((GrandQuestFolderBoardItem_o *)(v7 + 32), (int32_t)fpsRadioButtonGroup, v8, v9, v10, v11, v12, v13),
        fpsRadioButtonGroup = LocalizationManager__Get((System_String_o *)StringLiteral_9764/*"OPTION_SMOOTHNESS_BUTTON_2"*/, 0),
        *(_DWORD *)(v7 + 24) <= 1u) )
  {
    sub_1C93D34(fpsRadioButtonGroup);
  }
  *(_QWORD *)(v7 + 40) = fpsRadioButtonGroup;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v7 + 40), (int32_t)fpsRadioButtonGroup, v14, v15, v16, v17, v18, v19);
  fpsRadioButtonGroup = (System_String_o *)this->fields.fpsRadioButtonGroup;
  if ( !fpsRadioButtonGroup )
    goto LABEL_18;
  GameOptionRadioButtonGroup__Init((GameOptionRadioButtonGroup_o *)fpsRadioButtonGroup, 0);
  fpsRadioButtonGroup = (System_String_o *)this->fields.fpsRadioButtonGroup;
  if ( !fpsRadioButtonGroup )
    goto LABEL_18;
  GameOptionRadioButtonGroup__SetLabels(
    (GameOptionRadioButtonGroup_o *)fpsRadioButtonGroup,
    (System_String_array *)v7,
    0);
  v20 = this->fields.fpsRadioButtonGroup;
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  fpsRadioButtonGroup = (System_String_o *)OptionManager__IsBattleFpsHigh(0);
  if ( !v20
    || (GameOptionRadioButtonGroup__SelectButtonByIndex(v20, (unsigned __int8)fpsRadioButtonGroup & 1, 1, 0),
        v21 = this->fields.fpsRadioButtonGroup,
        v22 = (System_Action_int__o *)sub_1C93D20(System_Action_int__TypeInfo),
        System_Action_int____ctor(v22, (Il2CppObject *)this, (intptr_t)Method_SetSmoothnessControl__Init_b__5_0__, 0),
        !v21) )
  {
LABEL_18:
    sub_1C93D2C(fpsRadioButtonGroup, v6);
  }
  v21->fields.selectedCallback = v22;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v21->fields.selectedCallback, (int32_t)v22, v23, v24, v25, v26, v27, v28);
}


void SetSmoothnessControl__Reflection(SetSmoothnessControl_o *this, const MethodInfo *method)
{
  System_Nullable_bool__o v3; // w19
  _BOOL4 hasValue; // t1
  bool Value; // w19

  if ( (byte_4D2B97B & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Nullable_bool__get_HasValue__);
    sub_1C93AD4(&Method_System_Nullable_bool__get_Value__);
    sub_1C93AD4(&OptionManager_TypeInfo);
    byte_4D2B97B = 1;
  }
  hasValue = this->fields.isHighQuality.fields.hasValue;
  v3 = (System_Nullable_bool__o)((_WORD)this + 64);
  if ( hasValue )
  {
    Value = System_Nullable_bool___get_Value(v3, (const MethodInfo_399C0C8 *)Method_System_Nullable_bool__get_Value__);
    if ( !OptionManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    OptionManager__SetBattleFpsHighOrNot(Value, 0);
  }
}


void SetSmoothnessControl___Init_b__5_0(SetSmoothnessControl_o *this, int32_t selectedIndex, const MethodInfo *method)
{
  struct System_Nullable_bool__o *v5; // x0
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  struct System_Nullable_bool__o v8; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4D2B97C & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Nullable_bool___ctor__);
    sub_1C93AD4(&Method_SetSmoothnessControl__Init_b__5_0__);
    byte_4D2B97C = 1;
  }
  v5 = &v8;
  v8 = 0;
  System_Nullable_bool____ctor(
    (System_Nullable_bool__o)v5,
    selectedIndex > 0,
    (const MethodInfo_399C0AC *)Method_System_Nullable_bool___ctor__);
  this->fields.isHighQuality = v8;
  v6 = Method_SetSmoothnessControl__Init_b__5_0__;
  if ( (*((_BYTE *)Method_SetSmoothnessControl__Init_b__5_0__ + 83) & 2) != 0 )
    v6 = (_QWORD *)sub_1C93AEC(Method_SetSmoothnessControl__Init_b__5_0__);
  v7 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v6, v6[4]);
  OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0, 0);
}