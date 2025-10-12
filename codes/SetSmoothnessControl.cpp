void SetSmoothnessControl___ctor(SetSmoothnessControl_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
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
  __int64 v6; // x20
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  const MethodInfo *v11; // x1
  const MethodInfo *v12; // x2
  GameOptionRadioButtonGroup_o *v13; // x20
  const MethodInfo *v14; // x3
  struct GameOptionRadioButtonGroup_o *v15; // x20
  System_Action_int__o *v16; // x21
  int32_t v17; // w2
  const MethodInfo *v18; // x3

  if ( (byte_4C32A3F & 1) == 0 )
  {
    sub_1C32C20(&System_Action_int__TypeInfo);
    sub_1C32C20(&AtlasManager_TypeInfo);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&OptionManager_TypeInfo);
    sub_1C32C20(&Method_SetSmoothnessControl__Init_b__5_0__);
    sub_1C32C20(&string___TypeInfo);
    sub_1C32C20(&StringLiteral_9708/*"OPTION_SMOOTHNESS_BUTTON_2"*/);
    sub_1C32C20(&StringLiteral_9707/*"OPTION_SMOOTHNESS_BUTTON_1"*/);
    sub_1C32C20(&StringLiteral_9706/*"OPTION_SMOOTHNESS_ATTENTION"*/);
    sub_1C32C20(&StringLiteral_20662/*"img_txt_framerate"*/);
    byte_4C32A3F = 1;
  }
  this->fields.isHighQuality = 0;
  titleSptite = this->fields.titleSptite;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetMyRoomImage(titleSptite, (System_String_o *)StringLiteral_20662/*"img_txt_framerate"*/, 0);
  attentionLabel = this->fields.attentionLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  fpsRadioButtonGroup = LocalizationManager__Get((System_String_o *)StringLiteral_9706/*"OPTION_SMOOTHNESS_ATTENTION"*/, 0);
  if ( !attentionLabel )
    goto LABEL_18;
  UILabel__set_text(attentionLabel, fpsRadioButtonGroup, 0);
  v6 = sub_1C32CC8(string___TypeInfo, 2);
  fpsRadioButtonGroup = LocalizationManager__Get((System_String_o *)StringLiteral_9707/*"OPTION_SMOOTHNESS_BUTTON_1"*/, 0);
  if ( !v6 )
    goto LABEL_18;
  if ( !*(_DWORD *)(v6 + 24)
    || (*(_QWORD *)(v6 + 32) = fpsRadioButtonGroup,
        sub_1C32BC4((CGThumbnailListItem_o *)(v6 + 32), (int32_t)fpsRadioButtonGroup, v7, v8),
        fpsRadioButtonGroup = LocalizationManager__Get((System_String_o *)StringLiteral_9708/*"OPTION_SMOOTHNESS_BUTTON_2"*/, 0),
        *(_DWORD *)(v6 + 24) <= 1u) )
  {
    sub_1C32E84(fpsRadioButtonGroup);
  }
  *(_QWORD *)(v6 + 40) = fpsRadioButtonGroup;
  sub_1C32BC4((CGThumbnailListItem_o *)(v6 + 40), (int32_t)fpsRadioButtonGroup, v9, v10);
  fpsRadioButtonGroup = (System_String_o *)this->fields.fpsRadioButtonGroup;
  if ( !fpsRadioButtonGroup )
    goto LABEL_18;
  GameOptionRadioButtonGroup__Init((GameOptionRadioButtonGroup_o *)fpsRadioButtonGroup, v11);
  fpsRadioButtonGroup = (System_String_o *)this->fields.fpsRadioButtonGroup;
  if ( !fpsRadioButtonGroup )
    goto LABEL_18;
  GameOptionRadioButtonGroup__SetLabels(
    (GameOptionRadioButtonGroup_o *)fpsRadioButtonGroup,
    (System_String_array *)v6,
    v12);
  v13 = this->fields.fpsRadioButtonGroup;
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  fpsRadioButtonGroup = (System_String_o *)OptionManager__IsBattleFpsHigh(0);
  if ( !v13
    || (GameOptionRadioButtonGroup__SelectButtonByIndex(v13, (unsigned __int8)fpsRadioButtonGroup & 1, 1, v14),
        v15 = this->fields.fpsRadioButtonGroup,
        v16 = (System_Action_int__o *)sub_1C32E6C(System_Action_int__TypeInfo),
        System_Action_int____ctor(v16, (Il2CppObject *)this, (intptr_t)Method_SetSmoothnessControl__Init_b__5_0__, 0),
        !v15) )
  {
LABEL_18:
    sub_1C32E7C(fpsRadioButtonGroup);
  }
  v15->fields.selectedCallback = v16;
  sub_1C32BC4((CGThumbnailListItem_o *)&v15->fields.selectedCallback, (int32_t)v16, v17, v18);
}


void SetSmoothnessControl__Reflection(SetSmoothnessControl_o *this, const MethodInfo *method)
{
  System_Nullable_bool__o v3; // w19
  _BOOL4 hasValue; // t1
  System_Nullable_bool__o v5; // w0
  bool Value; // w19

  if ( (byte_4C32A40 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Nullable_bool__get_HasValue__);
    sub_1C32C20(&Method_System_Nullable_bool__get_Value__);
    sub_1C32C20(&OptionManager_TypeInfo);
    byte_4C32A40 = 1;
  }
  hasValue = this->fields.isHighQuality.fields.hasValue;
  v3 = (System_Nullable_bool__o)((_WORD)this + 64);
  if ( hasValue )
  {
    v5 = v3;
    Value = System_Nullable_bool___get_Value(v5, (const MethodInfo_38BA7F8 *)Method_System_Nullable_bool__get_Value__);
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

  if ( (byte_4C32A41 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Nullable_bool___ctor__);
    sub_1C32C20(&Method_SetSmoothnessControl__Init_b__5_0__);
    byte_4C32A41 = 1;
  }
  v5 = &v8;
  v8 = 0;
  System_Nullable_bool____ctor(
    (System_Nullable_bool__o)v5,
    selectedIndex > 0,
    (const MethodInfo_38BA7DC *)Method_System_Nullable_bool___ctor__);
  this->fields.isHighQuality = v8;
  v6 = Method_SetSmoothnessControl__Init_b__5_0__;
  if ( (*((_BYTE *)Method_SetSmoothnessControl__Init_b__5_0__ + 83) & 2) != 0 )
    v6 = (_QWORD *)sub_1C32C38(Method_SetSmoothnessControl__Init_b__5_0__);
  v7 = (System_Reflection_MethodBase_o *)sub_1C32C04(v6, v6[4]);
  OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0, 0);
}